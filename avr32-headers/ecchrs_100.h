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
 * Model        : UC3A3128
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_ECCHRS_100_H_INCLUDED
#define AVR32_ECCHRS_100_H_INCLUDED

#define AVR32_ECCHRS_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ECCHRS_<register>
 - Bitfield mask:   AVR32_ECCHRS_<register>_<bitfield>
 - Bitfield offset: AVR32_ECCHRS_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ECCHRS_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ECCHRS_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ECCHRS_<bitfield>
 - Bitfield offset: AVR32_ECCHRS_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ECCHRS_<bitfield>_SIZE
 - Bitfield values: AVR32_ECCHRS_<bitfield>_<value name>
 - Bitfield values: AVR32_ECCHRS_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_ECCHRS_ADOFF0                                   0x000001a0
#define AVR32_ECCHRS_ADOFF0_OFFSET0                                    0
#define AVR32_ECCHRS_ADOFF0_OFFSET0_MASK                      0x000003ff
#define AVR32_ECCHRS_ADOFF0_OFFSET0_OFFSET                             0
#define AVR32_ECCHRS_ADOFF0_OFFSET0_SIZE                              10
#define AVR32_ECCHRS_ADOFF1                                   0x000001a4
#define AVR32_ECCHRS_ADOFF1_OFFSET1                                    0
#define AVR32_ECCHRS_ADOFF1_OFFSET1_MASK                      0x000003ff
#define AVR32_ECCHRS_ADOFF1_OFFSET1_OFFSET                             0
#define AVR32_ECCHRS_ADOFF1_OFFSET1_SIZE                              10
#define AVR32_ECCHRS_ADOFF2                                   0x000001a8
#define AVR32_ECCHRS_ADOFF2_OFFSET2                                    0
#define AVR32_ECCHRS_ADOFF2_OFFSET2_MASK                      0x000003ff
#define AVR32_ECCHRS_ADOFF2_OFFSET2_OFFSET                             0
#define AVR32_ECCHRS_ADOFF2_OFFSET2_SIZE                              10
#define AVR32_ECCHRS_ADOFF3                                   0x000001ac
#define AVR32_ECCHRS_ADOFF3_OFFSET3                                    0
#define AVR32_ECCHRS_ADOFF3_OFFSET3_MASK                      0x000003ff
#define AVR32_ECCHRS_ADOFF3_OFFSET3_OFFSET                             0
#define AVR32_ECCHRS_ADOFF3_OFFSET3_SIZE                              10
#define AVR32_ECCHRS_BITADDR                                           0
#define AVR32_ECCHRS_BITADDR0                                          0
#define AVR32_ECCHRS_BITADDR0_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR0_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR0_SIZE                                     3
#define AVR32_ECCHRS_BITADDR1                                          0
#define AVR32_ECCHRS_BITADDR10                                         0
#define AVR32_ECCHRS_BITADDR10_MASK                           0x00000007
#define AVR32_ECCHRS_BITADDR10_OFFSET                                  0
#define AVR32_ECCHRS_BITADDR10_SIZE                                    3
#define AVR32_ECCHRS_BITADDR11                                         0
#define AVR32_ECCHRS_BITADDR11_MASK                           0x00000007
#define AVR32_ECCHRS_BITADDR11_OFFSET                                  0
#define AVR32_ECCHRS_BITADDR11_SIZE                                    3
#define AVR32_ECCHRS_BITADDR12                                         0
#define AVR32_ECCHRS_BITADDR12_MASK                           0x00000007
#define AVR32_ECCHRS_BITADDR12_OFFSET                                  0
#define AVR32_ECCHRS_BITADDR12_SIZE                                    3
#define AVR32_ECCHRS_BITADDR13                                         0
#define AVR32_ECCHRS_BITADDR13_MASK                           0x00000007
#define AVR32_ECCHRS_BITADDR13_OFFSET                                  0
#define AVR32_ECCHRS_BITADDR13_SIZE                                    3
#define AVR32_ECCHRS_BITADDR14                                         0
#define AVR32_ECCHRS_BITADDR14_MASK                           0x00000007
#define AVR32_ECCHRS_BITADDR14_OFFSET                                  0
#define AVR32_ECCHRS_BITADDR14_SIZE                                    3
#define AVR32_ECCHRS_BITADDR15                                         0
#define AVR32_ECCHRS_BITADDR15_MASK                           0x00000007
#define AVR32_ECCHRS_BITADDR15_OFFSET                                  0
#define AVR32_ECCHRS_BITADDR15_SIZE                                    3
#define AVR32_ECCHRS_BITADDR1_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR1_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR1_SIZE                                     3
#define AVR32_ECCHRS_BITADDR2                                          0
#define AVR32_ECCHRS_BITADDR2_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR2_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR2_SIZE                                     3
#define AVR32_ECCHRS_BITADDR3                                          0
#define AVR32_ECCHRS_BITADDR3_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR3_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR3_SIZE                                     3
#define AVR32_ECCHRS_BITADDR4                                          0
#define AVR32_ECCHRS_BITADDR4_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR4_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR4_SIZE                                     3
#define AVR32_ECCHRS_BITADDR5                                          0
#define AVR32_ECCHRS_BITADDR5_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR5_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR5_SIZE                                     3
#define AVR32_ECCHRS_BITADDR6                                          0
#define AVR32_ECCHRS_BITADDR6_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR6_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR6_SIZE                                     3
#define AVR32_ECCHRS_BITADDR7                                          0
#define AVR32_ECCHRS_BITADDR7_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR7_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR7_SIZE                                     3
#define AVR32_ECCHRS_BITADDR8                                          0
#define AVR32_ECCHRS_BITADDR8_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR8_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR8_SIZE                                     3
#define AVR32_ECCHRS_BITADDR9                                          0
#define AVR32_ECCHRS_BITADDR9_MASK                            0x00000007
#define AVR32_ECCHRS_BITADDR9_OFFSET                                   0
#define AVR32_ECCHRS_BITADDR9_SIZE                                     3
#define AVR32_ECCHRS_BITADDR_MASK                             0x0000000f
#define AVR32_ECCHRS_BITADDR_OFFSET                                    0
#define AVR32_ECCHRS_BITADDR_SIZE                                      4
#define AVR32_ECCHRS_CODEWORD00                                        0
#define AVR32_ECCHRS_CODEWORD00_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD00_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD00_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD01                                        0
#define AVR32_ECCHRS_CODEWORD01_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD01_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD01_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD02                                        0
#define AVR32_ECCHRS_CODEWORD02_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD02_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD02_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD03                                        0
#define AVR32_ECCHRS_CODEWORD03_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD03_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD03_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD04                                        0
#define AVR32_ECCHRS_CODEWORD04_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD04_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD04_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD05                                        0
#define AVR32_ECCHRS_CODEWORD05_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD05_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD05_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD06                                        0
#define AVR32_ECCHRS_CODEWORD06_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD06_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD06_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD07                                        0
#define AVR32_ECCHRS_CODEWORD07_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD07_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD07_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD08                                        0
#define AVR32_ECCHRS_CODEWORD08_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD08_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD08_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD09                                        0
#define AVR32_ECCHRS_CODEWORD09_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD09_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD09_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD10                                        0
#define AVR32_ECCHRS_CODEWORD10_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD10_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD10_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD11                                        0
#define AVR32_ECCHRS_CODEWORD11_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD11_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD11_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD12                                        0
#define AVR32_ECCHRS_CODEWORD12_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD12_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD12_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD13                                        0
#define AVR32_ECCHRS_CODEWORD13_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD13_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD13_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD14                                        0
#define AVR32_ECCHRS_CODEWORD14_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD14_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD14_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD15                                        0
#define AVR32_ECCHRS_CODEWORD15_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD15_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD15_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD16                                        0
#define AVR32_ECCHRS_CODEWORD16_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD16_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD16_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD17                                        0
#define AVR32_ECCHRS_CODEWORD17_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD17_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD17_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD18                                        0
#define AVR32_ECCHRS_CODEWORD18_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD18_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD18_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD19                                        0
#define AVR32_ECCHRS_CODEWORD19_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD19_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD19_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD20                                        0
#define AVR32_ECCHRS_CODEWORD20_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD20_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD20_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD21                                        0
#define AVR32_ECCHRS_CODEWORD21_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD21_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD21_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD22                                        0
#define AVR32_ECCHRS_CODEWORD22_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD22_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD22_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD23                                        0
#define AVR32_ECCHRS_CODEWORD23_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD23_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD23_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD24                                        0
#define AVR32_ECCHRS_CODEWORD24_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD24_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD24_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD25                                        0
#define AVR32_ECCHRS_CODEWORD25_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD25_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD25_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD26                                        0
#define AVR32_ECCHRS_CODEWORD26_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD26_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD26_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD27                                        0
#define AVR32_ECCHRS_CODEWORD27_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD27_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD27_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD28                                        0
#define AVR32_ECCHRS_CODEWORD28_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD28_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD28_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD29                                        0
#define AVR32_ECCHRS_CODEWORD29_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD29_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD29_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD30                                        0
#define AVR32_ECCHRS_CODEWORD30_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD30_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD30_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD31                                        0
#define AVR32_ECCHRS_CODEWORD31_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD31_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD31_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD32                                        0
#define AVR32_ECCHRS_CODEWORD32_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD32_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD32_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD33                                        0
#define AVR32_ECCHRS_CODEWORD33_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD33_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD33_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD34                                        0
#define AVR32_ECCHRS_CODEWORD34_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD34_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD34_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD35                                        0
#define AVR32_ECCHRS_CODEWORD35_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD35_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD35_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD36                                        0
#define AVR32_ECCHRS_CODEWORD36_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD36_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD36_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD37                                        0
#define AVR32_ECCHRS_CODEWORD37_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD37_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD37_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD38                                        0
#define AVR32_ECCHRS_CODEWORD38_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD38_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD38_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD39                                        0
#define AVR32_ECCHRS_CODEWORD39_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD39_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD39_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD40                                        0
#define AVR32_ECCHRS_CODEWORD40_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD40_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD40_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD41                                        0
#define AVR32_ECCHRS_CODEWORD41_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD41_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD41_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD42                                        0
#define AVR32_ECCHRS_CODEWORD42_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD42_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD42_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD43                                        0
#define AVR32_ECCHRS_CODEWORD43_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD43_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD43_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD44                                        0
#define AVR32_ECCHRS_CODEWORD44_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD44_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD44_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD45                                        0
#define AVR32_ECCHRS_CODEWORD45_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD45_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD45_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD46                                        0
#define AVR32_ECCHRS_CODEWORD46_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD46_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD46_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD47                                        0
#define AVR32_ECCHRS_CODEWORD47_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD47_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD47_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD48                                        0
#define AVR32_ECCHRS_CODEWORD48_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD48_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD48_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD49                                        0
#define AVR32_ECCHRS_CODEWORD49_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD49_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD49_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD50                                        0
#define AVR32_ECCHRS_CODEWORD50_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD50_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD50_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD51                                        0
#define AVR32_ECCHRS_CODEWORD51_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD51_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD51_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD52                                        0
#define AVR32_ECCHRS_CODEWORD52_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD52_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD52_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD53                                        0
#define AVR32_ECCHRS_CODEWORD53_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD53_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD53_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD54                                        0
#define AVR32_ECCHRS_CODEWORD54_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD54_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD54_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD55                                        0
#define AVR32_ECCHRS_CODEWORD55_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD55_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD55_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD56                                        0
#define AVR32_ECCHRS_CODEWORD56_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD56_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD56_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD57                                        0
#define AVR32_ECCHRS_CODEWORD57_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD57_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD57_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD58                                        0
#define AVR32_ECCHRS_CODEWORD58_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD58_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD58_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD59                                        0
#define AVR32_ECCHRS_CODEWORD59_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD59_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD59_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD60                                        0
#define AVR32_ECCHRS_CODEWORD60_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD60_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD60_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD61                                        0
#define AVR32_ECCHRS_CODEWORD61_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD61_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD61_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD62                                        0
#define AVR32_ECCHRS_CODEWORD62_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD62_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD62_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD63                                        0
#define AVR32_ECCHRS_CODEWORD63_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD63_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD63_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD64                                        0
#define AVR32_ECCHRS_CODEWORD64_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD64_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD64_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD65                                        0
#define AVR32_ECCHRS_CODEWORD65_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD65_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD65_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD66                                        0
#define AVR32_ECCHRS_CODEWORD66_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD66_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD66_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD67                                        0
#define AVR32_ECCHRS_CODEWORD67_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD67_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD67_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD68                                        0
#define AVR32_ECCHRS_CODEWORD68_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD68_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD68_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD69                                        0
#define AVR32_ECCHRS_CODEWORD69_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD69_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD69_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD70                                        0
#define AVR32_ECCHRS_CODEWORD70_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD70_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD70_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD71                                        0
#define AVR32_ECCHRS_CODEWORD71_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD71_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD71_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD72                                        0
#define AVR32_ECCHRS_CODEWORD72_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD72_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD72_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD73                                        0
#define AVR32_ECCHRS_CODEWORD73_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD73_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD73_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD74                                        0
#define AVR32_ECCHRS_CODEWORD74_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD74_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD74_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD75                                        0
#define AVR32_ECCHRS_CODEWORD75_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD75_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD75_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD76                                        0
#define AVR32_ECCHRS_CODEWORD76_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD76_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD76_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD77                                        0
#define AVR32_ECCHRS_CODEWORD77_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD77_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD77_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD78                                        0
#define AVR32_ECCHRS_CODEWORD78_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD78_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD78_SIZE                                   8
#define AVR32_ECCHRS_CODEWORD79                                        0
#define AVR32_ECCHRS_CODEWORD79_MASK                          0x000000ff
#define AVR32_ECCHRS_CODEWORD79_OFFSET                                 0
#define AVR32_ECCHRS_CODEWORD79_SIZE                                   8
#define AVR32_ECCHRS_CORRS4                                           10
#define AVR32_ECCHRS_CORRS4_MASK                              0x00000400
#define AVR32_ECCHRS_CORRS4_OFFSET                                    10
#define AVR32_ECCHRS_CORRS4_SIZE                                       1
#define AVR32_ECCHRS_CTRL                                     0x00000000
#define AVR32_ECCHRS_CTRL_RST                                          0
#define AVR32_ECCHRS_CTRL_RST_MASK                            0x00000001
#define AVR32_ECCHRS_CTRL_RST_OFFSET                                   0
#define AVR32_ECCHRS_CTRL_RST_SIZE                                     1
#define AVR32_ECCHRS_CWPS00                                   0x00000050
#define AVR32_ECCHRS_CWPS00_CODEWORD00                                 0
#define AVR32_ECCHRS_CWPS00_CODEWORD00_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS00_CODEWORD00_OFFSET                          0
#define AVR32_ECCHRS_CWPS00_CODEWORD00_SIZE                            8
#define AVR32_ECCHRS_CWPS00_PARSYND00                                  0
#define AVR32_ECCHRS_CWPS00_PARSYND00_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS00_PARSYND00_OFFSET                           0
#define AVR32_ECCHRS_CWPS00_PARSYND00_SIZE                             8
#define AVR32_ECCHRS_CWPS01                                   0x00000054
#define AVR32_ECCHRS_CWPS01_CODEWORD01                                 0
#define AVR32_ECCHRS_CWPS01_CODEWORD01_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS01_CODEWORD01_OFFSET                          0
#define AVR32_ECCHRS_CWPS01_CODEWORD01_SIZE                            8
#define AVR32_ECCHRS_CWPS01_PARSYND01                                  0
#define AVR32_ECCHRS_CWPS01_PARSYND01_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS01_PARSYND01_OFFSET                           0
#define AVR32_ECCHRS_CWPS01_PARSYND01_SIZE                             8
#define AVR32_ECCHRS_CWPS02                                   0x00000058
#define AVR32_ECCHRS_CWPS02_CODEWORD02                                 0
#define AVR32_ECCHRS_CWPS02_CODEWORD02_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS02_CODEWORD02_OFFSET                          0
#define AVR32_ECCHRS_CWPS02_CODEWORD02_SIZE                            8
#define AVR32_ECCHRS_CWPS02_PARSYND02                                  0
#define AVR32_ECCHRS_CWPS02_PARSYND02_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS02_PARSYND02_OFFSET                           0
#define AVR32_ECCHRS_CWPS02_PARSYND02_SIZE                             8
#define AVR32_ECCHRS_CWPS03                                   0x0000005c
#define AVR32_ECCHRS_CWPS03_CODEWORD03                                 0
#define AVR32_ECCHRS_CWPS03_CODEWORD03_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS03_CODEWORD03_OFFSET                          0
#define AVR32_ECCHRS_CWPS03_CODEWORD03_SIZE                            8
#define AVR32_ECCHRS_CWPS03_PARSYND03                                  0
#define AVR32_ECCHRS_CWPS03_PARSYND03_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS03_PARSYND03_OFFSET                           0
#define AVR32_ECCHRS_CWPS03_PARSYND03_SIZE                             8
#define AVR32_ECCHRS_CWPS04                                   0x00000060
#define AVR32_ECCHRS_CWPS04_CODEWORD04                                 0
#define AVR32_ECCHRS_CWPS04_CODEWORD04_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS04_CODEWORD04_OFFSET                          0
#define AVR32_ECCHRS_CWPS04_CODEWORD04_SIZE                            8
#define AVR32_ECCHRS_CWPS04_PARSYND04                                  0
#define AVR32_ECCHRS_CWPS04_PARSYND04_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS04_PARSYND04_OFFSET                           0
#define AVR32_ECCHRS_CWPS04_PARSYND04_SIZE                             8
#define AVR32_ECCHRS_CWPS05                                   0x00000064
#define AVR32_ECCHRS_CWPS05_CODEWORD05                                 0
#define AVR32_ECCHRS_CWPS05_CODEWORD05_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS05_CODEWORD05_OFFSET                          0
#define AVR32_ECCHRS_CWPS05_CODEWORD05_SIZE                            8
#define AVR32_ECCHRS_CWPS05_PARSYND05                                  0
#define AVR32_ECCHRS_CWPS05_PARSYND05_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS05_PARSYND05_OFFSET                           0
#define AVR32_ECCHRS_CWPS05_PARSYND05_SIZE                             8
#define AVR32_ECCHRS_CWPS06                                   0x00000068
#define AVR32_ECCHRS_CWPS06_CODEWORD06                                 0
#define AVR32_ECCHRS_CWPS06_CODEWORD06_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS06_CODEWORD06_OFFSET                          0
#define AVR32_ECCHRS_CWPS06_CODEWORD06_SIZE                            8
#define AVR32_ECCHRS_CWPS06_PARSYND06                                  0
#define AVR32_ECCHRS_CWPS06_PARSYND06_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS06_PARSYND06_OFFSET                           0
#define AVR32_ECCHRS_CWPS06_PARSYND06_SIZE                             8
#define AVR32_ECCHRS_CWPS07                                   0x0000006c
#define AVR32_ECCHRS_CWPS07_CODEWORD07                                 0
#define AVR32_ECCHRS_CWPS07_CODEWORD07_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS07_CODEWORD07_OFFSET                          0
#define AVR32_ECCHRS_CWPS07_CODEWORD07_SIZE                            8
#define AVR32_ECCHRS_CWPS07_PARSYND07                                  0
#define AVR32_ECCHRS_CWPS07_PARSYND07_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS07_PARSYND07_OFFSET                           0
#define AVR32_ECCHRS_CWPS07_PARSYND07_SIZE                             8
#define AVR32_ECCHRS_CWPS08                                   0x00000070
#define AVR32_ECCHRS_CWPS08_CODEWORD08                                 0
#define AVR32_ECCHRS_CWPS08_CODEWORD08_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS08_CODEWORD08_OFFSET                          0
#define AVR32_ECCHRS_CWPS08_CODEWORD08_SIZE                            8
#define AVR32_ECCHRS_CWPS08_PARSYND08                                  0
#define AVR32_ECCHRS_CWPS08_PARSYND08_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS08_PARSYND08_OFFSET                           0
#define AVR32_ECCHRS_CWPS08_PARSYND08_SIZE                             8
#define AVR32_ECCHRS_CWPS09                                   0x00000074
#define AVR32_ECCHRS_CWPS09_CODEWORD09                                 0
#define AVR32_ECCHRS_CWPS09_CODEWORD09_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS09_CODEWORD09_OFFSET                          0
#define AVR32_ECCHRS_CWPS09_CODEWORD09_SIZE                            8
#define AVR32_ECCHRS_CWPS09_PARSYND09                                  0
#define AVR32_ECCHRS_CWPS09_PARSYND09_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS09_PARSYND09_OFFSET                           0
#define AVR32_ECCHRS_CWPS09_PARSYND09_SIZE                             8
#define AVR32_ECCHRS_CWPS10                                   0x00000078
#define AVR32_ECCHRS_CWPS10_CODEWORD10                                 0
#define AVR32_ECCHRS_CWPS10_CODEWORD10_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS10_CODEWORD10_OFFSET                          0
#define AVR32_ECCHRS_CWPS10_CODEWORD10_SIZE                            8
#define AVR32_ECCHRS_CWPS10_PARSYND10                                  0
#define AVR32_ECCHRS_CWPS10_PARSYND10_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS10_PARSYND10_OFFSET                           0
#define AVR32_ECCHRS_CWPS10_PARSYND10_SIZE                             8
#define AVR32_ECCHRS_CWPS11                                   0x0000007c
#define AVR32_ECCHRS_CWPS11_CODEWORD11                                 0
#define AVR32_ECCHRS_CWPS11_CODEWORD11_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS11_CODEWORD11_OFFSET                          0
#define AVR32_ECCHRS_CWPS11_CODEWORD11_SIZE                            8
#define AVR32_ECCHRS_CWPS11_PARSYND11                                  0
#define AVR32_ECCHRS_CWPS11_PARSYND11_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS11_PARSYND11_OFFSET                           0
#define AVR32_ECCHRS_CWPS11_PARSYND11_SIZE                             8
#define AVR32_ECCHRS_CWPS12                                   0x00000080
#define AVR32_ECCHRS_CWPS12_CODEWORD12                                 0
#define AVR32_ECCHRS_CWPS12_CODEWORD12_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS12_CODEWORD12_OFFSET                          0
#define AVR32_ECCHRS_CWPS12_CODEWORD12_SIZE                            8
#define AVR32_ECCHRS_CWPS12_PARSYND12                                  0
#define AVR32_ECCHRS_CWPS12_PARSYND12_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS12_PARSYND12_OFFSET                           0
#define AVR32_ECCHRS_CWPS12_PARSYND12_SIZE                             8
#define AVR32_ECCHRS_CWPS13                                   0x00000084
#define AVR32_ECCHRS_CWPS13_CODEWORD13                                 0
#define AVR32_ECCHRS_CWPS13_CODEWORD13_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS13_CODEWORD13_OFFSET                          0
#define AVR32_ECCHRS_CWPS13_CODEWORD13_SIZE                            8
#define AVR32_ECCHRS_CWPS13_PARSYND13                                  0
#define AVR32_ECCHRS_CWPS13_PARSYND13_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS13_PARSYND13_OFFSET                           0
#define AVR32_ECCHRS_CWPS13_PARSYND13_SIZE                             8
#define AVR32_ECCHRS_CWPS14                                   0x00000088
#define AVR32_ECCHRS_CWPS14_CODEWORD14                                 0
#define AVR32_ECCHRS_CWPS14_CODEWORD14_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS14_CODEWORD14_OFFSET                          0
#define AVR32_ECCHRS_CWPS14_CODEWORD14_SIZE                            8
#define AVR32_ECCHRS_CWPS14_PARSYND14                                  0
#define AVR32_ECCHRS_CWPS14_PARSYND14_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS14_PARSYND14_OFFSET                           0
#define AVR32_ECCHRS_CWPS14_PARSYND14_SIZE                             8
#define AVR32_ECCHRS_CWPS15                                   0x0000008c
#define AVR32_ECCHRS_CWPS15_CODEWORD15                                 0
#define AVR32_ECCHRS_CWPS15_CODEWORD15_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS15_CODEWORD15_OFFSET                          0
#define AVR32_ECCHRS_CWPS15_CODEWORD15_SIZE                            8
#define AVR32_ECCHRS_CWPS15_PARSYND15                                  0
#define AVR32_ECCHRS_CWPS15_PARSYND15_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS15_PARSYND15_OFFSET                           0
#define AVR32_ECCHRS_CWPS15_PARSYND15_SIZE                             8
#define AVR32_ECCHRS_CWPS16                                   0x00000090
#define AVR32_ECCHRS_CWPS16_CODEWORD16                                 0
#define AVR32_ECCHRS_CWPS16_CODEWORD16_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS16_CODEWORD16_OFFSET                          0
#define AVR32_ECCHRS_CWPS16_CODEWORD16_SIZE                            8
#define AVR32_ECCHRS_CWPS16_PARSYND16                                  0
#define AVR32_ECCHRS_CWPS16_PARSYND16_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS16_PARSYND16_OFFSET                           0
#define AVR32_ECCHRS_CWPS16_PARSYND16_SIZE                             8
#define AVR32_ECCHRS_CWPS17                                   0x00000094
#define AVR32_ECCHRS_CWPS17_CODEWORD17                                 0
#define AVR32_ECCHRS_CWPS17_CODEWORD17_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS17_CODEWORD17_OFFSET                          0
#define AVR32_ECCHRS_CWPS17_CODEWORD17_SIZE                            8
#define AVR32_ECCHRS_CWPS17_PARSYND17                                  0
#define AVR32_ECCHRS_CWPS17_PARSYND17_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS17_PARSYND17_OFFSET                           0
#define AVR32_ECCHRS_CWPS17_PARSYND17_SIZE                             8
#define AVR32_ECCHRS_CWPS18                                   0x00000098
#define AVR32_ECCHRS_CWPS18_CODEWORD18                                 0
#define AVR32_ECCHRS_CWPS18_CODEWORD18_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS18_CODEWORD18_OFFSET                          0
#define AVR32_ECCHRS_CWPS18_CODEWORD18_SIZE                            8
#define AVR32_ECCHRS_CWPS18_PARSYND18                                  0
#define AVR32_ECCHRS_CWPS18_PARSYND18_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS18_PARSYND18_OFFSET                           0
#define AVR32_ECCHRS_CWPS18_PARSYND18_SIZE                             8
#define AVR32_ECCHRS_CWPS19                                   0x0000009c
#define AVR32_ECCHRS_CWPS19_CODEWORD19                                 0
#define AVR32_ECCHRS_CWPS19_CODEWORD19_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS19_CODEWORD19_OFFSET                          0
#define AVR32_ECCHRS_CWPS19_CODEWORD19_SIZE                            8
#define AVR32_ECCHRS_CWPS19_PARSYND19                                  0
#define AVR32_ECCHRS_CWPS19_PARSYND19_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS19_PARSYND19_OFFSET                           0
#define AVR32_ECCHRS_CWPS19_PARSYND19_SIZE                             8
#define AVR32_ECCHRS_CWPS20                                   0x000000a0
#define AVR32_ECCHRS_CWPS20_CODEWORD20                                 0
#define AVR32_ECCHRS_CWPS20_CODEWORD20_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS20_CODEWORD20_OFFSET                          0
#define AVR32_ECCHRS_CWPS20_CODEWORD20_SIZE                            8
#define AVR32_ECCHRS_CWPS20_PARSYND20                                  0
#define AVR32_ECCHRS_CWPS20_PARSYND20_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS20_PARSYND20_OFFSET                           0
#define AVR32_ECCHRS_CWPS20_PARSYND20_SIZE                             8
#define AVR32_ECCHRS_CWPS21                                   0x000000a4
#define AVR32_ECCHRS_CWPS21_CODEWORD21                                 0
#define AVR32_ECCHRS_CWPS21_CODEWORD21_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS21_CODEWORD21_OFFSET                          0
#define AVR32_ECCHRS_CWPS21_CODEWORD21_SIZE                            8
#define AVR32_ECCHRS_CWPS21_PARSYND21                                  0
#define AVR32_ECCHRS_CWPS21_PARSYND21_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS21_PARSYND21_OFFSET                           0
#define AVR32_ECCHRS_CWPS21_PARSYND21_SIZE                             8
#define AVR32_ECCHRS_CWPS22                                   0x000000a8
#define AVR32_ECCHRS_CWPS22_CODEWORD22                                 0
#define AVR32_ECCHRS_CWPS22_CODEWORD22_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS22_CODEWORD22_OFFSET                          0
#define AVR32_ECCHRS_CWPS22_CODEWORD22_SIZE                            8
#define AVR32_ECCHRS_CWPS22_PARSYND22                                  0
#define AVR32_ECCHRS_CWPS22_PARSYND22_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS22_PARSYND22_OFFSET                           0
#define AVR32_ECCHRS_CWPS22_PARSYND22_SIZE                             8
#define AVR32_ECCHRS_CWPS23                                   0x000000ac
#define AVR32_ECCHRS_CWPS23_CODEWORD23                                 0
#define AVR32_ECCHRS_CWPS23_CODEWORD23_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS23_CODEWORD23_OFFSET                          0
#define AVR32_ECCHRS_CWPS23_CODEWORD23_SIZE                            8
#define AVR32_ECCHRS_CWPS23_PARSYND23                                  0
#define AVR32_ECCHRS_CWPS23_PARSYND23_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS23_PARSYND23_OFFSET                           0
#define AVR32_ECCHRS_CWPS23_PARSYND23_SIZE                             8
#define AVR32_ECCHRS_CWPS24                                   0x000000b0
#define AVR32_ECCHRS_CWPS24_CODEWORD24                                 0
#define AVR32_ECCHRS_CWPS24_CODEWORD24_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS24_CODEWORD24_OFFSET                          0
#define AVR32_ECCHRS_CWPS24_CODEWORD24_SIZE                            8
#define AVR32_ECCHRS_CWPS24_PARSYND24                                  0
#define AVR32_ECCHRS_CWPS24_PARSYND24_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS24_PARSYND24_OFFSET                           0
#define AVR32_ECCHRS_CWPS24_PARSYND24_SIZE                             8
#define AVR32_ECCHRS_CWPS25                                   0x000000b4
#define AVR32_ECCHRS_CWPS25_CODEWORD25                                 0
#define AVR32_ECCHRS_CWPS25_CODEWORD25_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS25_CODEWORD25_OFFSET                          0
#define AVR32_ECCHRS_CWPS25_CODEWORD25_SIZE                            8
#define AVR32_ECCHRS_CWPS25_PARSYND25                                  0
#define AVR32_ECCHRS_CWPS25_PARSYND25_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS25_PARSYND25_OFFSET                           0
#define AVR32_ECCHRS_CWPS25_PARSYND25_SIZE                             8
#define AVR32_ECCHRS_CWPS26                                   0x000000b8
#define AVR32_ECCHRS_CWPS26_CODEWORD26                                 0
#define AVR32_ECCHRS_CWPS26_CODEWORD26_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS26_CODEWORD26_OFFSET                          0
#define AVR32_ECCHRS_CWPS26_CODEWORD26_SIZE                            8
#define AVR32_ECCHRS_CWPS26_PARSYND26                                  0
#define AVR32_ECCHRS_CWPS26_PARSYND26_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS26_PARSYND26_OFFSET                           0
#define AVR32_ECCHRS_CWPS26_PARSYND26_SIZE                             8
#define AVR32_ECCHRS_CWPS27                                   0x000000bc
#define AVR32_ECCHRS_CWPS27_CODEWORD27                                 0
#define AVR32_ECCHRS_CWPS27_CODEWORD27_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS27_CODEWORD27_OFFSET                          0
#define AVR32_ECCHRS_CWPS27_CODEWORD27_SIZE                            8
#define AVR32_ECCHRS_CWPS27_PARSYND27                                  0
#define AVR32_ECCHRS_CWPS27_PARSYND27_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS27_PARSYND27_OFFSET                           0
#define AVR32_ECCHRS_CWPS27_PARSYND27_SIZE                             8
#define AVR32_ECCHRS_CWPS28                                   0x000000c0
#define AVR32_ECCHRS_CWPS28_CODEWORD28                                 0
#define AVR32_ECCHRS_CWPS28_CODEWORD28_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS28_CODEWORD28_OFFSET                          0
#define AVR32_ECCHRS_CWPS28_CODEWORD28_SIZE                            8
#define AVR32_ECCHRS_CWPS28_PARSYND28                                  0
#define AVR32_ECCHRS_CWPS28_PARSYND28_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS28_PARSYND28_OFFSET                           0
#define AVR32_ECCHRS_CWPS28_PARSYND28_SIZE                             8
#define AVR32_ECCHRS_CWPS29                                   0x000000c4
#define AVR32_ECCHRS_CWPS29_CODEWORD29                                 0
#define AVR32_ECCHRS_CWPS29_CODEWORD29_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS29_CODEWORD29_OFFSET                          0
#define AVR32_ECCHRS_CWPS29_CODEWORD29_SIZE                            8
#define AVR32_ECCHRS_CWPS29_PARSYND29                                  0
#define AVR32_ECCHRS_CWPS29_PARSYND29_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS29_PARSYND29_OFFSET                           0
#define AVR32_ECCHRS_CWPS29_PARSYND29_SIZE                             8
#define AVR32_ECCHRS_CWPS30                                   0x000000c8
#define AVR32_ECCHRS_CWPS30_CODEWORD30                                 0
#define AVR32_ECCHRS_CWPS30_CODEWORD30_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS30_CODEWORD30_OFFSET                          0
#define AVR32_ECCHRS_CWPS30_CODEWORD30_SIZE                            8
#define AVR32_ECCHRS_CWPS30_PARSYND30                                  0
#define AVR32_ECCHRS_CWPS30_PARSYND30_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS30_PARSYND30_OFFSET                           0
#define AVR32_ECCHRS_CWPS30_PARSYND30_SIZE                             8
#define AVR32_ECCHRS_CWPS31                                   0x000000cc
#define AVR32_ECCHRS_CWPS31_CODEWORD31                                 0
#define AVR32_ECCHRS_CWPS31_CODEWORD31_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS31_CODEWORD31_OFFSET                          0
#define AVR32_ECCHRS_CWPS31_CODEWORD31_SIZE                            8
#define AVR32_ECCHRS_CWPS31_PARSYND31                                  0
#define AVR32_ECCHRS_CWPS31_PARSYND31_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS31_PARSYND31_OFFSET                           0
#define AVR32_ECCHRS_CWPS31_PARSYND31_SIZE                             8
#define AVR32_ECCHRS_CWPS32                                   0x000000d0
#define AVR32_ECCHRS_CWPS32_CODEWORD32                                 0
#define AVR32_ECCHRS_CWPS32_CODEWORD32_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS32_CODEWORD32_OFFSET                          0
#define AVR32_ECCHRS_CWPS32_CODEWORD32_SIZE                            8
#define AVR32_ECCHRS_CWPS32_PARSYND32                                  0
#define AVR32_ECCHRS_CWPS32_PARSYND32_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS32_PARSYND32_OFFSET                           0
#define AVR32_ECCHRS_CWPS32_PARSYND32_SIZE                             8
#define AVR32_ECCHRS_CWPS33                                   0x000000d4
#define AVR32_ECCHRS_CWPS33_CODEWORD33                                 0
#define AVR32_ECCHRS_CWPS33_CODEWORD33_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS33_CODEWORD33_OFFSET                          0
#define AVR32_ECCHRS_CWPS33_CODEWORD33_SIZE                            8
#define AVR32_ECCHRS_CWPS33_PARSYND33                                  0
#define AVR32_ECCHRS_CWPS33_PARSYND33_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS33_PARSYND33_OFFSET                           0
#define AVR32_ECCHRS_CWPS33_PARSYND33_SIZE                             8
#define AVR32_ECCHRS_CWPS34                                   0x000000d8
#define AVR32_ECCHRS_CWPS34_CODEWORD34                                 0
#define AVR32_ECCHRS_CWPS34_CODEWORD34_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS34_CODEWORD34_OFFSET                          0
#define AVR32_ECCHRS_CWPS34_CODEWORD34_SIZE                            8
#define AVR32_ECCHRS_CWPS34_PARSYND34                                  0
#define AVR32_ECCHRS_CWPS34_PARSYND34_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS34_PARSYND34_OFFSET                           0
#define AVR32_ECCHRS_CWPS34_PARSYND34_SIZE                             8
#define AVR32_ECCHRS_CWPS35                                   0x000000dc
#define AVR32_ECCHRS_CWPS35_CODEWORD35                                 0
#define AVR32_ECCHRS_CWPS35_CODEWORD35_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS35_CODEWORD35_OFFSET                          0
#define AVR32_ECCHRS_CWPS35_CODEWORD35_SIZE                            8
#define AVR32_ECCHRS_CWPS35_PARSYND35                                  0
#define AVR32_ECCHRS_CWPS35_PARSYND35_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS35_PARSYND35_OFFSET                           0
#define AVR32_ECCHRS_CWPS35_PARSYND35_SIZE                             8
#define AVR32_ECCHRS_CWPS36                                   0x000000e0
#define AVR32_ECCHRS_CWPS36_CODEWORD36                                 0
#define AVR32_ECCHRS_CWPS36_CODEWORD36_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS36_CODEWORD36_OFFSET                          0
#define AVR32_ECCHRS_CWPS36_CODEWORD36_SIZE                            8
#define AVR32_ECCHRS_CWPS36_PARSYND36                                  0
#define AVR32_ECCHRS_CWPS36_PARSYND36_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS36_PARSYND36_OFFSET                           0
#define AVR32_ECCHRS_CWPS36_PARSYND36_SIZE                             8
#define AVR32_ECCHRS_CWPS37                                   0x000000e4
#define AVR32_ECCHRS_CWPS37_CODEWORD37                                 0
#define AVR32_ECCHRS_CWPS37_CODEWORD37_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS37_CODEWORD37_OFFSET                          0
#define AVR32_ECCHRS_CWPS37_CODEWORD37_SIZE                            8
#define AVR32_ECCHRS_CWPS37_PARSYND37                                  0
#define AVR32_ECCHRS_CWPS37_PARSYND37_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS37_PARSYND37_OFFSET                           0
#define AVR32_ECCHRS_CWPS37_PARSYND37_SIZE                             8
#define AVR32_ECCHRS_CWPS38                                   0x000000e8
#define AVR32_ECCHRS_CWPS38_CODEWORD38                                 0
#define AVR32_ECCHRS_CWPS38_CODEWORD38_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS38_CODEWORD38_OFFSET                          0
#define AVR32_ECCHRS_CWPS38_CODEWORD38_SIZE                            8
#define AVR32_ECCHRS_CWPS38_PARSYND38                                  0
#define AVR32_ECCHRS_CWPS38_PARSYND38_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS38_PARSYND38_OFFSET                           0
#define AVR32_ECCHRS_CWPS38_PARSYND38_SIZE                             8
#define AVR32_ECCHRS_CWPS39                                   0x000000ec
#define AVR32_ECCHRS_CWPS39_CODEWORD39                                 0
#define AVR32_ECCHRS_CWPS39_CODEWORD39_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS39_CODEWORD39_OFFSET                          0
#define AVR32_ECCHRS_CWPS39_CODEWORD39_SIZE                            8
#define AVR32_ECCHRS_CWPS39_PARSYND39                                  0
#define AVR32_ECCHRS_CWPS39_PARSYND39_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS39_PARSYND39_OFFSET                           0
#define AVR32_ECCHRS_CWPS39_PARSYND39_SIZE                             8
#define AVR32_ECCHRS_CWPS40                                   0x000000f0
#define AVR32_ECCHRS_CWPS40_CODEWORD40                                 0
#define AVR32_ECCHRS_CWPS40_CODEWORD40_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS40_CODEWORD40_OFFSET                          0
#define AVR32_ECCHRS_CWPS40_CODEWORD40_SIZE                            8
#define AVR32_ECCHRS_CWPS40_PARSYND40                                  0
#define AVR32_ECCHRS_CWPS40_PARSYND40_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS40_PARSYND40_OFFSET                           0
#define AVR32_ECCHRS_CWPS40_PARSYND40_SIZE                             8
#define AVR32_ECCHRS_CWPS41                                   0x000000f4
#define AVR32_ECCHRS_CWPS41_CODEWORD41                                 0
#define AVR32_ECCHRS_CWPS41_CODEWORD41_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS41_CODEWORD41_OFFSET                          0
#define AVR32_ECCHRS_CWPS41_CODEWORD41_SIZE                            8
#define AVR32_ECCHRS_CWPS41_PARSYND41                                  0
#define AVR32_ECCHRS_CWPS41_PARSYND41_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS41_PARSYND41_OFFSET                           0
#define AVR32_ECCHRS_CWPS41_PARSYND41_SIZE                             8
#define AVR32_ECCHRS_CWPS42                                   0x000000f8
#define AVR32_ECCHRS_CWPS42_CODEWORD42                                 0
#define AVR32_ECCHRS_CWPS42_CODEWORD42_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS42_CODEWORD42_OFFSET                          0
#define AVR32_ECCHRS_CWPS42_CODEWORD42_SIZE                            8
#define AVR32_ECCHRS_CWPS42_PARSYND42                                  0
#define AVR32_ECCHRS_CWPS42_PARSYND42_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS42_PARSYND42_OFFSET                           0
#define AVR32_ECCHRS_CWPS42_PARSYND42_SIZE                             8
#define AVR32_ECCHRS_CWPS43                                   0x000000fc
#define AVR32_ECCHRS_CWPS43_CODEWORD43                                 0
#define AVR32_ECCHRS_CWPS43_CODEWORD43_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS43_CODEWORD43_OFFSET                          0
#define AVR32_ECCHRS_CWPS43_CODEWORD43_SIZE                            8
#define AVR32_ECCHRS_CWPS43_PARSYND43                                  0
#define AVR32_ECCHRS_CWPS43_PARSYND43_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS43_PARSYND43_OFFSET                           0
#define AVR32_ECCHRS_CWPS43_PARSYND43_SIZE                             8
#define AVR32_ECCHRS_CWPS44                                   0x00000100
#define AVR32_ECCHRS_CWPS44_CODEWORD44                                 0
#define AVR32_ECCHRS_CWPS44_CODEWORD44_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS44_CODEWORD44_OFFSET                          0
#define AVR32_ECCHRS_CWPS44_CODEWORD44_SIZE                            8
#define AVR32_ECCHRS_CWPS44_PARSYND44                                  0
#define AVR32_ECCHRS_CWPS44_PARSYND44_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS44_PARSYND44_OFFSET                           0
#define AVR32_ECCHRS_CWPS44_PARSYND44_SIZE                             8
#define AVR32_ECCHRS_CWPS45                                   0x00000104
#define AVR32_ECCHRS_CWPS45_CODEWORD45                                 0
#define AVR32_ECCHRS_CWPS45_CODEWORD45_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS45_CODEWORD45_OFFSET                          0
#define AVR32_ECCHRS_CWPS45_CODEWORD45_SIZE                            8
#define AVR32_ECCHRS_CWPS45_PARSYND45                                  0
#define AVR32_ECCHRS_CWPS45_PARSYND45_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS45_PARSYND45_OFFSET                           0
#define AVR32_ECCHRS_CWPS45_PARSYND45_SIZE                             8
#define AVR32_ECCHRS_CWPS46                                   0x00000108
#define AVR32_ECCHRS_CWPS46_CODEWORD46                                 0
#define AVR32_ECCHRS_CWPS46_CODEWORD46_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS46_CODEWORD46_OFFSET                          0
#define AVR32_ECCHRS_CWPS46_CODEWORD46_SIZE                            8
#define AVR32_ECCHRS_CWPS46_PARSYND46                                  0
#define AVR32_ECCHRS_CWPS46_PARSYND46_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS46_PARSYND46_OFFSET                           0
#define AVR32_ECCHRS_CWPS46_PARSYND46_SIZE                             8
#define AVR32_ECCHRS_CWPS47                                   0x0000010c
#define AVR32_ECCHRS_CWPS47_CODEWORD47                                 0
#define AVR32_ECCHRS_CWPS47_CODEWORD47_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS47_CODEWORD47_OFFSET                          0
#define AVR32_ECCHRS_CWPS47_CODEWORD47_SIZE                            8
#define AVR32_ECCHRS_CWPS47_PARSYND47                                  0
#define AVR32_ECCHRS_CWPS47_PARSYND47_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS47_PARSYND47_OFFSET                           0
#define AVR32_ECCHRS_CWPS47_PARSYND47_SIZE                             8
#define AVR32_ECCHRS_CWPS48                                   0x00000110
#define AVR32_ECCHRS_CWPS48_CODEWORD48                                 0
#define AVR32_ECCHRS_CWPS48_CODEWORD48_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS48_CODEWORD48_OFFSET                          0
#define AVR32_ECCHRS_CWPS48_CODEWORD48_SIZE                            8
#define AVR32_ECCHRS_CWPS48_PARSYND48                                  0
#define AVR32_ECCHRS_CWPS48_PARSYND48_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS48_PARSYND48_OFFSET                           0
#define AVR32_ECCHRS_CWPS48_PARSYND48_SIZE                             8
#define AVR32_ECCHRS_CWPS49                                   0x00000114
#define AVR32_ECCHRS_CWPS49_CODEWORD49                                 0
#define AVR32_ECCHRS_CWPS49_CODEWORD49_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS49_CODEWORD49_OFFSET                          0
#define AVR32_ECCHRS_CWPS49_CODEWORD49_SIZE                            8
#define AVR32_ECCHRS_CWPS49_PARSYND49                                  0
#define AVR32_ECCHRS_CWPS49_PARSYND49_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS49_PARSYND49_OFFSET                           0
#define AVR32_ECCHRS_CWPS49_PARSYND49_SIZE                             8
#define AVR32_ECCHRS_CWPS50                                   0x00000118
#define AVR32_ECCHRS_CWPS50_CODEWORD50                                 0
#define AVR32_ECCHRS_CWPS50_CODEWORD50_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS50_CODEWORD50_OFFSET                          0
#define AVR32_ECCHRS_CWPS50_CODEWORD50_SIZE                            8
#define AVR32_ECCHRS_CWPS50_PARSYND50                                  0
#define AVR32_ECCHRS_CWPS50_PARSYND50_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS50_PARSYND50_OFFSET                           0
#define AVR32_ECCHRS_CWPS50_PARSYND50_SIZE                             8
#define AVR32_ECCHRS_CWPS51                                   0x0000011c
#define AVR32_ECCHRS_CWPS51_CODEWORD51                                 0
#define AVR32_ECCHRS_CWPS51_CODEWORD51_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS51_CODEWORD51_OFFSET                          0
#define AVR32_ECCHRS_CWPS51_CODEWORD51_SIZE                            8
#define AVR32_ECCHRS_CWPS51_PARSYND51                                  0
#define AVR32_ECCHRS_CWPS51_PARSYND51_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS51_PARSYND51_OFFSET                           0
#define AVR32_ECCHRS_CWPS51_PARSYND51_SIZE                             8
#define AVR32_ECCHRS_CWPS52                                   0x00000120
#define AVR32_ECCHRS_CWPS52_CODEWORD52                                 0
#define AVR32_ECCHRS_CWPS52_CODEWORD52_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS52_CODEWORD52_OFFSET                          0
#define AVR32_ECCHRS_CWPS52_CODEWORD52_SIZE                            8
#define AVR32_ECCHRS_CWPS52_PARSYND52                                  0
#define AVR32_ECCHRS_CWPS52_PARSYND52_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS52_PARSYND52_OFFSET                           0
#define AVR32_ECCHRS_CWPS52_PARSYND52_SIZE                             8
#define AVR32_ECCHRS_CWPS53                                   0x00000124
#define AVR32_ECCHRS_CWPS53_CODEWORD53                                 0
#define AVR32_ECCHRS_CWPS53_CODEWORD53_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS53_CODEWORD53_OFFSET                          0
#define AVR32_ECCHRS_CWPS53_CODEWORD53_SIZE                            8
#define AVR32_ECCHRS_CWPS53_PARSYND53                                  0
#define AVR32_ECCHRS_CWPS53_PARSYND53_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS53_PARSYND53_OFFSET                           0
#define AVR32_ECCHRS_CWPS53_PARSYND53_SIZE                             8
#define AVR32_ECCHRS_CWPS54                                   0x00000128
#define AVR32_ECCHRS_CWPS54_CODEWORD54                                 0
#define AVR32_ECCHRS_CWPS54_CODEWORD54_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS54_CODEWORD54_OFFSET                          0
#define AVR32_ECCHRS_CWPS54_CODEWORD54_SIZE                            8
#define AVR32_ECCHRS_CWPS54_PARSYND54                                  0
#define AVR32_ECCHRS_CWPS54_PARSYND54_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS54_PARSYND54_OFFSET                           0
#define AVR32_ECCHRS_CWPS54_PARSYND54_SIZE                             8
#define AVR32_ECCHRS_CWPS55                                   0x0000012c
#define AVR32_ECCHRS_CWPS55_CODEWORD55                                 0
#define AVR32_ECCHRS_CWPS55_CODEWORD55_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS55_CODEWORD55_OFFSET                          0
#define AVR32_ECCHRS_CWPS55_CODEWORD55_SIZE                            8
#define AVR32_ECCHRS_CWPS55_PARSYND55                                  0
#define AVR32_ECCHRS_CWPS55_PARSYND55_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS55_PARSYND55_OFFSET                           0
#define AVR32_ECCHRS_CWPS55_PARSYND55_SIZE                             8
#define AVR32_ECCHRS_CWPS56                                   0x00000130
#define AVR32_ECCHRS_CWPS56_CODEWORD56                                 0
#define AVR32_ECCHRS_CWPS56_CODEWORD56_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS56_CODEWORD56_OFFSET                          0
#define AVR32_ECCHRS_CWPS56_CODEWORD56_SIZE                            8
#define AVR32_ECCHRS_CWPS56_PARSYND56                                  0
#define AVR32_ECCHRS_CWPS56_PARSYND56_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS56_PARSYND56_OFFSET                           0
#define AVR32_ECCHRS_CWPS56_PARSYND56_SIZE                             8
#define AVR32_ECCHRS_CWPS57                                   0x00000134
#define AVR32_ECCHRS_CWPS57_CODEWORD57                                 0
#define AVR32_ECCHRS_CWPS57_CODEWORD57_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS57_CODEWORD57_OFFSET                          0
#define AVR32_ECCHRS_CWPS57_CODEWORD57_SIZE                            8
#define AVR32_ECCHRS_CWPS57_PARSYND57                                  0
#define AVR32_ECCHRS_CWPS57_PARSYND57_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS57_PARSYND57_OFFSET                           0
#define AVR32_ECCHRS_CWPS57_PARSYND57_SIZE                             8
#define AVR32_ECCHRS_CWPS58                                   0x00000138
#define AVR32_ECCHRS_CWPS58_CODEWORD58                                 0
#define AVR32_ECCHRS_CWPS58_CODEWORD58_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS58_CODEWORD58_OFFSET                          0
#define AVR32_ECCHRS_CWPS58_CODEWORD58_SIZE                            8
#define AVR32_ECCHRS_CWPS58_PARSYND58                                  0
#define AVR32_ECCHRS_CWPS58_PARSYND58_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS58_PARSYND58_OFFSET                           0
#define AVR32_ECCHRS_CWPS58_PARSYND58_SIZE                             8
#define AVR32_ECCHRS_CWPS59                                   0x0000013c
#define AVR32_ECCHRS_CWPS59_CODEWORD59                                 0
#define AVR32_ECCHRS_CWPS59_CODEWORD59_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS59_CODEWORD59_OFFSET                          0
#define AVR32_ECCHRS_CWPS59_CODEWORD59_SIZE                            8
#define AVR32_ECCHRS_CWPS59_PARSYND59                                  0
#define AVR32_ECCHRS_CWPS59_PARSYND59_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS59_PARSYND59_OFFSET                           0
#define AVR32_ECCHRS_CWPS59_PARSYND59_SIZE                             8
#define AVR32_ECCHRS_CWPS60                                   0x00000140
#define AVR32_ECCHRS_CWPS60_CODEWORD60                                 0
#define AVR32_ECCHRS_CWPS60_CODEWORD60_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS60_CODEWORD60_OFFSET                          0
#define AVR32_ECCHRS_CWPS60_CODEWORD60_SIZE                            8
#define AVR32_ECCHRS_CWPS60_PARSYND60                                  0
#define AVR32_ECCHRS_CWPS60_PARSYND60_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS60_PARSYND60_OFFSET                           0
#define AVR32_ECCHRS_CWPS60_PARSYND60_SIZE                             8
#define AVR32_ECCHRS_CWPS61                                   0x00000144
#define AVR32_ECCHRS_CWPS61_CODEWORD61                                 0
#define AVR32_ECCHRS_CWPS61_CODEWORD61_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS61_CODEWORD61_OFFSET                          0
#define AVR32_ECCHRS_CWPS61_CODEWORD61_SIZE                            8
#define AVR32_ECCHRS_CWPS61_PARSYND61                                  0
#define AVR32_ECCHRS_CWPS61_PARSYND61_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS61_PARSYND61_OFFSET                           0
#define AVR32_ECCHRS_CWPS61_PARSYND61_SIZE                             8
#define AVR32_ECCHRS_CWPS62                                   0x00000148
#define AVR32_ECCHRS_CWPS62_CODEWORD62                                 0
#define AVR32_ECCHRS_CWPS62_CODEWORD62_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS62_CODEWORD62_OFFSET                          0
#define AVR32_ECCHRS_CWPS62_CODEWORD62_SIZE                            8
#define AVR32_ECCHRS_CWPS62_PARSYND62                                  0
#define AVR32_ECCHRS_CWPS62_PARSYND62_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS62_PARSYND62_OFFSET                           0
#define AVR32_ECCHRS_CWPS62_PARSYND62_SIZE                             8
#define AVR32_ECCHRS_CWPS63                                   0x0000014c
#define AVR32_ECCHRS_CWPS63_CODEWORD63                                 0
#define AVR32_ECCHRS_CWPS63_CODEWORD63_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS63_CODEWORD63_OFFSET                          0
#define AVR32_ECCHRS_CWPS63_CODEWORD63_SIZE                            8
#define AVR32_ECCHRS_CWPS63_PARSYND63                                  0
#define AVR32_ECCHRS_CWPS63_PARSYND63_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS63_PARSYND63_OFFSET                           0
#define AVR32_ECCHRS_CWPS63_PARSYND63_SIZE                             8
#define AVR32_ECCHRS_CWPS64                                   0x00000150
#define AVR32_ECCHRS_CWPS64_CODEWORD64                                 0
#define AVR32_ECCHRS_CWPS64_CODEWORD64_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS64_CODEWORD64_OFFSET                          0
#define AVR32_ECCHRS_CWPS64_CODEWORD64_SIZE                            8
#define AVR32_ECCHRS_CWPS64_PARSYND64                                  0
#define AVR32_ECCHRS_CWPS64_PARSYND64_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS64_PARSYND64_OFFSET                           0
#define AVR32_ECCHRS_CWPS64_PARSYND64_SIZE                             8
#define AVR32_ECCHRS_CWPS65                                   0x00000154
#define AVR32_ECCHRS_CWPS65_CODEWORD65                                 0
#define AVR32_ECCHRS_CWPS65_CODEWORD65_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS65_CODEWORD65_OFFSET                          0
#define AVR32_ECCHRS_CWPS65_CODEWORD65_SIZE                            8
#define AVR32_ECCHRS_CWPS65_PARSYND65                                  0
#define AVR32_ECCHRS_CWPS65_PARSYND65_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS65_PARSYND65_OFFSET                           0
#define AVR32_ECCHRS_CWPS65_PARSYND65_SIZE                             8
#define AVR32_ECCHRS_CWPS66                                   0x00000158
#define AVR32_ECCHRS_CWPS66_CODEWORD66                                 0
#define AVR32_ECCHRS_CWPS66_CODEWORD66_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS66_CODEWORD66_OFFSET                          0
#define AVR32_ECCHRS_CWPS66_CODEWORD66_SIZE                            8
#define AVR32_ECCHRS_CWPS66_PARSYND66                                  0
#define AVR32_ECCHRS_CWPS66_PARSYND66_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS66_PARSYND66_OFFSET                           0
#define AVR32_ECCHRS_CWPS66_PARSYND66_SIZE                             8
#define AVR32_ECCHRS_CWPS67                                   0x0000015c
#define AVR32_ECCHRS_CWPS67_CODEWORD67                                 0
#define AVR32_ECCHRS_CWPS67_CODEWORD67_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS67_CODEWORD67_OFFSET                          0
#define AVR32_ECCHRS_CWPS67_CODEWORD67_SIZE                            8
#define AVR32_ECCHRS_CWPS67_PARSYND67                                  0
#define AVR32_ECCHRS_CWPS67_PARSYND67_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS67_PARSYND67_OFFSET                           0
#define AVR32_ECCHRS_CWPS67_PARSYND67_SIZE                             8
#define AVR32_ECCHRS_CWPS68                                   0x00000160
#define AVR32_ECCHRS_CWPS68_CODEWORD68                                 0
#define AVR32_ECCHRS_CWPS68_CODEWORD68_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS68_CODEWORD68_OFFSET                          0
#define AVR32_ECCHRS_CWPS68_CODEWORD68_SIZE                            8
#define AVR32_ECCHRS_CWPS68_PARSYND68                                  0
#define AVR32_ECCHRS_CWPS68_PARSYND68_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS68_PARSYND68_OFFSET                           0
#define AVR32_ECCHRS_CWPS68_PARSYND68_SIZE                             8
#define AVR32_ECCHRS_CWPS69                                   0x00000164
#define AVR32_ECCHRS_CWPS69_CODEWORD69                                 0
#define AVR32_ECCHRS_CWPS69_CODEWORD69_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS69_CODEWORD69_OFFSET                          0
#define AVR32_ECCHRS_CWPS69_CODEWORD69_SIZE                            8
#define AVR32_ECCHRS_CWPS69_PARSYND69                                  0
#define AVR32_ECCHRS_CWPS69_PARSYND69_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS69_PARSYND69_OFFSET                           0
#define AVR32_ECCHRS_CWPS69_PARSYND69_SIZE                             8
#define AVR32_ECCHRS_CWPS70                                   0x00000168
#define AVR32_ECCHRS_CWPS70_CODEWORD70                                 0
#define AVR32_ECCHRS_CWPS70_CODEWORD70_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS70_CODEWORD70_OFFSET                          0
#define AVR32_ECCHRS_CWPS70_CODEWORD70_SIZE                            8
#define AVR32_ECCHRS_CWPS70_PARSYND70                                  0
#define AVR32_ECCHRS_CWPS70_PARSYND70_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS70_PARSYND70_OFFSET                           0
#define AVR32_ECCHRS_CWPS70_PARSYND70_SIZE                             8
#define AVR32_ECCHRS_CWPS71                                   0x0000016c
#define AVR32_ECCHRS_CWPS71_CODEWORD71                                 0
#define AVR32_ECCHRS_CWPS71_CODEWORD71_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS71_CODEWORD71_OFFSET                          0
#define AVR32_ECCHRS_CWPS71_CODEWORD71_SIZE                            8
#define AVR32_ECCHRS_CWPS71_PARSYND71                                  0
#define AVR32_ECCHRS_CWPS71_PARSYND71_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS71_PARSYND71_OFFSET                           0
#define AVR32_ECCHRS_CWPS71_PARSYND71_SIZE                             8
#define AVR32_ECCHRS_CWPS72                                   0x00000170
#define AVR32_ECCHRS_CWPS72_CODEWORD72                                 0
#define AVR32_ECCHRS_CWPS72_CODEWORD72_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS72_CODEWORD72_OFFSET                          0
#define AVR32_ECCHRS_CWPS72_CODEWORD72_SIZE                            8
#define AVR32_ECCHRS_CWPS72_PARSYND72                                  0
#define AVR32_ECCHRS_CWPS72_PARSYND72_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS72_PARSYND72_OFFSET                           0
#define AVR32_ECCHRS_CWPS72_PARSYND72_SIZE                             8
#define AVR32_ECCHRS_CWPS73                                   0x00000174
#define AVR32_ECCHRS_CWPS73_CODEWORD73                                 0
#define AVR32_ECCHRS_CWPS73_CODEWORD73_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS73_CODEWORD73_OFFSET                          0
#define AVR32_ECCHRS_CWPS73_CODEWORD73_SIZE                            8
#define AVR32_ECCHRS_CWPS73_PARSYND73                                  0
#define AVR32_ECCHRS_CWPS73_PARSYND73_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS73_PARSYND73_OFFSET                           0
#define AVR32_ECCHRS_CWPS73_PARSYND73_SIZE                             8
#define AVR32_ECCHRS_CWPS74                                   0x00000178
#define AVR32_ECCHRS_CWPS74_CODEWORD74                                 0
#define AVR32_ECCHRS_CWPS74_CODEWORD74_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS74_CODEWORD74_OFFSET                          0
#define AVR32_ECCHRS_CWPS74_CODEWORD74_SIZE                            8
#define AVR32_ECCHRS_CWPS74_PARSYND74                                  0
#define AVR32_ECCHRS_CWPS74_PARSYND74_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS74_PARSYND74_OFFSET                           0
#define AVR32_ECCHRS_CWPS74_PARSYND74_SIZE                             8
#define AVR32_ECCHRS_CWPS75                                   0x0000017c
#define AVR32_ECCHRS_CWPS75_CODEWORD75                                 0
#define AVR32_ECCHRS_CWPS75_CODEWORD75_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS75_CODEWORD75_OFFSET                          0
#define AVR32_ECCHRS_CWPS75_CODEWORD75_SIZE                            8
#define AVR32_ECCHRS_CWPS75_PARSYND75                                  0
#define AVR32_ECCHRS_CWPS75_PARSYND75_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS75_PARSYND75_OFFSET                           0
#define AVR32_ECCHRS_CWPS75_PARSYND75_SIZE                             8
#define AVR32_ECCHRS_CWPS76                                   0x00000180
#define AVR32_ECCHRS_CWPS76_CODEWORD76                                 0
#define AVR32_ECCHRS_CWPS76_CODEWORD76_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS76_CODEWORD76_OFFSET                          0
#define AVR32_ECCHRS_CWPS76_CODEWORD76_SIZE                            8
#define AVR32_ECCHRS_CWPS76_PARSYND76                                  0
#define AVR32_ECCHRS_CWPS76_PARSYND76_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS76_PARSYND76_OFFSET                           0
#define AVR32_ECCHRS_CWPS76_PARSYND76_SIZE                             8
#define AVR32_ECCHRS_CWPS77                                   0x00000184
#define AVR32_ECCHRS_CWPS77_CODEWORD77                                 0
#define AVR32_ECCHRS_CWPS77_CODEWORD77_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS77_CODEWORD77_OFFSET                          0
#define AVR32_ECCHRS_CWPS77_CODEWORD77_SIZE                            8
#define AVR32_ECCHRS_CWPS77_PARSYND77                                  0
#define AVR32_ECCHRS_CWPS77_PARSYND77_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS77_PARSYND77_OFFSET                           0
#define AVR32_ECCHRS_CWPS77_PARSYND77_SIZE                             8
#define AVR32_ECCHRS_CWPS78                                   0x00000188
#define AVR32_ECCHRS_CWPS78_CODEWORD78                                 0
#define AVR32_ECCHRS_CWPS78_CODEWORD78_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS78_CODEWORD78_OFFSET                          0
#define AVR32_ECCHRS_CWPS78_CODEWORD78_SIZE                            8
#define AVR32_ECCHRS_CWPS78_PARSYND78                                  0
#define AVR32_ECCHRS_CWPS78_PARSYND78_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS78_PARSYND78_OFFSET                           0
#define AVR32_ECCHRS_CWPS78_PARSYND78_SIZE                             8
#define AVR32_ECCHRS_CWPS79                                   0x0000018c
#define AVR32_ECCHRS_CWPS79_CODEWORD79                                 0
#define AVR32_ECCHRS_CWPS79_CODEWORD79_MASK                   0x000000ff
#define AVR32_ECCHRS_CWPS79_CODEWORD79_OFFSET                          0
#define AVR32_ECCHRS_CWPS79_CODEWORD79_SIZE                            8
#define AVR32_ECCHRS_CWPS79_PARSYND79                                  0
#define AVR32_ECCHRS_CWPS79_PARSYND79_MASK                    0x000000ff
#define AVR32_ECCHRS_CWPS79_PARSYND79_OFFSET                           0
#define AVR32_ECCHRS_CWPS79_PARSYND79_SIZE                             8
#define AVR32_ECCHRS_ECC1_256B                                0x00000001
#define AVR32_ECCHRS_ECC1_512B                                0x00000002
#define AVR32_ECCHRS_ECC1_PAGE                                0x00000000
#define AVR32_ECCHRS_ECC4_512B                                0x00000004
#define AVR32_ECCHRS_ECCERR0                                           1
#define AVR32_ECCHRS_ECCERR0_MASK                             0x00000002
#define AVR32_ECCHRS_ECCERR0_OFFSET                                    1
#define AVR32_ECCHRS_ECCERR0_SIZE                                      1
#define AVR32_ECCHRS_ECCERR1                                           5
#define AVR32_ECCHRS_ECCERR10                                          9
#define AVR32_ECCHRS_ECCERR10_MASK                            0x00000200
#define AVR32_ECCHRS_ECCERR10_OFFSET                                   9
#define AVR32_ECCHRS_ECCERR10_SIZE                                     1
#define AVR32_ECCHRS_ECCERR11                                         13
#define AVR32_ECCHRS_ECCERR11_MASK                            0x00002000
#define AVR32_ECCHRS_ECCERR11_OFFSET                                  13
#define AVR32_ECCHRS_ECCERR11_SIZE                                     1
#define AVR32_ECCHRS_ECCERR12                                         17
#define AVR32_ECCHRS_ECCERR12_MASK                            0x00020000
#define AVR32_ECCHRS_ECCERR12_OFFSET                                  17
#define AVR32_ECCHRS_ECCERR12_SIZE                                     1
#define AVR32_ECCHRS_ECCERR13                                         21
#define AVR32_ECCHRS_ECCERR13_MASK                            0x00200000
#define AVR32_ECCHRS_ECCERR13_OFFSET                                  21
#define AVR32_ECCHRS_ECCERR13_SIZE                                     1
#define AVR32_ECCHRS_ECCERR14                                         25
#define AVR32_ECCHRS_ECCERR14_MASK                            0x02000000
#define AVR32_ECCHRS_ECCERR14_OFFSET                                  25
#define AVR32_ECCHRS_ECCERR14_SIZE                                     1
#define AVR32_ECCHRS_ECCERR15                                         29
#define AVR32_ECCHRS_ECCERR15_MASK                            0x20000000
#define AVR32_ECCHRS_ECCERR15_OFFSET                                  29
#define AVR32_ECCHRS_ECCERR15_SIZE                                     1
#define AVR32_ECCHRS_ECCERR1_MASK                             0x00000020
#define AVR32_ECCHRS_ECCERR1_OFFSET                                    5
#define AVR32_ECCHRS_ECCERR1_SIZE                                      1
#define AVR32_ECCHRS_ECCERR2                                           9
#define AVR32_ECCHRS_ECCERR2_MASK                             0x00000200
#define AVR32_ECCHRS_ECCERR2_OFFSET                                    9
#define AVR32_ECCHRS_ECCERR2_SIZE                                      1
#define AVR32_ECCHRS_ECCERR3                                          13
#define AVR32_ECCHRS_ECCERR3_MASK                             0x00002000
#define AVR32_ECCHRS_ECCERR3_OFFSET                                   13
#define AVR32_ECCHRS_ECCERR3_SIZE                                      1
#define AVR32_ECCHRS_ECCERR4                                          17
#define AVR32_ECCHRS_ECCERR4_MASK                             0x00020000
#define AVR32_ECCHRS_ECCERR4_OFFSET                                   17
#define AVR32_ECCHRS_ECCERR4_SIZE                                      1
#define AVR32_ECCHRS_ECCERR5                                          21
#define AVR32_ECCHRS_ECCERR5_MASK                             0x00200000
#define AVR32_ECCHRS_ECCERR5_OFFSET                                   21
#define AVR32_ECCHRS_ECCERR5_SIZE                                      1
#define AVR32_ECCHRS_ECCERR6                                          25
#define AVR32_ECCHRS_ECCERR6_MASK                             0x02000000
#define AVR32_ECCHRS_ECCERR6_OFFSET                                   25
#define AVR32_ECCHRS_ECCERR6_SIZE                                      1
#define AVR32_ECCHRS_ECCERR7                                          29
#define AVR32_ECCHRS_ECCERR7_MASK                             0x20000000
#define AVR32_ECCHRS_ECCERR7_OFFSET                                   29
#define AVR32_ECCHRS_ECCERR7_SIZE                                      1
#define AVR32_ECCHRS_ECCERR8                                           1
#define AVR32_ECCHRS_ECCERR8_MASK                             0x00000002
#define AVR32_ECCHRS_ECCERR8_OFFSET                                    1
#define AVR32_ECCHRS_ECCERR8_SIZE                                      1
#define AVR32_ECCHRS_ECCERR9                                           5
#define AVR32_ECCHRS_ECCERR9_MASK                             0x00000020
#define AVR32_ECCHRS_ECCERR9_OFFSET                                    5
#define AVR32_ECCHRS_ECCERR9_SIZE                                      1
#define AVR32_ECCHRS_ENDCOR                                            0
#define AVR32_ECCHRS_ENDCOR_MASK                              0x00000001
#define AVR32_ECCHRS_ENDCOR_OFFSET                                     0
#define AVR32_ECCHRS_ENDCOR_SIZE                                       1
#define AVR32_ECCHRS_FREEZE                                            8
#define AVR32_ECCHRS_FREEZE_MASK                              0x00000100
#define AVR32_ECCHRS_FREEZE_OFFSET                                     8
#define AVR32_ECCHRS_FREEZE_SIZE                                       1
#define AVR32_ECCHRS_MASKDATA0                                         0
#define AVR32_ECCHRS_MASKDATA0_MASK                           0x000003ff
#define AVR32_ECCHRS_MASKDATA0_OFFSET                                  0
#define AVR32_ECCHRS_MASKDATA0_SIZE                                   10
#define AVR32_ECCHRS_MASKDATA1                                         0
#define AVR32_ECCHRS_MASKDATA1_MASK                           0x000003ff
#define AVR32_ECCHRS_MASKDATA1_OFFSET                                  0
#define AVR32_ECCHRS_MASKDATA1_SIZE                                   10
#define AVR32_ECCHRS_MASKDATA2                                         0
#define AVR32_ECCHRS_MASKDATA2_MASK                           0x000003ff
#define AVR32_ECCHRS_MASKDATA2_OFFSET                                  0
#define AVR32_ECCHRS_MASKDATA2_SIZE                                   10
#define AVR32_ECCHRS_MASKDATA3                                         0
#define AVR32_ECCHRS_MASKDATA3_MASK                           0x000003ff
#define AVR32_ECCHRS_MASKDATA3_OFFSET                                  0
#define AVR32_ECCHRS_MASKDATA3_SIZE                                   10
#define AVR32_ECCHRS_MD                                       0x00000004
#define AVR32_ECCHRS_MDATA0                                   0x00000190
#define AVR32_ECCHRS_MDATA0_MASKDATA0                                  0
#define AVR32_ECCHRS_MDATA0_MASKDATA0_MASK                    0x000003ff
#define AVR32_ECCHRS_MDATA0_MASKDATA0_OFFSET                           0
#define AVR32_ECCHRS_MDATA0_MASKDATA0_SIZE                            10
#define AVR32_ECCHRS_MDATA1                                   0x00000194
#define AVR32_ECCHRS_MDATA1_MASKDATA1                                  0
#define AVR32_ECCHRS_MDATA1_MASKDATA1_MASK                    0x000003ff
#define AVR32_ECCHRS_MDATA1_MASKDATA1_OFFSET                           0
#define AVR32_ECCHRS_MDATA1_MASKDATA1_SIZE                            10
#define AVR32_ECCHRS_MDATA2                                   0x00000198
#define AVR32_ECCHRS_MDATA2_MASKDATA2                                  0
#define AVR32_ECCHRS_MDATA2_MASKDATA2_MASK                    0x000003ff
#define AVR32_ECCHRS_MDATA2_MASKDATA2_OFFSET                           0
#define AVR32_ECCHRS_MDATA2_MASKDATA2_SIZE                            10
#define AVR32_ECCHRS_MDATA3                                   0x0000019c
#define AVR32_ECCHRS_MDATA3_MASKDATA3                                  0
#define AVR32_ECCHRS_MDATA3_MASKDATA3_MASK                    0x000003ff
#define AVR32_ECCHRS_MDATA3_MASKDATA3_OFFSET                           0
#define AVR32_ECCHRS_MDATA3_MASKDATA3_SIZE                            10
#define AVR32_ECCHRS_MD_CORRS4                                        10
#define AVR32_ECCHRS_MD_CORRS4_MASK                           0x00000400
#define AVR32_ECCHRS_MD_CORRS4_OFFSET                                 10
#define AVR32_ECCHRS_MD_CORRS4_SIZE                                    1
#define AVR32_ECCHRS_MD_FREEZE                                         8
#define AVR32_ECCHRS_MD_FREEZE_MASK                           0x00000100
#define AVR32_ECCHRS_MD_FREEZE_OFFSET                                  8
#define AVR32_ECCHRS_MD_FREEZE_SIZE                                    1
#define AVR32_ECCHRS_MD_PAGESIZE                                       0
#define AVR32_ECCHRS_MD_PAGESIZE_MASK                         0x00000007
#define AVR32_ECCHRS_MD_PAGESIZE_OFFSET                                0
#define AVR32_ECCHRS_MD_PAGESIZE_SIZE                                  3
#define AVR32_ECCHRS_MD_TYPECORREC                                     4
#define AVR32_ECCHRS_MD_TYPECORREC_ECC1_256B                  0x00000001
#define AVR32_ECCHRS_MD_TYPECORREC_ECC1_512B                  0x00000002
#define AVR32_ECCHRS_MD_TYPECORREC_ECC1_PAGE                  0x00000000
#define AVR32_ECCHRS_MD_TYPECORREC_ECC4_512B                  0x00000004
#define AVR32_ECCHRS_MD_TYPECORREC_MASK                       0x00000070
#define AVR32_ECCHRS_MD_TYPECORREC_OFFSET                              4
#define AVR32_ECCHRS_MD_TYPECORREC_SIZE                                3
#define AVR32_ECCHRS_MULERR                                            3
#define AVR32_ECCHRS_MULERR0                                           2
#define AVR32_ECCHRS_MULERR0_MASK                             0x00000004
#define AVR32_ECCHRS_MULERR0_OFFSET                                    2
#define AVR32_ECCHRS_MULERR0_SIZE                                      1
#define AVR32_ECCHRS_MULERR1                                           6
#define AVR32_ECCHRS_MULERR10                                         10
#define AVR32_ECCHRS_MULERR10_MASK                            0x00000400
#define AVR32_ECCHRS_MULERR10_OFFSET                                  10
#define AVR32_ECCHRS_MULERR10_SIZE                                     1
#define AVR32_ECCHRS_MULERR11                                         14
#define AVR32_ECCHRS_MULERR11_MASK                            0x00004000
#define AVR32_ECCHRS_MULERR11_OFFSET                                  14
#define AVR32_ECCHRS_MULERR11_SIZE                                     1
#define AVR32_ECCHRS_MULERR12                                         18
#define AVR32_ECCHRS_MULERR12_MASK                            0x00040000
#define AVR32_ECCHRS_MULERR12_OFFSET                                  18
#define AVR32_ECCHRS_MULERR12_SIZE                                     1
#define AVR32_ECCHRS_MULERR13                                         22
#define AVR32_ECCHRS_MULERR13_MASK                            0x00400000
#define AVR32_ECCHRS_MULERR13_OFFSET                                  22
#define AVR32_ECCHRS_MULERR13_SIZE                                     1
#define AVR32_ECCHRS_MULERR14                                         26
#define AVR32_ECCHRS_MULERR14_MASK                            0x04000000
#define AVR32_ECCHRS_MULERR14_OFFSET                                  26
#define AVR32_ECCHRS_MULERR14_SIZE                                     1
#define AVR32_ECCHRS_MULERR15                                         30
#define AVR32_ECCHRS_MULERR15_MASK                            0x40000000
#define AVR32_ECCHRS_MULERR15_OFFSET                                  30
#define AVR32_ECCHRS_MULERR15_SIZE                                     1
#define AVR32_ECCHRS_MULERR1_MASK                             0x00000040
#define AVR32_ECCHRS_MULERR1_OFFSET                                    6
#define AVR32_ECCHRS_MULERR1_SIZE                                      1
#define AVR32_ECCHRS_MULERR2                                          10
#define AVR32_ECCHRS_MULERR2_MASK                             0x00000400
#define AVR32_ECCHRS_MULERR2_OFFSET                                   10
#define AVR32_ECCHRS_MULERR2_SIZE                                      1
#define AVR32_ECCHRS_MULERR3                                          14
#define AVR32_ECCHRS_MULERR3_MASK                             0x00004000
#define AVR32_ECCHRS_MULERR3_OFFSET                                   14
#define AVR32_ECCHRS_MULERR3_SIZE                                      1
#define AVR32_ECCHRS_MULERR4                                          18
#define AVR32_ECCHRS_MULERR4_MASK                             0x00040000
#define AVR32_ECCHRS_MULERR4_OFFSET                                   18
#define AVR32_ECCHRS_MULERR4_SIZE                                      1
#define AVR32_ECCHRS_MULERR5                                          22
#define AVR32_ECCHRS_MULERR5_MASK                             0x00400000
#define AVR32_ECCHRS_MULERR5_OFFSET                                   22
#define AVR32_ECCHRS_MULERR5_SIZE                                      1
#define AVR32_ECCHRS_MULERR6                                          26
#define AVR32_ECCHRS_MULERR6_MASK                             0x04000000
#define AVR32_ECCHRS_MULERR6_OFFSET                                   26
#define AVR32_ECCHRS_MULERR6_SIZE                                      1
#define AVR32_ECCHRS_MULERR7                                          30
#define AVR32_ECCHRS_MULERR7_MASK                             0x40000000
#define AVR32_ECCHRS_MULERR7_OFFSET                                   30
#define AVR32_ECCHRS_MULERR7_SIZE                                      1
#define AVR32_ECCHRS_MULERR8                                           2
#define AVR32_ECCHRS_MULERR8_MASK                             0x00000004
#define AVR32_ECCHRS_MULERR8_OFFSET                                    2
#define AVR32_ECCHRS_MULERR8_SIZE                                      1
#define AVR32_ECCHRS_MULERR9                                           6
#define AVR32_ECCHRS_MULERR9_MASK                             0x00000040
#define AVR32_ECCHRS_MULERR9_OFFSET                                    6
#define AVR32_ECCHRS_MULERR9_SIZE                                      1
#define AVR32_ECCHRS_MULERR_MASK                              0x00000008
#define AVR32_ECCHRS_MULERR_OFFSET                                     3
#define AVR32_ECCHRS_MULERR_SIZE                                       1
#define AVR32_ECCHRS_NPARITY                                           0
#define AVR32_ECCHRS_NPARITY0                                         12
#define AVR32_ECCHRS_NPARITY0_MASK                            0x00fff000
#define AVR32_ECCHRS_NPARITY0_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY0_SIZE                                    12
#define AVR32_ECCHRS_NPARITY1                                         12
#define AVR32_ECCHRS_NPARITY10                                        12
#define AVR32_ECCHRS_NPARITY10_MASK                           0x007ff000
#define AVR32_ECCHRS_NPARITY10_OFFSET                                 12
#define AVR32_ECCHRS_NPARITY10_SIZE                                   11
#define AVR32_ECCHRS_NPARITY11                                        12
#define AVR32_ECCHRS_NPARITY11_MASK                           0x007ff000
#define AVR32_ECCHRS_NPARITY11_OFFSET                                 12
#define AVR32_ECCHRS_NPARITY11_SIZE                                   11
#define AVR32_ECCHRS_NPARITY12                                        12
#define AVR32_ECCHRS_NPARITY12_MASK                           0x007ff000
#define AVR32_ECCHRS_NPARITY12_OFFSET                                 12
#define AVR32_ECCHRS_NPARITY12_SIZE                                   11
#define AVR32_ECCHRS_NPARITY13                                        12
#define AVR32_ECCHRS_NPARITY13_MASK                           0x007ff000
#define AVR32_ECCHRS_NPARITY13_OFFSET                                 12
#define AVR32_ECCHRS_NPARITY13_SIZE                                   11
#define AVR32_ECCHRS_NPARITY14                                        12
#define AVR32_ECCHRS_NPARITY14_MASK                           0x007ff000
#define AVR32_ECCHRS_NPARITY14_OFFSET                                 12
#define AVR32_ECCHRS_NPARITY14_SIZE                                   11
#define AVR32_ECCHRS_NPARITY15                                        12
#define AVR32_ECCHRS_NPARITY15_MASK                           0x007ff000
#define AVR32_ECCHRS_NPARITY15_OFFSET                                 12
#define AVR32_ECCHRS_NPARITY15_SIZE                                   11
#define AVR32_ECCHRS_NPARITY1_MASK                            0x00fff000
#define AVR32_ECCHRS_NPARITY1_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY1_SIZE                                    12
#define AVR32_ECCHRS_NPARITY2                                         12
#define AVR32_ECCHRS_NPARITY2_MASK                            0x00fff000
#define AVR32_ECCHRS_NPARITY2_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY2_SIZE                                    12
#define AVR32_ECCHRS_NPARITY3                                         12
#define AVR32_ECCHRS_NPARITY3_MASK                            0x00fff000
#define AVR32_ECCHRS_NPARITY3_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY3_SIZE                                    12
#define AVR32_ECCHRS_NPARITY4                                         12
#define AVR32_ECCHRS_NPARITY4_MASK                            0x00fff000
#define AVR32_ECCHRS_NPARITY4_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY4_SIZE                                    12
#define AVR32_ECCHRS_NPARITY5                                         12
#define AVR32_ECCHRS_NPARITY5_MASK                            0x00fff000
#define AVR32_ECCHRS_NPARITY5_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY5_SIZE                                    12
#define AVR32_ECCHRS_NPARITY6                                         12
#define AVR32_ECCHRS_NPARITY6_MASK                            0x00fff000
#define AVR32_ECCHRS_NPARITY6_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY6_SIZE                                    12
#define AVR32_ECCHRS_NPARITY7                                         12
#define AVR32_ECCHRS_NPARITY7_MASK                            0x00fff000
#define AVR32_ECCHRS_NPARITY7_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY7_SIZE                                    12
#define AVR32_ECCHRS_NPARITY8                                         12
#define AVR32_ECCHRS_NPARITY8_MASK                            0x007ff000
#define AVR32_ECCHRS_NPARITY8_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY8_SIZE                                    11
#define AVR32_ECCHRS_NPARITY9                                         12
#define AVR32_ECCHRS_NPARITY9_MASK                            0x007ff000
#define AVR32_ECCHRS_NPARITY9_OFFSET                                  12
#define AVR32_ECCHRS_NPARITY9_SIZE                                    11
#define AVR32_ECCHRS_NPARITY_MASK                             0x0000ffff
#define AVR32_ECCHRS_NPARITY_OFFSET                                    0
#define AVR32_ECCHRS_NPARITY_SIZE                                     16
#define AVR32_ECCHRS_OFFSET0                                           0
#define AVR32_ECCHRS_OFFSET0_MASK                             0x000003ff
#define AVR32_ECCHRS_OFFSET0_OFFSET                                    0
#define AVR32_ECCHRS_OFFSET0_SIZE                                     10
#define AVR32_ECCHRS_OFFSET1                                           0
#define AVR32_ECCHRS_OFFSET1_MASK                             0x000003ff
#define AVR32_ECCHRS_OFFSET1_OFFSET                                    0
#define AVR32_ECCHRS_OFFSET1_SIZE                                     10
#define AVR32_ECCHRS_OFFSET2                                           0
#define AVR32_ECCHRS_OFFSET2_MASK                             0x000003ff
#define AVR32_ECCHRS_OFFSET2_OFFSET                                    0
#define AVR32_ECCHRS_OFFSET2_SIZE                                     10
#define AVR32_ECCHRS_OFFSET3                                           0
#define AVR32_ECCHRS_OFFSET3_MASK                             0x000003ff
#define AVR32_ECCHRS_OFFSET3_OFFSET                                    0
#define AVR32_ECCHRS_OFFSET3_SIZE                                     10
#define AVR32_ECCHRS_PAGESIZE                                          0
#define AVR32_ECCHRS_PAGESIZE_MASK                            0x00000007
#define AVR32_ECCHRS_PAGESIZE_OFFSET                                   0
#define AVR32_ECCHRS_PAGESIZE_SIZE                                     3
#define AVR32_ECCHRS_PARSYND00                                         0
#define AVR32_ECCHRS_PARSYND00_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND00_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND00_SIZE                                    8
#define AVR32_ECCHRS_PARSYND01                                         0
#define AVR32_ECCHRS_PARSYND01_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND01_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND01_SIZE                                    8
#define AVR32_ECCHRS_PARSYND02                                         0
#define AVR32_ECCHRS_PARSYND02_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND02_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND02_SIZE                                    8
#define AVR32_ECCHRS_PARSYND03                                         0
#define AVR32_ECCHRS_PARSYND03_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND03_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND03_SIZE                                    8
#define AVR32_ECCHRS_PARSYND04                                         0
#define AVR32_ECCHRS_PARSYND04_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND04_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND04_SIZE                                    8
#define AVR32_ECCHRS_PARSYND05                                         0
#define AVR32_ECCHRS_PARSYND05_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND05_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND05_SIZE                                    8
#define AVR32_ECCHRS_PARSYND06                                         0
#define AVR32_ECCHRS_PARSYND06_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND06_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND06_SIZE                                    8
#define AVR32_ECCHRS_PARSYND07                                         0
#define AVR32_ECCHRS_PARSYND07_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND07_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND07_SIZE                                    8
#define AVR32_ECCHRS_PARSYND08                                         0
#define AVR32_ECCHRS_PARSYND08_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND08_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND08_SIZE                                    8
#define AVR32_ECCHRS_PARSYND09                                         0
#define AVR32_ECCHRS_PARSYND09_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND09_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND09_SIZE                                    8
#define AVR32_ECCHRS_PARSYND10                                         0
#define AVR32_ECCHRS_PARSYND10_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND10_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND10_SIZE                                    8
#define AVR32_ECCHRS_PARSYND11                                         0
#define AVR32_ECCHRS_PARSYND11_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND11_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND11_SIZE                                    8
#define AVR32_ECCHRS_PARSYND12                                         0
#define AVR32_ECCHRS_PARSYND12_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND12_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND12_SIZE                                    8
#define AVR32_ECCHRS_PARSYND13                                         0
#define AVR32_ECCHRS_PARSYND13_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND13_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND13_SIZE                                    8
#define AVR32_ECCHRS_PARSYND14                                         0
#define AVR32_ECCHRS_PARSYND14_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND14_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND14_SIZE                                    8
#define AVR32_ECCHRS_PARSYND15                                         0
#define AVR32_ECCHRS_PARSYND15_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND15_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND15_SIZE                                    8
#define AVR32_ECCHRS_PARSYND16                                         0
#define AVR32_ECCHRS_PARSYND16_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND16_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND16_SIZE                                    8
#define AVR32_ECCHRS_PARSYND17                                         0
#define AVR32_ECCHRS_PARSYND17_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND17_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND17_SIZE                                    8
#define AVR32_ECCHRS_PARSYND18                                         0
#define AVR32_ECCHRS_PARSYND18_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND18_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND18_SIZE                                    8
#define AVR32_ECCHRS_PARSYND19                                         0
#define AVR32_ECCHRS_PARSYND19_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND19_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND19_SIZE                                    8
#define AVR32_ECCHRS_PARSYND20                                         0
#define AVR32_ECCHRS_PARSYND20_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND20_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND20_SIZE                                    8
#define AVR32_ECCHRS_PARSYND21                                         0
#define AVR32_ECCHRS_PARSYND21_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND21_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND21_SIZE                                    8
#define AVR32_ECCHRS_PARSYND22                                         0
#define AVR32_ECCHRS_PARSYND22_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND22_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND22_SIZE                                    8
#define AVR32_ECCHRS_PARSYND23                                         0
#define AVR32_ECCHRS_PARSYND23_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND23_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND23_SIZE                                    8
#define AVR32_ECCHRS_PARSYND24                                         0
#define AVR32_ECCHRS_PARSYND24_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND24_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND24_SIZE                                    8
#define AVR32_ECCHRS_PARSYND25                                         0
#define AVR32_ECCHRS_PARSYND25_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND25_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND25_SIZE                                    8
#define AVR32_ECCHRS_PARSYND26                                         0
#define AVR32_ECCHRS_PARSYND26_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND26_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND26_SIZE                                    8
#define AVR32_ECCHRS_PARSYND27                                         0
#define AVR32_ECCHRS_PARSYND27_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND27_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND27_SIZE                                    8
#define AVR32_ECCHRS_PARSYND28                                         0
#define AVR32_ECCHRS_PARSYND28_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND28_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND28_SIZE                                    8
#define AVR32_ECCHRS_PARSYND29                                         0
#define AVR32_ECCHRS_PARSYND29_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND29_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND29_SIZE                                    8
#define AVR32_ECCHRS_PARSYND30                                         0
#define AVR32_ECCHRS_PARSYND30_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND30_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND30_SIZE                                    8
#define AVR32_ECCHRS_PARSYND31                                         0
#define AVR32_ECCHRS_PARSYND31_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND31_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND31_SIZE                                    8
#define AVR32_ECCHRS_PARSYND32                                         0
#define AVR32_ECCHRS_PARSYND32_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND32_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND32_SIZE                                    8
#define AVR32_ECCHRS_PARSYND33                                         0
#define AVR32_ECCHRS_PARSYND33_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND33_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND33_SIZE                                    8
#define AVR32_ECCHRS_PARSYND34                                         0
#define AVR32_ECCHRS_PARSYND34_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND34_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND34_SIZE                                    8
#define AVR32_ECCHRS_PARSYND35                                         0
#define AVR32_ECCHRS_PARSYND35_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND35_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND35_SIZE                                    8
#define AVR32_ECCHRS_PARSYND36                                         0
#define AVR32_ECCHRS_PARSYND36_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND36_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND36_SIZE                                    8
#define AVR32_ECCHRS_PARSYND37                                         0
#define AVR32_ECCHRS_PARSYND37_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND37_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND37_SIZE                                    8
#define AVR32_ECCHRS_PARSYND38                                         0
#define AVR32_ECCHRS_PARSYND38_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND38_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND38_SIZE                                    8
#define AVR32_ECCHRS_PARSYND39                                         0
#define AVR32_ECCHRS_PARSYND39_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND39_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND39_SIZE                                    8
#define AVR32_ECCHRS_PARSYND40                                         0
#define AVR32_ECCHRS_PARSYND40_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND40_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND40_SIZE                                    8
#define AVR32_ECCHRS_PARSYND41                                         0
#define AVR32_ECCHRS_PARSYND41_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND41_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND41_SIZE                                    8
#define AVR32_ECCHRS_PARSYND42                                         0
#define AVR32_ECCHRS_PARSYND42_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND42_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND42_SIZE                                    8
#define AVR32_ECCHRS_PARSYND43                                         0
#define AVR32_ECCHRS_PARSYND43_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND43_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND43_SIZE                                    8
#define AVR32_ECCHRS_PARSYND44                                         0
#define AVR32_ECCHRS_PARSYND44_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND44_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND44_SIZE                                    8
#define AVR32_ECCHRS_PARSYND45                                         0
#define AVR32_ECCHRS_PARSYND45_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND45_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND45_SIZE                                    8
#define AVR32_ECCHRS_PARSYND46                                         0
#define AVR32_ECCHRS_PARSYND46_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND46_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND46_SIZE                                    8
#define AVR32_ECCHRS_PARSYND47                                         0
#define AVR32_ECCHRS_PARSYND47_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND47_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND47_SIZE                                    8
#define AVR32_ECCHRS_PARSYND48                                         0
#define AVR32_ECCHRS_PARSYND48_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND48_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND48_SIZE                                    8
#define AVR32_ECCHRS_PARSYND49                                         0
#define AVR32_ECCHRS_PARSYND49_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND49_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND49_SIZE                                    8
#define AVR32_ECCHRS_PARSYND50                                         0
#define AVR32_ECCHRS_PARSYND50_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND50_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND50_SIZE                                    8
#define AVR32_ECCHRS_PARSYND51                                         0
#define AVR32_ECCHRS_PARSYND51_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND51_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND51_SIZE                                    8
#define AVR32_ECCHRS_PARSYND52                                         0
#define AVR32_ECCHRS_PARSYND52_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND52_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND52_SIZE                                    8
#define AVR32_ECCHRS_PARSYND53                                         0
#define AVR32_ECCHRS_PARSYND53_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND53_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND53_SIZE                                    8
#define AVR32_ECCHRS_PARSYND54                                         0
#define AVR32_ECCHRS_PARSYND54_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND54_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND54_SIZE                                    8
#define AVR32_ECCHRS_PARSYND55                                         0
#define AVR32_ECCHRS_PARSYND55_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND55_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND55_SIZE                                    8
#define AVR32_ECCHRS_PARSYND56                                         0
#define AVR32_ECCHRS_PARSYND56_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND56_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND56_SIZE                                    8
#define AVR32_ECCHRS_PARSYND57                                         0
#define AVR32_ECCHRS_PARSYND57_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND57_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND57_SIZE                                    8
#define AVR32_ECCHRS_PARSYND58                                         0
#define AVR32_ECCHRS_PARSYND58_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND58_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND58_SIZE                                    8
#define AVR32_ECCHRS_PARSYND59                                         0
#define AVR32_ECCHRS_PARSYND59_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND59_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND59_SIZE                                    8
#define AVR32_ECCHRS_PARSYND60                                         0
#define AVR32_ECCHRS_PARSYND60_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND60_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND60_SIZE                                    8
#define AVR32_ECCHRS_PARSYND61                                         0
#define AVR32_ECCHRS_PARSYND61_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND61_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND61_SIZE                                    8
#define AVR32_ECCHRS_PARSYND62                                         0
#define AVR32_ECCHRS_PARSYND62_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND62_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND62_SIZE                                    8
#define AVR32_ECCHRS_PARSYND63                                         0
#define AVR32_ECCHRS_PARSYND63_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND63_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND63_SIZE                                    8
#define AVR32_ECCHRS_PARSYND64                                         0
#define AVR32_ECCHRS_PARSYND64_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND64_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND64_SIZE                                    8
#define AVR32_ECCHRS_PARSYND65                                         0
#define AVR32_ECCHRS_PARSYND65_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND65_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND65_SIZE                                    8
#define AVR32_ECCHRS_PARSYND66                                         0
#define AVR32_ECCHRS_PARSYND66_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND66_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND66_SIZE                                    8
#define AVR32_ECCHRS_PARSYND67                                         0
#define AVR32_ECCHRS_PARSYND67_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND67_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND67_SIZE                                    8
#define AVR32_ECCHRS_PARSYND68                                         0
#define AVR32_ECCHRS_PARSYND68_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND68_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND68_SIZE                                    8
#define AVR32_ECCHRS_PARSYND69                                         0
#define AVR32_ECCHRS_PARSYND69_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND69_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND69_SIZE                                    8
#define AVR32_ECCHRS_PARSYND70                                         0
#define AVR32_ECCHRS_PARSYND70_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND70_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND70_SIZE                                    8
#define AVR32_ECCHRS_PARSYND71                                         0
#define AVR32_ECCHRS_PARSYND71_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND71_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND71_SIZE                                    8
#define AVR32_ECCHRS_PARSYND72                                         0
#define AVR32_ECCHRS_PARSYND72_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND72_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND72_SIZE                                    8
#define AVR32_ECCHRS_PARSYND73                                         0
#define AVR32_ECCHRS_PARSYND73_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND73_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND73_SIZE                                    8
#define AVR32_ECCHRS_PARSYND74                                         0
#define AVR32_ECCHRS_PARSYND74_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND74_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND74_SIZE                                    8
#define AVR32_ECCHRS_PARSYND75                                         0
#define AVR32_ECCHRS_PARSYND75_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND75_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND75_SIZE                                    8
#define AVR32_ECCHRS_PARSYND76                                         0
#define AVR32_ECCHRS_PARSYND76_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND76_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND76_SIZE                                    8
#define AVR32_ECCHRS_PARSYND77                                         0
#define AVR32_ECCHRS_PARSYND77_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND77_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND77_SIZE                                    8
#define AVR32_ECCHRS_PARSYND78                                         0
#define AVR32_ECCHRS_PARSYND78_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND78_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND78_SIZE                                    8
#define AVR32_ECCHRS_PARSYND79                                         0
#define AVR32_ECCHRS_PARSYND79_MASK                           0x000000ff
#define AVR32_ECCHRS_PARSYND79_OFFSET                                  0
#define AVR32_ECCHRS_PARSYND79_SIZE                                    8
#define AVR32_ECCHRS_PR0                                      0x0000000c
#define AVR32_ECCHRS_PR0_BITADDR                                       0
#define AVR32_ECCHRS_PR0_BITADDR0                                      0
#define AVR32_ECCHRS_PR0_BITADDR0_MASK                        0x00000007
#define AVR32_ECCHRS_PR0_BITADDR0_OFFSET                               0
#define AVR32_ECCHRS_PR0_BITADDR0_SIZE                                 3
#define AVR32_ECCHRS_PR0_BITADDR_MASK                         0x0000000f
#define AVR32_ECCHRS_PR0_BITADDR_OFFSET                                0
#define AVR32_ECCHRS_PR0_BITADDR_SIZE                                  4
#define AVR32_ECCHRS_PR0_NPARITY0                                     12
#define AVR32_ECCHRS_PR0_NPARITY0_MASK                        0x00fff000
#define AVR32_ECCHRS_PR0_NPARITY0_OFFSET                              12
#define AVR32_ECCHRS_PR0_NPARITY0_SIZE                                12
#define AVR32_ECCHRS_PR0_WORDADDR                                      4
#define AVR32_ECCHRS_PR0_WORDADDR0                                     3
#define AVR32_ECCHRS_PR0_WORDADDR0_MASK                       0x00000ff8
#define AVR32_ECCHRS_PR0_WORDADDR0_OFFSET                              3
#define AVR32_ECCHRS_PR0_WORDADDR0_SIZE                                9
#define AVR32_ECCHRS_PR0_WORDADDR_MASK                        0x0000fff0
#define AVR32_ECCHRS_PR0_WORDADDR_OFFSET                               4
#define AVR32_ECCHRS_PR0_WORDADDR_SIZE                                12
#define AVR32_ECCHRS_PR1                                      0x00000010
#define AVR32_ECCHRS_PR10                                     0x00000038
#define AVR32_ECCHRS_PR10_BITADDR10                                    0
#define AVR32_ECCHRS_PR10_BITADDR10_MASK                      0x00000007
#define AVR32_ECCHRS_PR10_BITADDR10_OFFSET                             0
#define AVR32_ECCHRS_PR10_BITADDR10_SIZE                               3
#define AVR32_ECCHRS_PR10_NPARITY10                                   12
#define AVR32_ECCHRS_PR10_NPARITY10_MASK                      0x007ff000
#define AVR32_ECCHRS_PR10_NPARITY10_OFFSET                            12
#define AVR32_ECCHRS_PR10_NPARITY10_SIZE                              11
#define AVR32_ECCHRS_PR10_WORDADDR10                                   3
#define AVR32_ECCHRS_PR10_WORDADDR10_MASK                     0x000007f8
#define AVR32_ECCHRS_PR10_WORDADDR10_OFFSET                            3
#define AVR32_ECCHRS_PR10_WORDADDR10_SIZE                              8
#define AVR32_ECCHRS_PR11                                     0x0000003c
#define AVR32_ECCHRS_PR11_BITADDR11                                    0
#define AVR32_ECCHRS_PR11_BITADDR11_MASK                      0x00000007
#define AVR32_ECCHRS_PR11_BITADDR11_OFFSET                             0
#define AVR32_ECCHRS_PR11_BITADDR11_SIZE                               3
#define AVR32_ECCHRS_PR11_NPARITY11                                   12
#define AVR32_ECCHRS_PR11_NPARITY11_MASK                      0x007ff000
#define AVR32_ECCHRS_PR11_NPARITY11_OFFSET                            12
#define AVR32_ECCHRS_PR11_NPARITY11_SIZE                              11
#define AVR32_ECCHRS_PR11_WORDADDR11                                   3
#define AVR32_ECCHRS_PR11_WORDADDR11_MASK                     0x000007f8
#define AVR32_ECCHRS_PR11_WORDADDR11_OFFSET                            3
#define AVR32_ECCHRS_PR11_WORDADDR11_SIZE                              8
#define AVR32_ECCHRS_PR12                                     0x00000040
#define AVR32_ECCHRS_PR12_BITADDR12                                    0
#define AVR32_ECCHRS_PR12_BITADDR12_MASK                      0x00000007
#define AVR32_ECCHRS_PR12_BITADDR12_OFFSET                             0
#define AVR32_ECCHRS_PR12_BITADDR12_SIZE                               3
#define AVR32_ECCHRS_PR12_NPARITY12                                   12
#define AVR32_ECCHRS_PR12_NPARITY12_MASK                      0x007ff000
#define AVR32_ECCHRS_PR12_NPARITY12_OFFSET                            12
#define AVR32_ECCHRS_PR12_NPARITY12_SIZE                              11
#define AVR32_ECCHRS_PR12_WORDADDR12                                   3
#define AVR32_ECCHRS_PR12_WORDADDR12_MASK                     0x000007f8
#define AVR32_ECCHRS_PR12_WORDADDR12_OFFSET                            3
#define AVR32_ECCHRS_PR12_WORDADDR12_SIZE                              8
#define AVR32_ECCHRS_PR13                                     0x00000044
#define AVR32_ECCHRS_PR13_BITADDR13                                    0
#define AVR32_ECCHRS_PR13_BITADDR13_MASK                      0x00000007
#define AVR32_ECCHRS_PR13_BITADDR13_OFFSET                             0
#define AVR32_ECCHRS_PR13_BITADDR13_SIZE                               3
#define AVR32_ECCHRS_PR13_NPARITY13                                   12
#define AVR32_ECCHRS_PR13_NPARITY13_MASK                      0x007ff000
#define AVR32_ECCHRS_PR13_NPARITY13_OFFSET                            12
#define AVR32_ECCHRS_PR13_NPARITY13_SIZE                              11
#define AVR32_ECCHRS_PR13_WORDADDR13                                   3
#define AVR32_ECCHRS_PR13_WORDADDR13_MASK                     0x000007f8
#define AVR32_ECCHRS_PR13_WORDADDR13_OFFSET                            3
#define AVR32_ECCHRS_PR13_WORDADDR13_SIZE                              8
#define AVR32_ECCHRS_PR14                                     0x00000048
#define AVR32_ECCHRS_PR14_BITADDR14                                    0
#define AVR32_ECCHRS_PR14_BITADDR14_MASK                      0x00000007
#define AVR32_ECCHRS_PR14_BITADDR14_OFFSET                             0
#define AVR32_ECCHRS_PR14_BITADDR14_SIZE                               3
#define AVR32_ECCHRS_PR14_NPARITY14                                   12
#define AVR32_ECCHRS_PR14_NPARITY14_MASK                      0x007ff000
#define AVR32_ECCHRS_PR14_NPARITY14_OFFSET                            12
#define AVR32_ECCHRS_PR14_NPARITY14_SIZE                              11
#define AVR32_ECCHRS_PR14_WORDADDR14                                   3
#define AVR32_ECCHRS_PR14_WORDADDR14_MASK                     0x000007f8
#define AVR32_ECCHRS_PR14_WORDADDR14_OFFSET                            3
#define AVR32_ECCHRS_PR14_WORDADDR14_SIZE                              8
#define AVR32_ECCHRS_PR15                                     0x0000004c
#define AVR32_ECCHRS_PR15_BITADDR15                                    0
#define AVR32_ECCHRS_PR15_BITADDR15_MASK                      0x00000007
#define AVR32_ECCHRS_PR15_BITADDR15_OFFSET                             0
#define AVR32_ECCHRS_PR15_BITADDR15_SIZE                               3
#define AVR32_ECCHRS_PR15_NPARITY15                                   12
#define AVR32_ECCHRS_PR15_NPARITY15_MASK                      0x007ff000
#define AVR32_ECCHRS_PR15_NPARITY15_OFFSET                            12
#define AVR32_ECCHRS_PR15_NPARITY15_SIZE                              11
#define AVR32_ECCHRS_PR15_WORDADDR15                                   3
#define AVR32_ECCHRS_PR15_WORDADDR15_MASK                     0x000007f8
#define AVR32_ECCHRS_PR15_WORDADDR15_OFFSET                            3
#define AVR32_ECCHRS_PR15_WORDADDR15_SIZE                              8
#define AVR32_ECCHRS_PR1_BITADDR1                                      0
#define AVR32_ECCHRS_PR1_BITADDR1_MASK                        0x00000007
#define AVR32_ECCHRS_PR1_BITADDR1_OFFSET                               0
#define AVR32_ECCHRS_PR1_BITADDR1_SIZE                                 3
#define AVR32_ECCHRS_PR1_NPARITY                                       0
#define AVR32_ECCHRS_PR1_NPARITY1                                     12
#define AVR32_ECCHRS_PR1_NPARITY1_MASK                        0x00fff000
#define AVR32_ECCHRS_PR1_NPARITY1_OFFSET                              12
#define AVR32_ECCHRS_PR1_NPARITY1_SIZE                                12
#define AVR32_ECCHRS_PR1_NPARITY_MASK                         0x0000ffff
#define AVR32_ECCHRS_PR1_NPARITY_OFFSET                                0
#define AVR32_ECCHRS_PR1_NPARITY_SIZE                                 16
#define AVR32_ECCHRS_PR1_WORDADDR1                                     3
#define AVR32_ECCHRS_PR1_WORDADDR1_MASK                       0x00000ff8
#define AVR32_ECCHRS_PR1_WORDADDR1_OFFSET                              3
#define AVR32_ECCHRS_PR1_WORDADDR1_SIZE                                9
#define AVR32_ECCHRS_PR2                                      0x00000018
#define AVR32_ECCHRS_PR2_BITADDR2                                      0
#define AVR32_ECCHRS_PR2_BITADDR2_MASK                        0x00000007
#define AVR32_ECCHRS_PR2_BITADDR2_OFFSET                               0
#define AVR32_ECCHRS_PR2_BITADDR2_SIZE                                 3
#define AVR32_ECCHRS_PR2_NPARITY2                                     12
#define AVR32_ECCHRS_PR2_NPARITY2_MASK                        0x00fff000
#define AVR32_ECCHRS_PR2_NPARITY2_OFFSET                              12
#define AVR32_ECCHRS_PR2_NPARITY2_SIZE                                12
#define AVR32_ECCHRS_PR2_WORDADDR2                                     3
#define AVR32_ECCHRS_PR2_WORDADDR2_MASK                       0x00000ff8
#define AVR32_ECCHRS_PR2_WORDADDR2_OFFSET                              3
#define AVR32_ECCHRS_PR2_WORDADDR2_SIZE                                9
#define AVR32_ECCHRS_PR3                                      0x0000001c
#define AVR32_ECCHRS_PR3_BITADDR3                                      0
#define AVR32_ECCHRS_PR3_BITADDR3_MASK                        0x00000007
#define AVR32_ECCHRS_PR3_BITADDR3_OFFSET                               0
#define AVR32_ECCHRS_PR3_BITADDR3_SIZE                                 3
#define AVR32_ECCHRS_PR3_NPARITY3                                     12
#define AVR32_ECCHRS_PR3_NPARITY3_MASK                        0x00fff000
#define AVR32_ECCHRS_PR3_NPARITY3_OFFSET                              12
#define AVR32_ECCHRS_PR3_NPARITY3_SIZE                                12
#define AVR32_ECCHRS_PR3_WORDADDR3                                     3
#define AVR32_ECCHRS_PR3_WORDADDR3_MASK                       0x00000ff8
#define AVR32_ECCHRS_PR3_WORDADDR3_OFFSET                              3
#define AVR32_ECCHRS_PR3_WORDADDR3_SIZE                                9
#define AVR32_ECCHRS_PR4                                      0x00000020
#define AVR32_ECCHRS_PR4_BITADDR4                                      0
#define AVR32_ECCHRS_PR4_BITADDR4_MASK                        0x00000007
#define AVR32_ECCHRS_PR4_BITADDR4_OFFSET                               0
#define AVR32_ECCHRS_PR4_BITADDR4_SIZE                                 3
#define AVR32_ECCHRS_PR4_NPARITY4                                     12
#define AVR32_ECCHRS_PR4_NPARITY4_MASK                        0x00fff000
#define AVR32_ECCHRS_PR4_NPARITY4_OFFSET                              12
#define AVR32_ECCHRS_PR4_NPARITY4_SIZE                                12
#define AVR32_ECCHRS_PR4_WORDADDR4                                     3
#define AVR32_ECCHRS_PR4_WORDADDR4_MASK                       0x00000ff8
#define AVR32_ECCHRS_PR4_WORDADDR4_OFFSET                              3
#define AVR32_ECCHRS_PR4_WORDADDR4_SIZE                                9
#define AVR32_ECCHRS_PR5                                      0x00000024
#define AVR32_ECCHRS_PR5_BITADDR5                                      0
#define AVR32_ECCHRS_PR5_BITADDR5_MASK                        0x00000007
#define AVR32_ECCHRS_PR5_BITADDR5_OFFSET                               0
#define AVR32_ECCHRS_PR5_BITADDR5_SIZE                                 3
#define AVR32_ECCHRS_PR5_NPARITY5                                     12
#define AVR32_ECCHRS_PR5_NPARITY5_MASK                        0x00fff000
#define AVR32_ECCHRS_PR5_NPARITY5_OFFSET                              12
#define AVR32_ECCHRS_PR5_NPARITY5_SIZE                                12
#define AVR32_ECCHRS_PR5_WORDADDR5                                     3
#define AVR32_ECCHRS_PR5_WORDADDR5_MASK                       0x00000ff8
#define AVR32_ECCHRS_PR5_WORDADDR5_OFFSET                              3
#define AVR32_ECCHRS_PR5_WORDADDR5_SIZE                                9
#define AVR32_ECCHRS_PR6                                      0x00000028
#define AVR32_ECCHRS_PR6_BITADDR6                                      0
#define AVR32_ECCHRS_PR6_BITADDR6_MASK                        0x00000007
#define AVR32_ECCHRS_PR6_BITADDR6_OFFSET                               0
#define AVR32_ECCHRS_PR6_BITADDR6_SIZE                                 3
#define AVR32_ECCHRS_PR6_NPARITY6                                     12
#define AVR32_ECCHRS_PR6_NPARITY6_MASK                        0x00fff000
#define AVR32_ECCHRS_PR6_NPARITY6_OFFSET                              12
#define AVR32_ECCHRS_PR6_NPARITY6_SIZE                                12
#define AVR32_ECCHRS_PR6_WORDADDR6                                     3
#define AVR32_ECCHRS_PR6_WORDADDR6_MASK                       0x00000ff8
#define AVR32_ECCHRS_PR6_WORDADDR6_OFFSET                              3
#define AVR32_ECCHRS_PR6_WORDADDR6_SIZE                                9
#define AVR32_ECCHRS_PR7                                      0x0000002c
#define AVR32_ECCHRS_PR7_BITADDR7                                      0
#define AVR32_ECCHRS_PR7_BITADDR7_MASK                        0x00000007
#define AVR32_ECCHRS_PR7_BITADDR7_OFFSET                               0
#define AVR32_ECCHRS_PR7_BITADDR7_SIZE                                 3
#define AVR32_ECCHRS_PR7_NPARITY7                                     12
#define AVR32_ECCHRS_PR7_NPARITY7_MASK                        0x00fff000
#define AVR32_ECCHRS_PR7_NPARITY7_OFFSET                              12
#define AVR32_ECCHRS_PR7_NPARITY7_SIZE                                12
#define AVR32_ECCHRS_PR7_WORDADDR7                                     3
#define AVR32_ECCHRS_PR7_WORDADDR7_MASK                       0x00000ff8
#define AVR32_ECCHRS_PR7_WORDADDR7_OFFSET                              3
#define AVR32_ECCHRS_PR7_WORDADDR7_SIZE                                9
#define AVR32_ECCHRS_PR8                                      0x00000030
#define AVR32_ECCHRS_PR8_BITADDR8                                      0
#define AVR32_ECCHRS_PR8_BITADDR8_MASK                        0x00000007
#define AVR32_ECCHRS_PR8_BITADDR8_OFFSET                               0
#define AVR32_ECCHRS_PR8_BITADDR8_SIZE                                 3
#define AVR32_ECCHRS_PR8_NPARITY8                                     12
#define AVR32_ECCHRS_PR8_NPARITY8_MASK                        0x007ff000
#define AVR32_ECCHRS_PR8_NPARITY8_OFFSET                              12
#define AVR32_ECCHRS_PR8_NPARITY8_SIZE                                11
#define AVR32_ECCHRS_PR8_WORDADDR8                                     3
#define AVR32_ECCHRS_PR8_WORDADDR8_MASK                       0x000007f8
#define AVR32_ECCHRS_PR8_WORDADDR8_OFFSET                              3
#define AVR32_ECCHRS_PR8_WORDADDR8_SIZE                                8
#define AVR32_ECCHRS_PR9                                      0x00000034
#define AVR32_ECCHRS_PR9_BITADDR9                                      0
#define AVR32_ECCHRS_PR9_BITADDR9_MASK                        0x00000007
#define AVR32_ECCHRS_PR9_BITADDR9_OFFSET                               0
#define AVR32_ECCHRS_PR9_BITADDR9_SIZE                                 3
#define AVR32_ECCHRS_PR9_NPARITY9                                     12
#define AVR32_ECCHRS_PR9_NPARITY9_MASK                        0x007ff000
#define AVR32_ECCHRS_PR9_NPARITY9_OFFSET                              12
#define AVR32_ECCHRS_PR9_NPARITY9_SIZE                                11
#define AVR32_ECCHRS_PR9_WORDADDR9                                     3
#define AVR32_ECCHRS_PR9_WORDADDR9_MASK                       0x000007f8
#define AVR32_ECCHRS_PR9_WORDADDR9_OFFSET                              3
#define AVR32_ECCHRS_PR9_WORDADDR9_SIZE                                8
#define AVR32_ECCHRS_RECERR                                            0
#define AVR32_ECCHRS_RECERR0                                           0
#define AVR32_ECCHRS_RECERR0_MASK                             0x00000001
#define AVR32_ECCHRS_RECERR0_OFFSET                                    0
#define AVR32_ECCHRS_RECERR0_SIZE                                      1
#define AVR32_ECCHRS_RECERR1                                           4
#define AVR32_ECCHRS_RECERR10                                          8
#define AVR32_ECCHRS_RECERR10_MASK                            0x00000100
#define AVR32_ECCHRS_RECERR10_OFFSET                                   8
#define AVR32_ECCHRS_RECERR10_SIZE                                     1
#define AVR32_ECCHRS_RECERR11                                         12
#define AVR32_ECCHRS_RECERR11_MASK                            0x00001000
#define AVR32_ECCHRS_RECERR11_OFFSET                                  12
#define AVR32_ECCHRS_RECERR11_SIZE                                     1
#define AVR32_ECCHRS_RECERR12                                         16
#define AVR32_ECCHRS_RECERR12_MASK                            0x00010000
#define AVR32_ECCHRS_RECERR12_OFFSET                                  16
#define AVR32_ECCHRS_RECERR12_SIZE                                     1
#define AVR32_ECCHRS_RECERR13                                         20
#define AVR32_ECCHRS_RECERR13_MASK                            0x00100000
#define AVR32_ECCHRS_RECERR13_OFFSET                                  20
#define AVR32_ECCHRS_RECERR13_SIZE                                     1
#define AVR32_ECCHRS_RECERR14                                         24
#define AVR32_ECCHRS_RECERR14_MASK                            0x01000000
#define AVR32_ECCHRS_RECERR14_OFFSET                                  24
#define AVR32_ECCHRS_RECERR14_SIZE                                     1
#define AVR32_ECCHRS_RECERR15                                         28
#define AVR32_ECCHRS_RECERR15_MASK                            0x10000000
#define AVR32_ECCHRS_RECERR15_OFFSET                                  28
#define AVR32_ECCHRS_RECERR15_SIZE                                     1
#define AVR32_ECCHRS_RECERR1_MASK                             0x00000010
#define AVR32_ECCHRS_RECERR1_OFFSET                                    4
#define AVR32_ECCHRS_RECERR1_SIZE                                      1
#define AVR32_ECCHRS_RECERR2                                           8
#define AVR32_ECCHRS_RECERR2_MASK                             0x00000100
#define AVR32_ECCHRS_RECERR2_OFFSET                                    8
#define AVR32_ECCHRS_RECERR2_SIZE                                      1
#define AVR32_ECCHRS_RECERR3                                          12
#define AVR32_ECCHRS_RECERR3_MASK                             0x00001000
#define AVR32_ECCHRS_RECERR3_OFFSET                                   12
#define AVR32_ECCHRS_RECERR3_SIZE                                      1
#define AVR32_ECCHRS_RECERR4                                          16
#define AVR32_ECCHRS_RECERR4_MASK                             0x00010000
#define AVR32_ECCHRS_RECERR4_OFFSET                                   16
#define AVR32_ECCHRS_RECERR4_SIZE                                      1
#define AVR32_ECCHRS_RECERR5                                          20
#define AVR32_ECCHRS_RECERR5_MASK                             0x00100000
#define AVR32_ECCHRS_RECERR5_OFFSET                                   20
#define AVR32_ECCHRS_RECERR5_SIZE                                      1
#define AVR32_ECCHRS_RECERR6                                          24
#define AVR32_ECCHRS_RECERR6_MASK                             0x01000000
#define AVR32_ECCHRS_RECERR6_OFFSET                                   24
#define AVR32_ECCHRS_RECERR6_SIZE                                      1
#define AVR32_ECCHRS_RECERR7                                          28
#define AVR32_ECCHRS_RECERR7_MASK                             0x10000000
#define AVR32_ECCHRS_RECERR7_OFFSET                                   28
#define AVR32_ECCHRS_RECERR7_SIZE                                      1
#define AVR32_ECCHRS_RECERR8                                           0
#define AVR32_ECCHRS_RECERR8_MASK                             0x00000001
#define AVR32_ECCHRS_RECERR8_OFFSET                                    0
#define AVR32_ECCHRS_RECERR8_SIZE                                      1
#define AVR32_ECCHRS_RECERR9                                           4
#define AVR32_ECCHRS_RECERR9_MASK                             0x00000010
#define AVR32_ECCHRS_RECERR9_OFFSET                                    4
#define AVR32_ECCHRS_RECERR9_SIZE                                      1
#define AVR32_ECCHRS_RECERR_MASK                              0x00000007
#define AVR32_ECCHRS_RECERR_OFFSET                                     0
#define AVR32_ECCHRS_RECERR_SIZE                                       3
#define AVR32_ECCHRS_RS4_IDR                                  0x000001b4
#define AVR32_ECCHRS_RS4_IDR_ENDCOR                                    0
#define AVR32_ECCHRS_RS4_IDR_ENDCOR_MASK                      0x00000001
#define AVR32_ECCHRS_RS4_IDR_ENDCOR_OFFSET                             0
#define AVR32_ECCHRS_RS4_IDR_ENDCOR_SIZE                               1
#define AVR32_ECCHRS_RS4_IER                                  0x000001b0
#define AVR32_ECCHRS_RS4_IER_ENDCOR                                    0
#define AVR32_ECCHRS_RS4_IER_ENDCOR_MASK                      0x00000001
#define AVR32_ECCHRS_RS4_IER_ENDCOR_OFFSET                             0
#define AVR32_ECCHRS_RS4_IER_ENDCOR_SIZE                               1
#define AVR32_ECCHRS_RS4_IMR                                  0x000001b8
#define AVR32_ECCHRS_RS4_IMR_ENDCOR                                    0
#define AVR32_ECCHRS_RS4_IMR_ENDCOR_MASK                      0x00000001
#define AVR32_ECCHRS_RS4_IMR_ENDCOR_OFFSET                             0
#define AVR32_ECCHRS_RS4_IMR_ENDCOR_SIZE                               1
#define AVR32_ECCHRS_RS4_ISCR                                 0x000001c0
#define AVR32_ECCHRS_RS4_ISCR_ENDCOR                                   0
#define AVR32_ECCHRS_RS4_ISCR_ENDCOR_MASK                     0x00000001
#define AVR32_ECCHRS_RS4_ISCR_ENDCOR_OFFSET                            0
#define AVR32_ECCHRS_RS4_ISCR_ENDCOR_SIZE                              1
#define AVR32_ECCHRS_RS4_ISR                                  0x000001bc
#define AVR32_ECCHRS_RS4_ISR_ENDCOR                                    0
#define AVR32_ECCHRS_RS4_ISR_ENDCOR_MASK                      0x00000001
#define AVR32_ECCHRS_RS4_ISR_ENDCOR_OFFSET                             0
#define AVR32_ECCHRS_RS4_ISR_ENDCOR_SIZE                               1
#define AVR32_ECCHRS_RST                                               0
#define AVR32_ECCHRS_RST_MASK                                 0x00000001
#define AVR32_ECCHRS_RST_OFFSET                                        0
#define AVR32_ECCHRS_RST_SIZE                                          1
#define AVR32_ECCHRS_SR1                                      0x00000008
#define AVR32_ECCHRS_SR1_ECCERR0                                       1
#define AVR32_ECCHRS_SR1_ECCERR0_MASK                         0x00000002
#define AVR32_ECCHRS_SR1_ECCERR0_OFFSET                                1
#define AVR32_ECCHRS_SR1_ECCERR0_SIZE                                  1
#define AVR32_ECCHRS_SR1_ECCERR1                                       5
#define AVR32_ECCHRS_SR1_ECCERR1_MASK                         0x00000020
#define AVR32_ECCHRS_SR1_ECCERR1_OFFSET                                5
#define AVR32_ECCHRS_SR1_ECCERR1_SIZE                                  1
#define AVR32_ECCHRS_SR1_ECCERR2                                       9
#define AVR32_ECCHRS_SR1_ECCERR2_MASK                         0x00000200
#define AVR32_ECCHRS_SR1_ECCERR2_OFFSET                                9
#define AVR32_ECCHRS_SR1_ECCERR2_SIZE                                  1
#define AVR32_ECCHRS_SR1_ECCERR3                                      13
#define AVR32_ECCHRS_SR1_ECCERR3_MASK                         0x00002000
#define AVR32_ECCHRS_SR1_ECCERR3_OFFSET                               13
#define AVR32_ECCHRS_SR1_ECCERR3_SIZE                                  1
#define AVR32_ECCHRS_SR1_ECCERR4                                      17
#define AVR32_ECCHRS_SR1_ECCERR4_MASK                         0x00020000
#define AVR32_ECCHRS_SR1_ECCERR4_OFFSET                               17
#define AVR32_ECCHRS_SR1_ECCERR4_SIZE                                  1
#define AVR32_ECCHRS_SR1_ECCERR5                                      21
#define AVR32_ECCHRS_SR1_ECCERR5_MASK                         0x00200000
#define AVR32_ECCHRS_SR1_ECCERR5_OFFSET                               21
#define AVR32_ECCHRS_SR1_ECCERR5_SIZE                                  1
#define AVR32_ECCHRS_SR1_ECCERR6                                      25
#define AVR32_ECCHRS_SR1_ECCERR6_MASK                         0x02000000
#define AVR32_ECCHRS_SR1_ECCERR6_OFFSET                               25
#define AVR32_ECCHRS_SR1_ECCERR6_SIZE                                  1
#define AVR32_ECCHRS_SR1_ECCERR7                                      29
#define AVR32_ECCHRS_SR1_ECCERR7_MASK                         0x20000000
#define AVR32_ECCHRS_SR1_ECCERR7_OFFSET                               29
#define AVR32_ECCHRS_SR1_ECCERR7_SIZE                                  1
#define AVR32_ECCHRS_SR1_MULERR0                                       2
#define AVR32_ECCHRS_SR1_MULERR0_MASK                         0x00000004
#define AVR32_ECCHRS_SR1_MULERR0_OFFSET                                2
#define AVR32_ECCHRS_SR1_MULERR0_SIZE                                  1
#define AVR32_ECCHRS_SR1_MULERR1                                       6
#define AVR32_ECCHRS_SR1_MULERR1_MASK                         0x00000040
#define AVR32_ECCHRS_SR1_MULERR1_OFFSET                                6
#define AVR32_ECCHRS_SR1_MULERR1_SIZE                                  1
#define AVR32_ECCHRS_SR1_MULERR2                                      10
#define AVR32_ECCHRS_SR1_MULERR2_MASK                         0x00000400
#define AVR32_ECCHRS_SR1_MULERR2_OFFSET                               10
#define AVR32_ECCHRS_SR1_MULERR2_SIZE                                  1
#define AVR32_ECCHRS_SR1_MULERR3                                      14
#define AVR32_ECCHRS_SR1_MULERR3_MASK                         0x00004000
#define AVR32_ECCHRS_SR1_MULERR3_OFFSET                               14
#define AVR32_ECCHRS_SR1_MULERR3_SIZE                                  1
#define AVR32_ECCHRS_SR1_MULERR4                                      18
#define AVR32_ECCHRS_SR1_MULERR4_MASK                         0x00040000
#define AVR32_ECCHRS_SR1_MULERR4_OFFSET                               18
#define AVR32_ECCHRS_SR1_MULERR4_SIZE                                  1
#define AVR32_ECCHRS_SR1_MULERR5                                      22
#define AVR32_ECCHRS_SR1_MULERR5_MASK                         0x00400000
#define AVR32_ECCHRS_SR1_MULERR5_OFFSET                               22
#define AVR32_ECCHRS_SR1_MULERR5_SIZE                                  1
#define AVR32_ECCHRS_SR1_MULERR6                                      26
#define AVR32_ECCHRS_SR1_MULERR6_MASK                         0x04000000
#define AVR32_ECCHRS_SR1_MULERR6_OFFSET                               26
#define AVR32_ECCHRS_SR1_MULERR6_SIZE                                  1
#define AVR32_ECCHRS_SR1_MULERR7                                      30
#define AVR32_ECCHRS_SR1_MULERR7_MASK                         0x40000000
#define AVR32_ECCHRS_SR1_MULERR7_OFFSET                               30
#define AVR32_ECCHRS_SR1_MULERR7_SIZE                                  1
#define AVR32_ECCHRS_SR1_RECERR0                                       0
#define AVR32_ECCHRS_SR1_RECERR0_MASK                         0x00000001
#define AVR32_ECCHRS_SR1_RECERR0_OFFSET                                0
#define AVR32_ECCHRS_SR1_RECERR0_SIZE                                  1
#define AVR32_ECCHRS_SR1_RECERR1                                       4
#define AVR32_ECCHRS_SR1_RECERR1_MASK                         0x00000010
#define AVR32_ECCHRS_SR1_RECERR1_OFFSET                                4
#define AVR32_ECCHRS_SR1_RECERR1_SIZE                                  1
#define AVR32_ECCHRS_SR1_RECERR2                                       8
#define AVR32_ECCHRS_SR1_RECERR2_MASK                         0x00000100
#define AVR32_ECCHRS_SR1_RECERR2_OFFSET                                8
#define AVR32_ECCHRS_SR1_RECERR2_SIZE                                  1
#define AVR32_ECCHRS_SR1_RECERR3                                      12
#define AVR32_ECCHRS_SR1_RECERR3_MASK                         0x00001000
#define AVR32_ECCHRS_SR1_RECERR3_OFFSET                               12
#define AVR32_ECCHRS_SR1_RECERR3_SIZE                                  1
#define AVR32_ECCHRS_SR1_RECERR4                                      16
#define AVR32_ECCHRS_SR1_RECERR4_MASK                         0x00010000
#define AVR32_ECCHRS_SR1_RECERR4_OFFSET                               16
#define AVR32_ECCHRS_SR1_RECERR4_SIZE                                  1
#define AVR32_ECCHRS_SR1_RECERR5                                      20
#define AVR32_ECCHRS_SR1_RECERR5_MASK                         0x00100000
#define AVR32_ECCHRS_SR1_RECERR5_OFFSET                               20
#define AVR32_ECCHRS_SR1_RECERR5_SIZE                                  1
#define AVR32_ECCHRS_SR1_RECERR6                                      24
#define AVR32_ECCHRS_SR1_RECERR6_MASK                         0x01000000
#define AVR32_ECCHRS_SR1_RECERR6_OFFSET                               24
#define AVR32_ECCHRS_SR1_RECERR6_SIZE                                  1
#define AVR32_ECCHRS_SR1_RECERR7                                      28
#define AVR32_ECCHRS_SR1_RECERR7_MASK                         0x10000000
#define AVR32_ECCHRS_SR1_RECERR7_OFFSET                               28
#define AVR32_ECCHRS_SR1_RECERR7_SIZE                                  1
#define AVR32_ECCHRS_SR1_SYN_VEC                                       0
#define AVR32_ECCHRS_SR1_SYN_VEC_MASK                         0x000000ff
#define AVR32_ECCHRS_SR1_SYN_VEC_OFFSET                                0
#define AVR32_ECCHRS_SR1_SYN_VEC_SIZE                                  8
#define AVR32_ECCHRS_SR2                                      0x00000014
#define AVR32_ECCHRS_SR2_ECCERR10                                      9
#define AVR32_ECCHRS_SR2_ECCERR10_MASK                        0x00000200
#define AVR32_ECCHRS_SR2_ECCERR10_OFFSET                               9
#define AVR32_ECCHRS_SR2_ECCERR10_SIZE                                 1
#define AVR32_ECCHRS_SR2_ECCERR11                                     13
#define AVR32_ECCHRS_SR2_ECCERR11_MASK                        0x00002000
#define AVR32_ECCHRS_SR2_ECCERR11_OFFSET                              13
#define AVR32_ECCHRS_SR2_ECCERR11_SIZE                                 1
#define AVR32_ECCHRS_SR2_ECCERR12                                     17
#define AVR32_ECCHRS_SR2_ECCERR12_MASK                        0x00020000
#define AVR32_ECCHRS_SR2_ECCERR12_OFFSET                              17
#define AVR32_ECCHRS_SR2_ECCERR12_SIZE                                 1
#define AVR32_ECCHRS_SR2_ECCERR13                                     21
#define AVR32_ECCHRS_SR2_ECCERR13_MASK                        0x00200000
#define AVR32_ECCHRS_SR2_ECCERR13_OFFSET                              21
#define AVR32_ECCHRS_SR2_ECCERR13_SIZE                                 1
#define AVR32_ECCHRS_SR2_ECCERR14                                     25
#define AVR32_ECCHRS_SR2_ECCERR14_MASK                        0x02000000
#define AVR32_ECCHRS_SR2_ECCERR14_OFFSET                              25
#define AVR32_ECCHRS_SR2_ECCERR14_SIZE                                 1
#define AVR32_ECCHRS_SR2_ECCERR15                                     29
#define AVR32_ECCHRS_SR2_ECCERR15_MASK                        0x20000000
#define AVR32_ECCHRS_SR2_ECCERR15_OFFSET                              29
#define AVR32_ECCHRS_SR2_ECCERR15_SIZE                                 1
#define AVR32_ECCHRS_SR2_ECCERR8                                       1
#define AVR32_ECCHRS_SR2_ECCERR8_MASK                         0x00000002
#define AVR32_ECCHRS_SR2_ECCERR8_OFFSET                                1
#define AVR32_ECCHRS_SR2_ECCERR8_SIZE                                  1
#define AVR32_ECCHRS_SR2_ECCERR9                                       5
#define AVR32_ECCHRS_SR2_ECCERR9_MASK                         0x00000020
#define AVR32_ECCHRS_SR2_ECCERR9_OFFSET                                5
#define AVR32_ECCHRS_SR2_ECCERR9_SIZE                                  1
#define AVR32_ECCHRS_SR2_MULERR                                        3
#define AVR32_ECCHRS_SR2_MULERR10                                     10
#define AVR32_ECCHRS_SR2_MULERR10_MASK                        0x00000400
#define AVR32_ECCHRS_SR2_MULERR10_OFFSET                              10
#define AVR32_ECCHRS_SR2_MULERR10_SIZE                                 1
#define AVR32_ECCHRS_SR2_MULERR11                                     14
#define AVR32_ECCHRS_SR2_MULERR11_MASK                        0x00004000
#define AVR32_ECCHRS_SR2_MULERR11_OFFSET                              14
#define AVR32_ECCHRS_SR2_MULERR11_SIZE                                 1
#define AVR32_ECCHRS_SR2_MULERR12                                     18
#define AVR32_ECCHRS_SR2_MULERR12_MASK                        0x00040000
#define AVR32_ECCHRS_SR2_MULERR12_OFFSET                              18
#define AVR32_ECCHRS_SR2_MULERR12_SIZE                                 1
#define AVR32_ECCHRS_SR2_MULERR13                                     22
#define AVR32_ECCHRS_SR2_MULERR13_MASK                        0x00400000
#define AVR32_ECCHRS_SR2_MULERR13_OFFSET                              22
#define AVR32_ECCHRS_SR2_MULERR13_SIZE                                 1
#define AVR32_ECCHRS_SR2_MULERR14                                     26
#define AVR32_ECCHRS_SR2_MULERR14_MASK                        0x04000000
#define AVR32_ECCHRS_SR2_MULERR14_OFFSET                              26
#define AVR32_ECCHRS_SR2_MULERR14_SIZE                                 1
#define AVR32_ECCHRS_SR2_MULERR15                                     30
#define AVR32_ECCHRS_SR2_MULERR15_MASK                        0x40000000
#define AVR32_ECCHRS_SR2_MULERR15_OFFSET                              30
#define AVR32_ECCHRS_SR2_MULERR15_SIZE                                 1
#define AVR32_ECCHRS_SR2_MULERR8                                       2
#define AVR32_ECCHRS_SR2_MULERR8_MASK                         0x00000004
#define AVR32_ECCHRS_SR2_MULERR8_OFFSET                                2
#define AVR32_ECCHRS_SR2_MULERR8_SIZE                                  1
#define AVR32_ECCHRS_SR2_MULERR9                                       6
#define AVR32_ECCHRS_SR2_MULERR9_MASK                         0x00000040
#define AVR32_ECCHRS_SR2_MULERR9_OFFSET                                6
#define AVR32_ECCHRS_SR2_MULERR9_SIZE                                  1
#define AVR32_ECCHRS_SR2_MULERR_MASK                          0x00000008
#define AVR32_ECCHRS_SR2_MULERR_OFFSET                                 3
#define AVR32_ECCHRS_SR2_MULERR_SIZE                                   1
#define AVR32_ECCHRS_SR2_RECERR                                        0
#define AVR32_ECCHRS_SR2_RECERR10                                      8
#define AVR32_ECCHRS_SR2_RECERR10_MASK                        0x00000100
#define AVR32_ECCHRS_SR2_RECERR10_OFFSET                               8
#define AVR32_ECCHRS_SR2_RECERR10_SIZE                                 1
#define AVR32_ECCHRS_SR2_RECERR11                                     12
#define AVR32_ECCHRS_SR2_RECERR11_MASK                        0x00001000
#define AVR32_ECCHRS_SR2_RECERR11_OFFSET                              12
#define AVR32_ECCHRS_SR2_RECERR11_SIZE                                 1
#define AVR32_ECCHRS_SR2_RECERR12                                     16
#define AVR32_ECCHRS_SR2_RECERR12_MASK                        0x00010000
#define AVR32_ECCHRS_SR2_RECERR12_OFFSET                              16
#define AVR32_ECCHRS_SR2_RECERR12_SIZE                                 1
#define AVR32_ECCHRS_SR2_RECERR13                                     20
#define AVR32_ECCHRS_SR2_RECERR13_MASK                        0x00100000
#define AVR32_ECCHRS_SR2_RECERR13_OFFSET                              20
#define AVR32_ECCHRS_SR2_RECERR13_SIZE                                 1
#define AVR32_ECCHRS_SR2_RECERR14                                     24
#define AVR32_ECCHRS_SR2_RECERR14_MASK                        0x01000000
#define AVR32_ECCHRS_SR2_RECERR14_OFFSET                              24
#define AVR32_ECCHRS_SR2_RECERR14_SIZE                                 1
#define AVR32_ECCHRS_SR2_RECERR15                                     28
#define AVR32_ECCHRS_SR2_RECERR15_MASK                        0x10000000
#define AVR32_ECCHRS_SR2_RECERR15_OFFSET                              28
#define AVR32_ECCHRS_SR2_RECERR15_SIZE                                 1
#define AVR32_ECCHRS_SR2_RECERR8                                       0
#define AVR32_ECCHRS_SR2_RECERR8_MASK                         0x00000001
#define AVR32_ECCHRS_SR2_RECERR8_OFFSET                                0
#define AVR32_ECCHRS_SR2_RECERR8_SIZE                                  1
#define AVR32_ECCHRS_SR2_RECERR9                                       4
#define AVR32_ECCHRS_SR2_RECERR9_MASK                         0x00000010
#define AVR32_ECCHRS_SR2_RECERR9_OFFSET                                4
#define AVR32_ECCHRS_SR2_RECERR9_SIZE                                  1
#define AVR32_ECCHRS_SR2_RECERR_MASK                          0x00000007
#define AVR32_ECCHRS_SR2_RECERR_OFFSET                                 0
#define AVR32_ECCHRS_SR2_RECERR_SIZE                                   3
#define AVR32_ECCHRS_SYN_VEC                                           0
#define AVR32_ECCHRS_SYN_VEC_MASK                             0x000000ff
#define AVR32_ECCHRS_SYN_VEC_OFFSET                                    0
#define AVR32_ECCHRS_SYN_VEC_SIZE                                      8
#define AVR32_ECCHRS_TYPECORREC                                        4
#define AVR32_ECCHRS_TYPECORREC_ECC1_256B                     0x00000001
#define AVR32_ECCHRS_TYPECORREC_ECC1_512B                     0x00000002
#define AVR32_ECCHRS_TYPECORREC_ECC1_PAGE                     0x00000000
#define AVR32_ECCHRS_TYPECORREC_ECC4_512B                     0x00000004
#define AVR32_ECCHRS_TYPECORREC_MASK                          0x00000070
#define AVR32_ECCHRS_TYPECORREC_OFFSET                                 4
#define AVR32_ECCHRS_TYPECORREC_SIZE                                   3
#define AVR32_ECCHRS_VARIANT                                          16
#define AVR32_ECCHRS_VARIANT_MASK                             0x00070000
#define AVR32_ECCHRS_VARIANT_OFFSET                                   16
#define AVR32_ECCHRS_VARIANT_SIZE                                      3
#define AVR32_ECCHRS_VERSION                                  0x000001fc
#define AVR32_ECCHRS_VERSION_MASK                             0x00000fff
#define AVR32_ECCHRS_VERSION_OFFSET                                    0
#define AVR32_ECCHRS_VERSION_SIZE                                     12
#define AVR32_ECCHRS_VERSION_VARIANT                                  16
#define AVR32_ECCHRS_VERSION_VARIANT_MASK                     0x00070000
#define AVR32_ECCHRS_VERSION_VARIANT_OFFSET                           16
#define AVR32_ECCHRS_VERSION_VARIANT_SIZE                              3
#define AVR32_ECCHRS_VERSION_VERSION                                   0
#define AVR32_ECCHRS_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_ECCHRS_VERSION_VERSION_OFFSET                            0
#define AVR32_ECCHRS_VERSION_VERSION_SIZE                             12
#define AVR32_ECCHRS_WORDADDR                                          4
#define AVR32_ECCHRS_WORDADDR0                                         3
#define AVR32_ECCHRS_WORDADDR0_MASK                           0x00000ff8
#define AVR32_ECCHRS_WORDADDR0_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR0_SIZE                                    9
#define AVR32_ECCHRS_WORDADDR1                                         3
#define AVR32_ECCHRS_WORDADDR10                                        3
#define AVR32_ECCHRS_WORDADDR10_MASK                          0x000007f8
#define AVR32_ECCHRS_WORDADDR10_OFFSET                                 3
#define AVR32_ECCHRS_WORDADDR10_SIZE                                   8
#define AVR32_ECCHRS_WORDADDR11                                        3
#define AVR32_ECCHRS_WORDADDR11_MASK                          0x000007f8
#define AVR32_ECCHRS_WORDADDR11_OFFSET                                 3
#define AVR32_ECCHRS_WORDADDR11_SIZE                                   8
#define AVR32_ECCHRS_WORDADDR12                                        3
#define AVR32_ECCHRS_WORDADDR12_MASK                          0x000007f8
#define AVR32_ECCHRS_WORDADDR12_OFFSET                                 3
#define AVR32_ECCHRS_WORDADDR12_SIZE                                   8
#define AVR32_ECCHRS_WORDADDR13                                        3
#define AVR32_ECCHRS_WORDADDR13_MASK                          0x000007f8
#define AVR32_ECCHRS_WORDADDR13_OFFSET                                 3
#define AVR32_ECCHRS_WORDADDR13_SIZE                                   8
#define AVR32_ECCHRS_WORDADDR14                                        3
#define AVR32_ECCHRS_WORDADDR14_MASK                          0x000007f8
#define AVR32_ECCHRS_WORDADDR14_OFFSET                                 3
#define AVR32_ECCHRS_WORDADDR14_SIZE                                   8
#define AVR32_ECCHRS_WORDADDR15                                        3
#define AVR32_ECCHRS_WORDADDR15_MASK                          0x000007f8
#define AVR32_ECCHRS_WORDADDR15_OFFSET                                 3
#define AVR32_ECCHRS_WORDADDR15_SIZE                                   8
#define AVR32_ECCHRS_WORDADDR1_MASK                           0x00000ff8
#define AVR32_ECCHRS_WORDADDR1_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR1_SIZE                                    9
#define AVR32_ECCHRS_WORDADDR2                                         3
#define AVR32_ECCHRS_WORDADDR2_MASK                           0x00000ff8
#define AVR32_ECCHRS_WORDADDR2_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR2_SIZE                                    9
#define AVR32_ECCHRS_WORDADDR3                                         3
#define AVR32_ECCHRS_WORDADDR3_MASK                           0x00000ff8
#define AVR32_ECCHRS_WORDADDR3_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR3_SIZE                                    9
#define AVR32_ECCHRS_WORDADDR4                                         3
#define AVR32_ECCHRS_WORDADDR4_MASK                           0x00000ff8
#define AVR32_ECCHRS_WORDADDR4_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR4_SIZE                                    9
#define AVR32_ECCHRS_WORDADDR5                                         3
#define AVR32_ECCHRS_WORDADDR5_MASK                           0x00000ff8
#define AVR32_ECCHRS_WORDADDR5_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR5_SIZE                                    9
#define AVR32_ECCHRS_WORDADDR6                                         3
#define AVR32_ECCHRS_WORDADDR6_MASK                           0x00000ff8
#define AVR32_ECCHRS_WORDADDR6_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR6_SIZE                                    9
#define AVR32_ECCHRS_WORDADDR7                                         3
#define AVR32_ECCHRS_WORDADDR7_MASK                           0x00000ff8
#define AVR32_ECCHRS_WORDADDR7_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR7_SIZE                                    9
#define AVR32_ECCHRS_WORDADDR8                                         3
#define AVR32_ECCHRS_WORDADDR8_MASK                           0x000007f8
#define AVR32_ECCHRS_WORDADDR8_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR8_SIZE                                    8
#define AVR32_ECCHRS_WORDADDR9                                         3
#define AVR32_ECCHRS_WORDADDR9_MASK                           0x000007f8
#define AVR32_ECCHRS_WORDADDR9_OFFSET                                  3
#define AVR32_ECCHRS_WORDADDR9_SIZE                                    8
#define AVR32_ECCHRS_WORDADDR_MASK                            0x0000fff0
#define AVR32_ECCHRS_WORDADDR_OFFSET                                   4
#define AVR32_ECCHRS_WORDADDR_SIZE                                    12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_ecchrs_ctrl_t {
    unsigned int                 :31;
    unsigned int rst             : 1;
} avr32_ecchrs_ctrl_t;



