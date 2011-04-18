# AVR32 Toolchain Makefile
#
# Copyright (C) 2011 by James Snyder <jbsnyder@fanplastic.org>
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.


SHELL = /bin/bash
TARGET=avr32
PREFIX=$(HOME)/avr32-tools/
PROCS=5

GCC_VERSION = 4.4.3
MPC_VERSION = 0.8.1
GDB_VERSION = 6.7.1
BINUTILS_VERSION = 2.20.1
NEWLIB_VERSION = 1.16.0

GCC_ARCHIVE = gcc-$(GCC_VERSION).tar.bz2
GCC_URL = http://mirror.anl.gov/pub/gnu/gcc/gcc-$(GCC_VERSION)/$(GCC_ARCHIVE)

GDB_ARCHIVE = gdb-$(GDB_VERSION).tar.bz2
GDB_URL = http://mirror.anl.gov/pub/gnu/gdb/$(GDB_ARCHIVE)

BINUTILS_ARCHIVE = binutils-$(BINUTILS_VERSION).tar.bz2
BINUTILS_URL = http://mirror.anl.gov/pub/gnu/binutils/$(BINUTILS_ARCHIVE)

NEWLIB_ARCHIVE = newlib-$(NEWLIB_VERSION).tar.gz
NEWLIB_URL = ftp://sources.redhat.com/pub/newlib/$(NEWLIB_ARCHIVE)

AVR32PATCHES_ARCHIVE = avr32-gnu-toolchain-3.2.0.233-source.zip
AVR32PATCHES_URL = http://distribute.atmel.no/tools/opensource/as5-beta/$(AVR32PATCHES_ARCHIVE)

# MD5(binutils-2.20.1.tar.bz2)= 9cdfb9d6ec0578c166d3beae5e15c4e5
# MD5(gcc-4.4.3.tar.bz2)= fe1ca818fc6d2caeffc9051fe67ff103
# MD5(gdb-6.7.1.tar.bz2)= 30a6bf36eded4ae5a152d7d71b86dc14
# MD5(newlib-1.16.0.tar.gz)= bf8f1f9e3ca83d732c00a79a6ef29bc4

.PHONY: install-cross
install-cross: stamps/install-binutils stamps/install-gcc stamps/install-newlib stamps/install-headers
install-deps: gmp mpfr mpc

.PHONY: sudomode
sudomode:
ifneq ($(USER),root)
	@echo Please run this target with sudo!
	@echo e.g.: sudo make targetname
	@exit 1
endif

.PHONY: download-gcc
download-gdb downloads/$(GCC_ARCHIVE) download-gcc:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(GCC_URL)

.PHONY: download-gdb
downloads/$(GDB_ARCHIVE) download-gdb:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(GDB_URL)

.PHONY: download-newlib
downloads/$(NEWLIB_ARCHIVE) download-newlib:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(NEWLIB_URL)

.PHONY: download-binutils
downloads/$(BINUTILS_ARCHIVE) download-binutils:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(BINUTILS_URL)




.PHONY: download
download: $(LOCAL_SOURCE)
	@(t1=`openssl md5 $(LOCAL_SOURCE) | cut -f 2 -d " " -` && \
	test $$t1 = $(MD5_CHECKSUM) || \
	echo "Bad Checksum! Please remove the following file and retry:\n$(LOCAL_SOURCE)")

$(LOCAL_BASE)/%-$(CS_VERSION).tar.bz2 : download
ifeq ($(USER),root)
	@(tgt=`tar -jtf $(LOCAL_SOURCE) | grep  $*` && \
	sudo -u $(SUDO_USER) tar -jxvf $(LOCAL_SOURCE) $$tgt)
else
	@(tgt=`tar -jtf $(LOCAL_SOURCE) | grep  $*` && \
	tar -jxvf $(LOCAL_SOURCE) $$tgt)
endif

mpc-$(MPC_VERSION) : $(LOCAL_BASE)/mpc-$(CS_VERSION).tar.bz2
ifeq ($(USER),root)
	sudo -u $(SUDO_USER) tar -jxf $<
else
	tar -jxf $<
endif

############# AVR32 PATCHES ############

