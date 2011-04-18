/*****************************************************************************
 *
 * Copyright (C) 2008-2010 Atmel Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * * Neither the name of the copyright holders nor the names of
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 * 
 * Model        : AP7200
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_BUSMON_100_H_INCLUDED
#define AVR32_BUSMON_100_H_INCLUDED

#define AVR32_BUSMON_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_BUSMON_<register>
 - Bitfield mask:   AVR32_BUSMON_<register>_<bitfield>
 - Bitfield offset: AVR32_BUSMON_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_BUSMON_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_BUSMON_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_BUSMON_<bitfield>
 - Bitfield offset: AVR32_BUSMON_<bitfield>_OFFSET
 - Bitfield size:   AVR32_BUSMON_<bitfield>_SIZE
 - Bitfield values: AVR32_BUSMON_<bitfield>_<value name>
 - Bitfield values: AVR32_BUSMON_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_BUSMON_CH0EN                                             0
#define AVR32_BUSMON_CH0EN_MASK                               0x00000001
#define AVR32_BUSMON_CH0EN_OFFSET                                      0
#define AVR32_BUSMON_CH0EN_SIZE                                        1
#define AVR32_BUSMON_CH0OF                                             8
#define AVR32_BUSMON_CH0OF_MASK                               0x00000100
#define AVR32_BUSMON_CH0OF_OFFSET                                      8
#define AVR32_BUSMON_CH0OF_SIZE                                        1
#define AVR32_BUSMON_CH0RES                                           16
#define AVR32_BUSMON_CH0RES_MASK                              0x00010000
#define AVR32_BUSMON_CH0RES_OFFSET                                    16
#define AVR32_BUSMON_CH0RES_SIZE                                       1
#define AVR32_BUSMON_CH1EN                                             1
#define AVR32_BUSMON_CH1EN_MASK                               0x00000002
#define AVR32_BUSMON_CH1EN_OFFSET                                      1
#define AVR32_BUSMON_CH1EN_SIZE                                        1
#define AVR32_BUSMON_CH1OF                                             9
#define AVR32_BUSMON_CH1OF_MASK                               0x00000200
#define AVR32_BUSMON_CH1OF_OFFSET                                      9
#define AVR32_BUSMON_CH1OF_SIZE                                        1
#define AVR32_BUSMON_CH1RES                                           17
#define AVR32_BUSMON_CH1RES_MASK                              0x00020000
#define AVR32_BUSMON_CH1RES_OFFSET                                    17
#define AVR32_BUSMON_CH1RES_SIZE                                       1
#define AVR32_BUSMON_CH2EN                                             2
#define AVR32_BUSMON_CH2EN_MASK                               0x00000004
#define AVR32_BUSMON_CH2EN_OFFSET                                      2
#define AVR32_BUSMON_CH2EN_SIZE                                        1
#define AVR32_BUSMON_CH2OF                                            10
#define AVR32_BUSMON_CH2OF_MASK                               0x00000400
#define AVR32_BUSMON_CH2OF_OFFSET                                     10
#define AVR32_BUSMON_CH2OF_SIZE                                        1
#define AVR32_BUSMON_CH2RES                                           18
#define AVR32_BUSMON_CH2RES_MASK                              0x00040000
#define AVR32_BUSMON_CH2RES_OFFSET                                    18
#define AVR32_BUSMON_CH2RES_SIZE                                       1
#define AVR32_BUSMON_CH3EN                                             3
#define AVR32_BUSMON_CH3EN_MASK                               0x00000008
#define AVR32_BUSMON_CH3EN_OFFSET                                      3
#define AVR32_BUSMON_CH3EN_SIZE                                        1
#define AVR32_BUSMON_CH3OF                                            11
#define AVR32_BUSMON_CH3OF_MASK                               0x00000800
#define AVR32_BUSMON_CH3OF_OFFSET                                     11
#define AVR32_BUSMON_CH3OF_SIZE                                        1
#define AVR32_BUSMON_CH3RES                                           19
#define AVR32_BUSMON_CH3RES_MASK                              0x00080000
#define AVR32_BUSMON_CH3RES_OFFSET                                    19
#define AVR32_BUSMON_CH3RES_SIZE                                       1
#define AVR32_BUSMON_CONTROL                                  0x00000000
#define AVR32_BUSMON_CONTROL_CH0EN                                     0
#define AVR32_BUSMON_CONTROL_CH0EN_MASK                       0x00000001
#define AVR32_BUSMON_CONTROL_CH0EN_OFFSET                              0
#define AVR32_BUSMON_CONTROL_CH0EN_SIZE                                1
#define AVR32_BUSMON_CONTROL_CH0OF                                     8
#define AVR32_BUSMON_CONTROL_CH0OF_MASK                       0x00000100
#define AVR32_BUSMON_CONTROL_CH0OF_OFFSET                              8
#define AVR32_BUSMON_CONTROL_CH0OF_SIZE                                1
#define AVR32_BUSMON_CONTROL_CH0RES                                   16
#define AVR32_BUSMON_CONTROL_CH0RES_MASK                      0x00010000
#define AVR32_BUSMON_CONTROL_CH0RES_OFFSET                            16
#define AVR32_BUSMON_CONTROL_CH0RES_SIZE                               1
#define AVR32_BUSMON_CONTROL_CH1EN                                     1
#define AVR32_BUSMON_CONTROL_CH1EN_MASK                       0x00000002
#define AVR32_BUSMON_CONTROL_CH1EN_OFFSET                              1
#define AVR32_BUSMON_CONTROL_CH1EN_SIZE                                1
#define AVR32_BUSMON_CONTROL_CH1OF                                     9
#define AVR32_BUSMON_CONTROL_CH1OF_MASK                       0x00000200
#define AVR32_BUSMON_CONTROL_CH1OF_OFFSET                              9
#define AVR32_BUSMON_CONTROL_CH1OF_SIZE                                1
#define AVR32_BUSMON_CONTROL_CH1RES                                   17
#define AVR32_BUSMON_CONTROL_CH1RES_MASK                      0x00020000
#define AVR32_BUSMON_CONTROL_CH1RES_OFFSET                            17
#define AVR32_BUSMON_CONTROL_CH1RES_SIZE                               1
#define AVR32_BUSMON_CONTROL_CH2EN                                     2
#define AVR32_BUSMON_CONTROL_CH2EN_MASK                       0x00000004
#define AVR32_BUSMON_CONTROL_CH2EN_OFFSET                              2
#define AVR32_BUSMON_CONTROL_CH2EN_SIZE                                1
#define AVR32_BUSMON_CONTROL_CH2OF                                    10
#define AVR32_BUSMON_CONTROL_CH2OF_MASK                       0x00000400
#define AVR32_BUSMON_CONTROL_CH2OF_OFFSET                             10
#define AVR32_BUSMON_CONTROL_CH2OF_SIZE                                1
#define AVR32_BUSMON_CONTROL_CH2RES                                   18
#define AVR32_BUSMON_CONTROL_CH2RES_MASK                      0x00040000
#define AVR32_BUSMON_CONTROL_CH2RES_OFFSET                            18
#define AVR32_BUSMON_CONTROL_CH2RES_SIZE                               1
#define AVR32_BUSMON_CONTROL_CH3EN                                     3
#define AVR32_BUSMON_CONTROL_CH3EN_MASK                       0x00000008
#define AVR32_BUSMON_CONTROL_CH3EN_OFFSET                              3
#define AVR32_BUSMON_CONTROL_CH3EN_SIZE                                1
#define AVR32_BUSMON_CONTROL_CH3OF                                    11
#define AVR32_BUSMON_CONTROL_CH3OF_MASK                       0x00000800
#define AVR32_BUSMON_CONTROL_CH3OF_OFFSET                             11
#define AVR32_BUSMON_CONTROL_CH3OF_SIZE                                1
#define AVR32_BUSMON_CONTROL_CH3RES                                   19
#define AVR32_BUSMON_CONTROL_CH3RES_MASK                      0x00080000
#define AVR32_BUSMON_CONTROL_CH3RES_OFFSET                            19
#define AVR32_BUSMON_CONTROL_CH3RES_SIZE                               1
#define AVR32_BUSMON_DATA                                              0
#define AVR32_BUSMON_DATA0                                    0x00000010
#define AVR32_BUSMON_DATA0_DATA                                        0
#define AVR32_BUSMON_DATA0_DATA_MASK                          0xffffffff
#define AVR32_BUSMON_DATA0_DATA_OFFSET                                 0
#define AVR32_BUSMON_DATA0_DATA_SIZE                                  32
#define AVR32_BUSMON_DATA1                                    0x00000020
#define AVR32_BUSMON_DATA1_DATA                                        0
#define AVR32_BUSMON_DATA1_DATA_MASK                          0xffffffff
#define AVR32_BUSMON_DATA1_DATA_OFFSET                                 0
#define AVR32_BUSMON_DATA1_DATA_SIZE                                  32
#define AVR32_BUSMON_DATA2                                    0x00000030
#define AVR32_BUSMON_DATA2_DATA                                        0
#define AVR32_BUSMON_DATA2_DATA_MASK                          0xffffffff
#define AVR32_BUSMON_DATA2_DATA_OFFSET                                 0
#define AVR32_BUSMON_DATA2_DATA_SIZE                                  32
#define AVR32_BUSMON_DATA3                                    0x00000040
#define AVR32_BUSMON_DATA3_DATA                                        0
#define AVR32_BUSMON_DATA3_DATA_MASK                          0xffffffff
#define AVR32_BUSMON_DATA3_DATA_OFFSET                                 0
#define AVR32_BUSMON_DATA3_DATA_SIZE                                  32
#define AVR32_BUSMON_DATA_MASK                                0xffffffff
#define AVR32_BUSMON_DATA_OFFSET                                       0
#define AVR32_BUSMON_DATA_SIZE                                        32
#define AVR32_BUSMON_LAT                                               0
#define AVR32_BUSMON_LAT0                                     0x00000018
#define AVR32_BUSMON_LAT0_LAT                                          0
#define AVR32_BUSMON_LAT0_LAT_MASK                            0xffffffff
#define AVR32_BUSMON_LAT0_LAT_OFFSET                                   0
#define AVR32_BUSMON_LAT0_LAT_SIZE                                    32
#define AVR32_BUSMON_LAT1                                     0x00000028
#define AVR32_BUSMON_LAT1_LAT                                          0
#define AVR32_BUSMON_LAT1_LAT_MASK                            0xffffffff
#define AVR32_BUSMON_LAT1_LAT_OFFSET                                   0
#define AVR32_BUSMON_LAT1_LAT_SIZE                                    32
#define AVR32_BUSMON_LAT2                                     0x00000038
#define AVR32_BUSMON_LAT2_LAT                                          0
#define AVR32_BUSMON_LAT2_LAT_MASK                            0xffffffff
#define AVR32_BUSMON_LAT2_LAT_OFFSET                                   0
#define AVR32_BUSMON_LAT2_LAT_SIZE                                    32
#define AVR32_BUSMON_LAT3                                     0x00000048
#define AVR32_BUSMON_LAT3_LAT                                          0
#define AVR32_BUSMON_LAT3_LAT_MASK                            0xffffffff
#define AVR32_BUSMON_LAT3_LAT_OFFSET                                   0
#define AVR32_BUSMON_LAT3_LAT_SIZE                                    32
#define AVR32_BUSMON_LAT_MASK                                 0xffffffff
#define AVR32_BUSMON_LAT_OFFSET                                        0
#define AVR32_BUSMON_LAT_SIZE                                         32
#define AVR32_BUSMON_STALL                                             0
#define AVR32_BUSMON_STALL0                                   0x00000014
#define AVR32_BUSMON_STALL0_STALL                                      0
#define AVR32_BUSMON_STALL0_STALL_MASK                        0xffffffff
#define AVR32_BUSMON_STALL0_STALL_OFFSET                               0
#define AVR32_BUSMON_STALL0_STALL_SIZE                                32
#define AVR32_BUSMON_STALL1                                   0x00000024
#define AVR32_BUSMON_STALL1_STALL                                      0
#define AVR32_BUSMON_STALL1_STALL_MASK                        0xffffffff
#define AVR32_BUSMON_STALL1_STALL_OFFSET                               0
#define AVR32_BUSMON_STALL1_STALL_SIZE                                32
#define AVR32_BUSMON_STALL2                                   0x00000034
#define AVR32_BUSMON_STALL2_STALL                                      0
#define AVR32_BUSMON_STALL2_STALL_MASK                        0xffffffff
#define AVR32_BUSMON_STALL2_STALL_OFFSET                               0
#define AVR32_BUSMON_STALL2_STALL_SIZE                                32
#define AVR32_BUSMON_STALL3                                   0x00000044
#define AVR32_BUSMON_STALL3_STALL                                      0
#define AVR32_BUSMON_STALL3_STALL_MASK                        0xffffffff
#define AVR32_BUSMON_STALL3_STALL_OFFSET                               0
#define AVR32_BUSMON_STALL3_STALL_SIZE                                32
#define AVR32_BUSMON_STALL_MASK                               0xffffffff
#define AVR32_BUSMON_STALL_OFFSET                                      0
#define AVR32_BUSMON_STALL_SIZE                                       32
#define AVR32_BUSMON_VERSION                                  0x00000054
#define AVR32_BUSMON_VERSION_MASK                             0x00000fff
#define AVR32_BUSMON_VERSION_OFFSET                                    0
#define AVR32_BUSMON_VERSION_SIZE                                     12
#define AVR32_BUSMON_VERSION_VERSION                                   0
#define AVR32_BUSMON_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_BUSMON_VERSION_VERSION_OFFSET                            0
#define AVR32_BUSMON_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_busmon_control_t {
    unsigned int                 :12;
    unsigned int ch3res          : 1;
    unsigned int ch2res          : 1;
    unsigned int ch1res          : 1;
    unsigned int ch0res          : 1;
    unsigned int                 : 4;
    unsigned int ch3of           : 1;
    unsigned int ch2of           : 1;
    unsigned int ch1of           : 1;
    unsigned int ch0of           : 1;
    unsigned int                 : 4;
    unsigned int ch3en           : 1;
    unsigned int ch2en           : 1;
    unsigned int ch1en           : 1;
    unsigned int ch0en           : 1;
} avr32_busmon_control_t;



typedef struct avr32_busmon_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_busmon_version_t;



typedef struct avr32_busmon_t {
  union {
          unsigned long                  control   ;//0x0000
          avr32_busmon_control_t         CONTROL   ;
  };
          unsigned int                   :32       ;//0x0004
          unsigned int                   :32       ;//0x0008
          unsigned int                   :32       ;//0x000c
    const unsigned long                  data0     ;//0x0010
    const unsigned long                  stall0    ;//0x0014
    const unsigned long                  lat0      ;//0x0018
          unsigned int                   :32       ;//0x001c
    const unsigned long                  data1     ;//0x0020
    const unsigned long                  stall1    ;//0x0024
    const unsigned long                  lat1      ;//0x0028
          unsigned int                   :32       ;//0x002c
    const unsigned long                  data2     ;//0x0030
    const unsigned long                  stall2    ;//0x0034
    const unsigned long                  lat2      ;//0x0038
          unsigned int                   :32       ;//0x003c
    const unsigned long                  data3     ;//0x0040
    const unsigned long                  stall3    ;//0x0044
    const unsigned long                  lat3      ;//0x0048
          unsigned int                   :32       ;//0x004c
          unsigned int                   :32       ;//0x0050
  union {
    const unsigned long                  version   ;//0x0054
    const avr32_busmon_version_t         VERSION   ;
  };
} avr32_busmon_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_BUSMON_100_H_INCLUDED*/
#endif