typedef struct avr32_ecchrs_md_t {
    unsigned int                 :21;
    unsigned int corrs4          : 1;
    unsigned int                 : 1;
    unsigned int freeze          : 1;
    unsigned int                 : 1;
    unsigned int typecorrec      : 3;
    unsigned int                 : 1;
    unsigned int pagesize        : 3;
} avr32_ecchrs_md_t;



typedef union avr32_ecchrs_sr1_t {
  struct {
    unsigned int                 : 1;
    unsigned int mulerr7         : 1;
    unsigned int eccerr7         : 1;
    unsigned int recerr7         : 1;
    unsigned int                 : 1;
    unsigned int mulerr6         : 1;
    unsigned int eccerr6         : 1;
    unsigned int recerr6         : 1;
    unsigned int                 : 1;
    unsigned int mulerr5         : 1;
    unsigned int eccerr5         : 1;
    unsigned int recerr5         : 1;
    unsigned int                 : 1;
    unsigned int mulerr4         : 1;
    unsigned int eccerr4         : 1;
    unsigned int recerr4         : 1;
    unsigned int                 : 1;
    unsigned int mulerr3         : 1;
    unsigned int eccerr3         : 1;
    unsigned int recerr3         : 1;
    unsigned int                 : 1;
    unsigned int mulerr2         : 1;
    unsigned int eccerr2         : 1;
    unsigned int recerr2         : 1;
    unsigned int                 : 1;
    unsigned int mulerr1         : 1;
    unsigned int eccerr1         : 1;
    unsigned int recerr1         : 1;
    unsigned int                 : 1;
    unsigned int mulerr0         : 1;
    unsigned int eccerr0         : 1;
    unsigned int recerr0         : 1;
  } ecc1;
  struct {
    unsigned int                 :24;
    unsigned int syn_vec         : 8;
  } ecc4;
} avr32_ecchrs_sr1_t;



