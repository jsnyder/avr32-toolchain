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


SHELL       = /bin/bash
TARGET      = avr32
PREFIX      = $(HOME)/avr32-tools/
SUPP_PREFIX = $(CURDIR)/supp
PROCS       = 5
PATH       := ${PREFIX}/bin:${SUPP_PREFIX}/bin:${PATH}
AUTOCONF    = $(SUPP_PREFIX)/bin/autoconf
AUTOMAKE    = $(SUPP_PREFIX)/bin/automake

BUG_URL = https://github.com/jsnyder/avr32-toolchain


#### PRIMARY TOOLCHAIN VERSIONS / URLS #####
GCC_VERSION      = 4.4.3
GDB_VERSION      = 6.7.1
BINUTILS_VERSION = 2.20.1
NEWLIB_VERSION   = 1.16.0
DFU_VERSION      = 0.5.4

GCC_ARCHIVE = gcc-$(GCC_VERSION).tar.bz2
GCC_URL = http://mirror.anl.gov/pub/gnu/gcc/gcc-$(GCC_VERSION)/$(GCC_ARCHIVE)
GCC_MD5 = fe1ca818fc6d2caeffc9051fe67ff103

GDB_ARCHIVE = gdb-$(GDB_VERSION).tar.bz2
GDB_URL = http://mirror.anl.gov/pub/gnu/gdb/$(GDB_ARCHIVE)
GDB_MD5 = 30a6bf36eded4ae5a152d7d71b86dc14

BINUTILS_ARCHIVE = binutils-$(BINUTILS_VERSION).tar.bz2
BINUTILS_URL = http://mirror.anl.gov/pub/gnu/binutils/$(BINUTILS_ARCHIVE)
BINUTILS_MD5 = 9cdfb9d6ec0578c166d3beae5e15c4e5

NEWLIB_ARCHIVE = newlib-$(NEWLIB_VERSION).tar.gz
NEWLIB_URL = ftp://sources.redhat.com/pub/newlib/$(NEWLIB_ARCHIVE)
NEWLIB_MD5 = bf8f1f9e3ca83d732c00a79a6ef29bc4

AVR32PATCHES_ARCHIVE = avr32-gnu-toolchain-3.2.0.233-source.zip
AVR32PATCHES_URL = http://distribute.atmel.no/tools/opensource/as5-beta/$(AVR32PATCHES_ARCHIVE)
AVR32PATCHES_MD5 = b009a7190071c7466ce14f8acb2796ae

DFU_ARCHIVE = dfu-programmer-$(DFU_VERSION).tar.gz
DFU_URL = http://surfnet.dl.sourceforge.net/project/dfu-programmer/dfu-programmer/$(DFU_VERSION)/$(DFU_ARCHIVE)
DFU_MD5 = 707dcd0f957a74e92456ea6919faa772


##### SUPPORT TOOLS VERSIONS / URLS ######
AUTOCONF_VERSION = 2.64
AUTOMAKE_VERSION = 1.11
MPC_VERSION = 0.8.1

AUTOCONF_ARCHIVE = autoconf-$(AUTOCONF_VERSION).tar.bz2
AUTOCONF_URL = http://mirror.anl.gov/pub/gnu/autoconf/$(AUTOCONF_ARCHIVE)
AUTOCONF_MD5 = ef400d672005e0be21e0d20648169074

AUTOMAKE_ARCHIVE = automake-$(AUTOMAKE_VERSION).tar.bz2
AUTOMAKE_URL = http://mirror.anl.gov/pub/gnu/automake/$(AUTOMAKE_ARCHIVE)
AUTOMAKE_MD5 = 4db4efe027e26b33930a7e151de19d0f




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





.PHONY: download-gdb
downloads/$(GDB_ARCHIVE) download-gdb:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(GDB_URL)




.PHONY: install-supp-tools
install-supp-tools stamps/install-supp-tools: install-autoconf install-automake
	[ -d stamps ] || mkdir stamps ;
	touch stamps/install-supp-tools;


