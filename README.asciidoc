== AVR32 Toolchain Builder ==

This is a early implementation of a Makefile for an AVR32 toolchain
builder for Mac OS X & Linux, and it has not been extensively tested.
That said the patches are taken directly from Atmel, and basic testing
is done with some more complicated builds (i.e.:
link:http://eluaproject.net[eLua] in float and integer mode) to ensure
that that at least these work after toolchain modifications.

Note: If you have previously built a toolchain of another version, out
of the same builder directory, make sure to do the following first
before building with newer sources:

----
make clean
----

=== Requirements (OS X) ===

You will need to have GCC, make and binutils on your machine to
compile all of this.  You can get all of these on Mac OS X, by just
installing the Apple
link:http://developer.apple.com/technologies/tools/[Developer Tools].
You should be able to download free versions of 3.x from the ADC
website, install from the OS X install disc that came with your
machine, or download XCode 4 from the App Store (now free again for
all registered users).

You will also need gmp, mpfr and mpc first.  I recommend installing
these from link:https://github.com/mxcl/homebrew[homebrew] for now.
I'll add these to the Makefile once I have a consistent configuration
that can be used for both Linux & OS X.

With homebrew you can install those dependencies like this:
----
brew install mpfr gmp libmpc texinfo
----

If you would like to build dfu-programmer, also install libusb:

----
brew install libusb-compat
----


=== Requirements (Ubuntu) ===

These instructions should now also work on Ubuntu Linux, provided the
following packages have been installed prior to attempting the build:

----
sudo apt-get install curl flex bison libgmp3-dev libmpfr-dev autoconf build-essential libncurses5-dev libmpc-dev texinfo
----

If you would like to build dfu-programmer, also install libusb:

----
sudo apt-get install libusb-dev
----

=== Main Build Instructions ===

Next build the toolchain:

----
make install-cross
----

You should be able to also specify a specific install/prefix location
by building using the following type of invokation:

----
PREFIX=$HOME/avr32-tools make install-cross
----

If you do this, make sure you have permissions to create a directory
at this location and/or to create directories within this location if
the directory already exists.


*NOTE:* If you're running Mac OS X Lion or XCode 4.1 you may find that
 you're unable to bootstrap GCC. To work around this until the issue
 is fixed in Apple's distribution of llvm-gcc, use the following
 command instead of the above to build.

----
CC=gcc-4.2 make install-cross
----



This should build the compiler, newlib, gdb, etc.. and install them all
into a directory called arm-cs-tools in your home directory. If you
want to install to another location, feel free to change the export
lines and to adjust the definitions at the top of the Makefile.

Keep in mind that the Makefile does install at the end of each build.

Once you’re done, the makefile should notify you of the install
location, which will be based on the git revision if you cloned the
repository or the current date if you grabbed a tarball and/or you
don't have the git binary. The message should look like the following:

----
====== INSTALLATION NOTE ======
Your tools have now been installed at the following prefix:
/Users/jsnyder/avr32-tools-bd2485b

Please be sure to add something similar to the following to your .bash_profile, .zshrc, etc:
export PATH=/Users/jsnyder/avr32-tools-bd2485b/bin:$PATH
----

If it uses the date instead the the git short revision will bve
replaced with a date number like: 20110726.

If you also would like dfu-programmer installed intalled (make sure
you have previously installed libusb as described in requirements):

----
make install-dfu
----

=== Special Thanks ===

Special thanks to Rob Emanuele for the basis of this Makefile:
http://elua-development.2368040.n2.nabble.com/Building-GCC-for-Cortex-td2421927.html