typedef union avr32_ecchrs_pr0_t {
  struct {
    unsigned int                 :16;
    unsigned int wordaddr        :12;
    unsigned int bitaddr         : 4;
  } ecc1_per_page;
  struct {
    unsigned int                 : 8;
    unsigned int nparity0        :12;
    unsigned int wordaddr0       : 9;
    unsigned int bitaddr0        : 3;
  } ecc1_per_block;
} avr32_ecchrs_pr0_t;



typedef union avr32_ecchrs_pr1_t {
  struct {
    unsigned int                 :16;
    unsigned int nparity         :16;
  } ecc1_per_page;
  struct {
    unsigned int                 : 8;
    unsigned int nparity1        :12;
    unsigned int wordaddr1       : 9;
    unsigned int bitaddr1        : 3;
  } ecc1_per_block;
} avr32_ecchrs_pr1_t;



typedef union avr32_ecchrs_sr2_t {
  struct {
    unsigned int                 : 1;
    unsigned int mulerr15        : 1;
    unsigned int eccerr15        : 1;
    unsigned int recerr15        : 1;
    unsigned int                 : 1;
    unsigned int mulerr14        : 1;
    unsigned int eccerr14        : 1;
    unsigned int recerr14        : 1;
    unsigned int                 : 1;
    unsigned int mulerr13        : 1;
    unsigned int eccerr13        : 1;
    unsigned int recerr13        : 1;
    unsigned int                 : 1;
    unsigned int mulerr12        : 1;
    unsigned int eccerr12        : 1;
    unsigned int recerr12        : 1;
    unsigned int                 : 1;
    unsigned int mulerr11        : 1;
    unsigned int eccerr11        : 1;
    unsigned int recerr11        : 1;
    unsigned int                 : 1;
    unsigned int mulerr10        : 1;
    unsigned int eccerr10        : 1;
    unsigned int recerr10        : 1;
    unsigned int                 : 1;
    unsigned int mulerr9         : 1;
    unsigned int eccerr9         : 1;
    unsigned int recerr9         : 1;
    unsigned int                 : 1;
    unsigned int mulerr8         : 1;
    unsigned int eccerr8         : 1;
    unsigned int recerr8         : 1;
  } ecc1;
  struct {
    unsigned int                 :28;
    unsigned int mulerr          : 1;
    unsigned int recerr          : 3;
  } ecc4;
} avr32_ecchrs_sr2_t;