############# SUPP: AUTOCONF ############

.PHONY: download-autoconf
downloads/$(AUTOCONF_ARCHIVE) download-autoconf:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(AUTOCONF_URL)

.PHONY: extract-autoconf
extract-autoconf stamps/extract-autoconf: downloads/$(AUTOCONF_ARCHIVE)
	@(t1=`openssl md5 $< | cut -f 2 -d " " -` && \
	test $$t1 = $(AUTOCONF_MD5) || \
	( echo "Bad Checksum! Please remove the following file and retry: $<" && false ))
	tar -jxf $< ;
	[ -d stamps ] || mkdir stamps ;
	touch stamps/extract-autoconf;

.PHONY: build-autoconf
build-autoconf stamps/build-autoconf: stamps/extract-autoconf
	mkdir -p build/autoconf && cd build/autoconf && \
	../../autoconf-$(AUTOCONF_VERSION)/configure --prefix=$(SUPP_PREFIX) && \
	$(MAKE) -j$(PROCS)
	[ -d stamps ] || mkdir stamps
	touch stamps/build-autoconf;

.PHONY: install-autoconf
install-autoconf stamps/install-autoconf:  stamps/build-autoconf
	cd build/autoconf && \
	$(MAKE) install
	[ -d stamps ] || mkdir stamps
	touch stamps/install-autoconf;



############ SUPP: AUTOMAKE ############

.PHONY: download-automake
downloads/$(AUTOMAKE_ARCHIVE) download-automake:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(AUTOMAKE_URL)

.PHONY: extract-automake
extract-automake stamps/extract-automake: downloads/$(AUTOMAKE_ARCHIVE)
	@(t1=`openssl md5 $< | cut -f 2 -d " " -` && \
	test $$t1 = $(AUTOMAKE_MD5) || \
	( echo "Bad Checksum! Please remove the following file and retry: $<" && false ))
	tar -jxf $< ;
	[ -d stamps ] || mkdir stamps ;
	touch stamps/extract-automake;

.PHONY: build-automake
build-automake stamps/build-automake: stamps/extract-automake stamps/install-autoconf
	mkdir -p build/automake && cd build/automake && \
	../../automake-$(AUTOMAKE_VERSION)/configure --prefix=$(SUPP_PREFIX) && \
	$(MAKE) -j$(PROCS)
	[ -d stamps ] || mkdir stamps
	touch stamps/build-automake;

.PHONY: install-automake
install-automake stamps/install-automake:  stamps/build-automake
	cd build/automake && \
	$(MAKE) install
	[ -d stamps ] || mkdir stamps
	touch stamps/install-automake;



############# AVR32 PATCHES ############

.PHONY: download-avr32patches
downloads/$(AVR32PATCHES_ARCHIVE) download-avr32patches:
	cd downloads && curl -LO $(AVR32PATCHES_URL)

.PHONY: extract-avr32patches
extract-avr32patches stamps/extract-avr32patches : downloads/$(AVR32PATCHES_ARCHIVE)
	@(t1=`openssl md5 $< | cut -f 2 -d " " -` && \
	test $$t1 = $(AVR32PATCHES_MD5) || \
	( echo "Bad Checksum! Please remove the following file and retry: $<" && false ))
	unzip -o $<
	[ -d stamps ] || mkdir stamps
	touch stamps/extract-avr32patches;


############# AVR32 HEADERS ############

