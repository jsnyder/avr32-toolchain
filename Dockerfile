FROM ubuntu:16.04

RUN apt-get update && apt-get install -y curl flex bison libgmp3-dev libmpfr-dev autoconf build-essential libncurses5-dev libmpc-dev git gawk file zlib1g-dev unzip

RUN mkdir /workdir
WORKDIR /workdir
ADD . /workdir

RUN make install-cross