typedef struct avr32_ecchrs_pr2_t {
    unsigned int                 : 8;
    unsigned int nparity2        :12;
    unsigned int wordaddr2       : 9;
    unsigned int bitaddr2        : 3;
} avr32_ecchrs_pr2_t;



typedef struct avr32_ecchrs_pr3_t {
    unsigned int                 : 8;
    unsigned int nparity3        :12;
    unsigned int wordaddr3       : 9;
    unsigned int bitaddr3        : 3;
} avr32_ecchrs_pr3_t;



typedef struct avr32_ecchrs_pr4_t {
    unsigned int                 : 8;
    unsigned int nparity4        :12;
    unsigned int wordaddr4       : 9;
    unsigned int bitaddr4        : 3;
} avr32_ecchrs_pr4_t;



typedef struct avr32_ecchrs_pr5_t {
    unsigned int                 : 8;
    unsigned int nparity5        :12;
    unsigned int wordaddr5       : 9;
    unsigned int bitaddr5        : 3;
} avr32_ecchrs_pr5_t;



typedef struct avr32_ecchrs_pr6_t {
    unsigned int                 : 8;
    unsigned int nparity6        :12;
    unsigned int wordaddr6       : 9;
    unsigned int bitaddr6        : 3;
} avr32_ecchrs_pr6_t;