.PHONY: install-headers
install-headers stamps/install-headers: stamps/install-gcc
	mkdir -p  $(PREFIX)/$(TARGET)/include/avr32 && \
	cp -f avr32-headers/* $(PREFIX)/$(TARGET)/include/avr32/


################ NEWLIB ################

.PHONY: download-newlib
downloads/$(NEWLIB_ARCHIVE) download-newlib:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(NEWLIB_URL)

.PHONY: prep-newlib
prep-newlib stamps/prep-newlib: stamps/regen-newlib
	[ -d stamps ] || mkdir stamps
	touch stamps/prep-newlib;


.PHONY: extract-newlib
extract-newlib stamps/extract-newlib : downloads/$(NEWLIB_ARCHIVE)
	@(t1=`openssl md5 $< | cut -f 2 -d " " -` && \
	test $$t1 = $(NEWLIB_MD5) || \
	( echo "Bad Checksum! Please remove the following file and retry: $<" && false ))
	tar -xf $<
	[ -d stamps ] || mkdir stamps
	touch stamps/extract-newlib;


.PHONY: patch-newlib
patch-newlib stamps/patch-newlib: stamps/extract-newlib stamps/extract-avr32patches
	pushd newlib-$(NEWLIB_VERSION) ; \
	for f in ../source/avr32/newlib/*.patch; do \
	patch -N -p0 <$${f} ; \
	done ; \
	popd ;
	[ -d stamps ] || mkdir stamps
	touch stamps/patch-newlib;

.PHONY: regen-newlib
regen-newlib stamps/regen-newlib: stamps/patch-newlib stamps/install-supp-tools
	pushd newlib-$(NEWLIB_VERSION) ; \
	$(SUPP_PREFIX)/bin/autoconf; $(SUPP_PREFIX)/bin/automake ; \
	for dir in newlib/libc/machine/avr32 newlib/libc/machine newlib/libc/sys/avr32 newlib/libc/sys; do \
	  pushd $$dir ; \
	  $(SUPP_PREFIX)/bin/aclocal -I ../.. -I ../../.. -I ../../../.. ; \
	  $(SUPP_PREFIX)/bin/autoconf; $(SUPP_PREFIX)/bin/automake; \
	  popd ; \
	done; \
	popd;
	[ -d stamps ] || mkdir stamps
	touch stamps/regen-newlib;

NEWLIB_FLAGS="-ffunction-sections -fdata-sections	\
-DPREFER_SIZE_OVER_SPEED -D__OPTIMIZE_SIZE__ -g -Os	\
-fomit-frame-pointer -fno-unroll-loops -D__BUFSIZ__=128	\
-DSMALL_MEMORY"

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

.PHONY: download-binutils
downloads/$(BINUTILS_ARCHIVE) download-binutils:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(BINUTILS_URL)

.PHONY: prep-binutils
prep-binutils stamps/prep-binutils: stamps/regen-binutils
	[ -d stamps ] || mkdir stamps;
	touch stamps/prep-binutils;

.PHONY: extract-binutils
extract-binutils stamps/extract-binutils: downloads/$(BINUTILS_ARCHIVE)
	@(t1=`openssl md5 $< | cut -f 2 -d " " -` && \
	test $$t1 = $(BINUTILS_MD5) || \
	( echo "Bad Checksum! Please remove the following file and retry: $<" && false ))
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
	touch stamps/patch-binutils;

.PHONY: regen-binutils
regen-binutils stamps/regen-binutils: stamps/patch-binutils stamps/install-supp-tools
	pushd binutils-$(BINUTILS_VERSION) ; \
	$(SUPP_PREFIX)/bin/aclocal -I config ; \
	$(SUPP_PREFIX)/bin/autoconf ; \
	$(SUPP_PREFIX)/bin/automake ; \
	$(SUPP_PREFIX)/bin/autoheader ; \
	for dir in bfd opcodes binutils gas ld; do \
	  pushd $$dir ; \
	  $(SUPP_PREFIX)/bin/autoconf; \
	  $(SUPP_PREFIX)/bin/automake; \
	  $(SUPP_PREFIX)/bin/autoheader; \
	  popd ; \
	done; \
	popd; \
	[ -d stamps ] || mkdir stamps ;
	touch stamps/regen-binutils;

.PHONY: build-binutils
build-binutils stamps/build-binutils: stamps/regen-binutils stamps/install-supp-tools
	mkdir -p build/binutils && cd build/binutils && \
	pushd ../../binutils-$(BINUTILS_VERSION) ; \
	make clean ; \
	popd ; \
	../../binutils-$(BINUTILS_VERSION)/configure   --enable-maintainer-mode		\
	--prefix=$(PREFIX) --target=$(TARGET) --disable-nls		\
	--disable-shared --disable-werror				\
	--with-sysroot=$(PREFIX)/$(TARGET) --with-bugurl=$(BUG_URL) &&	\
	$(MAKE) maybe-configure-bfd; \
	$(MAKE) -C bfd headers; \
	$(MAKE) all-bfd TARGET-bfd=headers; \
	$(MAKE) -j$(PROCS)
	[ -d stamps ] || mkdir stamps ;
	touch stamps/build-binutils;

.PHONY: install-binutils
install-binutils stamps/install-binutils: stamps/build-binutils
	cd build/binutils && \
	$(MAKE) installdirs install-host install-target
	[ -d stamps ] || mkdir stamps ;
	touch stamps/install-binutils;

########## DFU PROGRAMMER ###########

.PHONY: download-dfu
downloads/$(DFU_ARCHIVE) download-dfu:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(DFU_URL)

.PHONY: extract-dfu
extract-dfu stamps/extract-dfu: downloads/$(DFU_ARCHIVE)
	@(t1=`openssl md5 $< | cut -f 2 -d " " -` && \
	test $$t1 = $(DFU_MD5) || \
	( echo "Bad Checksum! Please remove the following file and retry: $<" && false ))
	tar -jxf $< ;
	[ -d stamps ] || mkdir stamps ;
	touch stamps/extract-dfu;

.PHONY: build-dfu
build-dfu stamps/build-dfu: stamps/extract-dfu
	mkdir -p build/dfu-programmer && cd build/dfu-programmer && \
	../../dfu-programmer-$(DFU_VERSION)/configure --prefix=$(PREFIX) && \
	$(MAKE) -j$(PROCS)
	[ -d stamps ] || mkdir stamps
	touch stamps/build-dfu;

.PHONY: install-dfu
install-dfu stamps/install-dfu:  stamps/build-dfu
	cd build/dfu-programmer && \
	$(MAKE) install
	[ -d stamps ] || mkdir stamps
	touch stamps/install-dfu;


################ GCC ################

.PHONY: download-gcc
downloads/$(GCC_ARCHIVE) download-gcc:
	[ -d downloads ] || mkdir downloads ;
	cd downloads && curl -LO $(GCC_URL)

.PHONY: prep-gcc
prep-gcc stamps/prep-gcc: stamps/patch-gcc
	[ -d stamps ] || mkdir stamps;
	touch stamps/prep-gcc;

.PHONY: extract-gcc
extract-gcc stamps/extract-gcc: downloads/$(GCC_ARCHIVE)
	@(t1=`openssl md5 $< | cut -f 2 -d " " -` && \
	test $$t1 = $(GCC_MD5) || \
	( echo "Bad Checksum! Please remove the following file and retry: $<" && false ))
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
	touch stamps/patch-gcc;

CFLAGS_FOR_TARGET="-ffunction-sections -fdata-sections			\
-fomit-frame-pointer -DPREFER_SIZE_OVER_SPEED -D__OPTIMIZE_SIZE__ -g	\
-Os -fno-unroll-loops"

.PHONY: build-gcc
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
	touch stamps/build-gcc;

.PHONY: install-gcc
install-gcc stamps/install-gcc:  stamps/build-gcc
	cd build/gcc && \
	$(MAKE) installdirs install-target && \
	$(MAKE) -C gcc install-common install-cpp install- install-driver install-headers install-man
	[ -d stamps ] || mkdir stamps
	touch stamps/install-gcc;



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

mpc-$(MPC_VERSION) : $(LOCAL_BASE)/mpc-$(CS_VERSION).tar.bz2
ifeq ($(USER),root)
	sudo -u $(SUDO_USER) tar -jxf $<
else
	tar -jxf $<
endif

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
	rm -rf build *-$(CS_BASE) binutils-* gcc-* gdb-* newlib-* mpc-* $(LOCAL_BASE) stamps/* supp