.PHONY: download-avr32patches
downloads/$(AVR32PATCHES_ARCHIVE) download-avr32patches:
	cd downloads && curl -LO $(AVR32PATCHES_URL)

.PHONY: extract-avr32patches
extract-avr32patches stamps/extract-avr32patches : downloads/$(AVR32PATCHES_ARCHIVE)
	unzip -o $<
	[ -d stamps ] || mkdir stamps
	touch stamps/extract-avr32patches \;


############# AVR32 HEADERS ############

.PHONY: install-headers
install-headers stamps/install-headers: stamps/install-gcc
	mkdir -p  $(PREFIX)/$(TARGET)/include/avr32 && \
	cp -f avr32-headers/* $(PREFIX)/$(TARGET)/include/avr32/


################ NEWLIB ################

.PHONY: prep-newlib
prep-newlib stamps/prep-newlib: stamps/regen-newlib
	[ -d stamps ] || mkdir stamps
	touch stamps/prep-newlib \;


.PHONY: extract-newlib
extract-newlib stamps/extract-newlib : downloads/newlib-$(NEWLIB_VERSION).tar.gz
	tar -xf $<
	[ -d stamps ] || mkdir stamps
	touch stamps/extract-newlib \;


.PHONY: patch-newlib
patch-newlib stamps/patch-newlib: stamps/extract-newlib stamps/extract-avr32patches
	pushd newlib-$(NEWLIB_VERSION) ; \
	for f in ../source/avr32/newlib/*.patch; do \
	patch -N -p0 <$${f} ; \
	done ; \
	popd ;
	[ -d stamps ] || mkdir stamps
	touch stamps/patch-newlib \;

.PHONY: regen-newlib
regen-newlib stamps/regen-newlib: stamps/patch-newlib
	pushd newlib-$(NEWLIB_VERSION) ; \
	autoconf; automake ; \
	for dir in newlib/libc/machine/avr32 newlib/libc/machine newlib/libc/sys/avr32 newlib/libc/sys; do \
	  pushd $$dir ; \
	  aclocal -I ../.. -I ../../.. -I ../../../.. ; \
	  autoconf; automake; \
	  popd ; \
	done; \
	popd;
	[ -d stamps ] || mkdir stamps
	touch stamps/regen-newlib \;

NEWLIB_FLAGS=""
.PHONY: cross-newlib
build-newlib stamps/build-newlib: stamps/prep-newlib stamps/install-binutils stamps/install-gcc
	mkdir -p build/newlib && cd build/newlib && \
	pushd ../../newlib-$(NEWLIB_VERSION) ; \
	make clean ; \
	popd ; \
	../../newlib-$(NEWLIB_VERSION)/configure --prefix=$(PREFIX)	\
	--target=$(TARGET) --disable-newlib-supplied-syscalls		\
	--disable-libgloss --disable-nls --disable-shared		\
	--enable-newlib-io-long-long --enable-newlib-io-long-double	\
	--enable-target-optspace --enable-newlib-io-pos-args		\
	--enable-newlib-reent-small && \
	$(MAKE) -j$(PROCS) CFLAGS_FOR_TARGET=$(NEWLIB_FLAGS) CCASFLAGS=$(NEWLIB_FLAGS) && \
	[ -d stamps ] || mkdir stamps
	touch stamps/build-newlib;

.PHONY: install-newlib
install-newlib stamps/install-newlib: stamps/build-newlib
	cd build/newlib && \
	$(MAKE) install
	[ -d stamps ] || mkdir stamps
	touch stamps/install-newlib;

################ BINUTILS ################

.PHONY: prep-binutils
prep-binutils stamps/prep-binutils: stamps/regen-binutils
	[ -d stamps ] || mkdir stamps;
	touch stamps/prep-binutils;

.PHONY: extract-binutils
extract-binutils stamps/extract-binutils: downloads/binutils-$(BINUTILS_VERSION).tar.bz2
	tar -jxf $< ;
	[ -d stamps ] || mkdir stamps ;
	touch stamps/extract-binutils;

.PHONY: patch-binutils
patch-binutils stamps/patch-binutils: stamps/extract-binutils stamps/extract-avr32patches
	pushd binutils-$(BINUTILS_VERSION) ; \
	for f in ../source/avr32/binutils/*.patch; do \
	patch -N -p0 <$${f} ; \
	done ; \
	popd ; \
	[ -d stamps ] || mkdir stamps
	touch stamps/patch-binutils ;

.PHONY: regen-binutils
regen-binutils stamps/regen-binutils: stamps/patch-binutils
	pushd binutils-$(BINUTILS_VERSION) ; \
	autoconf ; \
	for dir in bfd opcodes binutils gas ld; do \
	  pushd $$dir ; \
	  autoconf; automake; autoheader; \
	  popd ; \
	done; \
	popd; \
	[ -d stamps ] || mkdir stamps ;
	touch stamps/regen-binutils ;

.PHONY: build-binutils
build-binutils stamps/build-binutils: stamps/prep-binutils
	mkdir -p build/binutils && cd build/binutils && \
	pushd binutils-$(BINUTILS_VERSION) ; \
	make clean ; \
	popd ; \
	../../binutils-$(BINUTILS_VERSION)/configure			\
	--prefix=$(PREFIX) --target=$(TARGET) --disable-nls		\
	--disable-shared --disable-werror				\
	--with-sysroot=$(PREFIX)/$(TARGET) --with-bugurl=$(BUG_URL) &&	\
	$(MAKE) maybe-configure-bfd; \
	$(MAKE) -C bfd headers; \
	$(MAKE) -j$(PROCS)
	[ -d stamps ] || mkdir stamps ;
	touch stamps/build-binutils;

.PHONY: install-binutils
install-binutils stamps/install-binutils: stamps/build-binutils
	cd build/binutils && \
	$(MAKE) installdirs install-host install-target
	[ -d stamps ] || mkdir stamps ;
	touch stamps/install-binutils;

################ GCC ################

.PHONY: prep-gcc
prep-gcc stamps/prep-gcc: stamps/patch-gcc
	[ -d stamps ] || mkdir stamps;
	touch stamps/prep-gcc;

.PHONY: extract-gcc
extract-gcc stamps/extract-gcc: downloads/gcc-$(GCC_VERSION).tar.bz2
	tar -jxf $< ;
	[ -d stamps ] || mkdir stamps ;
	touch stamps/extract-gcc;

.PHONY: patch-gcc
patch-gcc stamps/patch-gcc: stamps/extract-gcc stamps/extract-avr32patches
	pushd gcc-$(GCC_VERSION) ; \
	for f in ../source/avr32/gcc/*.patch; do \
	patch -N -p0 <$${f} ; \
	done ; \
	popd ;
	[ -d stamps ] || mkdir stamps
	touch stamps/patch-gcc ;

CFLAGS_FOR_TARGET=""
.PHONY: cross-gcc
build-gcc stamps/build-gcc: stamps/install-binutils stamps/prep-newlib stamps/prep-gcc
	mkdir -p build/gcc && cd build/gcc && \
	pushd ../../gcc-$(GCC_VERSION) ; \
	make clean ; \
	popd ; \
	../../gcc-$(GCC_VERSION)/configure --prefix=$(PREFIX)		\
	--target=$(TARGET) --enable-languages="c" --with-gnu-ld		\
	--with-gnu-as --with-newlib --disable-nls --disable-libssp	\
	--with-newlib --with-dwarf2 --enable-sjlj-exceptions		\
	--enable-version-specific-runtime-libs --disable-libstdcxx-pch	\
	--disable-shared						\
	--with-build-time-tools=$(PREFIX)/$(TARGET)/bin			\
	--enable-cxx-flags=$(CFLAGS_FOR_TARGET)				\
	--with-sysroot=$(PREFIX)/$(TARGET)				\
	--with-build-sysroot=$(PREFIX)/$(TARGET)			\
	--with-build-time-tools=$(PREFIX)/$(TARGET)/bin			\
	CFLAGS_FOR_TARGET=$(CFLAGS_FOR_TARGET)				\
	LDFLAGS_FOR_TARGET="--sysroot=$(PREFIX)/$(TARGET)"		\
	CPPFLAGS_FOR_TARGET="--sysroot=$(PREFIX)/$(TARGET)"		\
	--with-bugurl=$(BUG_URL) && \
	$(MAKE) -j$(PROCS)
	[ -d stamps ] || mkdir stamps
	touch stamps/build-gcc \;

.PHONY: install-gcc
install-gcc stamps/install-gcc:  stamps/build-gcc
	cd build/gcc && \
	$(MAKE) installdirs install-target && \
	$(MAKE) -C gcc install-common install-cpp install- install-driver install-headers install-man
	[ -d stamps ] || mkdir stamps
	touch stamps/install-gcc \;



################ NON-WORKING/NON-ADJUSTED TARGETS ################


gcc-optsize-patch: gcc-$(GCC_VERSION)-$(CS_BASE)/
	pushd gcc-$(GCC_VERSION)-$(CS_BASE) ; \
	patch -N -p1 < ../patches/gcc-optsize.patch ; \
	popd ;

gmp: gmp-$(CS_BASE)/ sudomode
	sudo -u $(SUDO_USER) mkdir -p build/gmp && cd build/gmp ; \
	pushd ../../gmp-$(CS_BASE) ; \
	make clean ; \
	popd ; \
	sudo -u $(SUDO_USER) ../../gmp-$(CS_BASE)/configure --disable-shared && \
	sudo -u $(SUDO_USER) $(MAKE) -j$(PROCS) all && \
	$(MAKE) install

mpc: mpc-$(MPC_VERSION)/ sudomode
	sudo -u $(SUDO_USER) mkdir -p build/gmp && cd build/gmp ; \
	pushd ../../mpc-$(MPC_VERSION) ; \
	make clean ; \
	popd ; \
	sudo -u $(SUDO_USER) ../../mpc-$(MPC_VERSION)/configure --disable-shared && \
	sudo -u $(SUDO_USER) $(MAKE) -j$(PROCS) all && \
	$(MAKE) install

mpfr: gmp mpfr-$(CS_BASE)/ sudomode
	sudo -u $(SUDO_USER) mkdir -p build/mpfr && cd build/mpfr && \
	pushd ../../mpfr-$(CS_BASE) ; \
	make clean ; \
	popd ; \
	sudo -u $(SUDO_USER) ../../mpfr-$(CS_BASE)/configure LDFLAGS="-Wl,-search_paths_first" --disable-shared && \
	sudo -u $(SUDO_USER) $(MAKE) -j$(PROCS) all && \
	$(MAKE) install


cross-g++: cross-binutils cross-gcc cross-newlib gcc-$(GCC_VERSION)-$(CS_BASE)/ gcc-optsize-patch
	mkdir -p build/g++ && cd build/g++ && \
	../../gcc-$(GCC_VERSION)-$(CS_BASE)/configure --prefix=$(PREFIX) --target=$(TARGET) \
	--enable-languages="c++" --with-gnu-ld --with-gnu-as --with-newlib --disable-nls \
	--disable-libssp --with-newlib --without-headers --disable-shared \
	--disable-threads --disable-libmudflap --disable-libgomp --disable-libstdcxx-pch \
	--disable-libunwind-exceptions --disable-libffi --enable-extra-sgxxlite-multilibs \
	--enable-libstdcxx-allocator=malloc \
	--enable-cxx-flags=$(CFLAGS_FOR_TARGET) \
	CFLAGS_FOR_TARGET=$(CFLAGS_FOR_TARGET) && \
	$(MAKE) -j$(PROCS) && \
	$(MAKE) installdirs install-target && \
	$(MAKE) -C gcc install-common install-cpp install- install-driver install-headers install-man

cross-gdb: gdb-$(CS_BASE)/
	mkdir -p build/gdb && cd build/gdb && \
	pushd ../../gdb-$(CS_BASE) ; \
	make clean ; \
	popd ; \
	../../gdb-$(CS_BASE)/configure --prefix=$(PREFIX) --target=$(TARGET) --disable-werror && \
	$(MAKE) -j$(PROCS) && \
	$(MAKE) installdirs install-host install-target && \
	mkdir -p $(PREFIX)/man/man1 && \
	cp ../../gdb-$(CS_BASE)/gdb/gdb.1 $(PREFIX)/man/man1/arm-none-eabi-gdb.1

.PHONY : clean
clean:
	rm -rf build *-$(CS_BASE) binutils-* gcc-* gdb-* newlib-* mpc-* $(LOCAL_BASE) stamps/*