typedef struct avr32_ecchrs_pr7_t {
    unsigned int                 : 8;
    unsigned int nparity7        :12;
    unsigned int wordaddr7       : 9;
    unsigned int bitaddr7        : 3;
} avr32_ecchrs_pr7_t;



typedef struct avr32_ecchrs_pr8_t {
    unsigned int                 : 9;
    unsigned int nparity8        :11;
    unsigned int                 : 1;
    unsigned int wordaddr8       : 8;
    unsigned int bitaddr8        : 3;
} avr32_ecchrs_pr8_t;



typedef struct avr32_ecchrs_pr9_t {
    unsigned int                 : 9;
    unsigned int nparity9        :11;
    unsigned int                 : 1;
    unsigned int wordaddr9       : 8;
    unsigned int bitaddr9        : 3;
} avr32_ecchrs_pr9_t;



typedef struct avr32_ecchrs_pr10_t {
    unsigned int                 : 9;
    unsigned int nparity10       :11;
    unsigned int                 : 1;
    unsigned int wordaddr10      : 8;
    unsigned int bitaddr10       : 3;
} avr32_ecchrs_pr10_t;



typedef struct avr32_ecchrs_pr11_t {
    unsigned int                 : 9;
    unsigned int nparity11       :11;
    unsigned int                 : 1;
    unsigned int wordaddr11      : 8;
    unsigned int bitaddr11       : 3;
} avr32_ecchrs_pr11_t;



typedef struct avr32_ecchrs_pr12_t {
    unsigned int                 : 9;
    unsigned int nparity12       :11;
    unsigned int                 : 1;
    unsigned int wordaddr12      : 8;
    unsigned int bitaddr12       : 3;
} avr32_ecchrs_pr12_t;



typedef struct avr32_ecchrs_pr13_t {
    unsigned int                 : 9;
    unsigned int nparity13       :11;
    unsigned int                 : 1;
    unsigned int wordaddr13      : 8;
    unsigned int bitaddr13       : 3;
} avr32_ecchrs_pr13_t;



typedef struct avr32_ecchrs_pr14_t {
    unsigned int                 : 9;
    unsigned int nparity14       :11;
    unsigned int                 : 1;
    unsigned int wordaddr14      : 8;
    unsigned int bitaddr14       : 3;
} avr32_ecchrs_pr14_t;



typedef struct avr32_ecchrs_pr15_t {
    unsigned int                 : 9;
    unsigned int nparity15       :11;
    unsigned int                 : 1;
    unsigned int wordaddr15      : 8;
    unsigned int bitaddr15       : 3;
} avr32_ecchrs_pr15_t;



typedef union avr32_ecchrs_cwps00_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword00      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd00       : 8;
  } page_read;
} avr32_ecchrs_cwps00_t;



typedef union avr32_ecchrs_cwps01_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword01      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd01       : 8;
  } page_read;
} avr32_ecchrs_cwps01_t;



typedef union avr32_ecchrs_cwps02_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword02      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd02       : 8;
  } page_read;
} avr32_ecchrs_cwps02_t;



typedef union avr32_ecchrs_cwps03_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword03      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd03       : 8;
  } page_read;
} avr32_ecchrs_cwps03_t;



typedef union avr32_ecchrs_cwps04_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword04      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd04       : 8;
  } page_read;
} avr32_ecchrs_cwps04_t;



typedef union avr32_ecchrs_cwps05_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword05      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd05       : 8;
  } page_read;
} avr32_ecchrs_cwps05_t;



typedef union avr32_ecchrs_cwps06_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword06      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd06       : 8;
  } page_read;
} avr32_ecchrs_cwps06_t;



typedef union avr32_ecchrs_cwps07_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword07      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd07       : 8;
  } page_read;
} avr32_ecchrs_cwps07_t;



typedef union avr32_ecchrs_cwps08_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword08      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd08       : 8;
  } page_read;
} avr32_ecchrs_cwps08_t;



typedef union avr32_ecchrs_cwps09_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword09      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd09       : 8;
  } page_read;
} avr32_ecchrs_cwps09_t;



typedef union avr32_ecchrs_cwps10_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword10      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd10       : 8;
  } page_read;
} avr32_ecchrs_cwps10_t;



typedef union avr32_ecchrs_cwps11_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword11      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd11       : 8;
  } page_read;
} avr32_ecchrs_cwps11_t;



typedef union avr32_ecchrs_cwps12_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword12      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd12       : 8;
  } page_read;
} avr32_ecchrs_cwps12_t;



typedef union avr32_ecchrs_cwps13_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword13      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd13       : 8;
  } page_read;
} avr32_ecchrs_cwps13_t;



typedef union avr32_ecchrs_cwps14_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword14      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd14       : 8;
  } page_read;
} avr32_ecchrs_cwps14_t;



typedef union avr32_ecchrs_cwps15_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword15      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd15       : 8;
  } page_read;
} avr32_ecchrs_cwps15_t;



typedef union avr32_ecchrs_cwps16_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword16      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd16       : 8;
  } page_read;
} avr32_ecchrs_cwps16_t;



typedef union avr32_ecchrs_cwps17_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword17      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd17       : 8;
  } page_read;
} avr32_ecchrs_cwps17_t;



typedef union avr32_ecchrs_cwps18_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword18      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd18       : 8;
  } page_read;
} avr32_ecchrs_cwps18_t;



typedef union avr32_ecchrs_cwps19_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword19      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd19       : 8;
  } page_read;
} avr32_ecchrs_cwps19_t;



typedef union avr32_ecchrs_cwps20_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword20      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd20       : 8;
  } page_read;
} avr32_ecchrs_cwps20_t;



typedef union avr32_ecchrs_cwps21_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword21      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd21       : 8;
  } page_read;
} avr32_ecchrs_cwps21_t;



typedef union avr32_ecchrs_cwps22_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword22      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd22       : 8;
  } page_read;
} avr32_ecchrs_cwps22_t;



typedef union avr32_ecchrs_cwps23_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword23      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd23       : 8;
  } page_read;
} avr32_ecchrs_cwps23_t;



typedef union avr32_ecchrs_cwps24_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword24      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd24       : 8;
  } page_read;
} avr32_ecchrs_cwps24_t;



typedef union avr32_ecchrs_cwps25_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword25      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd25       : 8;
  } page_read;
} avr32_ecchrs_cwps25_t;



typedef union avr32_ecchrs_cwps26_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword26      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd26       : 8;
  } page_read;
} avr32_ecchrs_cwps26_t;



typedef union avr32_ecchrs_cwps27_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword27      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd27       : 8;
  } page_read;
} avr32_ecchrs_cwps27_t;



typedef union avr32_ecchrs_cwps28_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword28      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd28       : 8;
  } page_read;
} avr32_ecchrs_cwps28_t;



typedef union avr32_ecchrs_cwps29_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword29      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd29       : 8;
  } page_read;
} avr32_ecchrs_cwps29_t;



typedef union avr32_ecchrs_cwps30_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword30      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd30       : 8;
  } page_read;
} avr32_ecchrs_cwps30_t;



typedef union avr32_ecchrs_cwps31_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword31      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd31       : 8;
  } page_read;
} avr32_ecchrs_cwps31_t;



typedef union avr32_ecchrs_cwps32_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword32      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd32       : 8;
  } page_read;
} avr32_ecchrs_cwps32_t;



typedef union avr32_ecchrs_cwps33_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword33      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd33       : 8;
  } page_read;
} avr32_ecchrs_cwps33_t;



typedef union avr32_ecchrs_cwps34_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword34      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd34       : 8;
  } page_read;
} avr32_ecchrs_cwps34_t;



typedef union avr32_ecchrs_cwps35_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword35      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd35       : 8;
  } page_read;
} avr32_ecchrs_cwps35_t;



typedef union avr32_ecchrs_cwps36_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword36      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd36       : 8;
  } page_read;
} avr32_ecchrs_cwps36_t;



typedef union avr32_ecchrs_cwps37_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword37      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd37       : 8;
  } page_read;
} avr32_ecchrs_cwps37_t;



typedef union avr32_ecchrs_cwps38_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword38      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd38       : 8;
  } page_read;
} avr32_ecchrs_cwps38_t;



typedef union avr32_ecchrs_cwps39_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword39      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd39       : 8;
  } page_read;
} avr32_ecchrs_cwps39_t;



typedef union avr32_ecchrs_cwps40_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword40      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd40       : 8;
  } page_read;
} avr32_ecchrs_cwps40_t;



typedef union avr32_ecchrs_cwps41_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword41      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd41       : 8;
  } page_read;
} avr32_ecchrs_cwps41_t;



typedef union avr32_ecchrs_cwps42_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword42      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd42       : 8;
  } page_read;
} avr32_ecchrs_cwps42_t;



typedef union avr32_ecchrs_cwps43_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword43      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd43       : 8;
  } page_read;
} avr32_ecchrs_cwps43_t;



typedef union avr32_ecchrs_cwps44_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword44      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd44       : 8;
  } page_read;
} avr32_ecchrs_cwps44_t;



typedef union avr32_ecchrs_cwps45_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword45      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd45       : 8;
  } page_read;
} avr32_ecchrs_cwps45_t;



typedef union avr32_ecchrs_cwps46_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword46      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd46       : 8;
  } page_read;
} avr32_ecchrs_cwps46_t;



typedef union avr32_ecchrs_cwps47_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword47      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd47       : 8;
  } page_read;
} avr32_ecchrs_cwps47_t;



typedef union avr32_ecchrs_cwps48_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword48      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd48       : 8;
  } page_read;
} avr32_ecchrs_cwps48_t;



typedef union avr32_ecchrs_cwps49_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword49      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd49       : 8;
  } page_read;
} avr32_ecchrs_cwps49_t;



typedef union avr32_ecchrs_cwps50_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword50      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd50       : 8;
  } page_read;
} avr32_ecchrs_cwps50_t;



typedef union avr32_ecchrs_cwps51_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword51      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd51       : 8;
  } page_read;
} avr32_ecchrs_cwps51_t;



typedef union avr32_ecchrs_cwps52_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword52      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd52       : 8;
  } page_read;
} avr32_ecchrs_cwps52_t;



typedef union avr32_ecchrs_cwps53_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword53      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd53       : 8;
  } page_read;
} avr32_ecchrs_cwps53_t;



typedef union avr32_ecchrs_cwps54_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword54      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd54       : 8;
  } page_read;
} avr32_ecchrs_cwps54_t;



typedef union avr32_ecchrs_cwps55_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword55      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd55       : 8;
  } page_read;
} avr32_ecchrs_cwps55_t;



typedef union avr32_ecchrs_cwps56_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword56      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd56       : 8;
  } page_read;
} avr32_ecchrs_cwps56_t;



typedef union avr32_ecchrs_cwps57_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword57      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd57       : 8;
  } page_read;
} avr32_ecchrs_cwps57_t;



typedef union avr32_ecchrs_cwps58_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword58      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd58       : 8;
  } page_read;
} avr32_ecchrs_cwps58_t;



typedef union avr32_ecchrs_cwps59_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword59      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd59       : 8;
  } page_read;
} avr32_ecchrs_cwps59_t;



typedef union avr32_ecchrs_cwps60_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword60      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd60       : 8;
  } page_read;
} avr32_ecchrs_cwps60_t;



typedef union avr32_ecchrs_cwps61_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword61      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd61       : 8;
  } page_read;
} avr32_ecchrs_cwps61_t;



typedef union avr32_ecchrs_cwps62_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword62      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd62       : 8;
  } page_read;
} avr32_ecchrs_cwps62_t;



typedef union avr32_ecchrs_cwps63_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword63      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd63       : 8;
  } page_read;
} avr32_ecchrs_cwps63_t;



typedef union avr32_ecchrs_cwps64_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword64      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd64       : 8;
  } page_read;
} avr32_ecchrs_cwps64_t;



typedef union avr32_ecchrs_cwps65_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword65      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd65       : 8;
  } page_read;
} avr32_ecchrs_cwps65_t;



typedef union avr32_ecchrs_cwps66_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword66      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd66       : 8;
  } page_read;
} avr32_ecchrs_cwps66_t;



typedef union avr32_ecchrs_cwps67_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword67      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd67       : 8;
  } page_read;
} avr32_ecchrs_cwps67_t;



typedef union avr32_ecchrs_cwps68_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword68      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd68       : 8;
  } page_read;
} avr32_ecchrs_cwps68_t;



typedef union avr32_ecchrs_cwps69_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword69      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd69       : 8;
  } page_read;
} avr32_ecchrs_cwps69_t;



typedef union avr32_ecchrs_cwps70_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword70      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd70       : 8;
  } page_read;
} avr32_ecchrs_cwps70_t;



typedef union avr32_ecchrs_cwps71_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword71      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd71       : 8;
  } page_read;
} avr32_ecchrs_cwps71_t;



typedef union avr32_ecchrs_cwps72_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword72      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd72       : 8;
  } page_read;
} avr32_ecchrs_cwps72_t;



typedef union avr32_ecchrs_cwps73_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword73      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd73       : 8;
  } page_read;
} avr32_ecchrs_cwps73_t;



typedef union avr32_ecchrs_cwps74_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword74      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd74       : 8;
  } page_read;
} avr32_ecchrs_cwps74_t;



typedef union avr32_ecchrs_cwps75_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword75      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd75       : 8;
  } page_read;
} avr32_ecchrs_cwps75_t;



typedef union avr32_ecchrs_cwps76_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword76      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd76       : 8;
  } page_read;
} avr32_ecchrs_cwps76_t;



typedef union avr32_ecchrs_cwps77_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword77      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd77       : 8;
  } page_read;
} avr32_ecchrs_cwps77_t;



typedef union avr32_ecchrs_cwps78_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword78      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd78       : 8;
  } page_read;
} avr32_ecchrs_cwps78_t;



typedef union avr32_ecchrs_cwps79_t {
  struct {
    unsigned int                 :24;
    unsigned int codeword79      : 8;
  } page_write;
  struct {
    unsigned int                 :24;
    unsigned int parsynd79       : 8;
  } page_read;
} avr32_ecchrs_cwps79_t;



typedef struct avr32_ecchrs_mdata0_t {
    unsigned int                 :22;
    unsigned int maskdata0       :10;
} avr32_ecchrs_mdata0_t;



typedef struct avr32_ecchrs_mdata1_t {
    unsigned int                 :22;
    unsigned int maskdata1       :10;
} avr32_ecchrs_mdata1_t;



typedef struct avr32_ecchrs_mdata2_t {
    unsigned int                 :22;
    unsigned int maskdata2       :10;
} avr32_ecchrs_mdata2_t;



typedef struct avr32_ecchrs_mdata3_t {
    unsigned int                 :22;
    unsigned int maskdata3       :10;
} avr32_ecchrs_mdata3_t;



typedef struct avr32_ecchrs_adoff0_t {
    unsigned int                 :22;
    unsigned int offset0         :10;
} avr32_ecchrs_adoff0_t;



typedef struct avr32_ecchrs_adoff1_t {
    unsigned int                 :22;
    unsigned int offset1         :10;
} avr32_ecchrs_adoff1_t;



typedef struct avr32_ecchrs_adoff2_t {
    unsigned int                 :22;
    unsigned int offset2         :10;
} avr32_ecchrs_adoff2_t;



typedef struct avr32_ecchrs_adoff3_t {
    unsigned int                 :22;
    unsigned int offset3         :10;
} avr32_ecchrs_adoff3_t;



typedef struct avr32_ecchrs_rs4_ier_t {
    unsigned int                 :31;
    unsigned int endcor          : 1;
} avr32_ecchrs_rs4_ier_t;



typedef struct avr32_ecchrs_rs4_idr_t {
    unsigned int                 :31;
    unsigned int endcor          : 1;
} avr32_ecchrs_rs4_idr_t;



typedef struct avr32_ecchrs_rs4_imr_t {
    unsigned int                 :31;
    unsigned int endcor          : 1;
} avr32_ecchrs_rs4_imr_t;



typedef struct avr32_ecchrs_rs4_isr_t {
    unsigned int                 :31;
    unsigned int endcor          : 1;
} avr32_ecchrs_rs4_isr_t;



typedef struct avr32_ecchrs_rs4_iscr_t {
    unsigned int                 :31;
    unsigned int endcor          : 1;
} avr32_ecchrs_rs4_iscr_t;



typedef struct avr32_ecchrs_version_t {
    unsigned int                 :13;
    unsigned int variant         : 3;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_ecchrs_version_t;



typedef struct avr32_ecchrs_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_ecchrs_ctrl_t            CTRL      ;
  };
  union {
          unsigned long                  md        ;//0x0004
          avr32_ecchrs_md_t              MD        ;
  };
  union {
    const unsigned long                  sr1       ;//0x0008
    const avr32_ecchrs_sr1_t             SR1       ;
  };
  union {
    const unsigned long                  pr0       ;//0x000c
    const avr32_ecchrs_pr0_t             PR0       ;
  };
  union {
    const unsigned long                  pr1       ;//0x0010
    const avr32_ecchrs_pr1_t             PR1       ;
  };
  union {
    const unsigned long                  sr2       ;//0x0014
    const avr32_ecchrs_sr2_t             SR2       ;
  };
  union {
    const unsigned long                  pr2       ;//0x0018
    const avr32_ecchrs_pr2_t             PR2       ;
  };
  union {
    const unsigned long                  pr3       ;//0x001c
    const avr32_ecchrs_pr3_t             PR3       ;
  };
  union {
    const unsigned long                  pr4       ;//0x0020
    const avr32_ecchrs_pr4_t             PR4       ;
  };
  union {
    const unsigned long                  pr5       ;//0x0024
    const avr32_ecchrs_pr5_t             PR5       ;
  };
  union {
    const unsigned long                  pr6       ;//0x0028
    const avr32_ecchrs_pr6_t             PR6       ;
  };
  union {
    const unsigned long                  pr7       ;//0x002c
    const avr32_ecchrs_pr7_t             PR7       ;
  };
  union {
    const unsigned long                  pr8       ;//0x0030
    const avr32_ecchrs_pr8_t             PR8       ;
  };
  union {
    const unsigned long                  pr9       ;//0x0034
    const avr32_ecchrs_pr9_t             PR9       ;
  };
  union {
    const unsigned long                  pr10      ;//0x0038
    const avr32_ecchrs_pr10_t            PR10      ;
  };
  union {
    const unsigned long                  pr11      ;//0x003c
    const avr32_ecchrs_pr11_t            PR11      ;
  };
  union {
    const unsigned long                  pr12      ;//0x0040
    const avr32_ecchrs_pr12_t            PR12      ;
  };
  union {
    const unsigned long                  pr13      ;//0x0044
    const avr32_ecchrs_pr13_t            PR13      ;
  };
  union {
    const unsigned long                  pr14      ;//0x0048
    const avr32_ecchrs_pr14_t            PR14      ;
  };
  union {
    const unsigned long                  pr15      ;//0x004c
    const avr32_ecchrs_pr15_t            PR15      ;
  };
  union {
    const unsigned long                  cwps00    ;//0x0050
    const avr32_ecchrs_cwps00_t          CWPS00    ;
  };
  union {
    const unsigned long                  cwps01    ;//0x0054
    const avr32_ecchrs_cwps01_t          CWPS01    ;
  };
  union {
    const unsigned long                  cwps02    ;//0x0058
    const avr32_ecchrs_cwps02_t          CWPS02    ;
  };
  union {
    const unsigned long                  cwps03    ;//0x005c
    const avr32_ecchrs_cwps03_t          CWPS03    ;
  };
  union {
    const unsigned long                  cwps04    ;//0x0060
    const avr32_ecchrs_cwps04_t          CWPS04    ;
  };
  union {
    const unsigned long                  cwps05    ;//0x0064
    const avr32_ecchrs_cwps05_t          CWPS05    ;
  };
  union {
    const unsigned long                  cwps06    ;//0x0068
    const avr32_ecchrs_cwps06_t          CWPS06    ;
  };
  union {
    const unsigned long                  cwps07    ;//0x006c
    const avr32_ecchrs_cwps07_t          CWPS07    ;
  };
  union {
    const unsigned long                  cwps08    ;//0x0070
    const avr32_ecchrs_cwps08_t          CWPS08    ;
  };
  union {
    const unsigned long                  cwps09    ;//0x0074
    const avr32_ecchrs_cwps09_t          CWPS09    ;
  };
  union {
    const unsigned long                  cwps10    ;//0x0078
    const avr32_ecchrs_cwps10_t          CWPS10    ;
  };
  union {
    const unsigned long                  cwps11    ;//0x007c
    const avr32_ecchrs_cwps11_t          CWPS11    ;
  };
  union {
    const unsigned long                  cwps12    ;//0x0080
    const avr32_ecchrs_cwps12_t          CWPS12    ;
  };
  union {
    const unsigned long                  cwps13    ;//0x0084
    const avr32_ecchrs_cwps13_t          CWPS13    ;
  };
  union {
    const unsigned long                  cwps14    ;//0x0088
    const avr32_ecchrs_cwps14_t          CWPS14    ;
  };
  union {
    const unsigned long                  cwps15    ;//0x008c
    const avr32_ecchrs_cwps15_t          CWPS15    ;
  };
  union {
    const unsigned long                  cwps16    ;//0x0090
    const avr32_ecchrs_cwps16_t          CWPS16    ;
  };
  union {
    const unsigned long                  cwps17    ;//0x0094
    const avr32_ecchrs_cwps17_t          CWPS17    ;
  };
  union {
    const unsigned long                  cwps18    ;//0x0098
    const avr32_ecchrs_cwps18_t          CWPS18    ;
  };
  union {
    const unsigned long                  cwps19    ;//0x009c
    const avr32_ecchrs_cwps19_t          CWPS19    ;
  };
  union {
    const unsigned long                  cwps20    ;//0x00a0
    const avr32_ecchrs_cwps20_t          CWPS20    ;
  };
  union {
    const unsigned long                  cwps21    ;//0x00a4
    const avr32_ecchrs_cwps21_t          CWPS21    ;
  };
  union {
    const unsigned long                  cwps22    ;//0x00a8
    const avr32_ecchrs_cwps22_t          CWPS22    ;
  };
  union {
    const unsigned long                  cwps23    ;//0x00ac
    const avr32_ecchrs_cwps23_t          CWPS23    ;
  };
  union {
    const unsigned long                  cwps24    ;//0x00b0
    const avr32_ecchrs_cwps24_t          CWPS24    ;
  };
  union {
    const unsigned long                  cwps25    ;//0x00b4
    const avr32_ecchrs_cwps25_t          CWPS25    ;
  };
  union {
    const unsigned long                  cwps26    ;//0x00b8
    const avr32_ecchrs_cwps26_t          CWPS26    ;
  };
  union {
    const unsigned long                  cwps27    ;//0x00bc
    const avr32_ecchrs_cwps27_t          CWPS27    ;
  };
  union {
    const unsigned long                  cwps28    ;//0x00c0
    const avr32_ecchrs_cwps28_t          CWPS28    ;
  };
  union {
    const unsigned long                  cwps29    ;//0x00c4
    const avr32_ecchrs_cwps29_t          CWPS29    ;
  };
  union {
    const unsigned long                  cwps30    ;//0x00c8
    const avr32_ecchrs_cwps30_t          CWPS30    ;
  };
  union {
    const unsigned long                  cwps31    ;//0x00cc
    const avr32_ecchrs_cwps31_t          CWPS31    ;
  };
  union {
    const unsigned long                  cwps32    ;//0x00d0
    const avr32_ecchrs_cwps32_t          CWPS32    ;
  };
  union {
    const unsigned long                  cwps33    ;//0x00d4
    const avr32_ecchrs_cwps33_t          CWPS33    ;
  };
  union {
    const unsigned long                  cwps34    ;//0x00d8
    const avr32_ecchrs_cwps34_t          CWPS34    ;
  };
  union {
    const unsigned long                  cwps35    ;//0x00dc
    const avr32_ecchrs_cwps35_t          CWPS35    ;
  };
  union {
    const unsigned long                  cwps36    ;//0x00e0
    const avr32_ecchrs_cwps36_t          CWPS36    ;
  };
  union {
    const unsigned long                  cwps37    ;//0x00e4
    const avr32_ecchrs_cwps37_t          CWPS37    ;
  };
  union {
    const unsigned long                  cwps38    ;//0x00e8
    const avr32_ecchrs_cwps38_t          CWPS38    ;
  };
  union {
    const unsigned long                  cwps39    ;//0x00ec
    const avr32_ecchrs_cwps39_t          CWPS39    ;
  };
  union {
    const unsigned long                  cwps40    ;//0x00f0
    const avr32_ecchrs_cwps40_t          CWPS40    ;
  };
  union {
    const unsigned long                  cwps41    ;//0x00f4
    const avr32_ecchrs_cwps41_t          CWPS41    ;
  };
  union {
    const unsigned long                  cwps42    ;//0x00f8
    const avr32_ecchrs_cwps42_t          CWPS42    ;
  };
  union {
    const unsigned long                  cwps43    ;//0x00fc
    const avr32_ecchrs_cwps43_t          CWPS43    ;
  };
  union {
    const unsigned long                  cwps44    ;//0x0100
    const avr32_ecchrs_cwps44_t          CWPS44    ;
  };
  union {
    const unsigned long                  cwps45    ;//0x0104
    const avr32_ecchrs_cwps45_t          CWPS45    ;
  };
  union {
    const unsigned long                  cwps46    ;//0x0108
    const avr32_ecchrs_cwps46_t          CWPS46    ;
  };
  union {
    const unsigned long                  cwps47    ;//0x010c
    const avr32_ecchrs_cwps47_t          CWPS47    ;
  };
  union {
    const unsigned long                  cwps48    ;//0x0110
    const avr32_ecchrs_cwps48_t          CWPS48    ;
  };
  union {
    const unsigned long                  cwps49    ;//0x0114
    const avr32_ecchrs_cwps49_t          CWPS49    ;
  };
  union {
    const unsigned long                  cwps50    ;//0x0118
    const avr32_ecchrs_cwps50_t          CWPS50    ;
  };
  union {
    const unsigned long                  cwps51    ;//0x011c
    const avr32_ecchrs_cwps51_t          CWPS51    ;
  };
  union {
    const unsigned long                  cwps52    ;//0x0120
    const avr32_ecchrs_cwps52_t          CWPS52    ;
  };
  union {
    const unsigned long                  cwps53    ;//0x0124
    const avr32_ecchrs_cwps53_t          CWPS53    ;
  };
  union {
    const unsigned long                  cwps54    ;//0x0128
    const avr32_ecchrs_cwps54_t          CWPS54    ;
  };
  union {
    const unsigned long                  cwps55    ;//0x012c
    const avr32_ecchrs_cwps55_t          CWPS55    ;
  };
  union {
    const unsigned long                  cwps56    ;//0x0130
    const avr32_ecchrs_cwps56_t          CWPS56    ;
  };
  union {
    const unsigned long                  cwps57    ;//0x0134
    const avr32_ecchrs_cwps57_t          CWPS57    ;
  };
  union {
    const unsigned long                  cwps58    ;//0x0138
    const avr32_ecchrs_cwps58_t          CWPS58    ;
  };
  union {
    const unsigned long                  cwps59    ;//0x013c
    const avr32_ecchrs_cwps59_t          CWPS59    ;
  };
  union {
    const unsigned long                  cwps60    ;//0x0140
    const avr32_ecchrs_cwps60_t          CWPS60    ;
  };
  union {
    const unsigned long                  cwps61    ;//0x0144
    const avr32_ecchrs_cwps61_t          CWPS61    ;
  };
  union {
    const unsigned long                  cwps62    ;//0x0148
    const avr32_ecchrs_cwps62_t          CWPS62    ;
  };
  union {
    const unsigned long                  cwps63    ;//0x014c
    const avr32_ecchrs_cwps63_t          CWPS63    ;
  };
  union {
    const unsigned long                  cwps64    ;//0x0150
    const avr32_ecchrs_cwps64_t          CWPS64    ;
  };
  union {
    const unsigned long                  cwps65    ;//0x0154
    const avr32_ecchrs_cwps65_t          CWPS65    ;
  };
  union {
    const unsigned long                  cwps66    ;//0x0158
    const avr32_ecchrs_cwps66_t          CWPS66    ;
  };
  union {
    const unsigned long                  cwps67    ;//0x015c
    const avr32_ecchrs_cwps67_t          CWPS67    ;
  };
  union {
    const unsigned long                  cwps68    ;//0x0160
    const avr32_ecchrs_cwps68_t          CWPS68    ;
  };
  union {
    const unsigned long                  cwps69    ;//0x0164
    const avr32_ecchrs_cwps69_t          CWPS69    ;
  };
  union {
    const unsigned long                  cwps70    ;//0x0168
    const avr32_ecchrs_cwps70_t          CWPS70    ;
  };
  union {
    const unsigned long                  cwps71    ;//0x016c
    const avr32_ecchrs_cwps71_t          CWPS71    ;
  };
  union {
    const unsigned long                  cwps72    ;//0x0170
    const avr32_ecchrs_cwps72_t          CWPS72    ;
  };
  union {
    const unsigned long                  cwps73    ;//0x0174
    const avr32_ecchrs_cwps73_t          CWPS73    ;
  };
  union {
    const unsigned long                  cwps74    ;//0x0178
    const avr32_ecchrs_cwps74_t          CWPS74    ;
  };
  union {
    const unsigned long                  cwps75    ;//0x017c
    const avr32_ecchrs_cwps75_t          CWPS75    ;
  };
  union {
    const unsigned long                  cwps76    ;//0x0180
    const avr32_ecchrs_cwps76_t          CWPS76    ;
  };
  union {
    const unsigned long                  cwps77    ;//0x0184
    const avr32_ecchrs_cwps77_t          CWPS77    ;
  };
  union {
    const unsigned long                  cwps78    ;//0x0188
    const avr32_ecchrs_cwps78_t          CWPS78    ;
  };
  union {
    const unsigned long                  cwps79    ;//0x018c
    const avr32_ecchrs_cwps79_t          CWPS79    ;
  };
  union {
    const unsigned long                  mdata0    ;//0x0190
    const avr32_ecchrs_mdata0_t          MDATA0    ;
  };
  union {
    const unsigned long                  mdata1    ;//0x0194
    const avr32_ecchrs_mdata1_t          MDATA1    ;
  };
  union {
    const unsigned long                  mdata2    ;//0x0198
    const avr32_ecchrs_mdata2_t          MDATA2    ;
  };
  union {
    const unsigned long                  mdata3    ;//0x019c
    const avr32_ecchrs_mdata3_t          MDATA3    ;
  };
  union {
    const unsigned long                  adoff0    ;//0x01a0
    const avr32_ecchrs_adoff0_t          ADOFF0    ;
  };
  union {
    const unsigned long                  adoff1    ;//0x01a4
    const avr32_ecchrs_adoff1_t          ADOFF1    ;
  };
  union {
    const unsigned long                  adoff2    ;//0x01a8
    const avr32_ecchrs_adoff2_t          ADOFF2    ;
  };
  union {
    const unsigned long                  adoff3    ;//0x01ac
    const avr32_ecchrs_adoff3_t          ADOFF3    ;
  };
  union {
          unsigned long                  rs4_ier   ;//0x01b0
          avr32_ecchrs_rs4_ier_t         RS4_IER   ;
  };
  union {
          unsigned long                  rs4_idr   ;//0x01b4
          avr32_ecchrs_rs4_idr_t         RS4_IDR   ;
  };
  union {
    const unsigned long                  rs4_imr   ;//0x01b8
    const avr32_ecchrs_rs4_imr_t         RS4_IMR   ;
  };
  union {
    const unsigned long                  rs4_isr   ;//0x01bc
    const avr32_ecchrs_rs4_isr_t         RS4_ISR   ;
  };
  union {
          unsigned long                  rs4_iscr  ;//0x01c0
          avr32_ecchrs_rs4_iscr_t        RS4_ISCR  ;
  };
          unsigned int                   :32       ;//0x01c4
          unsigned int                   :32       ;//0x01c8
          unsigned int                   :32       ;//0x01cc
          unsigned int                   :32       ;//0x01d0
          unsigned int                   :32       ;//0x01d4
          unsigned int                   :32       ;//0x01d8
          unsigned int                   :32       ;//0x01dc
          unsigned int                   :32       ;//0x01e0
          unsigned int                   :32       ;//0x01e4
          unsigned int                   :32       ;//0x01e8
          unsigned int                   :32       ;//0x01ec
          unsigned int                   :32       ;//0x01f0
          unsigned int                   :32       ;//0x01f4
          unsigned int                   :32       ;//0x01f8
  union {
    const unsigned long                  version   ;//0x01fc
    const avr32_ecchrs_version_t         VERSION   ;
  };
} avr32_ecchrs_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ECCHRS_100_H_INCLUDED*/
#endif

