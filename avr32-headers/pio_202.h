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
 * Model        : AP7000
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_PIO_202_H_INCLUDED
#define AVR32_PIO_202_H_INCLUDED

#define AVR32_PIO_H_VERSION 202

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PIO_<register>
 - Bitfield mask:   AVR32_PIO_<register>_<bitfield>
 - Bitfield offset: AVR32_PIO_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PIO_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PIO_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PIO_<bitfield>
 - Bitfield offset: AVR32_PIO_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PIO_<bitfield>_SIZE
 - Bitfield values: AVR32_PIO_<bitfield>_<value name>
 - Bitfield values: AVR32_PIO_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_PIO_ABSR                                     0x00000078
#define AVR32_PIO_ABSR_P0                                           0
#define AVR32_PIO_ABSR_P0_MASK                             0x00000001
#define AVR32_PIO_ABSR_P0_OFFSET                                    0
#define AVR32_PIO_ABSR_P0_SIZE                                      1
#define AVR32_PIO_ABSR_P1                                           1
#define AVR32_PIO_ABSR_P10                                         10
#define AVR32_PIO_ABSR_P10_MASK                            0x00000400
#define AVR32_PIO_ABSR_P10_OFFSET                                  10
#define AVR32_PIO_ABSR_P10_SIZE                                     1
#define AVR32_PIO_ABSR_P11                                         11
#define AVR32_PIO_ABSR_P11_MASK                            0x00000800
#define AVR32_PIO_ABSR_P11_OFFSET                                  11
#define AVR32_PIO_ABSR_P11_SIZE                                     1
#define AVR32_PIO_ABSR_P12                                         12
#define AVR32_PIO_ABSR_P12_MASK                            0x00001000
#define AVR32_PIO_ABSR_P12_OFFSET                                  12
#define AVR32_PIO_ABSR_P12_SIZE                                     1
#define AVR32_PIO_ABSR_P13                                         13
#define AVR32_PIO_ABSR_P13_MASK                            0x00002000
#define AVR32_PIO_ABSR_P13_OFFSET                                  13
#define AVR32_PIO_ABSR_P13_SIZE                                     1
#define AVR32_PIO_ABSR_P14                                         14
#define AVR32_PIO_ABSR_P14_MASK                            0x00004000
#define AVR32_PIO_ABSR_P14_OFFSET                                  14
#define AVR32_PIO_ABSR_P14_SIZE                                     1
#define AVR32_PIO_ABSR_P15                                         15
#define AVR32_PIO_ABSR_P15_MASK                            0x00008000
#define AVR32_PIO_ABSR_P15_OFFSET                                  15
#define AVR32_PIO_ABSR_P15_SIZE                                     1
#define AVR32_PIO_ABSR_P16                                         16
#define AVR32_PIO_ABSR_P16_MASK                            0x00010000
#define AVR32_PIO_ABSR_P16_OFFSET                                  16
#define AVR32_PIO_ABSR_P16_SIZE                                     1
#define AVR32_PIO_ABSR_P17                                         17
#define AVR32_PIO_ABSR_P17_MASK                            0x00020000
#define AVR32_PIO_ABSR_P17_OFFSET                                  17
#define AVR32_PIO_ABSR_P17_SIZE                                     1
#define AVR32_PIO_ABSR_P18                                         18
#define AVR32_PIO_ABSR_P18_MASK                            0x00040000
#define AVR32_PIO_ABSR_P18_OFFSET                                  18
#define AVR32_PIO_ABSR_P18_SIZE                                     1
#define AVR32_PIO_ABSR_P19                                         19
#define AVR32_PIO_ABSR_P19_MASK                            0x00080000
#define AVR32_PIO_ABSR_P19_OFFSET                                  19
#define AVR32_PIO_ABSR_P19_SIZE                                     1
#define AVR32_PIO_ABSR_P1_MASK                             0x00000002
#define AVR32_PIO_ABSR_P1_OFFSET                                    1
#define AVR32_PIO_ABSR_P1_SIZE                                      1
#define AVR32_PIO_ABSR_P2                                           2
#define AVR32_PIO_ABSR_P20                                         20
#define AVR32_PIO_ABSR_P20_MASK                            0x00100000
#define AVR32_PIO_ABSR_P20_OFFSET                                  20
#define AVR32_PIO_ABSR_P20_SIZE                                     1
#define AVR32_PIO_ABSR_P21                                         21
#define AVR32_PIO_ABSR_P21_MASK                            0x00200000
#define AVR32_PIO_ABSR_P21_OFFSET                                  21
#define AVR32_PIO_ABSR_P21_SIZE                                     1
#define AVR32_PIO_ABSR_P22                                         22
#define AVR32_PIO_ABSR_P22_MASK                            0x00400000
#define AVR32_PIO_ABSR_P22_OFFSET                                  22
#define AVR32_PIO_ABSR_P22_SIZE                                     1
#define AVR32_PIO_ABSR_P23                                         23
#define AVR32_PIO_ABSR_P23_MASK                            0x00800000
#define AVR32_PIO_ABSR_P23_OFFSET                                  23
#define AVR32_PIO_ABSR_P23_SIZE                                     1
#define AVR32_PIO_ABSR_P24                                         24
#define AVR32_PIO_ABSR_P24_MASK                            0x01000000
#define AVR32_PIO_ABSR_P24_OFFSET                                  24
#define AVR32_PIO_ABSR_P24_SIZE                                     1
#define AVR32_PIO_ABSR_P25                                         25
#define AVR32_PIO_ABSR_P25_MASK                            0x02000000
#define AVR32_PIO_ABSR_P25_OFFSET                                  25
#define AVR32_PIO_ABSR_P25_SIZE                                     1
#define AVR32_PIO_ABSR_P26                                         26
#define AVR32_PIO_ABSR_P26_MASK                            0x04000000
#define AVR32_PIO_ABSR_P26_OFFSET                                  26
#define AVR32_PIO_ABSR_P26_SIZE                                     1
#define AVR32_PIO_ABSR_P27                                         27
#define AVR32_PIO_ABSR_P27_MASK                            0x08000000
#define AVR32_PIO_ABSR_P27_OFFSET                                  27
#define AVR32_PIO_ABSR_P27_SIZE                                     1
#define AVR32_PIO_ABSR_P28                                         28
#define AVR32_PIO_ABSR_P28_MASK                            0x10000000
#define AVR32_PIO_ABSR_P28_OFFSET                                  28
#define AVR32_PIO_ABSR_P28_SIZE                                     1
#define AVR32_PIO_ABSR_P29                                         29
#define AVR32_PIO_ABSR_P29_MASK                            0x20000000
#define AVR32_PIO_ABSR_P29_OFFSET                                  29
#define AVR32_PIO_ABSR_P29_SIZE                                     1
#define AVR32_PIO_ABSR_P2_MASK                             0x00000004
#define AVR32_PIO_ABSR_P2_OFFSET                                    2
#define AVR32_PIO_ABSR_P2_SIZE                                      1
#define AVR32_PIO_ABSR_P3                                           3
#define AVR32_PIO_ABSR_P30                                         30
#define AVR32_PIO_ABSR_P30_MASK                            0x40000000
#define AVR32_PIO_ABSR_P30_OFFSET                                  30
#define AVR32_PIO_ABSR_P30_SIZE                                     1
#define AVR32_PIO_ABSR_P31                                         31
#define AVR32_PIO_ABSR_P31_MASK                            0x80000000
#define AVR32_PIO_ABSR_P31_OFFSET                                  31
#define AVR32_PIO_ABSR_P31_SIZE                                     1
#define AVR32_PIO_ABSR_P3_MASK                             0x00000008
#define AVR32_PIO_ABSR_P3_OFFSET                                    3
#define AVR32_PIO_ABSR_P3_SIZE                                      1
#define AVR32_PIO_ABSR_P4                                           4
#define AVR32_PIO_ABSR_P4_MASK                             0x00000010
#define AVR32_PIO_ABSR_P4_OFFSET                                    4
#define AVR32_PIO_ABSR_P4_SIZE                                      1
#define AVR32_PIO_ABSR_P5                                           5
#define AVR32_PIO_ABSR_P5_MASK                             0x00000020
#define AVR32_PIO_ABSR_P5_OFFSET                                    5
#define AVR32_PIO_ABSR_P5_SIZE                                      1
#define AVR32_PIO_ABSR_P6                                           6
#define AVR32_PIO_ABSR_P6_MASK                             0x00000040
#define AVR32_PIO_ABSR_P6_OFFSET                                    6
#define AVR32_PIO_ABSR_P6_SIZE                                      1
#define AVR32_PIO_ABSR_P7                                           7
#define AVR32_PIO_ABSR_P7_MASK                             0x00000080
#define AVR32_PIO_ABSR_P7_OFFSET                                    7
#define AVR32_PIO_ABSR_P7_SIZE                                      1
#define AVR32_PIO_ABSR_P8                                           8
#define AVR32_PIO_ABSR_P8_MASK                             0x00000100
#define AVR32_PIO_ABSR_P8_OFFSET                                    8
#define AVR32_PIO_ABSR_P8_SIZE                                      1
#define AVR32_PIO_ABSR_P9                                           9
#define AVR32_PIO_ABSR_P9_MASK                             0x00000200
#define AVR32_PIO_ABSR_P9_OFFSET                                    9
#define AVR32_PIO_ABSR_P9_SIZE                                      1
#define AVR32_PIO_ASR                                      0x00000070
#define AVR32_PIO_ASR_P0                                            0
#define AVR32_PIO_ASR_P0_MASK                              0x00000001
#define AVR32_PIO_ASR_P0_OFFSET                                     0
#define AVR32_PIO_ASR_P0_SIZE                                       1
#define AVR32_PIO_ASR_P1                                            1
#define AVR32_PIO_ASR_P10                                          10
#define AVR32_PIO_ASR_P10_MASK                             0x00000400
#define AVR32_PIO_ASR_P10_OFFSET                                   10
#define AVR32_PIO_ASR_P10_SIZE                                      1
#define AVR32_PIO_ASR_P11                                          11
#define AVR32_PIO_ASR_P11_MASK                             0x00000800
#define AVR32_PIO_ASR_P11_OFFSET                                   11
#define AVR32_PIO_ASR_P11_SIZE                                      1
#define AVR32_PIO_ASR_P12                                          12
#define AVR32_PIO_ASR_P12_MASK                             0x00001000
#define AVR32_PIO_ASR_P12_OFFSET                                   12
#define AVR32_PIO_ASR_P12_SIZE                                      1
#define AVR32_PIO_ASR_P13                                          13
#define AVR32_PIO_ASR_P13_MASK                             0x00002000
#define AVR32_PIO_ASR_P13_OFFSET                                   13
#define AVR32_PIO_ASR_P13_SIZE                                      1
#define AVR32_PIO_ASR_P14                                          14
#define AVR32_PIO_ASR_P14_MASK                             0x00004000
#define AVR32_PIO_ASR_P14_OFFSET                                   14
#define AVR32_PIO_ASR_P14_SIZE                                      1
#define AVR32_PIO_ASR_P15                                          15
#define AVR32_PIO_ASR_P15_MASK                             0x00008000
#define AVR32_PIO_ASR_P15_OFFSET                                   15
#define AVR32_PIO_ASR_P15_SIZE                                      1
#define AVR32_PIO_ASR_P16                                          16
#define AVR32_PIO_ASR_P16_MASK                             0x00010000
#define AVR32_PIO_ASR_P16_OFFSET                                   16
#define AVR32_PIO_ASR_P16_SIZE                                      1
#define AVR32_PIO_ASR_P17                                          17
#define AVR32_PIO_ASR_P17_MASK                             0x00020000
#define AVR32_PIO_ASR_P17_OFFSET                                   17
#define AVR32_PIO_ASR_P17_SIZE                                      1
#define AVR32_PIO_ASR_P18                                          18
#define AVR32_PIO_ASR_P18_MASK                             0x00040000
#define AVR32_PIO_ASR_P18_OFFSET                                   18
#define AVR32_PIO_ASR_P18_SIZE                                      1
#define AVR32_PIO_ASR_P19                                          19
#define AVR32_PIO_ASR_P19_MASK                             0x00080000
#define AVR32_PIO_ASR_P19_OFFSET                                   19
#define AVR32_PIO_ASR_P19_SIZE                                      1
#define AVR32_PIO_ASR_P1_MASK                              0x00000002
#define AVR32_PIO_ASR_P1_OFFSET                                     1
#define AVR32_PIO_ASR_P1_SIZE                                       1
#define AVR32_PIO_ASR_P2                                            2
#define AVR32_PIO_ASR_P20                                          20
#define AVR32_PIO_ASR_P20_MASK                             0x00100000
#define AVR32_PIO_ASR_P20_OFFSET                                   20
#define AVR32_PIO_ASR_P20_SIZE                                      1
#define AVR32_PIO_ASR_P21                                          21
#define AVR32_PIO_ASR_P21_MASK                             0x00200000
#define AVR32_PIO_ASR_P21_OFFSET                                   21
#define AVR32_PIO_ASR_P21_SIZE                                      1
#define AVR32_PIO_ASR_P22                                          22
#define AVR32_PIO_ASR_P22_MASK                             0x00400000
#define AVR32_PIO_ASR_P22_OFFSET                                   22
#define AVR32_PIO_ASR_P22_SIZE                                      1
#define AVR32_PIO_ASR_P23                                          23
#define AVR32_PIO_ASR_P23_MASK                             0x00800000
#define AVR32_PIO_ASR_P23_OFFSET                                   23
#define AVR32_PIO_ASR_P23_SIZE                                      1
#define AVR32_PIO_ASR_P24                                          24
#define AVR32_PIO_ASR_P24_MASK                             0x01000000
#define AVR32_PIO_ASR_P24_OFFSET                                   24
#define AVR32_PIO_ASR_P24_SIZE                                      1
#define AVR32_PIO_ASR_P25                                          25
#define AVR32_PIO_ASR_P25_MASK                             0x02000000
#define AVR32_PIO_ASR_P25_OFFSET                                   25
#define AVR32_PIO_ASR_P25_SIZE                                      1
#define AVR32_PIO_ASR_P26                                          26
#define AVR32_PIO_ASR_P26_MASK                             0x04000000
#define AVR32_PIO_ASR_P26_OFFSET                                   26
#define AVR32_PIO_ASR_P26_SIZE                                      1
#define AVR32_PIO_ASR_P27                                          27
#define AVR32_PIO_ASR_P27_MASK                             0x08000000
#define AVR32_PIO_ASR_P27_OFFSET                                   27
#define AVR32_PIO_ASR_P27_SIZE                                      1
#define AVR32_PIO_ASR_P28                                          28
#define AVR32_PIO_ASR_P28_MASK                             0x10000000
#define AVR32_PIO_ASR_P28_OFFSET                                   28
#define AVR32_PIO_ASR_P28_SIZE                                      1
#define AVR32_PIO_ASR_P29                                          29
#define AVR32_PIO_ASR_P29_MASK                             0x20000000
#define AVR32_PIO_ASR_P29_OFFSET                                   29
#define AVR32_PIO_ASR_P29_SIZE                                      1
#define AVR32_PIO_ASR_P2_MASK                              0x00000004
#define AVR32_PIO_ASR_P2_OFFSET                                     2
#define AVR32_PIO_ASR_P2_SIZE                                       1
#define AVR32_PIO_ASR_P3                                            3
#define AVR32_PIO_ASR_P30                                          30
#define AVR32_PIO_ASR_P30_MASK                             0x40000000
#define AVR32_PIO_ASR_P30_OFFSET                                   30
#define AVR32_PIO_ASR_P30_SIZE                                      1
#define AVR32_PIO_ASR_P31                                          31
#define AVR32_PIO_ASR_P31_MASK                             0x80000000
#define AVR32_PIO_ASR_P31_OFFSET                                   31
#define AVR32_PIO_ASR_P31_SIZE                                      1
#define AVR32_PIO_ASR_P3_MASK                              0x00000008
#define AVR32_PIO_ASR_P3_OFFSET                                     3
#define AVR32_PIO_ASR_P3_SIZE                                       1
#define AVR32_PIO_ASR_P4                                            4
#define AVR32_PIO_ASR_P4_MASK                              0x00000010
#define AVR32_PIO_ASR_P4_OFFSET                                     4
#define AVR32_PIO_ASR_P4_SIZE                                       1
#define AVR32_PIO_ASR_P5                                            5
#define AVR32_PIO_ASR_P5_MASK                              0x00000020
#define AVR32_PIO_ASR_P5_OFFSET                                     5
#define AVR32_PIO_ASR_P5_SIZE                                       1
#define AVR32_PIO_ASR_P6                                            6
#define AVR32_PIO_ASR_P6_MASK                              0x00000040
#define AVR32_PIO_ASR_P6_OFFSET                                     6
#define AVR32_PIO_ASR_P6_SIZE                                       1
#define AVR32_PIO_ASR_P7                                            7
#define AVR32_PIO_ASR_P7_MASK                              0x00000080
#define AVR32_PIO_ASR_P7_OFFSET                                     7
#define AVR32_PIO_ASR_P7_SIZE                                       1
#define AVR32_PIO_ASR_P8                                            8
#define AVR32_PIO_ASR_P8_MASK                              0x00000100
#define AVR32_PIO_ASR_P8_OFFSET                                     8
#define AVR32_PIO_ASR_P8_SIZE                                       1
#define AVR32_PIO_ASR_P9                                            9
#define AVR32_PIO_ASR_P9_MASK                              0x00000200
#define AVR32_PIO_ASR_P9_OFFSET                                     9
#define AVR32_PIO_ASR_P9_SIZE                                       1
#define AVR32_PIO_BSR                                      0x00000074
#define AVR32_PIO_BSR_P0                                            0
#define AVR32_PIO_BSR_P0_MASK                              0x00000001
#define AVR32_PIO_BSR_P0_OFFSET                                     0
#define AVR32_PIO_BSR_P0_SIZE                                       1
#define AVR32_PIO_BSR_P1                                            1
#define AVR32_PIO_BSR_P10                                          10
#define AVR32_PIO_BSR_P10_MASK                             0x00000400
#define AVR32_PIO_BSR_P10_OFFSET                                   10
#define AVR32_PIO_BSR_P10_SIZE                                      1
#define AVR32_PIO_BSR_P11                                          11
#define AVR32_PIO_BSR_P11_MASK                             0x00000800
#define AVR32_PIO_BSR_P11_OFFSET                                   11
#define AVR32_PIO_BSR_P11_SIZE                                      1
#define AVR32_PIO_BSR_P12                                          12
#define AVR32_PIO_BSR_P12_MASK                             0x00001000
#define AVR32_PIO_BSR_P12_OFFSET                                   12
#define AVR32_PIO_BSR_P12_SIZE                                      1
#define AVR32_PIO_BSR_P13                                          13
#define AVR32_PIO_BSR_P13_MASK                             0x00002000
#define AVR32_PIO_BSR_P13_OFFSET                                   13
#define AVR32_PIO_BSR_P13_SIZE                                      1
#define AVR32_PIO_BSR_P14                                          14
#define AVR32_PIO_BSR_P14_MASK                             0x00004000
#define AVR32_PIO_BSR_P14_OFFSET                                   14
#define AVR32_PIO_BSR_P14_SIZE                                      1
#define AVR32_PIO_BSR_P15                                          15
#define AVR32_PIO_BSR_P15_MASK                             0x00008000
#define AVR32_PIO_BSR_P15_OFFSET                                   15
#define AVR32_PIO_BSR_P15_SIZE                                      1
#define AVR32_PIO_BSR_P16                                          16
#define AVR32_PIO_BSR_P16_MASK                             0x00010000
#define AVR32_PIO_BSR_P16_OFFSET                                   16
#define AVR32_PIO_BSR_P16_SIZE                                      1
#define AVR32_PIO_BSR_P17                                          17
#define AVR32_PIO_BSR_P17_MASK                             0x00020000
#define AVR32_PIO_BSR_P17_OFFSET                                   17
#define AVR32_PIO_BSR_P17_SIZE                                      1
#define AVR32_PIO_BSR_P18                                          18
#define AVR32_PIO_BSR_P18_MASK                             0x00040000
#define AVR32_PIO_BSR_P18_OFFSET                                   18
#define AVR32_PIO_BSR_P18_SIZE                                      1
#define AVR32_PIO_BSR_P19                                          19
#define AVR32_PIO_BSR_P19_MASK                             0x00080000
#define AVR32_PIO_BSR_P19_OFFSET                                   19
#define AVR32_PIO_BSR_P19_SIZE                                      1
#define AVR32_PIO_BSR_P1_MASK                              0x00000002
#define AVR32_PIO_BSR_P1_OFFSET                                     1
#define AVR32_PIO_BSR_P1_SIZE                                       1
#define AVR32_PIO_BSR_P2                                            2
#define AVR32_PIO_BSR_P20                                          20
#define AVR32_PIO_BSR_P20_MASK                             0x00100000
#define AVR32_PIO_BSR_P20_OFFSET                                   20
#define AVR32_PIO_BSR_P20_SIZE                                      1
#define AVR32_PIO_BSR_P21                                          21
#define AVR32_PIO_BSR_P21_MASK                             0x00200000
#define AVR32_PIO_BSR_P21_OFFSET                                   21
#define AVR32_PIO_BSR_P21_SIZE                                      1
#define AVR32_PIO_BSR_P22                                          22
#define AVR32_PIO_BSR_P22_MASK                             0x00400000
#define AVR32_PIO_BSR_P22_OFFSET                                   22
#define AVR32_PIO_BSR_P22_SIZE                                      1
#define AVR32_PIO_BSR_P23                                          23
#define AVR32_PIO_BSR_P23_MASK                             0x00800000
#define AVR32_PIO_BSR_P23_OFFSET                                   23
#define AVR32_PIO_BSR_P23_SIZE                                      1
#define AVR32_PIO_BSR_P24                                          24
#define AVR32_PIO_BSR_P24_MASK                             0x01000000
#define AVR32_PIO_BSR_P24_OFFSET                                   24
#define AVR32_PIO_BSR_P24_SIZE                                      1
#define AVR32_PIO_BSR_P25                                          25
#define AVR32_PIO_BSR_P25_MASK                             0x02000000
#define AVR32_PIO_BSR_P25_OFFSET                                   25
#define AVR32_PIO_BSR_P25_SIZE                                      1
#define AVR32_PIO_BSR_P26                                          26
#define AVR32_PIO_BSR_P26_MASK                             0x04000000
#define AVR32_PIO_BSR_P26_OFFSET                                   26
#define AVR32_PIO_BSR_P26_SIZE                                      1
#define AVR32_PIO_BSR_P27                                          27
#define AVR32_PIO_BSR_P27_MASK                             0x08000000
#define AVR32_PIO_BSR_P27_OFFSET                                   27
#define AVR32_PIO_BSR_P27_SIZE                                      1
#define AVR32_PIO_BSR_P28                                          28
#define AVR32_PIO_BSR_P28_MASK                             0x10000000
#define AVR32_PIO_BSR_P28_OFFSET                                   28
#define AVR32_PIO_BSR_P28_SIZE                                      1
#define AVR32_PIO_BSR_P29                                          29
#define AVR32_PIO_BSR_P29_MASK                             0x20000000
#define AVR32_PIO_BSR_P29_OFFSET                                   29
#define AVR32_PIO_BSR_P29_SIZE                                      1
#define AVR32_PIO_BSR_P2_MASK                              0x00000004
#define AVR32_PIO_BSR_P2_OFFSET                                     2
#define AVR32_PIO_BSR_P2_SIZE                                       1
#define AVR32_PIO_BSR_P3                                            3
#define AVR32_PIO_BSR_P30                                          30
#define AVR32_PIO_BSR_P30_MASK                             0x40000000
#define AVR32_PIO_BSR_P30_OFFSET                                   30
#define AVR32_PIO_BSR_P30_SIZE                                      1
#define AVR32_PIO_BSR_P31                                          31
#define AVR32_PIO_BSR_P31_MASK                             0x80000000
#define AVR32_PIO_BSR_P31_OFFSET                                   31
#define AVR32_PIO_BSR_P31_SIZE                                      1
#define AVR32_PIO_BSR_P3_MASK                              0x00000008
#define AVR32_PIO_BSR_P3_OFFSET                                     3
#define AVR32_PIO_BSR_P3_SIZE                                       1
#define AVR32_PIO_BSR_P4                                            4
#define AVR32_PIO_BSR_P4_MASK                              0x00000010
#define AVR32_PIO_BSR_P4_OFFSET                                     4
#define AVR32_PIO_BSR_P4_SIZE                                       1
#define AVR32_PIO_BSR_P5                                            5
#define AVR32_PIO_BSR_P5_MASK                              0x00000020
#define AVR32_PIO_BSR_P5_OFFSET                                     5
#define AVR32_PIO_BSR_P5_SIZE                                       1
#define AVR32_PIO_BSR_P6                                            6
#define AVR32_PIO_BSR_P6_MASK                              0x00000040
#define AVR32_PIO_BSR_P6_OFFSET                                     6
#define AVR32_PIO_BSR_P6_SIZE                                       1
#define AVR32_PIO_BSR_P7                                            7
#define AVR32_PIO_BSR_P7_MASK                              0x00000080
#define AVR32_PIO_BSR_P7_OFFSET                                     7
#define AVR32_PIO_BSR_P7_SIZE                                       1
#define AVR32_PIO_BSR_P8                                            8
#define AVR32_PIO_BSR_P8_MASK                              0x00000100
#define AVR32_PIO_BSR_P8_OFFSET                                     8
#define AVR32_PIO_BSR_P8_SIZE                                       1
#define AVR32_PIO_BSR_P9                                            9
#define AVR32_PIO_BSR_P9_MASK                              0x00000200
#define AVR32_PIO_BSR_P9_OFFSET                                     9
#define AVR32_PIO_BSR_P9_SIZE                                       1
#define AVR32_PIO_CODR                                     0x00000034
#define AVR32_PIO_CODR_P0                                           0
#define AVR32_PIO_CODR_P0_MASK                             0x00000001
#define AVR32_PIO_CODR_P0_OFFSET                                    0
#define AVR32_PIO_CODR_P0_SIZE                                      1
#define AVR32_PIO_CODR_P1                                           1
#define AVR32_PIO_CODR_P10                                         10
#define AVR32_PIO_CODR_P10_MASK                            0x00000400
#define AVR32_PIO_CODR_P10_OFFSET                                  10
#define AVR32_PIO_CODR_P10_SIZE                                     1
#define AVR32_PIO_CODR_P11                                         11
#define AVR32_PIO_CODR_P11_MASK                            0x00000800
#define AVR32_PIO_CODR_P11_OFFSET                                  11
#define AVR32_PIO_CODR_P11_SIZE                                     1
#define AVR32_PIO_CODR_P12                                         12
#define AVR32_PIO_CODR_P12_MASK                            0x00001000
#define AVR32_PIO_CODR_P12_OFFSET                                  12
#define AVR32_PIO_CODR_P12_SIZE                                     1
#define AVR32_PIO_CODR_P13                                         13
#define AVR32_PIO_CODR_P13_MASK                            0x00002000
#define AVR32_PIO_CODR_P13_OFFSET                                  13
#define AVR32_PIO_CODR_P13_SIZE                                     1
#define AVR32_PIO_CODR_P14                                         14
#define AVR32_PIO_CODR_P14_MASK                            0x00004000
#define AVR32_PIO_CODR_P14_OFFSET                                  14
#define AVR32_PIO_CODR_P14_SIZE                                     1
#define AVR32_PIO_CODR_P15                                         15
#define AVR32_PIO_CODR_P15_MASK                            0x00008000
#define AVR32_PIO_CODR_P15_OFFSET                                  15
#define AVR32_PIO_CODR_P15_SIZE                                     1
#define AVR32_PIO_CODR_P16                                         16
#define AVR32_PIO_CODR_P16_MASK                            0x00010000
#define AVR32_PIO_CODR_P16_OFFSET                                  16
#define AVR32_PIO_CODR_P16_SIZE                                     1
#define AVR32_PIO_CODR_P17                                         17
#define AVR32_PIO_CODR_P17_MASK                            0x00020000
#define AVR32_PIO_CODR_P17_OFFSET                                  17
#define AVR32_PIO_CODR_P17_SIZE                                     1
#define AVR32_PIO_CODR_P18                                         18
#define AVR32_PIO_CODR_P18_MASK                            0x00040000
#define AVR32_PIO_CODR_P18_OFFSET                                  18
#define AVR32_PIO_CODR_P18_SIZE                                     1
#define AVR32_PIO_CODR_P19                                         19
#define AVR32_PIO_CODR_P19_MASK                            0x00080000
#define AVR32_PIO_CODR_P19_OFFSET                                  19
#define AVR32_PIO_CODR_P19_SIZE                                     1
#define AVR32_PIO_CODR_P1_MASK                             0x00000002
#define AVR32_PIO_CODR_P1_OFFSET                                    1
#define AVR32_PIO_CODR_P1_SIZE                                      1
#define AVR32_PIO_CODR_P2                                           2
#define AVR32_PIO_CODR_P20                                         20
#define AVR32_PIO_CODR_P20_MASK                            0x00100000
#define AVR32_PIO_CODR_P20_OFFSET                                  20
#define AVR32_PIO_CODR_P20_SIZE                                     1
#define AVR32_PIO_CODR_P21                                         21
#define AVR32_PIO_CODR_P21_MASK                            0x00200000
#define AVR32_PIO_CODR_P21_OFFSET                                  21
#define AVR32_PIO_CODR_P21_SIZE                                     1
#define AVR32_PIO_CODR_P22                                         22
#define AVR32_PIO_CODR_P22_MASK                            0x00400000
#define AVR32_PIO_CODR_P22_OFFSET                                  22
#define AVR32_PIO_CODR_P22_SIZE                                     1
#define AVR32_PIO_CODR_P23                                         23
#define AVR32_PIO_CODR_P23_MASK                            0x00800000
#define AVR32_PIO_CODR_P23_OFFSET                                  23
#define AVR32_PIO_CODR_P23_SIZE                                     1
#define AVR32_PIO_CODR_P24                                         24
#define AVR32_PIO_CODR_P24_MASK                            0x01000000
#define AVR32_PIO_CODR_P24_OFFSET                                  24
#define AVR32_PIO_CODR_P24_SIZE                                     1
#define AVR32_PIO_CODR_P25                                         25
#define AVR32_PIO_CODR_P25_MASK                            0x02000000
#define AVR32_PIO_CODR_P25_OFFSET                                  25
#define AVR32_PIO_CODR_P25_SIZE                                     1
#define AVR32_PIO_CODR_P26                                         26
#define AVR32_PIO_CODR_P26_MASK                            0x04000000
#define AVR32_PIO_CODR_P26_OFFSET                                  26
#define AVR32_PIO_CODR_P26_SIZE                                     1
#define AVR32_PIO_CODR_P27                                         27
#define AVR32_PIO_CODR_P27_MASK                            0x08000000
#define AVR32_PIO_CODR_P27_OFFSET                                  27
#define AVR32_PIO_CODR_P27_SIZE                                     1
#define AVR32_PIO_CODR_P28                                         28
#define AVR32_PIO_CODR_P28_MASK                            0x10000000
#define AVR32_PIO_CODR_P28_OFFSET                                  28
#define AVR32_PIO_CODR_P28_SIZE                                     1
#define AVR32_PIO_CODR_P29                                         29
#define AVR32_PIO_CODR_P29_MASK                            0x20000000
#define AVR32_PIO_CODR_P29_OFFSET                                  29
#define AVR32_PIO_CODR_P29_SIZE                                     1
#define AVR32_PIO_CODR_P2_MASK                             0x00000004
#define AVR32_PIO_CODR_P2_OFFSET                                    2
#define AVR32_PIO_CODR_P2_SIZE                                      1
#define AVR32_PIO_CODR_P3                                           3
#define AVR32_PIO_CODR_P30                                         30
#define AVR32_PIO_CODR_P30_MASK                            0x40000000
#define AVR32_PIO_CODR_P30_OFFSET                                  30
#define AVR32_PIO_CODR_P30_SIZE                                     1
#define AVR32_PIO_CODR_P31                                         31
#define AVR32_PIO_CODR_P31_MASK                            0x80000000
#define AVR32_PIO_CODR_P31_OFFSET                                  31
#define AVR32_PIO_CODR_P31_SIZE                                     1
#define AVR32_PIO_CODR_P3_MASK                             0x00000008
#define AVR32_PIO_CODR_P3_OFFSET                                    3
#define AVR32_PIO_CODR_P3_SIZE                                      1
#define AVR32_PIO_CODR_P4                                           4
#define AVR32_PIO_CODR_P4_MASK                             0x00000010
#define AVR32_PIO_CODR_P4_OFFSET                                    4
#define AVR32_PIO_CODR_P4_SIZE                                      1
#define AVR32_PIO_CODR_P5                                           5
#define AVR32_PIO_CODR_P5_MASK                             0x00000020
#define AVR32_PIO_CODR_P5_OFFSET                                    5
#define AVR32_PIO_CODR_P5_SIZE                                      1
#define AVR32_PIO_CODR_P6                                           6
#define AVR32_PIO_CODR_P6_MASK                             0x00000040
#define AVR32_PIO_CODR_P6_OFFSET                                    6
#define AVR32_PIO_CODR_P6_SIZE                                      1
#define AVR32_PIO_CODR_P7                                           7
#define AVR32_PIO_CODR_P7_MASK                             0x00000080
#define AVR32_PIO_CODR_P7_OFFSET                                    7
#define AVR32_PIO_CODR_P7_SIZE                                      1
#define AVR32_PIO_CODR_P8                                           8
#define AVR32_PIO_CODR_P8_MASK                             0x00000100
#define AVR32_PIO_CODR_P8_OFFSET                                    8
#define AVR32_PIO_CODR_P8_SIZE                                      1
#define AVR32_PIO_CODR_P9                                           9
#define AVR32_PIO_CODR_P9_MASK                             0x00000200
#define AVR32_PIO_CODR_P9_OFFSET                                    9
#define AVR32_PIO_CODR_P9_SIZE                                      1
#define AVR32_PIO_IDR                                      0x00000044
#define AVR32_PIO_IDR_P0                                            0
#define AVR32_PIO_IDR_P0_MASK                              0x00000001
#define AVR32_PIO_IDR_P0_OFFSET                                     0
#define AVR32_PIO_IDR_P0_SIZE                                       1
#define AVR32_PIO_IDR_P1                                            1
#define AVR32_PIO_IDR_P10                                          10
#define AVR32_PIO_IDR_P10_MASK                             0x00000400
#define AVR32_PIO_IDR_P10_OFFSET                                   10
#define AVR32_PIO_IDR_P10_SIZE                                      1
#define AVR32_PIO_IDR_P11                                          11
#define AVR32_PIO_IDR_P11_MASK                             0x00000800
#define AVR32_PIO_IDR_P11_OFFSET                                   11
#define AVR32_PIO_IDR_P11_SIZE                                      1
#define AVR32_PIO_IDR_P12                                          12
#define AVR32_PIO_IDR_P12_MASK                             0x00001000
#define AVR32_PIO_IDR_P12_OFFSET                                   12
#define AVR32_PIO_IDR_P12_SIZE                                      1
#define AVR32_PIO_IDR_P13                                          13
#define AVR32_PIO_IDR_P13_MASK                             0x00002000
#define AVR32_PIO_IDR_P13_OFFSET                                   13
#define AVR32_PIO_IDR_P13_SIZE                                      1
#define AVR32_PIO_IDR_P14                                          14
#define AVR32_PIO_IDR_P14_MASK                             0x00004000
#define AVR32_PIO_IDR_P14_OFFSET                                   14
#define AVR32_PIO_IDR_P14_SIZE                                      1
#define AVR32_PIO_IDR_P15                                          15
#define AVR32_PIO_IDR_P15_MASK                             0x00008000
#define AVR32_PIO_IDR_P15_OFFSET                                   15
#define AVR32_PIO_IDR_P15_SIZE                                      1
#define AVR32_PIO_IDR_P16                                          16
#define AVR32_PIO_IDR_P16_MASK                             0x00010000
#define AVR32_PIO_IDR_P16_OFFSET                                   16
#define AVR32_PIO_IDR_P16_SIZE                                      1
#define AVR32_PIO_IDR_P17                                          17
#define AVR32_PIO_IDR_P17_MASK                             0x00020000
#define AVR32_PIO_IDR_P17_OFFSET                                   17
#define AVR32_PIO_IDR_P17_SIZE                                      1
#define AVR32_PIO_IDR_P18                                          18
#define AVR32_PIO_IDR_P18_MASK                             0x00040000
#define AVR32_PIO_IDR_P18_OFFSET                                   18
#define AVR32_PIO_IDR_P18_SIZE                                      1
#define AVR32_PIO_IDR_P19                                          19
#define AVR32_PIO_IDR_P19_MASK                             0x00080000
#define AVR32_PIO_IDR_P19_OFFSET                                   19
#define AVR32_PIO_IDR_P19_SIZE                                      1
#define AVR32_PIO_IDR_P1_MASK                              0x00000002
#define AVR32_PIO_IDR_P1_OFFSET                                     1
#define AVR32_PIO_IDR_P1_SIZE                                       1
#define AVR32_PIO_IDR_P2                                            2
#define AVR32_PIO_IDR_P20                                          20
#define AVR32_PIO_IDR_P20_MASK                             0x00100000
#define AVR32_PIO_IDR_P20_OFFSET                                   20
#define AVR32_PIO_IDR_P20_SIZE                                      1
#define AVR32_PIO_IDR_P21                                          21
#define AVR32_PIO_IDR_P21_MASK                             0x00200000
#define AVR32_PIO_IDR_P21_OFFSET                                   21
#define AVR32_PIO_IDR_P21_SIZE                                      1
#define AVR32_PIO_IDR_P22                                          22
#define AVR32_PIO_IDR_P22_MASK                             0x00400000
#define AVR32_PIO_IDR_P22_OFFSET                                   22
#define AVR32_PIO_IDR_P22_SIZE                                      1
#define AVR32_PIO_IDR_P23                                          23
#define AVR32_PIO_IDR_P23_MASK                             0x00800000
#define AVR32_PIO_IDR_P23_OFFSET                                   23
#define AVR32_PIO_IDR_P23_SIZE                                      1
#define AVR32_PIO_IDR_P24                                          24
#define AVR32_PIO_IDR_P24_MASK                             0x01000000
#define AVR32_PIO_IDR_P24_OFFSET                                   24
#define AVR32_PIO_IDR_P24_SIZE                                      1
#define AVR32_PIO_IDR_P25                                          25
#define AVR32_PIO_IDR_P25_MASK                             0x02000000
#define AVR32_PIO_IDR_P25_OFFSET                                   25
#define AVR32_PIO_IDR_P25_SIZE                                      1
#define AVR32_PIO_IDR_P26                                          26
#define AVR32_PIO_IDR_P26_MASK                             0x04000000
#define AVR32_PIO_IDR_P26_OFFSET                                   26
#define AVR32_PIO_IDR_P26_SIZE                                      1
#define AVR32_PIO_IDR_P27                                          27
#define AVR32_PIO_IDR_P27_MASK                             0x08000000
#define AVR32_PIO_IDR_P27_OFFSET                                   27
#define AVR32_PIO_IDR_P27_SIZE                                      1
#define AVR32_PIO_IDR_P28                                          28
#define AVR32_PIO_IDR_P28_MASK                             0x10000000
#define AVR32_PIO_IDR_P28_OFFSET                                   28
#define AVR32_PIO_IDR_P28_SIZE                                      1
#define AVR32_PIO_IDR_P29                                          29
#define AVR32_PIO_IDR_P29_MASK                             0x20000000
#define AVR32_PIO_IDR_P29_OFFSET                                   29
#define AVR32_PIO_IDR_P29_SIZE                                      1
#define AVR32_PIO_IDR_P2_MASK                              0x00000004
#define AVR32_PIO_IDR_P2_OFFSET                                     2
#define AVR32_PIO_IDR_P2_SIZE                                       1
#define AVR32_PIO_IDR_P3                                            3
#define AVR32_PIO_IDR_P30                                          30
#define AVR32_PIO_IDR_P30_MASK                             0x40000000
#define AVR32_PIO_IDR_P30_OFFSET                                   30
#define AVR32_PIO_IDR_P30_SIZE                                      1
#define AVR32_PIO_IDR_P31                                          31
#define AVR32_PIO_IDR_P31_MASK                             0x80000000
#define AVR32_PIO_IDR_P31_OFFSET                                   31
#define AVR32_PIO_IDR_P31_SIZE                                      1
#define AVR32_PIO_IDR_P3_MASK                              0x00000008
#define AVR32_PIO_IDR_P3_OFFSET                                     3
#define AVR32_PIO_IDR_P3_SIZE                                       1
#define AVR32_PIO_IDR_P4                                            4
#define AVR32_PIO_IDR_P4_MASK                              0x00000010
#define AVR32_PIO_IDR_P4_OFFSET                                     4
#define AVR32_PIO_IDR_P4_SIZE                                       1
#define AVR32_PIO_IDR_P5                                            5
#define AVR32_PIO_IDR_P5_MASK                              0x00000020
#define AVR32_PIO_IDR_P5_OFFSET                                     5
#define AVR32_PIO_IDR_P5_SIZE                                       1
#define AVR32_PIO_IDR_P6                                            6
#define AVR32_PIO_IDR_P6_MASK                              0x00000040
#define AVR32_PIO_IDR_P6_OFFSET                                     6
#define AVR32_PIO_IDR_P6_SIZE                                       1
#define AVR32_PIO_IDR_P7                                            7
#define AVR32_PIO_IDR_P7_MASK                              0x00000080
#define AVR32_PIO_IDR_P7_OFFSET                                     7
#define AVR32_PIO_IDR_P7_SIZE                                       1
#define AVR32_PIO_IDR_P8                                            8
#define AVR32_PIO_IDR_P8_MASK                              0x00000100
#define AVR32_PIO_IDR_P8_OFFSET                                     8
#define AVR32_PIO_IDR_P8_SIZE                                       1
#define AVR32_PIO_IDR_P9                                            9
#define AVR32_PIO_IDR_P9_MASK                              0x00000200
#define AVR32_PIO_IDR_P9_OFFSET                                     9
#define AVR32_PIO_IDR_P9_SIZE                                       1
#define AVR32_PIO_IER                                      0x00000040
#define AVR32_PIO_IER_P0                                            0
#define AVR32_PIO_IER_P0_MASK                              0x00000001
#define AVR32_PIO_IER_P0_OFFSET                                     0
#define AVR32_PIO_IER_P0_SIZE                                       1
#define AVR32_PIO_IER_P1                                            1
#define AVR32_PIO_IER_P10                                          10
#define AVR32_PIO_IER_P10_MASK                             0x00000400
#define AVR32_PIO_IER_P10_OFFSET                                   10
#define AVR32_PIO_IER_P10_SIZE                                      1
#define AVR32_PIO_IER_P11                                          11
#define AVR32_PIO_IER_P11_MASK                             0x00000800
#define AVR32_PIO_IER_P11_OFFSET                                   11
#define AVR32_PIO_IER_P11_SIZE                                      1
#define AVR32_PIO_IER_P12                                          12
#define AVR32_PIO_IER_P12_MASK                             0x00001000
#define AVR32_PIO_IER_P12_OFFSET                                   12
#define AVR32_PIO_IER_P12_SIZE                                      1
#define AVR32_PIO_IER_P13                                          13
#define AVR32_PIO_IER_P13_MASK                             0x00002000
#define AVR32_PIO_IER_P13_OFFSET                                   13
#define AVR32_PIO_IER_P13_SIZE                                      1
#define AVR32_PIO_IER_P14                                          14
#define AVR32_PIO_IER_P14_MASK                             0x00004000
#define AVR32_PIO_IER_P14_OFFSET                                   14
#define AVR32_PIO_IER_P14_SIZE                                      1
#define AVR32_PIO_IER_P15                                          15
#define AVR32_PIO_IER_P15_MASK                             0x00008000
#define AVR32_PIO_IER_P15_OFFSET                                   15
#define AVR32_PIO_IER_P15_SIZE                                      1
#define AVR32_PIO_IER_P16                                          16
#define AVR32_PIO_IER_P16_MASK                             0x00010000
#define AVR32_PIO_IER_P16_OFFSET                                   16
#define AVR32_PIO_IER_P16_SIZE                                      1
#define AVR32_PIO_IER_P17                                          17
#define AVR32_PIO_IER_P17_MASK                             0x00020000
#define AVR32_PIO_IER_P17_OFFSET                                   17
#define AVR32_PIO_IER_P17_SIZE                                      1
#define AVR32_PIO_IER_P18                                          18
#define AVR32_PIO_IER_P18_MASK                             0x00040000
#define AVR32_PIO_IER_P18_OFFSET                                   18
#define AVR32_PIO_IER_P18_SIZE                                      1
#define AVR32_PIO_IER_P19                                          19
#define AVR32_PIO_IER_P19_MASK                             0x00080000
#define AVR32_PIO_IER_P19_OFFSET                                   19
#define AVR32_PIO_IER_P19_SIZE                                      1
#define AVR32_PIO_IER_P1_MASK                              0x00000002
#define AVR32_PIO_IER_P1_OFFSET                                     1
#define AVR32_PIO_IER_P1_SIZE                                       1
#define AVR32_PIO_IER_P2                                            2
#define AVR32_PIO_IER_P20                                          20
#define AVR32_PIO_IER_P20_MASK                             0x00100000
#define AVR32_PIO_IER_P20_OFFSET                                   20
#define AVR32_PIO_IER_P20_SIZE                                      1
#define AVR32_PIO_IER_P21                                          21
#define AVR32_PIO_IER_P21_MASK                             0x00200000
#define AVR32_PIO_IER_P21_OFFSET                                   21
#define AVR32_PIO_IER_P21_SIZE                                      1
#define AVR32_PIO_IER_P22                                          22
#define AVR32_PIO_IER_P22_MASK                             0x00400000
#define AVR32_PIO_IER_P22_OFFSET                                   22
#define AVR32_PIO_IER_P22_SIZE                                      1
#define AVR32_PIO_IER_P23                                          23
#define AVR32_PIO_IER_P23_MASK                             0x00800000
#define AVR32_PIO_IER_P23_OFFSET                                   23
#define AVR32_PIO_IER_P23_SIZE                                      1
#define AVR32_PIO_IER_P24                                          24
#define AVR32_PIO_IER_P24_MASK                             0x01000000
#define AVR32_PIO_IER_P24_OFFSET                                   24
#define AVR32_PIO_IER_P24_SIZE                                      1
#define AVR32_PIO_IER_P25                                          25
#define AVR32_PIO_IER_P25_MASK                             0x02000000
#define AVR32_PIO_IER_P25_OFFSET                                   25
#define AVR32_PIO_IER_P25_SIZE                                      1
#define AVR32_PIO_IER_P26                                          26
#define AVR32_PIO_IER_P26_MASK                             0x04000000
#define AVR32_PIO_IER_P26_OFFSET                                   26
#define AVR32_PIO_IER_P26_SIZE                                      1
#define AVR32_PIO_IER_P27                                          27
#define AVR32_PIO_IER_P27_MASK                             0x08000000
#define AVR32_PIO_IER_P27_OFFSET                                   27
#define AVR32_PIO_IER_P27_SIZE                                      1
#define AVR32_PIO_IER_P28                                          28
#define AVR32_PIO_IER_P28_MASK                             0x10000000
#define AVR32_PIO_IER_P28_OFFSET                                   28
#define AVR32_PIO_IER_P28_SIZE                                      1
#define AVR32_PIO_IER_P29                                          29
#define AVR32_PIO_IER_P29_MASK                             0x20000000
#define AVR32_PIO_IER_P29_OFFSET                                   29
#define AVR32_PIO_IER_P29_SIZE                                      1
#define AVR32_PIO_IER_P2_MASK                              0x00000004
#define AVR32_PIO_IER_P2_OFFSET                                     2
#define AVR32_PIO_IER_P2_SIZE                                       1
#define AVR32_PIO_IER_P3                                            3
#define AVR32_PIO_IER_P30                                          30
#define AVR32_PIO_IER_P30_MASK                             0x40000000
#define AVR32_PIO_IER_P30_OFFSET                                   30
#define AVR32_PIO_IER_P30_SIZE                                      1
#define AVR32_PIO_IER_P31                                          31
#define AVR32_PIO_IER_P31_MASK                             0x80000000
#define AVR32_PIO_IER_P31_OFFSET                                   31
#define AVR32_PIO_IER_P31_SIZE                                      1
#define AVR32_PIO_IER_P3_MASK                              0x00000008
#define AVR32_PIO_IER_P3_OFFSET                                     3
#define AVR32_PIO_IER_P3_SIZE                                       1
#define AVR32_PIO_IER_P4                                            4
#define AVR32_PIO_IER_P4_MASK                              0x00000010
#define AVR32_PIO_IER_P4_OFFSET                                     4
#define AVR32_PIO_IER_P4_SIZE                                       1
#define AVR32_PIO_IER_P5                                            5
#define AVR32_PIO_IER_P5_MASK                              0x00000020
#define AVR32_PIO_IER_P5_OFFSET                                     5
#define AVR32_PIO_IER_P5_SIZE                                       1
#define AVR32_PIO_IER_P6                                            6
#define AVR32_PIO_IER_P6_MASK                              0x00000040
#define AVR32_PIO_IER_P6_OFFSET                                     6
#define AVR32_PIO_IER_P6_SIZE                                       1
#define AVR32_PIO_IER_P7                                            7
#define AVR32_PIO_IER_P7_MASK                              0x00000080
#define AVR32_PIO_IER_P7_OFFSET                                     7
#define AVR32_PIO_IER_P7_SIZE                                       1
#define AVR32_PIO_IER_P8                                            8
#define AVR32_PIO_IER_P8_MASK                              0x00000100
#define AVR32_PIO_IER_P8_OFFSET                                     8
#define AVR32_PIO_IER_P8_SIZE                                       1
#define AVR32_PIO_IER_P9                                            9
#define AVR32_PIO_IER_P9_MASK                              0x00000200
#define AVR32_PIO_IER_P9_OFFSET                                     9
#define AVR32_PIO_IER_P9_SIZE                                       1
#define AVR32_PIO_IFDR                                     0x00000024
#define AVR32_PIO_IFDR_P0                                           0
#define AVR32_PIO_IFDR_P0_MASK                             0x00000001
#define AVR32_PIO_IFDR_P0_OFFSET                                    0
#define AVR32_PIO_IFDR_P0_SIZE                                      1
#define AVR32_PIO_IFDR_P1                                           1
#define AVR32_PIO_IFDR_P10                                         10
#define AVR32_PIO_IFDR_P10_MASK                            0x00000400
#define AVR32_PIO_IFDR_P10_OFFSET                                  10
#define AVR32_PIO_IFDR_P10_SIZE                                     1
#define AVR32_PIO_IFDR_P11                                         11
#define AVR32_PIO_IFDR_P11_MASK                            0x00000800
#define AVR32_PIO_IFDR_P11_OFFSET                                  11
#define AVR32_PIO_IFDR_P11_SIZE                                     1
#define AVR32_PIO_IFDR_P12                                         12
#define AVR32_PIO_IFDR_P12_MASK                            0x00001000
#define AVR32_PIO_IFDR_P12_OFFSET                                  12
#define AVR32_PIO_IFDR_P12_SIZE                                     1
#define AVR32_PIO_IFDR_P13                                         13
#define AVR32_PIO_IFDR_P13_MASK                            0x00002000
#define AVR32_PIO_IFDR_P13_OFFSET                                  13
#define AVR32_PIO_IFDR_P13_SIZE                                     1
#define AVR32_PIO_IFDR_P14                                         14
#define AVR32_PIO_IFDR_P14_MASK                            0x00004000
#define AVR32_PIO_IFDR_P14_OFFSET                                  14
#define AVR32_PIO_IFDR_P14_SIZE                                     1
#define AVR32_PIO_IFDR_P15                                         15
#define AVR32_PIO_IFDR_P15_MASK                            0x00008000
#define AVR32_PIO_IFDR_P15_OFFSET                                  15
#define AVR32_PIO_IFDR_P15_SIZE                                     1
#define AVR32_PIO_IFDR_P16                                         16
#define AVR32_PIO_IFDR_P16_MASK                            0x00010000
#define AVR32_PIO_IFDR_P16_OFFSET                                  16
#define AVR32_PIO_IFDR_P16_SIZE                                     1
#define AVR32_PIO_IFDR_P17                                         17
#define AVR32_PIO_IFDR_P17_MASK                            0x00020000
#define AVR32_PIO_IFDR_P17_OFFSET                                  17
#define AVR32_PIO_IFDR_P17_SIZE                                     1
#define AVR32_PIO_IFDR_P18                                         18
#define AVR32_PIO_IFDR_P18_MASK                            0x00040000
#define AVR32_PIO_IFDR_P18_OFFSET                                  18
#define AVR32_PIO_IFDR_P18_SIZE                                     1
#define AVR32_PIO_IFDR_P19                                         19
#define AVR32_PIO_IFDR_P19_MASK                            0x00080000
#define AVR32_PIO_IFDR_P19_OFFSET                                  19
#define AVR32_PIO_IFDR_P19_SIZE                                     1
#define AVR32_PIO_IFDR_P1_MASK                             0x00000002
#define AVR32_PIO_IFDR_P1_OFFSET                                    1
#define AVR32_PIO_IFDR_P1_SIZE                                      1
#define AVR32_PIO_IFDR_P2                                           2
#define AVR32_PIO_IFDR_P20                                         20
#define AVR32_PIO_IFDR_P20_MASK                            0x00100000
#define AVR32_PIO_IFDR_P20_OFFSET                                  20
#define AVR32_PIO_IFDR_P20_SIZE                                     1
#define AVR32_PIO_IFDR_P21                                         21
#define AVR32_PIO_IFDR_P21_MASK                            0x00200000
#define AVR32_PIO_IFDR_P21_OFFSET                                  21
#define AVR32_PIO_IFDR_P21_SIZE                                     1
#define AVR32_PIO_IFDR_P22                                         22
#define AVR32_PIO_IFDR_P22_MASK                            0x00400000
#define AVR32_PIO_IFDR_P22_OFFSET                                  22
#define AVR32_PIO_IFDR_P22_SIZE                                     1
#define AVR32_PIO_IFDR_P23                                         23
#define AVR32_PIO_IFDR_P23_MASK                            0x00800000
#define AVR32_PIO_IFDR_P23_OFFSET                                  23
#define AVR32_PIO_IFDR_P23_SIZE                                     1
#define AVR32_PIO_IFDR_P24                                         24
#define AVR32_PIO_IFDR_P24_MASK                            0x01000000
#define AVR32_PIO_IFDR_P24_OFFSET                                  24
#define AVR32_PIO_IFDR_P24_SIZE                                     1
#define AVR32_PIO_IFDR_P25                                         25
#define AVR32_PIO_IFDR_P25_MASK                            0x02000000
#define AVR32_PIO_IFDR_P25_OFFSET                                  25
#define AVR32_PIO_IFDR_P25_SIZE                                     1
#define AVR32_PIO_IFDR_P26                                         26
#define AVR32_PIO_IFDR_P26_MASK                            0x04000000
#define AVR32_PIO_IFDR_P26_OFFSET                                  26
#define AVR32_PIO_IFDR_P26_SIZE                                     1
#define AVR32_PIO_IFDR_P27                                         27
#define AVR32_PIO_IFDR_P27_MASK                            0x08000000
#define AVR32_PIO_IFDR_P27_OFFSET                                  27
#define AVR32_PIO_IFDR_P27_SIZE                                     1
#define AVR32_PIO_IFDR_P28                                         28
#define AVR32_PIO_IFDR_P28_MASK                            0x10000000
#define AVR32_PIO_IFDR_P28_OFFSET                                  28
#define AVR32_PIO_IFDR_P28_SIZE                                     1
#define AVR32_PIO_IFDR_P29                                         29
#define AVR32_PIO_IFDR_P29_MASK                            0x20000000
#define AVR32_PIO_IFDR_P29_OFFSET                                  29
#define AVR32_PIO_IFDR_P29_SIZE                                     1
#define AVR32_PIO_IFDR_P2_MASK                             0x00000004
#define AVR32_PIO_IFDR_P2_OFFSET                                    2
#define AVR32_PIO_IFDR_P2_SIZE                                      1
#define AVR32_PIO_IFDR_P3                                           3
#define AVR32_PIO_IFDR_P30                                         30
#define AVR32_PIO_IFDR_P30_MASK                            0x40000000
#define AVR32_PIO_IFDR_P30_OFFSET                                  30
#define AVR32_PIO_IFDR_P30_SIZE                                     1
#define AVR32_PIO_IFDR_P31                                         31
#define AVR32_PIO_IFDR_P31_MASK                            0x80000000
#define AVR32_PIO_IFDR_P31_OFFSET                                  31
#define AVR32_PIO_IFDR_P31_SIZE                                     1
#define AVR32_PIO_IFDR_P3_MASK                             0x00000008
#define AVR32_PIO_IFDR_P3_OFFSET                                    3
#define AVR32_PIO_IFDR_P3_SIZE                                      1
#define AVR32_PIO_IFDR_P4                                           4
#define AVR32_PIO_IFDR_P4_MASK                             0x00000010
#define AVR32_PIO_IFDR_P4_OFFSET                                    4
#define AVR32_PIO_IFDR_P4_SIZE                                      1
#define AVR32_PIO_IFDR_P5                                           5
#define AVR32_PIO_IFDR_P5_MASK                             0x00000020
#define AVR32_PIO_IFDR_P5_OFFSET                                    5
#define AVR32_PIO_IFDR_P5_SIZE                                      1
#define AVR32_PIO_IFDR_P6                                           6
#define AVR32_PIO_IFDR_P6_MASK                             0x00000040
#define AVR32_PIO_IFDR_P6_OFFSET                                    6
#define AVR32_PIO_IFDR_P6_SIZE                                      1
#define AVR32_PIO_IFDR_P7                                           7
#define AVR32_PIO_IFDR_P7_MASK                             0x00000080
#define AVR32_PIO_IFDR_P7_OFFSET                                    7
#define AVR32_PIO_IFDR_P7_SIZE                                      1
#define AVR32_PIO_IFDR_P8                                           8
#define AVR32_PIO_IFDR_P8_MASK                             0x00000100
#define AVR32_PIO_IFDR_P8_OFFSET                                    8
#define AVR32_PIO_IFDR_P8_SIZE                                      1
#define AVR32_PIO_IFDR_P9                                           9
#define AVR32_PIO_IFDR_P9_MASK                             0x00000200
#define AVR32_PIO_IFDR_P9_OFFSET                                    9
#define AVR32_PIO_IFDR_P9_SIZE                                      1
#define AVR32_PIO_IFER                                     0x00000020
#define AVR32_PIO_IFER_P0                                           0
#define AVR32_PIO_IFER_P0_MASK                             0x00000001
#define AVR32_PIO_IFER_P0_OFFSET                                    0
#define AVR32_PIO_IFER_P0_SIZE                                      1
#define AVR32_PIO_IFER_P1                                           1
#define AVR32_PIO_IFER_P10                                         10
#define AVR32_PIO_IFER_P10_MASK                            0x00000400
#define AVR32_PIO_IFER_P10_OFFSET                                  10
#define AVR32_PIO_IFER_P10_SIZE                                     1
#define AVR32_PIO_IFER_P11                                         11
#define AVR32_PIO_IFER_P11_MASK                            0x00000800
#define AVR32_PIO_IFER_P11_OFFSET                                  11
#define AVR32_PIO_IFER_P11_SIZE                                     1
#define AVR32_PIO_IFER_P12                                         12
#define AVR32_PIO_IFER_P12_MASK                            0x00001000
#define AVR32_PIO_IFER_P12_OFFSET                                  12
#define AVR32_PIO_IFER_P12_SIZE                                     1
#define AVR32_PIO_IFER_P13                                         13
#define AVR32_PIO_IFER_P13_MASK                            0x00002000
#define AVR32_PIO_IFER_P13_OFFSET                                  13
#define AVR32_PIO_IFER_P13_SIZE                                     1
#define AVR32_PIO_IFER_P14                                         14
#define AVR32_PIO_IFER_P14_MASK                            0x00004000
#define AVR32_PIO_IFER_P14_OFFSET                                  14
#define AVR32_PIO_IFER_P14_SIZE                                     1
#define AVR32_PIO_IFER_P15                                         15
#define AVR32_PIO_IFER_P15_MASK                            0x00008000
#define AVR32_PIO_IFER_P15_OFFSET                                  15
#define AVR32_PIO_IFER_P15_SIZE                                     1
#define AVR32_PIO_IFER_P16                                         16
#define AVR32_PIO_IFER_P16_MASK                            0x00010000
#define AVR32_PIO_IFER_P16_OFFSET                                  16
#define AVR32_PIO_IFER_P16_SIZE                                     1
#define AVR32_PIO_IFER_P17                                         17
#define AVR32_PIO_IFER_P17_MASK                            0x00020000
#define AVR32_PIO_IFER_P17_OFFSET                                  17
#define AVR32_PIO_IFER_P17_SIZE                                     1
#define AVR32_PIO_IFER_P18                                         18
#define AVR32_PIO_IFER_P18_MASK                            0x00040000
#define AVR32_PIO_IFER_P18_OFFSET                                  18
#define AVR32_PIO_IFER_P18_SIZE                                     1
#define AVR32_PIO_IFER_P19                                         19
#define AVR32_PIO_IFER_P19_MASK                            0x00080000
#define AVR32_PIO_IFER_P19_OFFSET                                  19
#define AVR32_PIO_IFER_P19_SIZE                                     1
#define AVR32_PIO_IFER_P1_MASK                             0x00000002
#define AVR32_PIO_IFER_P1_OFFSET                                    1
#define AVR32_PIO_IFER_P1_SIZE                                      1
#define AVR32_PIO_IFER_P2                                           2
#define AVR32_PIO_IFER_P20                                         20
#define AVR32_PIO_IFER_P20_MASK                            0x00100000
#define AVR32_PIO_IFER_P20_OFFSET                                  20
#define AVR32_PIO_IFER_P20_SIZE                                     1
#define AVR32_PIO_IFER_P21                                         21
#define AVR32_PIO_IFER_P21_MASK                            0x00200000
#define AVR32_PIO_IFER_P21_OFFSET                                  21
#define AVR32_PIO_IFER_P21_SIZE                                     1
#define AVR32_PIO_IFER_P22                                         22
#define AVR32_PIO_IFER_P22_MASK                            0x00400000
#define AVR32_PIO_IFER_P22_OFFSET                                  22
#define AVR32_PIO_IFER_P22_SIZE                                     1
#define AVR32_PIO_IFER_P23                                         23
#define AVR32_PIO_IFER_P23_MASK                            0x00800000
#define AVR32_PIO_IFER_P23_OFFSET                                  23
#define AVR32_PIO_IFER_P23_SIZE                                     1
#define AVR32_PIO_IFER_P24                                         24
#define AVR32_PIO_IFER_P24_MASK                            0x01000000
#define AVR32_PIO_IFER_P24_OFFSET                                  24
#define AVR32_PIO_IFER_P24_SIZE                                     1
#define AVR32_PIO_IFER_P25                                         25
#define AVR32_PIO_IFER_P25_MASK                            0x02000000
#define AVR32_PIO_IFER_P25_OFFSET                                  25
#define AVR32_PIO_IFER_P25_SIZE                                     1
#define AVR32_PIO_IFER_P26                                         26
#define AVR32_PIO_IFER_P26_MASK                            0x04000000
#define AVR32_PIO_IFER_P26_OFFSET                                  26
#define AVR32_PIO_IFER_P26_SIZE                                     1
#define AVR32_PIO_IFER_P27                                         27
#define AVR32_PIO_IFER_P27_MASK                            0x08000000
#define AVR32_PIO_IFER_P27_OFFSET                                  27
#define AVR32_PIO_IFER_P27_SIZE                                     1
#define AVR32_PIO_IFER_P28                                         28
#define AVR32_PIO_IFER_P28_MASK                            0x10000000
#define AVR32_PIO_IFER_P28_OFFSET                                  28
#define AVR32_PIO_IFER_P28_SIZE                                     1
#define AVR32_PIO_IFER_P29                                         29
#define AVR32_PIO_IFER_P29_MASK                            0x20000000
#define AVR32_PIO_IFER_P29_OFFSET                                  29
#define AVR32_PIO_IFER_P29_SIZE                                     1
#define AVR32_PIO_IFER_P2_MASK                             0x00000004
#define AVR32_PIO_IFER_P2_OFFSET                                    2
#define AVR32_PIO_IFER_P2_SIZE                                      1
#define AVR32_PIO_IFER_P3                                           3
#define AVR32_PIO_IFER_P30                                         30
#define AVR32_PIO_IFER_P30_MASK                            0x40000000
#define AVR32_PIO_IFER_P30_OFFSET                                  30
#define AVR32_PIO_IFER_P30_SIZE                                     1
#define AVR32_PIO_IFER_P31                                         31
#define AVR32_PIO_IFER_P31_MASK                            0x80000000
#define AVR32_PIO_IFER_P31_OFFSET                                  31
#define AVR32_PIO_IFER_P31_SIZE                                     1
#define AVR32_PIO_IFER_P3_MASK                             0x00000008
#define AVR32_PIO_IFER_P3_OFFSET                                    3
#define AVR32_PIO_IFER_P3_SIZE                                      1
#define AVR32_PIO_IFER_P4                                           4
#define AVR32_PIO_IFER_P4_MASK                             0x00000010
#define AVR32_PIO_IFER_P4_OFFSET                                    4
#define AVR32_PIO_IFER_P4_SIZE                                      1
#define AVR32_PIO_IFER_P5                                           5
#define AVR32_PIO_IFER_P5_MASK                             0x00000020
#define AVR32_PIO_IFER_P5_OFFSET                                    5
#define AVR32_PIO_IFER_P5_SIZE                                      1
#define AVR32_PIO_IFER_P6                                           6
#define AVR32_PIO_IFER_P6_MASK                             0x00000040
#define AVR32_PIO_IFER_P6_OFFSET                                    6
#define AVR32_PIO_IFER_P6_SIZE                                      1
#define AVR32_PIO_IFER_P7                                           7
#define AVR32_PIO_IFER_P7_MASK                             0x00000080
#define AVR32_PIO_IFER_P7_OFFSET                                    7
#define AVR32_PIO_IFER_P7_SIZE                                      1
#define AVR32_PIO_IFER_P8                                           8
#define AVR32_PIO_IFER_P8_MASK                             0x00000100
#define AVR32_PIO_IFER_P8_OFFSET                                    8
#define AVR32_PIO_IFER_P8_SIZE                                      1
#define AVR32_PIO_IFER_P9                                           9
#define AVR32_PIO_IFER_P9_MASK                             0x00000200
#define AVR32_PIO_IFER_P9_OFFSET                                    9
#define AVR32_PIO_IFER_P9_SIZE                                      1
#define AVR32_PIO_IFSR                                     0x00000028
#define AVR32_PIO_IFSR_P0                                           0
#define AVR32_PIO_IFSR_P0_MASK                             0x00000001
#define AVR32_PIO_IFSR_P0_OFFSET                                    0
#define AVR32_PIO_IFSR_P0_SIZE                                      1
#define AVR32_PIO_IFSR_P1                                           1
#define AVR32_PIO_IFSR_P10                                         10
#define AVR32_PIO_IFSR_P10_MASK                            0x00000400
#define AVR32_PIO_IFSR_P10_OFFSET                                  10
#define AVR32_PIO_IFSR_P10_SIZE                                     1
#define AVR32_PIO_IFSR_P11                                         11
#define AVR32_PIO_IFSR_P11_MASK                            0x00000800
#define AVR32_PIO_IFSR_P11_OFFSET                                  11
#define AVR32_PIO_IFSR_P11_SIZE                                     1
#define AVR32_PIO_IFSR_P12                                         12
#define AVR32_PIO_IFSR_P12_MASK                            0x00001000
#define AVR32_PIO_IFSR_P12_OFFSET                                  12
#define AVR32_PIO_IFSR_P12_SIZE                                     1
#define AVR32_PIO_IFSR_P13                                         13
#define AVR32_PIO_IFSR_P13_MASK                            0x00002000
#define AVR32_PIO_IFSR_P13_OFFSET                                  13
#define AVR32_PIO_IFSR_P13_SIZE                                     1
#define AVR32_PIO_IFSR_P14                                         14
#define AVR32_PIO_IFSR_P14_MASK                            0x00004000
#define AVR32_PIO_IFSR_P14_OFFSET                                  14
#define AVR32_PIO_IFSR_P14_SIZE                                     1
#define AVR32_PIO_IFSR_P15                                         15
#define AVR32_PIO_IFSR_P15_MASK                            0x00008000
#define AVR32_PIO_IFSR_P15_OFFSET                                  15
#define AVR32_PIO_IFSR_P15_SIZE                                     1
#define AVR32_PIO_IFSR_P16                                         16
#define AVR32_PIO_IFSR_P16_MASK                            0x00010000
#define AVR32_PIO_IFSR_P16_OFFSET                                  16
#define AVR32_PIO_IFSR_P16_SIZE                                     1
#define AVR32_PIO_IFSR_P17                                         17
#define AVR32_PIO_IFSR_P17_MASK                            0x00020000
#define AVR32_PIO_IFSR_P17_OFFSET                                  17
#define AVR32_PIO_IFSR_P17_SIZE                                     1
#define AVR32_PIO_IFSR_P18                                         18
#define AVR32_PIO_IFSR_P18_MASK                            0x00040000
#define AVR32_PIO_IFSR_P18_OFFSET                                  18
#define AVR32_PIO_IFSR_P18_SIZE                                     1
#define AVR32_PIO_IFSR_P19                                         19
#define AVR32_PIO_IFSR_P19_MASK                            0x00080000
#define AVR32_PIO_IFSR_P19_OFFSET                                  19
#define AVR32_PIO_IFSR_P19_SIZE                                     1
#define AVR32_PIO_IFSR_P1_MASK                             0x00000002
#define AVR32_PIO_IFSR_P1_OFFSET                                    1
#define AVR32_PIO_IFSR_P1_SIZE                                      1
#define AVR32_PIO_IFSR_P2                                           2
#define AVR32_PIO_IFSR_P20                                         20
#define AVR32_PIO_IFSR_P20_MASK                            0x00100000
#define AVR32_PIO_IFSR_P20_OFFSET                                  20
#define AVR32_PIO_IFSR_P20_SIZE                                     1
#define AVR32_PIO_IFSR_P21                                         21
#define AVR32_PIO_IFSR_P21_MASK                            0x00200000
#define AVR32_PIO_IFSR_P21_OFFSET                                  21
#define AVR32_PIO_IFSR_P21_SIZE                                     1
#define AVR32_PIO_IFSR_P22                                         22
#define AVR32_PIO_IFSR_P22_MASK                            0x00400000
#define AVR32_PIO_IFSR_P22_OFFSET                                  22
#define AVR32_PIO_IFSR_P22_SIZE                                     1
#define AVR32_PIO_IFSR_P23                                         23
#define AVR32_PIO_IFSR_P23_MASK                            0x00800000
#define AVR32_PIO_IFSR_P23_OFFSET                                  23
#define AVR32_PIO_IFSR_P23_SIZE                                     1
#define AVR32_PIO_IFSR_P24                                         24
#define AVR32_PIO_IFSR_P24_MASK                            0x01000000
#define AVR32_PIO_IFSR_P24_OFFSET                                  24
#define AVR32_PIO_IFSR_P24_SIZE                                     1
#define AVR32_PIO_IFSR_P25                                         25
#define AVR32_PIO_IFSR_P25_MASK                            0x02000000
#define AVR32_PIO_IFSR_P25_OFFSET                                  25
#define AVR32_PIO_IFSR_P25_SIZE                                     1
#define AVR32_PIO_IFSR_P26                                         26
#define AVR32_PIO_IFSR_P26_MASK                            0x04000000
#define AVR32_PIO_IFSR_P26_OFFSET                                  26
#define AVR32_PIO_IFSR_P26_SIZE                                     1
#define AVR32_PIO_IFSR_P27                                         27
#define AVR32_PIO_IFSR_P27_MASK                            0x08000000
#define AVR32_PIO_IFSR_P27_OFFSET                                  27
#define AVR32_PIO_IFSR_P27_SIZE                                     1
#define AVR32_PIO_IFSR_P28                                         28
#define AVR32_PIO_IFSR_P28_MASK                            0x10000000
#define AVR32_PIO_IFSR_P28_OFFSET                                  28
#define AVR32_PIO_IFSR_P28_SIZE                                     1
#define AVR32_PIO_IFSR_P29                                         29
#define AVR32_PIO_IFSR_P29_MASK                            0x20000000
#define AVR32_PIO_IFSR_P29_OFFSET                                  29
#define AVR32_PIO_IFSR_P29_SIZE                                     1
#define AVR32_PIO_IFSR_P2_MASK                             0x00000004
#define AVR32_PIO_IFSR_P2_OFFSET                                    2
#define AVR32_PIO_IFSR_P2_SIZE                                      1
#define AVR32_PIO_IFSR_P3                                           3
#define AVR32_PIO_IFSR_P30                                         30
#define AVR32_PIO_IFSR_P30_MASK                            0x40000000
#define AVR32_PIO_IFSR_P30_OFFSET                                  30
#define AVR32_PIO_IFSR_P30_SIZE                                     1
#define AVR32_PIO_IFSR_P31                                         31
#define AVR32_PIO_IFSR_P31_MASK                            0x80000000
#define AVR32_PIO_IFSR_P31_OFFSET                                  31
#define AVR32_PIO_IFSR_P31_SIZE                                     1
#define AVR32_PIO_IFSR_P3_MASK                             0x00000008
#define AVR32_PIO_IFSR_P3_OFFSET                                    3
#define AVR32_PIO_IFSR_P3_SIZE                                      1
#define AVR32_PIO_IFSR_P4                                           4
#define AVR32_PIO_IFSR_P4_MASK                             0x00000010
#define AVR32_PIO_IFSR_P4_OFFSET                                    4
#define AVR32_PIO_IFSR_P4_SIZE                                      1
#define AVR32_PIO_IFSR_P5                                           5
#define AVR32_PIO_IFSR_P5_MASK                             0x00000020
#define AVR32_PIO_IFSR_P5_OFFSET                                    5
#define AVR32_PIO_IFSR_P5_SIZE                                      1
#define AVR32_PIO_IFSR_P6                                           6
#define AVR32_PIO_IFSR_P6_MASK                             0x00000040
#define AVR32_PIO_IFSR_P6_OFFSET                                    6
#define AVR32_PIO_IFSR_P6_SIZE                                      1
#define AVR32_PIO_IFSR_P7                                           7
#define AVR32_PIO_IFSR_P7_MASK                             0x00000080
#define AVR32_PIO_IFSR_P7_OFFSET                                    7
#define AVR32_PIO_IFSR_P7_SIZE                                      1
#define AVR32_PIO_IFSR_P8                                           8
#define AVR32_PIO_IFSR_P8_MASK                             0x00000100
#define AVR32_PIO_IFSR_P8_OFFSET                                    8
#define AVR32_PIO_IFSR_P8_SIZE                                      1
#define AVR32_PIO_IFSR_P9                                           9
#define AVR32_PIO_IFSR_P9_MASK                             0x00000200
#define AVR32_PIO_IFSR_P9_OFFSET                                    9
#define AVR32_PIO_IFSR_P9_SIZE                                      1
#define AVR32_PIO_IMR                                      0x00000048
#define AVR32_PIO_IMR_P0                                            0
#define AVR32_PIO_IMR_P0_MASK                              0x00000001
#define AVR32_PIO_IMR_P0_OFFSET                                     0
#define AVR32_PIO_IMR_P0_SIZE                                       1
#define AVR32_PIO_IMR_P1                                            1
#define AVR32_PIO_IMR_P10                                          10
#define AVR32_PIO_IMR_P10_MASK                             0x00000400
#define AVR32_PIO_IMR_P10_OFFSET                                   10
#define AVR32_PIO_IMR_P10_SIZE                                      1
#define AVR32_PIO_IMR_P11                                          11
#define AVR32_PIO_IMR_P11_MASK                             0x00000800
#define AVR32_PIO_IMR_P11_OFFSET                                   11
#define AVR32_PIO_IMR_P11_SIZE                                      1
#define AVR32_PIO_IMR_P12                                          12
#define AVR32_PIO_IMR_P12_MASK                             0x00001000
#define AVR32_PIO_IMR_P12_OFFSET                                   12
#define AVR32_PIO_IMR_P12_SIZE                                      1
#define AVR32_PIO_IMR_P13                                          13
#define AVR32_PIO_IMR_P13_MASK                             0x00002000
#define AVR32_PIO_IMR_P13_OFFSET                                   13
#define AVR32_PIO_IMR_P13_SIZE                                      1
#define AVR32_PIO_IMR_P14                                          14
#define AVR32_PIO_IMR_P14_MASK                             0x00004000
#define AVR32_PIO_IMR_P14_OFFSET                                   14
#define AVR32_PIO_IMR_P14_SIZE                                      1
#define AVR32_PIO_IMR_P15                                          15
#define AVR32_PIO_IMR_P15_MASK                             0x00008000
#define AVR32_PIO_IMR_P15_OFFSET                                   15
#define AVR32_PIO_IMR_P15_SIZE                                      1
#define AVR32_PIO_IMR_P16                                          16
#define AVR32_PIO_IMR_P16_MASK                             0x00010000
#define AVR32_PIO_IMR_P16_OFFSET                                   16
#define AVR32_PIO_IMR_P16_SIZE                                      1
#define AVR32_PIO_IMR_P17                                          17
#define AVR32_PIO_IMR_P17_MASK                             0x00020000
#define AVR32_PIO_IMR_P17_OFFSET                                   17
#define AVR32_PIO_IMR_P17_SIZE                                      1
#define AVR32_PIO_IMR_P18                                          18
#define AVR32_PIO_IMR_P18_MASK                             0x00040000
#define AVR32_PIO_IMR_P18_OFFSET                                   18
#define AVR32_PIO_IMR_P18_SIZE                                      1
#define AVR32_PIO_IMR_P19                                          19
#define AVR32_PIO_IMR_P19_MASK                             0x00080000
#define AVR32_PIO_IMR_P19_OFFSET                                   19
#define AVR32_PIO_IMR_P19_SIZE                                      1
#define AVR32_PIO_IMR_P1_MASK                              0x00000002
#define AVR32_PIO_IMR_P1_OFFSET                                     1
#define AVR32_PIO_IMR_P1_SIZE                                       1
#define AVR32_PIO_IMR_P2                                            2
#define AVR32_PIO_IMR_P20                                          20
#define AVR32_PIO_IMR_P20_MASK                             0x00100000
#define AVR32_PIO_IMR_P20_OFFSET                                   20
#define AVR32_PIO_IMR_P20_SIZE                                      1
#define AVR32_PIO_IMR_P21                                          21
#define AVR32_PIO_IMR_P21_MASK                             0x00200000
#define AVR32_PIO_IMR_P21_OFFSET                                   21
#define AVR32_PIO_IMR_P21_SIZE                                      1
#define AVR32_PIO_IMR_P22                                          22
#define AVR32_PIO_IMR_P22_MASK                             0x00400000
#define AVR32_PIO_IMR_P22_OFFSET                                   22
#define AVR32_PIO_IMR_P22_SIZE                                      1
#define AVR32_PIO_IMR_P23                                          23
#define AVR32_PIO_IMR_P23_MASK                             0x00800000
#define AVR32_PIO_IMR_P23_OFFSET                                   23
#define AVR32_PIO_IMR_P23_SIZE                                      1
#define AVR32_PIO_IMR_P24                                          24
#define AVR32_PIO_IMR_P24_MASK                             0x01000000
#define AVR32_PIO_IMR_P24_OFFSET                                   24
#define AVR32_PIO_IMR_P24_SIZE                                      1
#define AVR32_PIO_IMR_P25                                          25
#define AVR32_PIO_IMR_P25_MASK                             0x02000000
#define AVR32_PIO_IMR_P25_OFFSET                                   25
#define AVR32_PIO_IMR_P25_SIZE                                      1
#define AVR32_PIO_IMR_P26                                          26
#define AVR32_PIO_IMR_P26_MASK                             0x04000000
#define AVR32_PIO_IMR_P26_OFFSET                                   26
#define AVR32_PIO_IMR_P26_SIZE                                      1
#define AVR32_PIO_IMR_P27                                          27
#define AVR32_PIO_IMR_P27_MASK                             0x08000000
#define AVR32_PIO_IMR_P27_OFFSET                                   27
#define AVR32_PIO_IMR_P27_SIZE                                      1
#define AVR32_PIO_IMR_P28                                          28
#define AVR32_PIO_IMR_P28_MASK                             0x10000000
#define AVR32_PIO_IMR_P28_OFFSET                                   28
#define AVR32_PIO_IMR_P28_SIZE                                      1
#define AVR32_PIO_IMR_P29                                          29
#define AVR32_PIO_IMR_P29_MASK                             0x20000000
#define AVR32_PIO_IMR_P29_OFFSET                                   29
#define AVR32_PIO_IMR_P29_SIZE                                      1
#define AVR32_PIO_IMR_P2_MASK                              0x00000004
#define AVR32_PIO_IMR_P2_OFFSET                                     2
#define AVR32_PIO_IMR_P2_SIZE                                       1
#define AVR32_PIO_IMR_P3                                            3
#define AVR32_PIO_IMR_P30                                          30
#define AVR32_PIO_IMR_P30_MASK                             0x40000000
#define AVR32_PIO_IMR_P30_OFFSET                                   30
#define AVR32_PIO_IMR_P30_SIZE                                      1
#define AVR32_PIO_IMR_P31                                          31
#define AVR32_PIO_IMR_P31_MASK                             0x80000000
#define AVR32_PIO_IMR_P31_OFFSET                                   31
#define AVR32_PIO_IMR_P31_SIZE                                      1
#define AVR32_PIO_IMR_P3_MASK                              0x00000008
#define AVR32_PIO_IMR_P3_OFFSET                                     3
#define AVR32_PIO_IMR_P3_SIZE                                       1
#define AVR32_PIO_IMR_P4                                            4
#define AVR32_PIO_IMR_P4_MASK                              0x00000010
#define AVR32_PIO_IMR_P4_OFFSET                                     4
#define AVR32_PIO_IMR_P4_SIZE                                       1
#define AVR32_PIO_IMR_P5                                            5
#define AVR32_PIO_IMR_P5_MASK                              0x00000020
#define AVR32_PIO_IMR_P5_OFFSET                                     5
#define AVR32_PIO_IMR_P5_SIZE                                       1
#define AVR32_PIO_IMR_P6                                            6
#define AVR32_PIO_IMR_P6_MASK                              0x00000040
#define AVR32_PIO_IMR_P6_OFFSET                                     6
#define AVR32_PIO_IMR_P6_SIZE                                       1
#define AVR32_PIO_IMR_P7                                            7
#define AVR32_PIO_IMR_P7_MASK                              0x00000080
#define AVR32_PIO_IMR_P7_OFFSET                                     7
#define AVR32_PIO_IMR_P7_SIZE                                       1
#define AVR32_PIO_IMR_P8                                            8
#define AVR32_PIO_IMR_P8_MASK                              0x00000100
#define AVR32_PIO_IMR_P8_OFFSET                                     8
#define AVR32_PIO_IMR_P8_SIZE                                       1
#define AVR32_PIO_IMR_P9                                            9
#define AVR32_PIO_IMR_P9_MASK                              0x00000200
#define AVR32_PIO_IMR_P9_OFFSET                                     9
#define AVR32_PIO_IMR_P9_SIZE                                       1
#define AVR32_PIO_ISR                                      0x0000004c
#define AVR32_PIO_ISR_P0                                            0
#define AVR32_PIO_ISR_P0_MASK                              0x00000001
#define AVR32_PIO_ISR_P0_OFFSET                                     0
#define AVR32_PIO_ISR_P0_SIZE                                       1
#define AVR32_PIO_ISR_P1                                            1
#define AVR32_PIO_ISR_P10                                          10
#define AVR32_PIO_ISR_P10_MASK                             0x00000400
#define AVR32_PIO_ISR_P10_OFFSET                                   10
#define AVR32_PIO_ISR_P10_SIZE                                      1
#define AVR32_PIO_ISR_P11                                          11
#define AVR32_PIO_ISR_P11_MASK                             0x00000800
#define AVR32_PIO_ISR_P11_OFFSET                                   11
#define AVR32_PIO_ISR_P11_SIZE                                      1
#define AVR32_PIO_ISR_P12                                          12
#define AVR32_PIO_ISR_P12_MASK                             0x00001000
#define AVR32_PIO_ISR_P12_OFFSET                                   12
#define AVR32_PIO_ISR_P12_SIZE                                      1
#define AVR32_PIO_ISR_P13                                          13
#define AVR32_PIO_ISR_P13_MASK                             0x00002000
#define AVR32_PIO_ISR_P13_OFFSET                                   13
#define AVR32_PIO_ISR_P13_SIZE                                      1
#define AVR32_PIO_ISR_P14                                          14
#define AVR32_PIO_ISR_P14_MASK                             0x00004000
#define AVR32_PIO_ISR_P14_OFFSET                                   14
#define AVR32_PIO_ISR_P14_SIZE                                      1
#define AVR32_PIO_ISR_P15                                          15
#define AVR32_PIO_ISR_P15_MASK                             0x00008000
#define AVR32_PIO_ISR_P15_OFFSET                                   15
#define AVR32_PIO_ISR_P15_SIZE                                      1
#define AVR32_PIO_ISR_P16                                          16
#define AVR32_PIO_ISR_P16_MASK                             0x00010000
#define AVR32_PIO_ISR_P16_OFFSET                                   16
#define AVR32_PIO_ISR_P16_SIZE                                      1
#define AVR32_PIO_ISR_P17                                          17
#define AVR32_PIO_ISR_P17_MASK                             0x00020000
#define AVR32_PIO_ISR_P17_OFFSET                                   17
#define AVR32_PIO_ISR_P17_SIZE                                      1
#define AVR32_PIO_ISR_P18                                          18
#define AVR32_PIO_ISR_P18_MASK                             0x00040000
#define AVR32_PIO_ISR_P18_OFFSET                                   18
#define AVR32_PIO_ISR_P18_SIZE                                      1
#define AVR32_PIO_ISR_P19                                          19
#define AVR32_PIO_ISR_P19_MASK                             0x00080000
#define AVR32_PIO_ISR_P19_OFFSET                                   19
#define AVR32_PIO_ISR_P19_SIZE                                      1
#define AVR32_PIO_ISR_P1_MASK                              0x00000002
#define AVR32_PIO_ISR_P1_OFFSET                                     1
#define AVR32_PIO_ISR_P1_SIZE                                       1
#define AVR32_PIO_ISR_P2                                            2
#define AVR32_PIO_ISR_P20                                          20
#define AVR32_PIO_ISR_P20_MASK                             0x00100000
#define AVR32_PIO_ISR_P20_OFFSET                                   20
#define AVR32_PIO_ISR_P20_SIZE                                      1
#define AVR32_PIO_ISR_P21                                          21
#define AVR32_PIO_ISR_P21_MASK                             0x00200000
#define AVR32_PIO_ISR_P21_OFFSET                                   21
#define AVR32_PIO_ISR_P21_SIZE                                      1
#define AVR32_PIO_ISR_P22                                          22
#define AVR32_PIO_ISR_P22_MASK                             0x00400000
#define AVR32_PIO_ISR_P22_OFFSET                                   22
#define AVR32_PIO_ISR_P22_SIZE                                      1
#define AVR32_PIO_ISR_P23                                          23
#define AVR32_PIO_ISR_P23_MASK                             0x00800000
#define AVR32_PIO_ISR_P23_OFFSET                                   23
#define AVR32_PIO_ISR_P23_SIZE                                      1
#define AVR32_PIO_ISR_P24                                          24
#define AVR32_PIO_ISR_P24_MASK                             0x01000000
#define AVR32_PIO_ISR_P24_OFFSET                                   24
#define AVR32_PIO_ISR_P24_SIZE                                      1
#define AVR32_PIO_ISR_P25                                          25
#define AVR32_PIO_ISR_P25_MASK                             0x02000000
#define AVR32_PIO_ISR_P25_OFFSET                                   25
#define AVR32_PIO_ISR_P25_SIZE                                      1
#define AVR32_PIO_ISR_P26                                          26
#define AVR32_PIO_ISR_P26_MASK                             0x04000000
#define AVR32_PIO_ISR_P26_OFFSET                                   26
#define AVR32_PIO_ISR_P26_SIZE                                      1
#define AVR32_PIO_ISR_P27                                          27
#define AVR32_PIO_ISR_P27_MASK                             0x08000000
#define AVR32_PIO_ISR_P27_OFFSET                                   27
#define AVR32_PIO_ISR_P27_SIZE                                      1
#define AVR32_PIO_ISR_P28                                          28
#define AVR32_PIO_ISR_P28_MASK                             0x10000000
#define AVR32_PIO_ISR_P28_OFFSET                                   28
#define AVR32_PIO_ISR_P28_SIZE                                      1
#define AVR32_PIO_ISR_P29                                          29
#define AVR32_PIO_ISR_P29_MASK                             0x20000000
#define AVR32_PIO_ISR_P29_OFFSET                                   29
#define AVR32_PIO_ISR_P29_SIZE                                      1
#define AVR32_PIO_ISR_P2_MASK                              0x00000004
#define AVR32_PIO_ISR_P2_OFFSET                                     2
#define AVR32_PIO_ISR_P2_SIZE                                       1
#define AVR32_PIO_ISR_P3                                            3
#define AVR32_PIO_ISR_P30                                          30
#define AVR32_PIO_ISR_P30_MASK                             0x40000000
#define AVR32_PIO_ISR_P30_OFFSET                                   30
#define AVR32_PIO_ISR_P30_SIZE                                      1
#define AVR32_PIO_ISR_P31                                          31
#define AVR32_PIO_ISR_P31_MASK                             0x80000000
#define AVR32_PIO_ISR_P31_OFFSET                                   31
#define AVR32_PIO_ISR_P31_SIZE                                      1
#define AVR32_PIO_ISR_P3_MASK                              0x00000008
#define AVR32_PIO_ISR_P3_OFFSET                                     3
#define AVR32_PIO_ISR_P3_SIZE                                       1
#define AVR32_PIO_ISR_P4                                            4
#define AVR32_PIO_ISR_P4_MASK                              0x00000010
#define AVR32_PIO_ISR_P4_OFFSET                                     4
#define AVR32_PIO_ISR_P4_SIZE                                       1
#define AVR32_PIO_ISR_P5                                            5
#define AVR32_PIO_ISR_P5_MASK                              0x00000020
#define AVR32_PIO_ISR_P5_OFFSET                                     5
#define AVR32_PIO_ISR_P5_SIZE                                       1
#define AVR32_PIO_ISR_P6                                            6
#define AVR32_PIO_ISR_P6_MASK                              0x00000040
#define AVR32_PIO_ISR_P6_OFFSET                                     6
#define AVR32_PIO_ISR_P6_SIZE                                       1
#define AVR32_PIO_ISR_P7                                            7
#define AVR32_PIO_ISR_P7_MASK                              0x00000080
#define AVR32_PIO_ISR_P7_OFFSET                                     7
#define AVR32_PIO_ISR_P7_SIZE                                       1
#define AVR32_PIO_ISR_P8                                            8
#define AVR32_PIO_ISR_P8_MASK                              0x00000100
#define AVR32_PIO_ISR_P8_OFFSET                                     8
#define AVR32_PIO_ISR_P8_SIZE                                       1
#define AVR32_PIO_ISR_P9                                            9
#define AVR32_PIO_ISR_P9_MASK                              0x00000200
#define AVR32_PIO_ISR_P9_OFFSET                                     9
#define AVR32_PIO_ISR_P9_SIZE                                       1
#define AVR32_PIO_MDDR                                     0x00000054
#define AVR32_PIO_MDDR_P0                                           0
#define AVR32_PIO_MDDR_P0_MASK                             0x00000001
#define AVR32_PIO_MDDR_P0_OFFSET                                    0
#define AVR32_PIO_MDDR_P0_SIZE                                      1
#define AVR32_PIO_MDDR_P1                                           1
#define AVR32_PIO_MDDR_P10                                         10
#define AVR32_PIO_MDDR_P10_MASK                            0x00000400
#define AVR32_PIO_MDDR_P10_OFFSET                                  10
#define AVR32_PIO_MDDR_P10_SIZE                                     1
#define AVR32_PIO_MDDR_P11                                         11
#define AVR32_PIO_MDDR_P11_MASK                            0x00000800
#define AVR32_PIO_MDDR_P11_OFFSET                                  11
#define AVR32_PIO_MDDR_P11_SIZE                                     1
#define AVR32_PIO_MDDR_P12                                         12
#define AVR32_PIO_MDDR_P12_MASK                            0x00001000
#define AVR32_PIO_MDDR_P12_OFFSET                                  12
#define AVR32_PIO_MDDR_P12_SIZE                                     1
#define AVR32_PIO_MDDR_P13                                         13
#define AVR32_PIO_MDDR_P13_MASK                            0x00002000
#define AVR32_PIO_MDDR_P13_OFFSET                                  13
#define AVR32_PIO_MDDR_P13_SIZE                                     1
#define AVR32_PIO_MDDR_P14                                         14
#define AVR32_PIO_MDDR_P14_MASK                            0x00004000
#define AVR32_PIO_MDDR_P14_OFFSET                                  14
#define AVR32_PIO_MDDR_P14_SIZE                                     1
#define AVR32_PIO_MDDR_P15                                         15
#define AVR32_PIO_MDDR_P15_MASK                            0x00008000
#define AVR32_PIO_MDDR_P15_OFFSET                                  15
#define AVR32_PIO_MDDR_P15_SIZE                                     1
#define AVR32_PIO_MDDR_P16                                         16
#define AVR32_PIO_MDDR_P16_MASK                            0x00010000
#define AVR32_PIO_MDDR_P16_OFFSET                                  16
#define AVR32_PIO_MDDR_P16_SIZE                                     1
#define AVR32_PIO_MDDR_P17                                         17
#define AVR32_PIO_MDDR_P17_MASK                            0x00020000
#define AVR32_PIO_MDDR_P17_OFFSET                                  17
#define AVR32_PIO_MDDR_P17_SIZE                                     1
#define AVR32_PIO_MDDR_P18                                         18
#define AVR32_PIO_MDDR_P18_MASK                            0x00040000
#define AVR32_PIO_MDDR_P18_OFFSET                                  18
#define AVR32_PIO_MDDR_P18_SIZE                                     1
#define AVR32_PIO_MDDR_P19                                         19
#define AVR32_PIO_MDDR_P19_MASK                            0x00080000
#define AVR32_PIO_MDDR_P19_OFFSET                                  19
#define AVR32_PIO_MDDR_P19_SIZE                                     1
#define AVR32_PIO_MDDR_P1_MASK                             0x00000002
#define AVR32_PIO_MDDR_P1_OFFSET                                    1
#define AVR32_PIO_MDDR_P1_SIZE                                      1
#define AVR32_PIO_MDDR_P2                                           2
#define AVR32_PIO_MDDR_P20                                         20
#define AVR32_PIO_MDDR_P20_MASK                            0x00100000
#define AVR32_PIO_MDDR_P20_OFFSET                                  20
#define AVR32_PIO_MDDR_P20_SIZE                                     1
#define AVR32_PIO_MDDR_P21                                         21
#define AVR32_PIO_MDDR_P21_MASK                            0x00200000
#define AVR32_PIO_MDDR_P21_OFFSET                                  21
#define AVR32_PIO_MDDR_P21_SIZE                                     1
#define AVR32_PIO_MDDR_P22                                         22
#define AVR32_PIO_MDDR_P22_MASK                            0x00400000
#define AVR32_PIO_MDDR_P22_OFFSET                                  22
#define AVR32_PIO_MDDR_P22_SIZE                                     1
#define AVR32_PIO_MDDR_P23                                         23
#define AVR32_PIO_MDDR_P23_MASK                            0x00800000
#define AVR32_PIO_MDDR_P23_OFFSET                                  23
#define AVR32_PIO_MDDR_P23_SIZE                                     1
#define AVR32_PIO_MDDR_P24                                         24
#define AVR32_PIO_MDDR_P24_MASK                            0x01000000
#define AVR32_PIO_MDDR_P24_OFFSET                                  24
#define AVR32_PIO_MDDR_P24_SIZE                                     1
#define AVR32_PIO_MDDR_P25                                         25
#define AVR32_PIO_MDDR_P25_MASK                            0x02000000
#define AVR32_PIO_MDDR_P25_OFFSET                                  25
#define AVR32_PIO_MDDR_P25_SIZE                                     1
#define AVR32_PIO_MDDR_P26                                         26
#define AVR32_PIO_MDDR_P26_MASK                            0x04000000
#define AVR32_PIO_MDDR_P26_OFFSET                                  26
#define AVR32_PIO_MDDR_P26_SIZE                                     1
#define AVR32_PIO_MDDR_P27                                         27
#define AVR32_PIO_MDDR_P27_MASK                            0x08000000
#define AVR32_PIO_MDDR_P27_OFFSET                                  27
#define AVR32_PIO_MDDR_P27_SIZE                                     1
#define AVR32_PIO_MDDR_P28                                         28
#define AVR32_PIO_MDDR_P28_MASK                            0x10000000
#define AVR32_PIO_MDDR_P28_OFFSET                                  28
#define AVR32_PIO_MDDR_P28_SIZE                                     1
#define AVR32_PIO_MDDR_P29                                         29
#define AVR32_PIO_MDDR_P29_MASK                            0x20000000
#define AVR32_PIO_MDDR_P29_OFFSET                                  29
#define AVR32_PIO_MDDR_P29_SIZE                                     1
#define AVR32_PIO_MDDR_P2_MASK                             0x00000004
#define AVR32_PIO_MDDR_P2_OFFSET                                    2
#define AVR32_PIO_MDDR_P2_SIZE                                      1
#define AVR32_PIO_MDDR_P3                                           3
#define AVR32_PIO_MDDR_P30                                         30
#define AVR32_PIO_MDDR_P30_MASK                            0x40000000
#define AVR32_PIO_MDDR_P30_OFFSET                                  30
#define AVR32_PIO_MDDR_P30_SIZE                                     1
#define AVR32_PIO_MDDR_P31                                         31
#define AVR32_PIO_MDDR_P31_MASK                            0x80000000
#define AVR32_PIO_MDDR_P31_OFFSET                                  31
#define AVR32_PIO_MDDR_P31_SIZE                                     1
#define AVR32_PIO_MDDR_P3_MASK                             0x00000008
#define AVR32_PIO_MDDR_P3_OFFSET                                    3
#define AVR32_PIO_MDDR_P3_SIZE                                      1
#define AVR32_PIO_MDDR_P4                                           4
#define AVR32_PIO_MDDR_P4_MASK                             0x00000010
#define AVR32_PIO_MDDR_P4_OFFSET                                    4
#define AVR32_PIO_MDDR_P4_SIZE                                      1
#define AVR32_PIO_MDDR_P5                                           5
#define AVR32_PIO_MDDR_P5_MASK                             0x00000020
#define AVR32_PIO_MDDR_P5_OFFSET                                    5
#define AVR32_PIO_MDDR_P5_SIZE                                      1
#define AVR32_PIO_MDDR_P6                                           6
#define AVR32_PIO_MDDR_P6_MASK                             0x00000040
#define AVR32_PIO_MDDR_P6_OFFSET                                    6
#define AVR32_PIO_MDDR_P6_SIZE                                      1
#define AVR32_PIO_MDDR_P7                                           7
#define AVR32_PIO_MDDR_P7_MASK                             0x00000080
#define AVR32_PIO_MDDR_P7_OFFSET                                    7
#define AVR32_PIO_MDDR_P7_SIZE                                      1
#define AVR32_PIO_MDDR_P8                                           8
#define AVR32_PIO_MDDR_P8_MASK                             0x00000100
#define AVR32_PIO_MDDR_P8_OFFSET                                    8
#define AVR32_PIO_MDDR_P8_SIZE                                      1
#define AVR32_PIO_MDDR_P9                                           9
#define AVR32_PIO_MDDR_P9_MASK                             0x00000200
#define AVR32_PIO_MDDR_P9_OFFSET                                    9
#define AVR32_PIO_MDDR_P9_SIZE                                      1
#define AVR32_PIO_MDER                                     0x00000050
#define AVR32_PIO_MDER_P0                                           0
#define AVR32_PIO_MDER_P0_MASK                             0x00000001
#define AVR32_PIO_MDER_P0_OFFSET                                    0
#define AVR32_PIO_MDER_P0_SIZE                                      1
#define AVR32_PIO_MDER_P1                                           1
#define AVR32_PIO_MDER_P10                                         10
#define AVR32_PIO_MDER_P10_MASK                            0x00000400
#define AVR32_PIO_MDER_P10_OFFSET                                  10
#define AVR32_PIO_MDER_P10_SIZE                                     1
#define AVR32_PIO_MDER_P11                                         11
#define AVR32_PIO_MDER_P11_MASK                            0x00000800
#define AVR32_PIO_MDER_P11_OFFSET                                  11
#define AVR32_PIO_MDER_P11_SIZE                                     1
#define AVR32_PIO_MDER_P12                                         12
#define AVR32_PIO_MDER_P12_MASK                            0x00001000
#define AVR32_PIO_MDER_P12_OFFSET                                  12
#define AVR32_PIO_MDER_P12_SIZE                                     1
#define AVR32_PIO_MDER_P13                                         13
#define AVR32_PIO_MDER_P13_MASK                            0x00002000
#define AVR32_PIO_MDER_P13_OFFSET                                  13
#define AVR32_PIO_MDER_P13_SIZE                                     1
#define AVR32_PIO_MDER_P14                                         14
#define AVR32_PIO_MDER_P14_MASK                            0x00004000
#define AVR32_PIO_MDER_P14_OFFSET                                  14
#define AVR32_PIO_MDER_P14_SIZE                                     1
#define AVR32_PIO_MDER_P15                                         15
#define AVR32_PIO_MDER_P15_MASK                            0x00008000
#define AVR32_PIO_MDER_P15_OFFSET                                  15
#define AVR32_PIO_MDER_P15_SIZE                                     1
#define AVR32_PIO_MDER_P16                                         16
#define AVR32_PIO_MDER_P16_MASK                            0x00010000
#define AVR32_PIO_MDER_P16_OFFSET                                  16
#define AVR32_PIO_MDER_P16_SIZE                                     1
#define AVR32_PIO_MDER_P17                                         17
#define AVR32_PIO_MDER_P17_MASK                            0x00020000
#define AVR32_PIO_MDER_P17_OFFSET                                  17
#define AVR32_PIO_MDER_P17_SIZE                                     1
#define AVR32_PIO_MDER_P18                                         18
#define AVR32_PIO_MDER_P18_MASK                            0x00040000
#define AVR32_PIO_MDER_P18_OFFSET                                  18
#define AVR32_PIO_MDER_P18_SIZE                                     1
#define AVR32_PIO_MDER_P19                                         19
#define AVR32_PIO_MDER_P19_MASK                            0x00080000
#define AVR32_PIO_MDER_P19_OFFSET                                  19
#define AVR32_PIO_MDER_P19_SIZE                                     1
#define AVR32_PIO_MDER_P1_MASK                             0x00000002
#define AVR32_PIO_MDER_P1_OFFSET                                    1
#define AVR32_PIO_MDER_P1_SIZE                                      1
#define AVR32_PIO_MDER_P2                                           2
#define AVR32_PIO_MDER_P20                                         20
#define AVR32_PIO_MDER_P20_MASK                            0x00100000
#define AVR32_PIO_MDER_P20_OFFSET                                  20
#define AVR32_PIO_MDER_P20_SIZE                                     1
#define AVR32_PIO_MDER_P21                                         21
#define AVR32_PIO_MDER_P21_MASK                            0x00200000
#define AVR32_PIO_MDER_P21_OFFSET                                  21
#define AVR32_PIO_MDER_P21_SIZE                                     1
#define AVR32_PIO_MDER_P22                                         22
#define AVR32_PIO_MDER_P22_MASK                            0x00400000
#define AVR32_PIO_MDER_P22_OFFSET                                  22
#define AVR32_PIO_MDER_P22_SIZE                                     1
#define AVR32_PIO_MDER_P23                                         23
#define AVR32_PIO_MDER_P23_MASK                            0x00800000
#define AVR32_PIO_MDER_P23_OFFSET                                  23
#define AVR32_PIO_MDER_P23_SIZE                                     1
#define AVR32_PIO_MDER_P24                                         24
#define AVR32_PIO_MDER_P24_MASK                            0x01000000
#define AVR32_PIO_MDER_P24_OFFSET                                  24
#define AVR32_PIO_MDER_P24_SIZE                                     1
#define AVR32_PIO_MDER_P25                                         25
#define AVR32_PIO_MDER_P25_MASK                            0x02000000
#define AVR32_PIO_MDER_P25_OFFSET                                  25
#define AVR32_PIO_MDER_P25_SIZE                                     1
#define AVR32_PIO_MDER_P26                                         26
#define AVR32_PIO_MDER_P26_MASK                            0x04000000
#define AVR32_PIO_MDER_P26_OFFSET                                  26
#define AVR32_PIO_MDER_P26_SIZE                                     1
#define AVR32_PIO_MDER_P27                                         27
#define AVR32_PIO_MDER_P27_MASK                            0x08000000
#define AVR32_PIO_MDER_P27_OFFSET                                  27
#define AVR32_PIO_MDER_P27_SIZE                                     1
#define AVR32_PIO_MDER_P28                                         28
#define AVR32_PIO_MDER_P28_MASK                            0x10000000
#define AVR32_PIO_MDER_P28_OFFSET                                  28
#define AVR32_PIO_MDER_P28_SIZE                                     1
#define AVR32_PIO_MDER_P29                                         29
#define AVR32_PIO_MDER_P29_MASK                            0x20000000
#define AVR32_PIO_MDER_P29_OFFSET                                  29
#define AVR32_PIO_MDER_P29_SIZE                                     1
#define AVR32_PIO_MDER_P2_MASK                             0x00000004
#define AVR32_PIO_MDER_P2_OFFSET                                    2
#define AVR32_PIO_MDER_P2_SIZE                                      1
#define AVR32_PIO_MDER_P3                                           3
#define AVR32_PIO_MDER_P30                                         30
#define AVR32_PIO_MDER_P30_MASK                            0x40000000
#define AVR32_PIO_MDER_P30_OFFSET                                  30
#define AVR32_PIO_MDER_P30_SIZE                                     1
#define AVR32_PIO_MDER_P31                                         31
#define AVR32_PIO_MDER_P31_MASK                            0x80000000
#define AVR32_PIO_MDER_P31_OFFSET                                  31
#define AVR32_PIO_MDER_P31_SIZE                                     1
#define AVR32_PIO_MDER_P3_MASK                             0x00000008
#define AVR32_PIO_MDER_P3_OFFSET                                    3
#define AVR32_PIO_MDER_P3_SIZE                                      1
#define AVR32_PIO_MDER_P4                                           4
#define AVR32_PIO_MDER_P4_MASK                             0x00000010
#define AVR32_PIO_MDER_P4_OFFSET                                    4
#define AVR32_PIO_MDER_P4_SIZE                                      1
#define AVR32_PIO_MDER_P5                                           5
#define AVR32_PIO_MDER_P5_MASK                             0x00000020
#define AVR32_PIO_MDER_P5_OFFSET                                    5
#define AVR32_PIO_MDER_P5_SIZE                                      1
#define AVR32_PIO_MDER_P6                                           6
#define AVR32_PIO_MDER_P6_MASK                             0x00000040
#define AVR32_PIO_MDER_P6_OFFSET                                    6
#define AVR32_PIO_MDER_P6_SIZE                                      1
#define AVR32_PIO_MDER_P7                                           7
#define AVR32_PIO_MDER_P7_MASK                             0x00000080
#define AVR32_PIO_MDER_P7_OFFSET                                    7
#define AVR32_PIO_MDER_P7_SIZE                                      1
#define AVR32_PIO_MDER_P8                                           8
#define AVR32_PIO_MDER_P8_MASK                             0x00000100
#define AVR32_PIO_MDER_P8_OFFSET                                    8
#define AVR32_PIO_MDER_P8_SIZE                                      1
#define AVR32_PIO_MDER_P9                                           9
#define AVR32_PIO_MDER_P9_MASK                             0x00000200
#define AVR32_PIO_MDER_P9_OFFSET                                    9
#define AVR32_PIO_MDER_P9_SIZE                                      1
#define AVR32_PIO_MDSR                                     0x00000058
#define AVR32_PIO_MDSR_P0                                           0
#define AVR32_PIO_MDSR_P0_MASK                             0x00000001
#define AVR32_PIO_MDSR_P0_OFFSET                                    0
#define AVR32_PIO_MDSR_P0_SIZE                                      1
#define AVR32_PIO_MDSR_P1                                           1
#define AVR32_PIO_MDSR_P10                                         10
#define AVR32_PIO_MDSR_P10_MASK                            0x00000400
#define AVR32_PIO_MDSR_P10_OFFSET                                  10
#define AVR32_PIO_MDSR_P10_SIZE                                     1
#define AVR32_PIO_MDSR_P11                                         11
#define AVR32_PIO_MDSR_P11_MASK                            0x00000800
#define AVR32_PIO_MDSR_P11_OFFSET                                  11
#define AVR32_PIO_MDSR_P11_SIZE                                     1
#define AVR32_PIO_MDSR_P12                                         12
#define AVR32_PIO_MDSR_P12_MASK                            0x00001000
#define AVR32_PIO_MDSR_P12_OFFSET                                  12
#define AVR32_PIO_MDSR_P12_SIZE                                     1
#define AVR32_PIO_MDSR_P13                                         13
#define AVR32_PIO_MDSR_P13_MASK                            0x00002000
#define AVR32_PIO_MDSR_P13_OFFSET                                  13
#define AVR32_PIO_MDSR_P13_SIZE                                     1
#define AVR32_PIO_MDSR_P14                                         14
#define AVR32_PIO_MDSR_P14_MASK                            0x00004000
#define AVR32_PIO_MDSR_P14_OFFSET                                  14
#define AVR32_PIO_MDSR_P14_SIZE                                     1
#define AVR32_PIO_MDSR_P15                                         15
#define AVR32_PIO_MDSR_P15_MASK                            0x00008000
#define AVR32_PIO_MDSR_P15_OFFSET                                  15
#define AVR32_PIO_MDSR_P15_SIZE                                     1
#define AVR32_PIO_MDSR_P16                                         16
#define AVR32_PIO_MDSR_P16_MASK                            0x00010000
#define AVR32_PIO_MDSR_P16_OFFSET                                  16
#define AVR32_PIO_MDSR_P16_SIZE                                     1
#define AVR32_PIO_MDSR_P17                                         17
#define AVR32_PIO_MDSR_P17_MASK                            0x00020000
#define AVR32_PIO_MDSR_P17_OFFSET                                  17
#define AVR32_PIO_MDSR_P17_SIZE                                     1
#define AVR32_PIO_MDSR_P18                                         18
#define AVR32_PIO_MDSR_P18_MASK                            0x00040000
#define AVR32_PIO_MDSR_P18_OFFSET                                  18
#define AVR32_PIO_MDSR_P18_SIZE                                     1
#define AVR32_PIO_MDSR_P19                                         19
#define AVR32_PIO_MDSR_P19_MASK                            0x00080000
#define AVR32_PIO_MDSR_P19_OFFSET                                  19
#define AVR32_PIO_MDSR_P19_SIZE                                     1
#define AVR32_PIO_MDSR_P1_MASK                             0x00000002
#define AVR32_PIO_MDSR_P1_OFFSET                                    1
#define AVR32_PIO_MDSR_P1_SIZE                                      1
#define AVR32_PIO_MDSR_P2                                           2
#define AVR32_PIO_MDSR_P20                                         20
#define AVR32_PIO_MDSR_P20_MASK                            0x00100000
#define AVR32_PIO_MDSR_P20_OFFSET                                  20
#define AVR32_PIO_MDSR_P20_SIZE                                     1
#define AVR32_PIO_MDSR_P21                                         21
#define AVR32_PIO_MDSR_P21_MASK                            0x00200000
#define AVR32_PIO_MDSR_P21_OFFSET                                  21
#define AVR32_PIO_MDSR_P21_SIZE                                     1
#define AVR32_PIO_MDSR_P22                                         22
#define AVR32_PIO_MDSR_P22_MASK                            0x00400000
#define AVR32_PIO_MDSR_P22_OFFSET                                  22
#define AVR32_PIO_MDSR_P22_SIZE                                     1
#define AVR32_PIO_MDSR_P23                                         23
#define AVR32_PIO_MDSR_P23_MASK                            0x00800000
#define AVR32_PIO_MDSR_P23_OFFSET                                  23
#define AVR32_PIO_MDSR_P23_SIZE                                     1
#define AVR32_PIO_MDSR_P24                                         24
#define AVR32_PIO_MDSR_P24_MASK                            0x01000000
#define AVR32_PIO_MDSR_P24_OFFSET                                  24
#define AVR32_PIO_MDSR_P24_SIZE                                     1
#define AVR32_PIO_MDSR_P25                                         25
#define AVR32_PIO_MDSR_P25_MASK                            0x02000000
#define AVR32_PIO_MDSR_P25_OFFSET                                  25
#define AVR32_PIO_MDSR_P25_SIZE                                     1
#define AVR32_PIO_MDSR_P26                                         26
#define AVR32_PIO_MDSR_P26_MASK                            0x04000000
#define AVR32_PIO_MDSR_P26_OFFSET                                  26
#define AVR32_PIO_MDSR_P26_SIZE                                     1
#define AVR32_PIO_MDSR_P27                                         27
#define AVR32_PIO_MDSR_P27_MASK                            0x08000000
#define AVR32_PIO_MDSR_P27_OFFSET                                  27
#define AVR32_PIO_MDSR_P27_SIZE                                     1
#define AVR32_PIO_MDSR_P28                                         28
#define AVR32_PIO_MDSR_P28_MASK                            0x10000000
#define AVR32_PIO_MDSR_P28_OFFSET                                  28
#define AVR32_PIO_MDSR_P28_SIZE                                     1
#define AVR32_PIO_MDSR_P29                                         29
#define AVR32_PIO_MDSR_P29_MASK                            0x20000000
#define AVR32_PIO_MDSR_P29_OFFSET                                  29
#define AVR32_PIO_MDSR_P29_SIZE                                     1
#define AVR32_PIO_MDSR_P2_MASK                             0x00000004
#define AVR32_PIO_MDSR_P2_OFFSET                                    2
#define AVR32_PIO_MDSR_P2_SIZE                                      1
#define AVR32_PIO_MDSR_P3                                           3
#define AVR32_PIO_MDSR_P30                                         30
#define AVR32_PIO_MDSR_P30_MASK                            0x40000000
#define AVR32_PIO_MDSR_P30_OFFSET                                  30
#define AVR32_PIO_MDSR_P30_SIZE                                     1
#define AVR32_PIO_MDSR_P31                                         31
#define AVR32_PIO_MDSR_P31_MASK                            0x80000000
#define AVR32_PIO_MDSR_P31_OFFSET                                  31
#define AVR32_PIO_MDSR_P31_SIZE                                     1
#define AVR32_PIO_MDSR_P3_MASK                             0x00000008
#define AVR32_PIO_MDSR_P3_OFFSET                                    3
#define AVR32_PIO_MDSR_P3_SIZE                                      1
#define AVR32_PIO_MDSR_P4                                           4
#define AVR32_PIO_MDSR_P4_MASK                             0x00000010
#define AVR32_PIO_MDSR_P4_OFFSET                                    4
#define AVR32_PIO_MDSR_P4_SIZE                                      1
#define AVR32_PIO_MDSR_P5                                           5
#define AVR32_PIO_MDSR_P5_MASK                             0x00000020
#define AVR32_PIO_MDSR_P5_OFFSET                                    5
#define AVR32_PIO_MDSR_P5_SIZE                                      1
#define AVR32_PIO_MDSR_P6                                           6
#define AVR32_PIO_MDSR_P6_MASK                             0x00000040
#define AVR32_PIO_MDSR_P6_OFFSET                                    6
#define AVR32_PIO_MDSR_P6_SIZE                                      1
#define AVR32_PIO_MDSR_P7                                           7
#define AVR32_PIO_MDSR_P7_MASK                             0x00000080
#define AVR32_PIO_MDSR_P7_OFFSET                                    7
#define AVR32_PIO_MDSR_P7_SIZE                                      1
#define AVR32_PIO_MDSR_P8                                           8
#define AVR32_PIO_MDSR_P8_MASK                             0x00000100
#define AVR32_PIO_MDSR_P8_OFFSET                                    8
#define AVR32_PIO_MDSR_P8_SIZE                                      1
#define AVR32_PIO_MDSR_P9                                           9
#define AVR32_PIO_MDSR_P9_MASK                             0x00000200
#define AVR32_PIO_MDSR_P9_OFFSET                                    9
#define AVR32_PIO_MDSR_P9_SIZE                                      1
#define AVR32_PIO_ODR                                      0x00000014
#define AVR32_PIO_ODR_P0                                            0
#define AVR32_PIO_ODR_P0_MASK                              0x00000001
#define AVR32_PIO_ODR_P0_OFFSET                                     0
#define AVR32_PIO_ODR_P0_SIZE                                       1
#define AVR32_PIO_ODR_P1                                            1
#define AVR32_PIO_ODR_P10                                          10
#define AVR32_PIO_ODR_P10_MASK                             0x00000400
#define AVR32_PIO_ODR_P10_OFFSET                                   10
#define AVR32_PIO_ODR_P10_SIZE                                      1
#define AVR32_PIO_ODR_P11                                          11
#define AVR32_PIO_ODR_P11_MASK                             0x00000800
#define AVR32_PIO_ODR_P11_OFFSET                                   11
#define AVR32_PIO_ODR_P11_SIZE                                      1
#define AVR32_PIO_ODR_P12                                          12
#define AVR32_PIO_ODR_P12_MASK                             0x00001000
#define AVR32_PIO_ODR_P12_OFFSET                                   12
#define AVR32_PIO_ODR_P12_SIZE                                      1
#define AVR32_PIO_ODR_P13                                          13
#define AVR32_PIO_ODR_P13_MASK                             0x00002000
#define AVR32_PIO_ODR_P13_OFFSET                                   13
#define AVR32_PIO_ODR_P13_SIZE                                      1
#define AVR32_PIO_ODR_P14                                          14
#define AVR32_PIO_ODR_P14_MASK                             0x00004000
#define AVR32_PIO_ODR_P14_OFFSET                                   14
#define AVR32_PIO_ODR_P14_SIZE                                      1
#define AVR32_PIO_ODR_P15                                          15
#define AVR32_PIO_ODR_P15_MASK                             0x00008000
#define AVR32_PIO_ODR_P15_OFFSET                                   15
#define AVR32_PIO_ODR_P15_SIZE                                      1
#define AVR32_PIO_ODR_P16                                          16
#define AVR32_PIO_ODR_P16_MASK                             0x00010000
#define AVR32_PIO_ODR_P16_OFFSET                                   16
#define AVR32_PIO_ODR_P16_SIZE                                      1
#define AVR32_PIO_ODR_P17                                          17
#define AVR32_PIO_ODR_P17_MASK                             0x00020000
#define AVR32_PIO_ODR_P17_OFFSET                                   17
#define AVR32_PIO_ODR_P17_SIZE                                      1
#define AVR32_PIO_ODR_P18                                          18
#define AVR32_PIO_ODR_P18_MASK                             0x00040000
#define AVR32_PIO_ODR_P18_OFFSET                                   18
#define AVR32_PIO_ODR_P18_SIZE                                      1
#define AVR32_PIO_ODR_P19                                          19
#define AVR32_PIO_ODR_P19_MASK                             0x00080000
#define AVR32_PIO_ODR_P19_OFFSET                                   19
#define AVR32_PIO_ODR_P19_SIZE                                      1
#define AVR32_PIO_ODR_P1_MASK                              0x00000002
#define AVR32_PIO_ODR_P1_OFFSET                                     1
#define AVR32_PIO_ODR_P1_SIZE                                       1
#define AVR32_PIO_ODR_P2                                            2
#define AVR32_PIO_ODR_P20                                          20
#define AVR32_PIO_ODR_P20_MASK                             0x00100000
#define AVR32_PIO_ODR_P20_OFFSET                                   20
#define AVR32_PIO_ODR_P20_SIZE                                      1
#define AVR32_PIO_ODR_P21                                          21
#define AVR32_PIO_ODR_P21_MASK                             0x00200000
#define AVR32_PIO_ODR_P21_OFFSET                                   21
#define AVR32_PIO_ODR_P21_SIZE                                      1
#define AVR32_PIO_ODR_P22                                          22
#define AVR32_PIO_ODR_P22_MASK                             0x00400000
#define AVR32_PIO_ODR_P22_OFFSET                                   22
#define AVR32_PIO_ODR_P22_SIZE                                      1
#define AVR32_PIO_ODR_P23                                          23
#define AVR32_PIO_ODR_P23_MASK                             0x00800000
#define AVR32_PIO_ODR_P23_OFFSET                                   23
#define AVR32_PIO_ODR_P23_SIZE                                      1
#define AVR32_PIO_ODR_P24                                          24
#define AVR32_PIO_ODR_P24_MASK                             0x01000000
#define AVR32_PIO_ODR_P24_OFFSET                                   24
#define AVR32_PIO_ODR_P24_SIZE                                      1
#define AVR32_PIO_ODR_P25                                          25
#define AVR32_PIO_ODR_P25_MASK                             0x02000000
#define AVR32_PIO_ODR_P25_OFFSET                                   25
#define AVR32_PIO_ODR_P25_SIZE                                      1
#define AVR32_PIO_ODR_P26                                          26
#define AVR32_PIO_ODR_P26_MASK                             0x04000000
#define AVR32_PIO_ODR_P26_OFFSET                                   26
#define AVR32_PIO_ODR_P26_SIZE                                      1
#define AVR32_PIO_ODR_P27                                          27
#define AVR32_PIO_ODR_P27_MASK                             0x08000000
#define AVR32_PIO_ODR_P27_OFFSET                                   27
#define AVR32_PIO_ODR_P27_SIZE                                      1
#define AVR32_PIO_ODR_P28                                          28
#define AVR32_PIO_ODR_P28_MASK                             0x10000000
#define AVR32_PIO_ODR_P28_OFFSET                                   28
#define AVR32_PIO_ODR_P28_SIZE                                      1
#define AVR32_PIO_ODR_P29                                          29
#define AVR32_PIO_ODR_P29_MASK                             0x20000000
#define AVR32_PIO_ODR_P29_OFFSET                                   29
#define AVR32_PIO_ODR_P29_SIZE                                      1
#define AVR32_PIO_ODR_P2_MASK                              0x00000004
#define AVR32_PIO_ODR_P2_OFFSET                                     2
#define AVR32_PIO_ODR_P2_SIZE                                       1
#define AVR32_PIO_ODR_P3                                            3
#define AVR32_PIO_ODR_P30                                          30
#define AVR32_PIO_ODR_P30_MASK                             0x40000000
#define AVR32_PIO_ODR_P30_OFFSET                                   30
#define AVR32_PIO_ODR_P30_SIZE                                      1
#define AVR32_PIO_ODR_P31                                          31
#define AVR32_PIO_ODR_P31_MASK                             0x80000000
#define AVR32_PIO_ODR_P31_OFFSET                                   31
#define AVR32_PIO_ODR_P31_SIZE                                      1
#define AVR32_PIO_ODR_P3_MASK                              0x00000008
#define AVR32_PIO_ODR_P3_OFFSET                                     3
#define AVR32_PIO_ODR_P3_SIZE                                       1
#define AVR32_PIO_ODR_P4                                            4
#define AVR32_PIO_ODR_P4_MASK                              0x00000010
#define AVR32_PIO_ODR_P4_OFFSET                                     4
#define AVR32_PIO_ODR_P4_SIZE                                       1
#define AVR32_PIO_ODR_P5                                            5
#define AVR32_PIO_ODR_P5_MASK                              0x00000020
#define AVR32_PIO_ODR_P5_OFFSET                                     5
#define AVR32_PIO_ODR_P5_SIZE                                       1
#define AVR32_PIO_ODR_P6                                            6
#define AVR32_PIO_ODR_P6_MASK                              0x00000040
#define AVR32_PIO_ODR_P6_OFFSET                                     6
#define AVR32_PIO_ODR_P6_SIZE                                       1
#define AVR32_PIO_ODR_P7                                            7
#define AVR32_PIO_ODR_P7_MASK                              0x00000080
#define AVR32_PIO_ODR_P7_OFFSET                                     7
#define AVR32_PIO_ODR_P7_SIZE                                       1
#define AVR32_PIO_ODR_P8                                            8
#define AVR32_PIO_ODR_P8_MASK                              0x00000100
#define AVR32_PIO_ODR_P8_OFFSET                                     8
#define AVR32_PIO_ODR_P8_SIZE                                       1
#define AVR32_PIO_ODR_P9                                            9
#define AVR32_PIO_ODR_P9_MASK                              0x00000200
#define AVR32_PIO_ODR_P9_OFFSET                                     9
#define AVR32_PIO_ODR_P9_SIZE                                       1
#define AVR32_PIO_ODSR                                     0x00000038
#define AVR32_PIO_ODSR_P0                                           0
#define AVR32_PIO_ODSR_P0_MASK                             0x00000001
#define AVR32_PIO_ODSR_P0_OFFSET                                    0
#define AVR32_PIO_ODSR_P0_SIZE                                      1
#define AVR32_PIO_ODSR_P1                                           1
#define AVR32_PIO_ODSR_P10                                         10
#define AVR32_PIO_ODSR_P10_MASK                            0x00000400
#define AVR32_PIO_ODSR_P10_OFFSET                                  10
#define AVR32_PIO_ODSR_P10_SIZE                                     1
#define AVR32_PIO_ODSR_P11                                         11
#define AVR32_PIO_ODSR_P11_MASK                            0x00000800
#define AVR32_PIO_ODSR_P11_OFFSET                                  11
#define AVR32_PIO_ODSR_P11_SIZE                                     1
#define AVR32_PIO_ODSR_P12                                         12
#define AVR32_PIO_ODSR_P12_MASK                            0x00001000
#define AVR32_PIO_ODSR_P12_OFFSET                                  12
#define AVR32_PIO_ODSR_P12_SIZE                                     1
#define AVR32_PIO_ODSR_P13                                         13
#define AVR32_PIO_ODSR_P13_MASK                            0x00002000
#define AVR32_PIO_ODSR_P13_OFFSET                                  13
#define AVR32_PIO_ODSR_P13_SIZE                                     1
#define AVR32_PIO_ODSR_P14                                         14
#define AVR32_PIO_ODSR_P14_MASK                            0x00004000
#define AVR32_PIO_ODSR_P14_OFFSET                                  14
#define AVR32_PIO_ODSR_P14_SIZE                                     1
#define AVR32_PIO_ODSR_P15                                         15
#define AVR32_PIO_ODSR_P15_MASK                            0x00008000
#define AVR32_PIO_ODSR_P15_OFFSET                                  15
#define AVR32_PIO_ODSR_P15_SIZE                                     1
#define AVR32_PIO_ODSR_P16                                         16
#define AVR32_PIO_ODSR_P16_MASK                            0x00010000
#define AVR32_PIO_ODSR_P16_OFFSET                                  16
#define AVR32_PIO_ODSR_P16_SIZE                                     1
#define AVR32_PIO_ODSR_P17                                         17
#define AVR32_PIO_ODSR_P17_MASK                            0x00020000
#define AVR32_PIO_ODSR_P17_OFFSET                                  17
#define AVR32_PIO_ODSR_P17_SIZE                                     1
#define AVR32_PIO_ODSR_P18                                         18
#define AVR32_PIO_ODSR_P18_MASK                            0x00040000
#define AVR32_PIO_ODSR_P18_OFFSET                                  18
#define AVR32_PIO_ODSR_P18_SIZE                                     1
#define AVR32_PIO_ODSR_P19                                         19
#define AVR32_PIO_ODSR_P19_MASK                            0x00080000
#define AVR32_PIO_ODSR_P19_OFFSET                                  19
#define AVR32_PIO_ODSR_P19_SIZE                                     1
#define AVR32_PIO_ODSR_P1_MASK                             0x00000002
#define AVR32_PIO_ODSR_P1_OFFSET                                    1
#define AVR32_PIO_ODSR_P1_SIZE                                      1
#define AVR32_PIO_ODSR_P2                                           2
#define AVR32_PIO_ODSR_P20                                         20
#define AVR32_PIO_ODSR_P20_MASK                            0x00100000
#define AVR32_PIO_ODSR_P20_OFFSET                                  20
#define AVR32_PIO_ODSR_P20_SIZE                                     1
#define AVR32_PIO_ODSR_P21                                         21
#define AVR32_PIO_ODSR_P21_MASK                            0x00200000
#define AVR32_PIO_ODSR_P21_OFFSET                                  21
#define AVR32_PIO_ODSR_P21_SIZE                                     1
#define AVR32_PIO_ODSR_P22                                         22
#define AVR32_PIO_ODSR_P22_MASK                            0x00400000
#define AVR32_PIO_ODSR_P22_OFFSET                                  22
#define AVR32_PIO_ODSR_P22_SIZE                                     1
#define AVR32_PIO_ODSR_P23                                         23
#define AVR32_PIO_ODSR_P23_MASK                            0x00800000
#define AVR32_PIO_ODSR_P23_OFFSET                                  23
#define AVR32_PIO_ODSR_P23_SIZE                                     1
#define AVR32_PIO_ODSR_P24                                         24
#define AVR32_PIO_ODSR_P24_MASK                            0x01000000
#define AVR32_PIO_ODSR_P24_OFFSET                                  24
#define AVR32_PIO_ODSR_P24_SIZE                                     1
#define AVR32_PIO_ODSR_P25                                         25
#define AVR32_PIO_ODSR_P25_MASK                            0x02000000
#define AVR32_PIO_ODSR_P25_OFFSET                                  25
#define AVR32_PIO_ODSR_P25_SIZE                                     1
#define AVR32_PIO_ODSR_P26                                         26
#define AVR32_PIO_ODSR_P26_MASK                            0x04000000
#define AVR32_PIO_ODSR_P26_OFFSET                                  26
#define AVR32_PIO_ODSR_P26_SIZE                                     1
#define AVR32_PIO_ODSR_P27                                         27
#define AVR32_PIO_ODSR_P27_MASK                            0x08000000
#define AVR32_PIO_ODSR_P27_OFFSET                                  27
#define AVR32_PIO_ODSR_P27_SIZE                                     1
#define AVR32_PIO_ODSR_P28                                         28
#define AVR32_PIO_ODSR_P28_MASK                            0x10000000
#define AVR32_PIO_ODSR_P28_OFFSET                                  28
#define AVR32_PIO_ODSR_P28_SIZE                                     1
#define AVR32_PIO_ODSR_P29                                         29
#define AVR32_PIO_ODSR_P29_MASK                            0x20000000
#define AVR32_PIO_ODSR_P29_OFFSET                                  29
#define AVR32_PIO_ODSR_P29_SIZE                                     1
#define AVR32_PIO_ODSR_P2_MASK                             0x00000004
#define AVR32_PIO_ODSR_P2_OFFSET                                    2
#define AVR32_PIO_ODSR_P2_SIZE                                      1
#define AVR32_PIO_ODSR_P3                                           3
#define AVR32_PIO_ODSR_P30                                         30
#define AVR32_PIO_ODSR_P30_MASK                            0x40000000
#define AVR32_PIO_ODSR_P30_OFFSET                                  30
#define AVR32_PIO_ODSR_P30_SIZE                                     1
#define AVR32_PIO_ODSR_P31                                         31
#define AVR32_PIO_ODSR_P31_MASK                            0x80000000
#define AVR32_PIO_ODSR_P31_OFFSET                                  31
#define AVR32_PIO_ODSR_P31_SIZE                                     1
#define AVR32_PIO_ODSR_P3_MASK                             0x00000008
#define AVR32_PIO_ODSR_P3_OFFSET                                    3
#define AVR32_PIO_ODSR_P3_SIZE                                      1
#define AVR32_PIO_ODSR_P4                                           4
#define AVR32_PIO_ODSR_P4_MASK                             0x00000010
#define AVR32_PIO_ODSR_P4_OFFSET                                    4
#define AVR32_PIO_ODSR_P4_SIZE                                      1
#define AVR32_PIO_ODSR_P5                                           5
#define AVR32_PIO_ODSR_P5_MASK                             0x00000020
#define AVR32_PIO_ODSR_P5_OFFSET                                    5
#define AVR32_PIO_ODSR_P5_SIZE                                      1
#define AVR32_PIO_ODSR_P6                                           6
#define AVR32_PIO_ODSR_P6_MASK                             0x00000040
#define AVR32_PIO_ODSR_P6_OFFSET                                    6
#define AVR32_PIO_ODSR_P6_SIZE                                      1
#define AVR32_PIO_ODSR_P7                                           7
#define AVR32_PIO_ODSR_P7_MASK                             0x00000080
#define AVR32_PIO_ODSR_P7_OFFSET                                    7
#define AVR32_PIO_ODSR_P7_SIZE                                      1
#define AVR32_PIO_ODSR_P8                                           8
#define AVR32_PIO_ODSR_P8_MASK                             0x00000100
#define AVR32_PIO_ODSR_P8_OFFSET                                    8
#define AVR32_PIO_ODSR_P8_SIZE                                      1
#define AVR32_PIO_ODSR_P9                                           9
#define AVR32_PIO_ODSR_P9_MASK                             0x00000200
#define AVR32_PIO_ODSR_P9_OFFSET                                    9
#define AVR32_PIO_ODSR_P9_SIZE                                      1
#define AVR32_PIO_OER                                      0x00000010
#define AVR32_PIO_OER_P0                                            0
#define AVR32_PIO_OER_P0_MASK                              0x00000001
#define AVR32_PIO_OER_P0_OFFSET                                     0
#define AVR32_PIO_OER_P0_SIZE                                       1
#define AVR32_PIO_OER_P1                                            1
#define AVR32_PIO_OER_P10                                          10
#define AVR32_PIO_OER_P10_MASK                             0x00000400
#define AVR32_PIO_OER_P10_OFFSET                                   10
#define AVR32_PIO_OER_P10_SIZE                                      1
#define AVR32_PIO_OER_P11                                          11
#define AVR32_PIO_OER_P11_MASK                             0x00000800
#define AVR32_PIO_OER_P11_OFFSET                                   11
#define AVR32_PIO_OER_P11_SIZE                                      1
#define AVR32_PIO_OER_P12                                          12
#define AVR32_PIO_OER_P12_MASK                             0x00001000
#define AVR32_PIO_OER_P12_OFFSET                                   12
#define AVR32_PIO_OER_P12_SIZE                                      1
#define AVR32_PIO_OER_P13                                          13
#define AVR32_PIO_OER_P13_MASK                             0x00002000
#define AVR32_PIO_OER_P13_OFFSET                                   13
#define AVR32_PIO_OER_P13_SIZE                                      1
#define AVR32_PIO_OER_P14                                          14
#define AVR32_PIO_OER_P14_MASK                             0x00004000
#define AVR32_PIO_OER_P14_OFFSET                                   14
#define AVR32_PIO_OER_P14_SIZE                                      1
#define AVR32_PIO_OER_P15                                          15
#define AVR32_PIO_OER_P15_MASK                             0x00008000
#define AVR32_PIO_OER_P15_OFFSET                                   15
#define AVR32_PIO_OER_P15_SIZE                                      1
#define AVR32_PIO_OER_P16                                          16
#define AVR32_PIO_OER_P16_MASK                             0x00010000
#define AVR32_PIO_OER_P16_OFFSET                                   16
#define AVR32_PIO_OER_P16_SIZE                                      1
#define AVR32_PIO_OER_P17                                          17
#define AVR32_PIO_OER_P17_MASK                             0x00020000
#define AVR32_PIO_OER_P17_OFFSET                                   17
#define AVR32_PIO_OER_P17_SIZE                                      1
#define AVR32_PIO_OER_P18                                          18
#define AVR32_PIO_OER_P18_MASK                             0x00040000
#define AVR32_PIO_OER_P18_OFFSET                                   18
#define AVR32_PIO_OER_P18_SIZE                                      1
#define AVR32_PIO_OER_P19                                          19
#define AVR32_PIO_OER_P19_MASK                             0x00080000
#define AVR32_PIO_OER_P19_OFFSET                                   19
#define AVR32_PIO_OER_P19_SIZE                                      1
#define AVR32_PIO_OER_P1_MASK                              0x00000002
#define AVR32_PIO_OER_P1_OFFSET                                     1
#define AVR32_PIO_OER_P1_SIZE                                       1
#define AVR32_PIO_OER_P2                                            2
#define AVR32_PIO_OER_P20                                          20
#define AVR32_PIO_OER_P20_MASK                             0x00100000
#define AVR32_PIO_OER_P20_OFFSET                                   20
#define AVR32_PIO_OER_P20_SIZE                                      1
#define AVR32_PIO_OER_P21                                          21
#define AVR32_PIO_OER_P21_MASK                             0x00200000
#define AVR32_PIO_OER_P21_OFFSET                                   21
#define AVR32_PIO_OER_P21_SIZE                                      1
#define AVR32_PIO_OER_P22                                          22
#define AVR32_PIO_OER_P22_MASK                             0x00400000
#define AVR32_PIO_OER_P22_OFFSET                                   22
#define AVR32_PIO_OER_P22_SIZE                                      1
#define AVR32_PIO_OER_P23                                          23
#define AVR32_PIO_OER_P23_MASK                             0x00800000
#define AVR32_PIO_OER_P23_OFFSET                                   23
#define AVR32_PIO_OER_P23_SIZE                                      1
#define AVR32_PIO_OER_P24                                          24
#define AVR32_PIO_OER_P24_MASK                             0x01000000
#define AVR32_PIO_OER_P24_OFFSET                                   24
#define AVR32_PIO_OER_P24_SIZE                                      1
#define AVR32_PIO_OER_P25                                          25
#define AVR32_PIO_OER_P25_MASK                             0x02000000
#define AVR32_PIO_OER_P25_OFFSET                                   25
#define AVR32_PIO_OER_P25_SIZE                                      1
#define AVR32_PIO_OER_P26                                          26
#define AVR32_PIO_OER_P26_MASK                             0x04000000
#define AVR32_PIO_OER_P26_OFFSET                                   26
#define AVR32_PIO_OER_P26_SIZE                                      1
#define AVR32_PIO_OER_P27                                          27
#define AVR32_PIO_OER_P27_MASK                             0x08000000
#define AVR32_PIO_OER_P27_OFFSET                                   27
#define AVR32_PIO_OER_P27_SIZE                                      1
#define AVR32_PIO_OER_P28                                          28
#define AVR32_PIO_OER_P28_MASK                             0x10000000
#define AVR32_PIO_OER_P28_OFFSET                                   28
#define AVR32_PIO_OER_P28_SIZE                                      1
#define AVR32_PIO_OER_P29                                          29
#define AVR32_PIO_OER_P29_MASK                             0x20000000
#define AVR32_PIO_OER_P29_OFFSET                                   29
#define AVR32_PIO_OER_P29_SIZE                                      1
#define AVR32_PIO_OER_P2_MASK                              0x00000004
#define AVR32_PIO_OER_P2_OFFSET                                     2
#define AVR32_PIO_OER_P2_SIZE                                       1
#define AVR32_PIO_OER_P3                                            3
#define AVR32_PIO_OER_P30                                          30
#define AVR32_PIO_OER_P30_MASK                             0x40000000
#define AVR32_PIO_OER_P30_OFFSET                                   30
#define AVR32_PIO_OER_P30_SIZE                                      1
#define AVR32_PIO_OER_P31                                          31
#define AVR32_PIO_OER_P31_MASK                             0x80000000
#define AVR32_PIO_OER_P31_OFFSET                                   31
#define AVR32_PIO_OER_P31_SIZE                                      1
#define AVR32_PIO_OER_P3_MASK                              0x00000008
#define AVR32_PIO_OER_P3_OFFSET                                     3
#define AVR32_PIO_OER_P3_SIZE                                       1
#define AVR32_PIO_OER_P4                                            4
#define AVR32_PIO_OER_P4_MASK                              0x00000010
#define AVR32_PIO_OER_P4_OFFSET                                     4
#define AVR32_PIO_OER_P4_SIZE                                       1
#define AVR32_PIO_OER_P5                                            5
#define AVR32_PIO_OER_P5_MASK                              0x00000020
#define AVR32_PIO_OER_P5_OFFSET                                     5
#define AVR32_PIO_OER_P5_SIZE                                       1
#define AVR32_PIO_OER_P6                                            6
#define AVR32_PIO_OER_P6_MASK                              0x00000040
#define AVR32_PIO_OER_P6_OFFSET                                     6
#define AVR32_PIO_OER_P6_SIZE                                       1
#define AVR32_PIO_OER_P7                                            7
#define AVR32_PIO_OER_P7_MASK                              0x00000080
#define AVR32_PIO_OER_P7_OFFSET                                     7
#define AVR32_PIO_OER_P7_SIZE                                       1
#define AVR32_PIO_OER_P8                                            8
#define AVR32_PIO_OER_P8_MASK                              0x00000100
#define AVR32_PIO_OER_P8_OFFSET                                     8
#define AVR32_PIO_OER_P8_SIZE                                       1
#define AVR32_PIO_OER_P9                                            9
#define AVR32_PIO_OER_P9_MASK                              0x00000200
#define AVR32_PIO_OER_P9_OFFSET                                     9
#define AVR32_PIO_OER_P9_SIZE                                       1
#define AVR32_PIO_OSR                                      0x00000018
#define AVR32_PIO_OSR_P0                                            0
#define AVR32_PIO_OSR_P0_MASK                              0x00000001
#define AVR32_PIO_OSR_P0_OFFSET                                     0
#define AVR32_PIO_OSR_P0_SIZE                                       1
#define AVR32_PIO_OSR_P1                                            1
#define AVR32_PIO_OSR_P10                                          10
#define AVR32_PIO_OSR_P10_MASK                             0x00000400
#define AVR32_PIO_OSR_P10_OFFSET                                   10
#define AVR32_PIO_OSR_P10_SIZE                                      1
#define AVR32_PIO_OSR_P11                                          11
#define AVR32_PIO_OSR_P11_MASK                             0x00000800
#define AVR32_PIO_OSR_P11_OFFSET                                   11
#define AVR32_PIO_OSR_P11_SIZE                                      1
#define AVR32_PIO_OSR_P12                                          12
#define AVR32_PIO_OSR_P12_MASK                             0x00001000
#define AVR32_PIO_OSR_P12_OFFSET                                   12
#define AVR32_PIO_OSR_P12_SIZE                                      1
#define AVR32_PIO_OSR_P13                                          13
#define AVR32_PIO_OSR_P13_MASK                             0x00002000
#define AVR32_PIO_OSR_P13_OFFSET                                   13
#define AVR32_PIO_OSR_P13_SIZE                                      1
#define AVR32_PIO_OSR_P14                                          14
#define AVR32_PIO_OSR_P14_MASK                             0x00004000
#define AVR32_PIO_OSR_P14_OFFSET                                   14
#define AVR32_PIO_OSR_P14_SIZE                                      1
#define AVR32_PIO_OSR_P15                                          15
#define AVR32_PIO_OSR_P15_MASK                             0x00008000
#define AVR32_PIO_OSR_P15_OFFSET                                   15
#define AVR32_PIO_OSR_P15_SIZE                                      1
#define AVR32_PIO_OSR_P16                                          16
#define AVR32_PIO_OSR_P16_MASK                             0x00010000
#define AVR32_PIO_OSR_P16_OFFSET                                   16
#define AVR32_PIO_OSR_P16_SIZE                                      1
#define AVR32_PIO_OSR_P17                                          17
#define AVR32_PIO_OSR_P17_MASK                             0x00020000
#define AVR32_PIO_OSR_P17_OFFSET                                   17
#define AVR32_PIO_OSR_P17_SIZE                                      1
#define AVR32_PIO_OSR_P18                                          18
#define AVR32_PIO_OSR_P18_MASK                             0x00040000
#define AVR32_PIO_OSR_P18_OFFSET                                   18
#define AVR32_PIO_OSR_P18_SIZE                                      1
#define AVR32_PIO_OSR_P19                                          19
#define AVR32_PIO_OSR_P19_MASK                             0x00080000
#define AVR32_PIO_OSR_P19_OFFSET                                   19
#define AVR32_PIO_OSR_P19_SIZE                                      1
#define AVR32_PIO_OSR_P1_MASK                              0x00000002
#define AVR32_PIO_OSR_P1_OFFSET                                     1
#define AVR32_PIO_OSR_P1_SIZE                                       1
#define AVR32_PIO_OSR_P2                                            2
#define AVR32_PIO_OSR_P20                                          20
#define AVR32_PIO_OSR_P20_MASK                             0x00100000
#define AVR32_PIO_OSR_P20_OFFSET                                   20
#define AVR32_PIO_OSR_P20_SIZE                                      1
#define AVR32_PIO_OSR_P21                                          21
#define AVR32_PIO_OSR_P21_MASK                             0x00200000
#define AVR32_PIO_OSR_P21_OFFSET                                   21
#define AVR32_PIO_OSR_P21_SIZE                                      1
#define AVR32_PIO_OSR_P22                                          22
#define AVR32_PIO_OSR_P22_MASK                             0x00400000
#define AVR32_PIO_OSR_P22_OFFSET                                   22
#define AVR32_PIO_OSR_P22_SIZE                                      1
#define AVR32_PIO_OSR_P23                                          23
#define AVR32_PIO_OSR_P23_MASK                             0x00800000
#define AVR32_PIO_OSR_P23_OFFSET                                   23
#define AVR32_PIO_OSR_P23_SIZE                                      1
#define AVR32_PIO_OSR_P24                                          24
#define AVR32_PIO_OSR_P24_MASK                             0x01000000
#define AVR32_PIO_OSR_P24_OFFSET                                   24
#define AVR32_PIO_OSR_P24_SIZE                                      1
#define AVR32_PIO_OSR_P25                                          25
#define AVR32_PIO_OSR_P25_MASK                             0x02000000
#define AVR32_PIO_OSR_P25_OFFSET                                   25
#define AVR32_PIO_OSR_P25_SIZE                                      1
#define AVR32_PIO_OSR_P26                                          26
#define AVR32_PIO_OSR_P26_MASK                             0x04000000
#define AVR32_PIO_OSR_P26_OFFSET                                   26
#define AVR32_PIO_OSR_P26_SIZE                                      1
#define AVR32_PIO_OSR_P27                                          27
#define AVR32_PIO_OSR_P27_MASK                             0x08000000
#define AVR32_PIO_OSR_P27_OFFSET                                   27
#define AVR32_PIO_OSR_P27_SIZE                                      1
#define AVR32_PIO_OSR_P28                                          28
#define AVR32_PIO_OSR_P28_MASK                             0x10000000
#define AVR32_PIO_OSR_P28_OFFSET                                   28
#define AVR32_PIO_OSR_P28_SIZE                                      1
#define AVR32_PIO_OSR_P29                                          29
#define AVR32_PIO_OSR_P29_MASK                             0x20000000
#define AVR32_PIO_OSR_P29_OFFSET                                   29
#define AVR32_PIO_OSR_P29_SIZE                                      1
#define AVR32_PIO_OSR_P2_MASK                              0x00000004
#define AVR32_PIO_OSR_P2_OFFSET                                     2
#define AVR32_PIO_OSR_P2_SIZE                                       1
#define AVR32_PIO_OSR_P3                                            3
#define AVR32_PIO_OSR_P30                                          30
#define AVR32_PIO_OSR_P30_MASK                             0x40000000
#define AVR32_PIO_OSR_P30_OFFSET                                   30
#define AVR32_PIO_OSR_P30_SIZE                                      1
#define AVR32_PIO_OSR_P31                                          31
#define AVR32_PIO_OSR_P31_MASK                             0x80000000
#define AVR32_PIO_OSR_P31_OFFSET                                   31
#define AVR32_PIO_OSR_P31_SIZE                                      1
#define AVR32_PIO_OSR_P3_MASK                              0x00000008
#define AVR32_PIO_OSR_P3_OFFSET                                     3
#define AVR32_PIO_OSR_P3_SIZE                                       1
#define AVR32_PIO_OSR_P4                                            4
#define AVR32_PIO_OSR_P4_MASK                              0x00000010
#define AVR32_PIO_OSR_P4_OFFSET                                     4
#define AVR32_PIO_OSR_P4_SIZE                                       1
#define AVR32_PIO_OSR_P5                                            5
#define AVR32_PIO_OSR_P5_MASK                              0x00000020
#define AVR32_PIO_OSR_P5_OFFSET                                     5
#define AVR32_PIO_OSR_P5_SIZE                                       1
#define AVR32_PIO_OSR_P6                                            6
#define AVR32_PIO_OSR_P6_MASK                              0x00000040
#define AVR32_PIO_OSR_P6_OFFSET                                     6
#define AVR32_PIO_OSR_P6_SIZE                                       1
#define AVR32_PIO_OSR_P7                                            7
#define AVR32_PIO_OSR_P7_MASK                              0x00000080
#define AVR32_PIO_OSR_P7_OFFSET                                     7
#define AVR32_PIO_OSR_P7_SIZE                                       1
#define AVR32_PIO_OSR_P8                                            8
#define AVR32_PIO_OSR_P8_MASK                              0x00000100
#define AVR32_PIO_OSR_P8_OFFSET                                     8
#define AVR32_PIO_OSR_P8_SIZE                                       1
#define AVR32_PIO_OSR_P9                                            9
#define AVR32_PIO_OSR_P9_MASK                              0x00000200
#define AVR32_PIO_OSR_P9_OFFSET                                     9
#define AVR32_PIO_OSR_P9_SIZE                                       1
#define AVR32_PIO_OWDR                                     0x000000a4
#define AVR32_PIO_OWDR_P0                                           0
#define AVR32_PIO_OWDR_P0_MASK                             0x00000001
#define AVR32_PIO_OWDR_P0_OFFSET                                    0
#define AVR32_PIO_OWDR_P0_SIZE                                      1
#define AVR32_PIO_OWDR_P1                                           1
#define AVR32_PIO_OWDR_P10                                         10
#define AVR32_PIO_OWDR_P10_MASK                            0x00000400
#define AVR32_PIO_OWDR_P10_OFFSET                                  10
#define AVR32_PIO_OWDR_P10_SIZE                                     1
#define AVR32_PIO_OWDR_P11                                         11
#define AVR32_PIO_OWDR_P11_MASK                            0x00000800
#define AVR32_PIO_OWDR_P11_OFFSET                                  11
#define AVR32_PIO_OWDR_P11_SIZE                                     1
#define AVR32_PIO_OWDR_P12                                         12
#define AVR32_PIO_OWDR_P12_MASK                            0x00001000
#define AVR32_PIO_OWDR_P12_OFFSET                                  12
#define AVR32_PIO_OWDR_P12_SIZE                                     1
#define AVR32_PIO_OWDR_P13                                         13
#define AVR32_PIO_OWDR_P13_MASK                            0x00002000
#define AVR32_PIO_OWDR_P13_OFFSET                                  13
#define AVR32_PIO_OWDR_P13_SIZE                                     1
#define AVR32_PIO_OWDR_P14                                         14
#define AVR32_PIO_OWDR_P14_MASK                            0x00004000
#define AVR32_PIO_OWDR_P14_OFFSET                                  14
#define AVR32_PIO_OWDR_P14_SIZE                                     1
#define AVR32_PIO_OWDR_P15                                         15
#define AVR32_PIO_OWDR_P15_MASK                            0x00008000
#define AVR32_PIO_OWDR_P15_OFFSET                                  15
#define AVR32_PIO_OWDR_P15_SIZE                                     1
#define AVR32_PIO_OWDR_P16                                         16
#define AVR32_PIO_OWDR_P16_MASK                            0x00010000
#define AVR32_PIO_OWDR_P16_OFFSET                                  16
#define AVR32_PIO_OWDR_P16_SIZE                                     1
#define AVR32_PIO_OWDR_P17                                         17
#define AVR32_PIO_OWDR_P17_MASK                            0x00020000
#define AVR32_PIO_OWDR_P17_OFFSET                                  17
#define AVR32_PIO_OWDR_P17_SIZE                                     1
#define AVR32_PIO_OWDR_P18                                         18
#define AVR32_PIO_OWDR_P18_MASK                            0x00040000
#define AVR32_PIO_OWDR_P18_OFFSET                                  18
#define AVR32_PIO_OWDR_P18_SIZE                                     1
#define AVR32_PIO_OWDR_P19                                         19
#define AVR32_PIO_OWDR_P19_MASK                            0x00080000
#define AVR32_PIO_OWDR_P19_OFFSET                                  19
#define AVR32_PIO_OWDR_P19_SIZE                                     1
#define AVR32_PIO_OWDR_P1_MASK                             0x00000002
#define AVR32_PIO_OWDR_P1_OFFSET                                    1
#define AVR32_PIO_OWDR_P1_SIZE                                      1
#define AVR32_PIO_OWDR_P2                                           2
#define AVR32_PIO_OWDR_P20                                         20
#define AVR32_PIO_OWDR_P20_MASK                            0x00100000
#define AVR32_PIO_OWDR_P20_OFFSET                                  20
#define AVR32_PIO_OWDR_P20_SIZE                                     1
#define AVR32_PIO_OWDR_P21                                         21
#define AVR32_PIO_OWDR_P21_MASK                            0x00200000
#define AVR32_PIO_OWDR_P21_OFFSET                                  21
#define AVR32_PIO_OWDR_P21_SIZE                                     1
#define AVR32_PIO_OWDR_P22                                         22
#define AVR32_PIO_OWDR_P22_MASK                            0x00400000
#define AVR32_PIO_OWDR_P22_OFFSET                                  22
#define AVR32_PIO_OWDR_P22_SIZE                                     1
#define AVR32_PIO_OWDR_P23                                         23
#define AVR32_PIO_OWDR_P23_MASK                            0x00800000
#define AVR32_PIO_OWDR_P23_OFFSET                                  23
#define AVR32_PIO_OWDR_P23_SIZE                                     1
#define AVR32_PIO_OWDR_P24                                         24
#define AVR32_PIO_OWDR_P24_MASK                            0x01000000
#define AVR32_PIO_OWDR_P24_OFFSET                                  24
#define AVR32_PIO_OWDR_P24_SIZE                                     1
#define AVR32_PIO_OWDR_P25                                         25
#define AVR32_PIO_OWDR_P25_MASK                            0x02000000
#define AVR32_PIO_OWDR_P25_OFFSET                                  25
#define AVR32_PIO_OWDR_P25_SIZE                                     1
#define AVR32_PIO_OWDR_P26                                         26
#define AVR32_PIO_OWDR_P26_MASK                            0x04000000
#define AVR32_PIO_OWDR_P26_OFFSET                                  26
#define AVR32_PIO_OWDR_P26_SIZE                                     1
#define AVR32_PIO_OWDR_P27                                         27
#define AVR32_PIO_OWDR_P27_MASK                            0x08000000
#define AVR32_PIO_OWDR_P27_OFFSET                                  27
#define AVR32_PIO_OWDR_P27_SIZE                                     1
#define AVR32_PIO_OWDR_P28                                         28
#define AVR32_PIO_OWDR_P28_MASK                            0x10000000
#define AVR32_PIO_OWDR_P28_OFFSET                                  28
#define AVR32_PIO_OWDR_P28_SIZE                                     1
#define AVR32_PIO_OWDR_P29                                         29
#define AVR32_PIO_OWDR_P29_MASK                            0x20000000
#define AVR32_PIO_OWDR_P29_OFFSET                                  29
#define AVR32_PIO_OWDR_P29_SIZE                                     1
#define AVR32_PIO_OWDR_P2_MASK                             0x00000004
#define AVR32_PIO_OWDR_P2_OFFSET                                    2
#define AVR32_PIO_OWDR_P2_SIZE                                      1
#define AVR32_PIO_OWDR_P3                                           3
#define AVR32_PIO_OWDR_P30                                         30
#define AVR32_PIO_OWDR_P30_MASK                            0x40000000
#define AVR32_PIO_OWDR_P30_OFFSET                                  30
#define AVR32_PIO_OWDR_P30_SIZE                                     1
#define AVR32_PIO_OWDR_P31                                         31
#define AVR32_PIO_OWDR_P31_MASK                            0x80000000
#define AVR32_PIO_OWDR_P31_OFFSET                                  31
#define AVR32_PIO_OWDR_P31_SIZE                                     1
#define AVR32_PIO_OWDR_P3_MASK                             0x00000008
#define AVR32_PIO_OWDR_P3_OFFSET                                    3
#define AVR32_PIO_OWDR_P3_SIZE                                      1
#define AVR32_PIO_OWDR_P4                                           4
#define AVR32_PIO_OWDR_P4_MASK                             0x00000010
#define AVR32_PIO_OWDR_P4_OFFSET                                    4
#define AVR32_PIO_OWDR_P4_SIZE                                      1
#define AVR32_PIO_OWDR_P5                                           5
#define AVR32_PIO_OWDR_P5_MASK                             0x00000020
#define AVR32_PIO_OWDR_P5_OFFSET                                    5
#define AVR32_PIO_OWDR_P5_SIZE                                      1
#define AVR32_PIO_OWDR_P6                                           6
#define AVR32_PIO_OWDR_P6_MASK                             0x00000040
#define AVR32_PIO_OWDR_P6_OFFSET                                    6
#define AVR32_PIO_OWDR_P6_SIZE                                      1
#define AVR32_PIO_OWDR_P7                                           7
#define AVR32_PIO_OWDR_P7_MASK                             0x00000080
#define AVR32_PIO_OWDR_P7_OFFSET                                    7
#define AVR32_PIO_OWDR_P7_SIZE                                      1
#define AVR32_PIO_OWDR_P8                                           8
#define AVR32_PIO_OWDR_P8_MASK                             0x00000100
#define AVR32_PIO_OWDR_P8_OFFSET                                    8
#define AVR32_PIO_OWDR_P8_SIZE                                      1
#define AVR32_PIO_OWDR_P9                                           9
#define AVR32_PIO_OWDR_P9_MASK                             0x00000200
#define AVR32_PIO_OWDR_P9_OFFSET                                    9
#define AVR32_PIO_OWDR_P9_SIZE                                      1
#define AVR32_PIO_OWER                                     0x000000a0
#define AVR32_PIO_OWER_P0                                           0
#define AVR32_PIO_OWER_P0_MASK                             0x00000001
#define AVR32_PIO_OWER_P0_OFFSET                                    0
#define AVR32_PIO_OWER_P0_SIZE                                      1
#define AVR32_PIO_OWER_P1                                           1
#define AVR32_PIO_OWER_P10                                         10
#define AVR32_PIO_OWER_P10_MASK                            0x00000400
#define AVR32_PIO_OWER_P10_OFFSET                                  10
#define AVR32_PIO_OWER_P10_SIZE                                     1
#define AVR32_PIO_OWER_P11                                         11
#define AVR32_PIO_OWER_P11_MASK                            0x00000800
#define AVR32_PIO_OWER_P11_OFFSET                                  11
#define AVR32_PIO_OWER_P11_SIZE                                     1
#define AVR32_PIO_OWER_P12                                         12
#define AVR32_PIO_OWER_P12_MASK                            0x00001000
#define AVR32_PIO_OWER_P12_OFFSET                                  12
#define AVR32_PIO_OWER_P12_SIZE                                     1
#define AVR32_PIO_OWER_P13                                         13
#define AVR32_PIO_OWER_P13_MASK                            0x00002000
#define AVR32_PIO_OWER_P13_OFFSET                                  13
#define AVR32_PIO_OWER_P13_SIZE                                     1
#define AVR32_PIO_OWER_P14                                         14
#define AVR32_PIO_OWER_P14_MASK                            0x00004000
#define AVR32_PIO_OWER_P14_OFFSET                                  14
#define AVR32_PIO_OWER_P14_SIZE                                     1
#define AVR32_PIO_OWER_P15                                         15
#define AVR32_PIO_OWER_P15_MASK                            0x00008000
#define AVR32_PIO_OWER_P15_OFFSET                                  15
#define AVR32_PIO_OWER_P15_SIZE                                     1
#define AVR32_PIO_OWER_P16                                         16
#define AVR32_PIO_OWER_P16_MASK                            0x00010000
#define AVR32_PIO_OWER_P16_OFFSET                                  16
#define AVR32_PIO_OWER_P16_SIZE                                     1
#define AVR32_PIO_OWER_P17                                         17
#define AVR32_PIO_OWER_P17_MASK                            0x00020000
#define AVR32_PIO_OWER_P17_OFFSET                                  17
#define AVR32_PIO_OWER_P17_SIZE                                     1
#define AVR32_PIO_OWER_P18                                         18
#define AVR32_PIO_OWER_P18_MASK                            0x00040000
#define AVR32_PIO_OWER_P18_OFFSET                                  18
#define AVR32_PIO_OWER_P18_SIZE                                     1
#define AVR32_PIO_OWER_P19                                         19
#define AVR32_PIO_OWER_P19_MASK                            0x00080000
#define AVR32_PIO_OWER_P19_OFFSET                                  19
#define AVR32_PIO_OWER_P19_SIZE                                     1
#define AVR32_PIO_OWER_P1_MASK                             0x00000002
#define AVR32_PIO_OWER_P1_OFFSET                                    1
#define AVR32_PIO_OWER_P1_SIZE                                      1
#define AVR32_PIO_OWER_P2                                           2
#define AVR32_PIO_OWER_P20                                         20
#define AVR32_PIO_OWER_P20_MASK                            0x00100000
#define AVR32_PIO_OWER_P20_OFFSET                                  20
#define AVR32_PIO_OWER_P20_SIZE                                     1
#define AVR32_PIO_OWER_P21                                         21
#define AVR32_PIO_OWER_P21_MASK                            0x00200000
#define AVR32_PIO_OWER_P21_OFFSET                                  21
#define AVR32_PIO_OWER_P21_SIZE                                     1
#define AVR32_PIO_OWER_P22                                         22
#define AVR32_PIO_OWER_P22_MASK                            0x00400000
#define AVR32_PIO_OWER_P22_OFFSET                                  22
#define AVR32_PIO_OWER_P22_SIZE                                     1
#define AVR32_PIO_OWER_P23                                         23
#define AVR32_PIO_OWER_P23_MASK                            0x00800000
#define AVR32_PIO_OWER_P23_OFFSET                                  23
#define AVR32_PIO_OWER_P23_SIZE                                     1
#define AVR32_PIO_OWER_P24                                         24
#define AVR32_PIO_OWER_P24_MASK                            0x01000000
#define AVR32_PIO_OWER_P24_OFFSET                                  24
#define AVR32_PIO_OWER_P24_SIZE                                     1
#define AVR32_PIO_OWER_P25                                         25
#define AVR32_PIO_OWER_P25_MASK                            0x02000000
#define AVR32_PIO_OWER_P25_OFFSET                                  25
#define AVR32_PIO_OWER_P25_SIZE                                     1
#define AVR32_PIO_OWER_P26                                         26
#define AVR32_PIO_OWER_P26_MASK                            0x04000000
#define AVR32_PIO_OWER_P26_OFFSET                                  26
#define AVR32_PIO_OWER_P26_SIZE                                     1
#define AVR32_PIO_OWER_P27                                         27
#define AVR32_PIO_OWER_P27_MASK                            0x08000000
#define AVR32_PIO_OWER_P27_OFFSET                                  27
#define AVR32_PIO_OWER_P27_SIZE                                     1
#define AVR32_PIO_OWER_P28                                         28
#define AVR32_PIO_OWER_P28_MASK                            0x10000000
#define AVR32_PIO_OWER_P28_OFFSET                                  28
#define AVR32_PIO_OWER_P28_SIZE                                     1
#define AVR32_PIO_OWER_P29                                         29
#define AVR32_PIO_OWER_P29_MASK                            0x20000000
#define AVR32_PIO_OWER_P29_OFFSET                                  29
#define AVR32_PIO_OWER_P29_SIZE                                     1
#define AVR32_PIO_OWER_P2_MASK                             0x00000004
#define AVR32_PIO_OWER_P2_OFFSET                                    2
#define AVR32_PIO_OWER_P2_SIZE                                      1
#define AVR32_PIO_OWER_P3                                           3
#define AVR32_PIO_OWER_P30                                         30
#define AVR32_PIO_OWER_P30_MASK                            0x40000000
#define AVR32_PIO_OWER_P30_OFFSET                                  30
#define AVR32_PIO_OWER_P30_SIZE                                     1
#define AVR32_PIO_OWER_P31                                         31
#define AVR32_PIO_OWER_P31_MASK                            0x80000000
#define AVR32_PIO_OWER_P31_OFFSET                                  31
#define AVR32_PIO_OWER_P31_SIZE                                     1
#define AVR32_PIO_OWER_P3_MASK                             0x00000008
#define AVR32_PIO_OWER_P3_OFFSET                                    3
#define AVR32_PIO_OWER_P3_SIZE                                      1
#define AVR32_PIO_OWER_P4                                           4
#define AVR32_PIO_OWER_P4_MASK                             0x00000010
#define AVR32_PIO_OWER_P4_OFFSET                                    4
#define AVR32_PIO_OWER_P4_SIZE                                      1
#define AVR32_PIO_OWER_P5                                           5
#define AVR32_PIO_OWER_P5_MASK                             0x00000020
#define AVR32_PIO_OWER_P5_OFFSET                                    5
#define AVR32_PIO_OWER_P5_SIZE                                      1
#define AVR32_PIO_OWER_P6                                           6
#define AVR32_PIO_OWER_P6_MASK                             0x00000040
#define AVR32_PIO_OWER_P6_OFFSET                                    6
#define AVR32_PIO_OWER_P6_SIZE                                      1
#define AVR32_PIO_OWER_P7                                           7
#define AVR32_PIO_OWER_P7_MASK                             0x00000080
#define AVR32_PIO_OWER_P7_OFFSET                                    7
#define AVR32_PIO_OWER_P7_SIZE                                      1
#define AVR32_PIO_OWER_P8                                           8
#define AVR32_PIO_OWER_P8_MASK                             0x00000100
#define AVR32_PIO_OWER_P8_OFFSET                                    8
#define AVR32_PIO_OWER_P8_SIZE                                      1
#define AVR32_PIO_OWER_P9                                           9
#define AVR32_PIO_OWER_P9_MASK                             0x00000200
#define AVR32_PIO_OWER_P9_OFFSET                                    9
#define AVR32_PIO_OWER_P9_SIZE                                      1
#define AVR32_PIO_OWSR                                     0x000000a8
#define AVR32_PIO_OWSR_P0                                           0
#define AVR32_PIO_OWSR_P0_MASK                             0x00000001
#define AVR32_PIO_OWSR_P0_OFFSET                                    0
#define AVR32_PIO_OWSR_P0_SIZE                                      1
#define AVR32_PIO_OWSR_P1                                           1
#define AVR32_PIO_OWSR_P10                                         10
#define AVR32_PIO_OWSR_P10_MASK                            0x00000400
#define AVR32_PIO_OWSR_P10_OFFSET                                  10
#define AVR32_PIO_OWSR_P10_SIZE                                     1
#define AVR32_PIO_OWSR_P11                                         11
#define AVR32_PIO_OWSR_P11_MASK                            0x00000800
#define AVR32_PIO_OWSR_P11_OFFSET                                  11
#define AVR32_PIO_OWSR_P11_SIZE                                     1
#define AVR32_PIO_OWSR_P12                                         12
#define AVR32_PIO_OWSR_P12_MASK                            0x00001000
#define AVR32_PIO_OWSR_P12_OFFSET                                  12
#define AVR32_PIO_OWSR_P12_SIZE                                     1
#define AVR32_PIO_OWSR_P13                                         13
#define AVR32_PIO_OWSR_P13_MASK                            0x00002000
#define AVR32_PIO_OWSR_P13_OFFSET                                  13
#define AVR32_PIO_OWSR_P13_SIZE                                     1
#define AVR32_PIO_OWSR_P14                                         14
#define AVR32_PIO_OWSR_P14_MASK                            0x00004000
#define AVR32_PIO_OWSR_P14_OFFSET                                  14
#define AVR32_PIO_OWSR_P14_SIZE                                     1
#define AVR32_PIO_OWSR_P15                                         15
#define AVR32_PIO_OWSR_P15_MASK                            0x00008000
#define AVR32_PIO_OWSR_P15_OFFSET                                  15
#define AVR32_PIO_OWSR_P15_SIZE                                     1
#define AVR32_PIO_OWSR_P16                                         16
#define AVR32_PIO_OWSR_P16_MASK                            0x00010000
#define AVR32_PIO_OWSR_P16_OFFSET                                  16
#define AVR32_PIO_OWSR_P16_SIZE                                     1
#define AVR32_PIO_OWSR_P17                                         17
#define AVR32_PIO_OWSR_P17_MASK                            0x00020000
#define AVR32_PIO_OWSR_P17_OFFSET                                  17
#define AVR32_PIO_OWSR_P17_SIZE                                     1
#define AVR32_PIO_OWSR_P18                                         18
#define AVR32_PIO_OWSR_P18_MASK                            0x00040000
#define AVR32_PIO_OWSR_P18_OFFSET                                  18
#define AVR32_PIO_OWSR_P18_SIZE                                     1
#define AVR32_PIO_OWSR_P19                                         19
#define AVR32_PIO_OWSR_P19_MASK                            0x00080000
#define AVR32_PIO_OWSR_P19_OFFSET                                  19
#define AVR32_PIO_OWSR_P19_SIZE                                     1
#define AVR32_PIO_OWSR_P1_MASK                             0x00000002
#define AVR32_PIO_OWSR_P1_OFFSET                                    1
#define AVR32_PIO_OWSR_P1_SIZE                                      1
#define AVR32_PIO_OWSR_P2                                           2
#define AVR32_PIO_OWSR_P20                                         20
#define AVR32_PIO_OWSR_P20_MASK                            0x00100000
#define AVR32_PIO_OWSR_P20_OFFSET                                  20
#define AVR32_PIO_OWSR_P20_SIZE                                     1
#define AVR32_PIO_OWSR_P21                                         21
#define AVR32_PIO_OWSR_P21_MASK                            0x00200000
#define AVR32_PIO_OWSR_P21_OFFSET                                  21
#define AVR32_PIO_OWSR_P21_SIZE                                     1
#define AVR32_PIO_OWSR_P22                                         22
#define AVR32_PIO_OWSR_P22_MASK                            0x00400000
#define AVR32_PIO_OWSR_P22_OFFSET                                  22
#define AVR32_PIO_OWSR_P22_SIZE                                     1
#define AVR32_PIO_OWSR_P23                                         23
#define AVR32_PIO_OWSR_P23_MASK                            0x00800000
#define AVR32_PIO_OWSR_P23_OFFSET                                  23
#define AVR32_PIO_OWSR_P23_SIZE                                     1
#define AVR32_PIO_OWSR_P24                                         24
#define AVR32_PIO_OWSR_P24_MASK                            0x01000000
#define AVR32_PIO_OWSR_P24_OFFSET                                  24
#define AVR32_PIO_OWSR_P24_SIZE                                     1
#define AVR32_PIO_OWSR_P25                                         25
#define AVR32_PIO_OWSR_P25_MASK                            0x02000000
#define AVR32_PIO_OWSR_P25_OFFSET                                  25
#define AVR32_PIO_OWSR_P25_SIZE                                     1
#define AVR32_PIO_OWSR_P26                                         26
#define AVR32_PIO_OWSR_P26_MASK                            0x04000000
#define AVR32_PIO_OWSR_P26_OFFSET                                  26
#define AVR32_PIO_OWSR_P26_SIZE                                     1
#define AVR32_PIO_OWSR_P27                                         27
#define AVR32_PIO_OWSR_P27_MASK                            0x08000000
#define AVR32_PIO_OWSR_P27_OFFSET                                  27
#define AVR32_PIO_OWSR_P27_SIZE                                     1
#define AVR32_PIO_OWSR_P28                                         28
#define AVR32_PIO_OWSR_P28_MASK                            0x10000000
#define AVR32_PIO_OWSR_P28_OFFSET                                  28
#define AVR32_PIO_OWSR_P28_SIZE                                     1
#define AVR32_PIO_OWSR_P29                                         29
#define AVR32_PIO_OWSR_P29_MASK                            0x20000000
#define AVR32_PIO_OWSR_P29_OFFSET                                  29
#define AVR32_PIO_OWSR_P29_SIZE                                     1
#define AVR32_PIO_OWSR_P2_MASK                             0x00000004
#define AVR32_PIO_OWSR_P2_OFFSET                                    2
#define AVR32_PIO_OWSR_P2_SIZE                                      1
#define AVR32_PIO_OWSR_P3                                           3
#define AVR32_PIO_OWSR_P30                                         30
#define AVR32_PIO_OWSR_P30_MASK                            0x40000000
#define AVR32_PIO_OWSR_P30_OFFSET                                  30
#define AVR32_PIO_OWSR_P30_SIZE                                     1
#define AVR32_PIO_OWSR_P31                                         31
#define AVR32_PIO_OWSR_P31_MASK                            0x80000000
#define AVR32_PIO_OWSR_P31_OFFSET                                  31
#define AVR32_PIO_OWSR_P31_SIZE                                     1
#define AVR32_PIO_OWSR_P3_MASK                             0x00000008
#define AVR32_PIO_OWSR_P3_OFFSET                                    3
#define AVR32_PIO_OWSR_P3_SIZE                                      1
#define AVR32_PIO_OWSR_P4                                           4
#define AVR32_PIO_OWSR_P4_MASK                             0x00000010
#define AVR32_PIO_OWSR_P4_OFFSET                                    4
#define AVR32_PIO_OWSR_P4_SIZE                                      1
#define AVR32_PIO_OWSR_P5                                           5
#define AVR32_PIO_OWSR_P5_MASK                             0x00000020
#define AVR32_PIO_OWSR_P5_OFFSET                                    5
#define AVR32_PIO_OWSR_P5_SIZE                                      1
#define AVR32_PIO_OWSR_P6                                           6
#define AVR32_PIO_OWSR_P6_MASK                             0x00000040
#define AVR32_PIO_OWSR_P6_OFFSET                                    6
#define AVR32_PIO_OWSR_P6_SIZE                                      1
#define AVR32_PIO_OWSR_P7                                           7
#define AVR32_PIO_OWSR_P7_MASK                             0x00000080
#define AVR32_PIO_OWSR_P7_OFFSET                                    7
#define AVR32_PIO_OWSR_P7_SIZE                                      1
#define AVR32_PIO_OWSR_P8                                           8
#define AVR32_PIO_OWSR_P8_MASK                             0x00000100
#define AVR32_PIO_OWSR_P8_OFFSET                                    8
#define AVR32_PIO_OWSR_P8_SIZE                                      1
#define AVR32_PIO_OWSR_P9                                           9
#define AVR32_PIO_OWSR_P9_MASK                             0x00000200
#define AVR32_PIO_OWSR_P9_OFFSET                                    9
#define AVR32_PIO_OWSR_P9_SIZE                                      1
#define AVR32_PIO_P0                                                0
#define AVR32_PIO_P0_MASK                                  0x00000001
#define AVR32_PIO_P0_OFFSET                                         0
#define AVR32_PIO_P0_SIZE                                           1
#define AVR32_PIO_P1                                                1
#define AVR32_PIO_P10                                              10
#define AVR32_PIO_P10_MASK                                 0x00000400
#define AVR32_PIO_P10_OFFSET                                       10
#define AVR32_PIO_P10_SIZE                                          1
#define AVR32_PIO_P11                                              11
#define AVR32_PIO_P11_MASK                                 0x00000800
#define AVR32_PIO_P11_OFFSET                                       11
#define AVR32_PIO_P11_SIZE                                          1
#define AVR32_PIO_P12                                              12
#define AVR32_PIO_P12_MASK                                 0x00001000
#define AVR32_PIO_P12_OFFSET                                       12
#define AVR32_PIO_P12_SIZE                                          1
#define AVR32_PIO_P13                                              13
#define AVR32_PIO_P13_MASK                                 0x00002000
#define AVR32_PIO_P13_OFFSET                                       13
#define AVR32_PIO_P13_SIZE                                          1
#define AVR32_PIO_P14                                              14
#define AVR32_PIO_P14_MASK                                 0x00004000
#define AVR32_PIO_P14_OFFSET                                       14
#define AVR32_PIO_P14_SIZE                                          1
#define AVR32_PIO_P15                                              15
#define AVR32_PIO_P15_MASK                                 0x00008000
#define AVR32_PIO_P15_OFFSET                                       15
#define AVR32_PIO_P15_SIZE                                          1
#define AVR32_PIO_P16                                              16
#define AVR32_PIO_P16_MASK                                 0x00010000
#define AVR32_PIO_P16_OFFSET                                       16
#define AVR32_PIO_P16_SIZE                                          1
#define AVR32_PIO_P17                                              17
#define AVR32_PIO_P17_MASK                                 0x00020000
#define AVR32_PIO_P17_OFFSET                                       17
#define AVR32_PIO_P17_SIZE                                          1
#define AVR32_PIO_P18                                              18
#define AVR32_PIO_P18_MASK                                 0x00040000
#define AVR32_PIO_P18_OFFSET                                       18
#define AVR32_PIO_P18_SIZE                                          1
#define AVR32_PIO_P19                                              19
#define AVR32_PIO_P19_MASK                                 0x00080000
#define AVR32_PIO_P19_OFFSET                                       19
#define AVR32_PIO_P19_SIZE                                          1
#define AVR32_PIO_P1_MASK                                  0x00000002
#define AVR32_PIO_P1_OFFSET                                         1
#define AVR32_PIO_P1_SIZE                                           1
#define AVR32_PIO_P2                                                2
#define AVR32_PIO_P20                                              20
#define AVR32_PIO_P20_MASK                                 0x00100000
#define AVR32_PIO_P20_OFFSET                                       20
#define AVR32_PIO_P20_SIZE                                          1
#define AVR32_PIO_P21                                              21
#define AVR32_PIO_P21_MASK                                 0x00200000
#define AVR32_PIO_P21_OFFSET                                       21
#define AVR32_PIO_P21_SIZE                                          1
#define AVR32_PIO_P22                                              22
#define AVR32_PIO_P22_MASK                                 0x00400000
#define AVR32_PIO_P22_OFFSET                                       22
#define AVR32_PIO_P22_SIZE                                          1
#define AVR32_PIO_P23                                              23
#define AVR32_PIO_P23_MASK                                 0x00800000
#define AVR32_PIO_P23_OFFSET                                       23
#define AVR32_PIO_P23_SIZE                                          1
#define AVR32_PIO_P24                                              24
#define AVR32_PIO_P24_MASK                                 0x01000000
#define AVR32_PIO_P24_OFFSET                                       24
#define AVR32_PIO_P24_SIZE                                          1
#define AVR32_PIO_P25                                              25
#define AVR32_PIO_P25_MASK                                 0x02000000
#define AVR32_PIO_P25_OFFSET                                       25
#define AVR32_PIO_P25_SIZE                                          1
#define AVR32_PIO_P26                                              26
#define AVR32_PIO_P26_MASK                                 0x04000000
#define AVR32_PIO_P26_OFFSET                                       26
#define AVR32_PIO_P26_SIZE                                          1
#define AVR32_PIO_P27                                              27
#define AVR32_PIO_P27_MASK                                 0x08000000
#define AVR32_PIO_P27_OFFSET                                       27
#define AVR32_PIO_P27_SIZE                                          1
#define AVR32_PIO_P28                                              28
#define AVR32_PIO_P28_MASK                                 0x10000000
#define AVR32_PIO_P28_OFFSET                                       28
#define AVR32_PIO_P28_SIZE                                          1
#define AVR32_PIO_P29                                              29
#define AVR32_PIO_P29_MASK                                 0x20000000
#define AVR32_PIO_P29_OFFSET                                       29
#define AVR32_PIO_P29_SIZE                                          1
#define AVR32_PIO_P2_MASK                                  0x00000004
#define AVR32_PIO_P2_OFFSET                                         2
#define AVR32_PIO_P2_SIZE                                           1
#define AVR32_PIO_P3                                                3
#define AVR32_PIO_P30                                              30
#define AVR32_PIO_P30_MASK                                 0x40000000
#define AVR32_PIO_P30_OFFSET                                       30
#define AVR32_PIO_P30_SIZE                                          1
#define AVR32_PIO_P31                                              31
#define AVR32_PIO_P31_MASK                                 0x80000000
#define AVR32_PIO_P31_OFFSET                                       31
#define AVR32_PIO_P31_SIZE                                          1
#define AVR32_PIO_P3_MASK                                  0x00000008
#define AVR32_PIO_P3_OFFSET                                         3
#define AVR32_PIO_P3_SIZE                                           1
#define AVR32_PIO_P4                                                4
#define AVR32_PIO_P4_MASK                                  0x00000010
#define AVR32_PIO_P4_OFFSET                                         4
#define AVR32_PIO_P4_SIZE                                           1
#define AVR32_PIO_P5                                                5
#define AVR32_PIO_P5_MASK                                  0x00000020
#define AVR32_PIO_P5_OFFSET                                         5
#define AVR32_PIO_P5_SIZE                                           1
#define AVR32_PIO_P6                                                6
#define AVR32_PIO_P6_MASK                                  0x00000040
#define AVR32_PIO_P6_OFFSET                                         6
#define AVR32_PIO_P6_SIZE                                           1
#define AVR32_PIO_P7                                                7
#define AVR32_PIO_P7_MASK                                  0x00000080
#define AVR32_PIO_P7_OFFSET                                         7
#define AVR32_PIO_P7_SIZE                                           1
#define AVR32_PIO_P8                                                8
#define AVR32_PIO_P8_MASK                                  0x00000100
#define AVR32_PIO_P8_OFFSET                                         8
#define AVR32_PIO_P8_SIZE                                           1
#define AVR32_PIO_P9                                                9
#define AVR32_PIO_P9_MASK                                  0x00000200
#define AVR32_PIO_P9_OFFSET                                         9
#define AVR32_PIO_P9_SIZE                                           1
#define AVR32_PIO_PDR                                      0x00000004
#define AVR32_PIO_PDR_P0                                            0
#define AVR32_PIO_PDR_P0_MASK                              0x00000001
#define AVR32_PIO_PDR_P0_OFFSET                                     0
#define AVR32_PIO_PDR_P0_SIZE                                       1
#define AVR32_PIO_PDR_P1                                            1
#define AVR32_PIO_PDR_P10                                          10
#define AVR32_PIO_PDR_P10_MASK                             0x00000400
#define AVR32_PIO_PDR_P10_OFFSET                                   10
#define AVR32_PIO_PDR_P10_SIZE                                      1
#define AVR32_PIO_PDR_P11                                          11
#define AVR32_PIO_PDR_P11_MASK                             0x00000800
#define AVR32_PIO_PDR_P11_OFFSET                                   11
#define AVR32_PIO_PDR_P11_SIZE                                      1
#define AVR32_PIO_PDR_P12                                          12
#define AVR32_PIO_PDR_P12_MASK                             0x00001000
#define AVR32_PIO_PDR_P12_OFFSET                                   12
#define AVR32_PIO_PDR_P12_SIZE                                      1
#define AVR32_PIO_PDR_P13                                          13
#define AVR32_PIO_PDR_P13_MASK                             0x00002000
#define AVR32_PIO_PDR_P13_OFFSET                                   13
#define AVR32_PIO_PDR_P13_SIZE                                      1
#define AVR32_PIO_PDR_P14                                          14
#define AVR32_PIO_PDR_P14_MASK                             0x00004000
#define AVR32_PIO_PDR_P14_OFFSET                                   14
#define AVR32_PIO_PDR_P14_SIZE                                      1
#define AVR32_PIO_PDR_P15                                          15
#define AVR32_PIO_PDR_P15_MASK                             0x00008000
#define AVR32_PIO_PDR_P15_OFFSET                                   15
#define AVR32_PIO_PDR_P15_SIZE                                      1
#define AVR32_PIO_PDR_P16                                          16
#define AVR32_PIO_PDR_P16_MASK                             0x00010000
#define AVR32_PIO_PDR_P16_OFFSET                                   16
#define AVR32_PIO_PDR_P16_SIZE                                      1
#define AVR32_PIO_PDR_P17                                          17
#define AVR32_PIO_PDR_P17_MASK                             0x00020000
#define AVR32_PIO_PDR_P17_OFFSET                                   17
#define AVR32_PIO_PDR_P17_SIZE                                      1
#define AVR32_PIO_PDR_P18                                          18
#define AVR32_PIO_PDR_P18_MASK                             0x00040000
#define AVR32_PIO_PDR_P18_OFFSET                                   18
#define AVR32_PIO_PDR_P18_SIZE                                      1
#define AVR32_PIO_PDR_P19                                          19
#define AVR32_PIO_PDR_P19_MASK                             0x00080000
#define AVR32_PIO_PDR_P19_OFFSET                                   19
#define AVR32_PIO_PDR_P19_SIZE                                      1
#define AVR32_PIO_PDR_P1_MASK                              0x00000002
#define AVR32_PIO_PDR_P1_OFFSET                                     1
#define AVR32_PIO_PDR_P1_SIZE                                       1
#define AVR32_PIO_PDR_P2                                            2
#define AVR32_PIO_PDR_P20                                          20
#define AVR32_PIO_PDR_P20_MASK                             0x00100000
#define AVR32_PIO_PDR_P20_OFFSET                                   20
#define AVR32_PIO_PDR_P20_SIZE                                      1
#define AVR32_PIO_PDR_P21                                          21
#define AVR32_PIO_PDR_P21_MASK                             0x00200000
#define AVR32_PIO_PDR_P21_OFFSET                                   21
#define AVR32_PIO_PDR_P21_SIZE                                      1
#define AVR32_PIO_PDR_P22                                          22
#define AVR32_PIO_PDR_P22_MASK                             0x00400000
#define AVR32_PIO_PDR_P22_OFFSET                                   22
#define AVR32_PIO_PDR_P22_SIZE                                      1
#define AVR32_PIO_PDR_P23                                          23
#define AVR32_PIO_PDR_P23_MASK                             0x00800000
#define AVR32_PIO_PDR_P23_OFFSET                                   23
#define AVR32_PIO_PDR_P23_SIZE                                      1
#define AVR32_PIO_PDR_P24                                          24
#define AVR32_PIO_PDR_P24_MASK                             0x01000000
#define AVR32_PIO_PDR_P24_OFFSET                                   24
#define AVR32_PIO_PDR_P24_SIZE                                      1
#define AVR32_PIO_PDR_P25                                          25
#define AVR32_PIO_PDR_P25_MASK                             0x02000000
#define AVR32_PIO_PDR_P25_OFFSET                                   25
#define AVR32_PIO_PDR_P25_SIZE                                      1
#define AVR32_PIO_PDR_P26                                          26
#define AVR32_PIO_PDR_P26_MASK                             0x04000000
#define AVR32_PIO_PDR_P26_OFFSET                                   26
#define AVR32_PIO_PDR_P26_SIZE                                      1
#define AVR32_PIO_PDR_P27                                          27
#define AVR32_PIO_PDR_P27_MASK                             0x08000000
#define AVR32_PIO_PDR_P27_OFFSET                                   27
#define AVR32_PIO_PDR_P27_SIZE                                      1
#define AVR32_PIO_PDR_P28                                          28
#define AVR32_PIO_PDR_P28_MASK                             0x10000000
#define AVR32_PIO_PDR_P28_OFFSET                                   28
#define AVR32_PIO_PDR_P28_SIZE                                      1
#define AVR32_PIO_PDR_P29                                          29
#define AVR32_PIO_PDR_P29_MASK                             0x20000000
#define AVR32_PIO_PDR_P29_OFFSET                                   29
#define AVR32_PIO_PDR_P29_SIZE                                      1
#define AVR32_PIO_PDR_P2_MASK                              0x00000004
#define AVR32_PIO_PDR_P2_OFFSET                                     2
#define AVR32_PIO_PDR_P2_SIZE                                       1
#define AVR32_PIO_PDR_P3                                            3
#define AVR32_PIO_PDR_P30                                          30
#define AVR32_PIO_PDR_P30_MASK                             0x40000000
#define AVR32_PIO_PDR_P30_OFFSET                                   30
#define AVR32_PIO_PDR_P30_SIZE                                      1
#define AVR32_PIO_PDR_P31                                          31
#define AVR32_PIO_PDR_P31_MASK                             0x80000000
#define AVR32_PIO_PDR_P31_OFFSET                                   31
#define AVR32_PIO_PDR_P31_SIZE                                      1
#define AVR32_PIO_PDR_P3_MASK                              0x00000008
#define AVR32_PIO_PDR_P3_OFFSET                                     3
#define AVR32_PIO_PDR_P3_SIZE                                       1
#define AVR32_PIO_PDR_P4                                            4
#define AVR32_PIO_PDR_P4_MASK                              0x00000010
#define AVR32_PIO_PDR_P4_OFFSET                                     4
#define AVR32_PIO_PDR_P4_SIZE                                       1
#define AVR32_PIO_PDR_P5                                            5
#define AVR32_PIO_PDR_P5_MASK                              0x00000020
#define AVR32_PIO_PDR_P5_OFFSET                                     5
#define AVR32_PIO_PDR_P5_SIZE                                       1
#define AVR32_PIO_PDR_P6                                            6
#define AVR32_PIO_PDR_P6_MASK                              0x00000040
#define AVR32_PIO_PDR_P6_OFFSET                                     6
#define AVR32_PIO_PDR_P6_SIZE                                       1
#define AVR32_PIO_PDR_P7                                            7
#define AVR32_PIO_PDR_P7_MASK                              0x00000080
#define AVR32_PIO_PDR_P7_OFFSET                                     7
#define AVR32_PIO_PDR_P7_SIZE                                       1
#define AVR32_PIO_PDR_P8                                            8
#define AVR32_PIO_PDR_P8_MASK                              0x00000100
#define AVR32_PIO_PDR_P8_OFFSET                                     8
#define AVR32_PIO_PDR_P8_SIZE                                       1
#define AVR32_PIO_PDR_P9                                            9
#define AVR32_PIO_PDR_P9_MASK                              0x00000200
#define AVR32_PIO_PDR_P9_OFFSET                                     9
#define AVR32_PIO_PDR_P9_SIZE                                       1
#define AVR32_PIO_PDSR                                     0x0000003c
#define AVR32_PIO_PDSR_P0                                           0
#define AVR32_PIO_PDSR_P0_MASK                             0x00000001
#define AVR32_PIO_PDSR_P0_OFFSET                                    0
#define AVR32_PIO_PDSR_P0_SIZE                                      1
#define AVR32_PIO_PDSR_P1                                           1
#define AVR32_PIO_PDSR_P10                                         10
#define AVR32_PIO_PDSR_P10_MASK                            0x00000400
#define AVR32_PIO_PDSR_P10_OFFSET                                  10
#define AVR32_PIO_PDSR_P10_SIZE                                     1
#define AVR32_PIO_PDSR_P11                                         11
#define AVR32_PIO_PDSR_P11_MASK                            0x00000800
#define AVR32_PIO_PDSR_P11_OFFSET                                  11
#define AVR32_PIO_PDSR_P11_SIZE                                     1
#define AVR32_PIO_PDSR_P12                                         12
#define AVR32_PIO_PDSR_P12_MASK                            0x00001000
#define AVR32_PIO_PDSR_P12_OFFSET                                  12
#define AVR32_PIO_PDSR_P12_SIZE                                     1
#define AVR32_PIO_PDSR_P13                                         13
#define AVR32_PIO_PDSR_P13_MASK                            0x00002000
#define AVR32_PIO_PDSR_P13_OFFSET                                  13
#define AVR32_PIO_PDSR_P13_SIZE                                     1
#define AVR32_PIO_PDSR_P14                                         14
#define AVR32_PIO_PDSR_P14_MASK                            0x00004000
#define AVR32_PIO_PDSR_P14_OFFSET                                  14
#define AVR32_PIO_PDSR_P14_SIZE                                     1
#define AVR32_PIO_PDSR_P15                                         15
#define AVR32_PIO_PDSR_P15_MASK                            0x00008000
#define AVR32_PIO_PDSR_P15_OFFSET                                  15
#define AVR32_PIO_PDSR_P15_SIZE                                     1
#define AVR32_PIO_PDSR_P16                                         16
#define AVR32_PIO_PDSR_P16_MASK                            0x00010000
#define AVR32_PIO_PDSR_P16_OFFSET                                  16
#define AVR32_PIO_PDSR_P16_SIZE                                     1
#define AVR32_PIO_PDSR_P17                                         17
#define AVR32_PIO_PDSR_P17_MASK                            0x00020000
#define AVR32_PIO_PDSR_P17_OFFSET                                  17
#define AVR32_PIO_PDSR_P17_SIZE                                     1
#define AVR32_PIO_PDSR_P18                                         18
#define AVR32_PIO_PDSR_P18_MASK                            0x00040000
#define AVR32_PIO_PDSR_P18_OFFSET                                  18
#define AVR32_PIO_PDSR_P18_SIZE                                     1
#define AVR32_PIO_PDSR_P19                                         19
#define AVR32_PIO_PDSR_P19_MASK                            0x00080000
#define AVR32_PIO_PDSR_P19_OFFSET                                  19
#define AVR32_PIO_PDSR_P19_SIZE                                     1
#define AVR32_PIO_PDSR_P1_MASK                             0x00000002
#define AVR32_PIO_PDSR_P1_OFFSET                                    1
#define AVR32_PIO_PDSR_P1_SIZE                                      1
#define AVR32_PIO_PDSR_P2                                           2
#define AVR32_PIO_PDSR_P20                                         20
#define AVR32_PIO_PDSR_P20_MASK                            0x00100000
#define AVR32_PIO_PDSR_P20_OFFSET                                  20
#define AVR32_PIO_PDSR_P20_SIZE                                     1
#define AVR32_PIO_PDSR_P21                                         21
#define AVR32_PIO_PDSR_P21_MASK                            0x00200000
#define AVR32_PIO_PDSR_P21_OFFSET                                  21
#define AVR32_PIO_PDSR_P21_SIZE                                     1
#define AVR32_PIO_PDSR_P22                                         22
#define AVR32_PIO_PDSR_P22_MASK                            0x00400000
#define AVR32_PIO_PDSR_P22_OFFSET                                  22
#define AVR32_PIO_PDSR_P22_SIZE                                     1
#define AVR32_PIO_PDSR_P23                                         23
#define AVR32_PIO_PDSR_P23_MASK                            0x00800000
#define AVR32_PIO_PDSR_P23_OFFSET                                  23
#define AVR32_PIO_PDSR_P23_SIZE                                     1
#define AVR32_PIO_PDSR_P24                                         24
#define AVR32_PIO_PDSR_P24_MASK                            0x01000000
#define AVR32_PIO_PDSR_P24_OFFSET                                  24
#define AVR32_PIO_PDSR_P24_SIZE                                     1
#define AVR32_PIO_PDSR_P25                                         25
#define AVR32_PIO_PDSR_P25_MASK                            0x02000000
#define AVR32_PIO_PDSR_P25_OFFSET                                  25
#define AVR32_PIO_PDSR_P25_SIZE                                     1
#define AVR32_PIO_PDSR_P26                                         26
#define AVR32_PIO_PDSR_P26_MASK                            0x04000000
#define AVR32_PIO_PDSR_P26_OFFSET                                  26
#define AVR32_PIO_PDSR_P26_SIZE                                     1
#define AVR32_PIO_PDSR_P27                                         27
#define AVR32_PIO_PDSR_P27_MASK                            0x08000000
#define AVR32_PIO_PDSR_P27_OFFSET                                  27
#define AVR32_PIO_PDSR_P27_SIZE                                     1
#define AVR32_PIO_PDSR_P28                                         28
#define AVR32_PIO_PDSR_P28_MASK                            0x10000000
#define AVR32_PIO_PDSR_P28_OFFSET                                  28
#define AVR32_PIO_PDSR_P28_SIZE                                     1
#define AVR32_PIO_PDSR_P29                                         29
#define AVR32_PIO_PDSR_P29_MASK                            0x20000000
#define AVR32_PIO_PDSR_P29_OFFSET                                  29
#define AVR32_PIO_PDSR_P29_SIZE                                     1
#define AVR32_PIO_PDSR_P2_MASK                             0x00000004
#define AVR32_PIO_PDSR_P2_OFFSET                                    2
#define AVR32_PIO_PDSR_P2_SIZE                                      1
#define AVR32_PIO_PDSR_P3                                           3
#define AVR32_PIO_PDSR_P30                                         30
#define AVR32_PIO_PDSR_P30_MASK                            0x40000000
#define AVR32_PIO_PDSR_P30_OFFSET                                  30
#define AVR32_PIO_PDSR_P30_SIZE                                     1
#define AVR32_PIO_PDSR_P31                                         31
#define AVR32_PIO_PDSR_P31_MASK                            0x80000000
#define AVR32_PIO_PDSR_P31_OFFSET                                  31
#define AVR32_PIO_PDSR_P31_SIZE                                     1
#define AVR32_PIO_PDSR_P3_MASK                             0x00000008
#define AVR32_PIO_PDSR_P3_OFFSET                                    3
#define AVR32_PIO_PDSR_P3_SIZE                                      1
#define AVR32_PIO_PDSR_P4                                           4
#define AVR32_PIO_PDSR_P4_MASK                             0x00000010
#define AVR32_PIO_PDSR_P4_OFFSET                                    4
#define AVR32_PIO_PDSR_P4_SIZE                                      1
#define AVR32_PIO_PDSR_P5                                           5
#define AVR32_PIO_PDSR_P5_MASK                             0x00000020
#define AVR32_PIO_PDSR_P5_OFFSET                                    5
#define AVR32_PIO_PDSR_P5_SIZE                                      1
#define AVR32_PIO_PDSR_P6                                           6
#define AVR32_PIO_PDSR_P6_MASK                             0x00000040
#define AVR32_PIO_PDSR_P6_OFFSET                                    6
#define AVR32_PIO_PDSR_P6_SIZE                                      1
#define AVR32_PIO_PDSR_P7                                           7
#define AVR32_PIO_PDSR_P7_MASK                             0x00000080
#define AVR32_PIO_PDSR_P7_OFFSET                                    7
#define AVR32_PIO_PDSR_P7_SIZE                                      1
#define AVR32_PIO_PDSR_P8                                           8
#define AVR32_PIO_PDSR_P8_MASK                             0x00000100
#define AVR32_PIO_PDSR_P8_OFFSET                                    8
#define AVR32_PIO_PDSR_P8_SIZE                                      1
#define AVR32_PIO_PDSR_P9                                           9
#define AVR32_PIO_PDSR_P9_MASK                             0x00000200
#define AVR32_PIO_PDSR_P9_OFFSET                                    9
#define AVR32_PIO_PDSR_P9_SIZE                                      1
#define AVR32_PIO_PER                                      0x00000000
#define AVR32_PIO_PER_P0                                            0
#define AVR32_PIO_PER_P0_MASK                              0x00000001
#define AVR32_PIO_PER_P0_OFFSET                                     0
#define AVR32_PIO_PER_P0_SIZE                                       1
#define AVR32_PIO_PER_P1                                            1
#define AVR32_PIO_PER_P10                                          10
#define AVR32_PIO_PER_P10_MASK                             0x00000400
#define AVR32_PIO_PER_P10_OFFSET                                   10
#define AVR32_PIO_PER_P10_SIZE                                      1
#define AVR32_PIO_PER_P11                                          11
#define AVR32_PIO_PER_P11_MASK                             0x00000800
#define AVR32_PIO_PER_P11_OFFSET                                   11
#define AVR32_PIO_PER_P11_SIZE                                      1
#define AVR32_PIO_PER_P12                                          12
#define AVR32_PIO_PER_P12_MASK                             0x00001000
#define AVR32_PIO_PER_P12_OFFSET                                   12
#define AVR32_PIO_PER_P12_SIZE                                      1
#define AVR32_PIO_PER_P13                                          13
#define AVR32_PIO_PER_P13_MASK                             0x00002000
#define AVR32_PIO_PER_P13_OFFSET                                   13
#define AVR32_PIO_PER_P13_SIZE                                      1
#define AVR32_PIO_PER_P14                                          14
#define AVR32_PIO_PER_P14_MASK                             0x00004000
#define AVR32_PIO_PER_P14_OFFSET                                   14
#define AVR32_PIO_PER_P14_SIZE                                      1
#define AVR32_PIO_PER_P15                                          15
#define AVR32_PIO_PER_P15_MASK                             0x00008000
#define AVR32_PIO_PER_P15_OFFSET                                   15
#define AVR32_PIO_PER_P15_SIZE                                      1
#define AVR32_PIO_PER_P16                                          16
#define AVR32_PIO_PER_P16_MASK                             0x00010000
#define AVR32_PIO_PER_P16_OFFSET                                   16
#define AVR32_PIO_PER_P16_SIZE                                      1
#define AVR32_PIO_PER_P17                                          17
#define AVR32_PIO_PER_P17_MASK                             0x00020000
#define AVR32_PIO_PER_P17_OFFSET                                   17
#define AVR32_PIO_PER_P17_SIZE                                      1
#define AVR32_PIO_PER_P18                                          18
#define AVR32_PIO_PER_P18_MASK                             0x00040000
#define AVR32_PIO_PER_P18_OFFSET                                   18
#define AVR32_PIO_PER_P18_SIZE                                      1
#define AVR32_PIO_PER_P19                                          19
#define AVR32_PIO_PER_P19_MASK                             0x00080000
#define AVR32_PIO_PER_P19_OFFSET                                   19
#define AVR32_PIO_PER_P19_SIZE                                      1
#define AVR32_PIO_PER_P1_MASK                              0x00000002
#define AVR32_PIO_PER_P1_OFFSET                                     1
#define AVR32_PIO_PER_P1_SIZE                                       1
#define AVR32_PIO_PER_P2                                            2
#define AVR32_PIO_PER_P20                                          20
#define AVR32_PIO_PER_P20_MASK                             0x00100000
#define AVR32_PIO_PER_P20_OFFSET                                   20
#define AVR32_PIO_PER_P20_SIZE                                      1
#define AVR32_PIO_PER_P21                                          21
#define AVR32_PIO_PER_P21_MASK                             0x00200000
#define AVR32_PIO_PER_P21_OFFSET                                   21
#define AVR32_PIO_PER_P21_SIZE                                      1
#define AVR32_PIO_PER_P22                                          22
#define AVR32_PIO_PER_P22_MASK                             0x00400000
#define AVR32_PIO_PER_P22_OFFSET                                   22
#define AVR32_PIO_PER_P22_SIZE                                      1
#define AVR32_PIO_PER_P23                                          23
#define AVR32_PIO_PER_P23_MASK                             0x00800000
#define AVR32_PIO_PER_P23_OFFSET                                   23
#define AVR32_PIO_PER_P23_SIZE                                      1
#define AVR32_PIO_PER_P24                                          24
#define AVR32_PIO_PER_P24_MASK                             0x01000000
#define AVR32_PIO_PER_P24_OFFSET                                   24
#define AVR32_PIO_PER_P24_SIZE                                      1
#define AVR32_PIO_PER_P25                                          25
#define AVR32_PIO_PER_P25_MASK                             0x02000000
#define AVR32_PIO_PER_P25_OFFSET                                   25
#define AVR32_PIO_PER_P25_SIZE                                      1
#define AVR32_PIO_PER_P26                                          26
#define AVR32_PIO_PER_P26_MASK                             0x04000000
#define AVR32_PIO_PER_P26_OFFSET                                   26
#define AVR32_PIO_PER_P26_SIZE                                      1
#define AVR32_PIO_PER_P27                                          27
#define AVR32_PIO_PER_P27_MASK                             0x08000000
#define AVR32_PIO_PER_P27_OFFSET                                   27
#define AVR32_PIO_PER_P27_SIZE                                      1
#define AVR32_PIO_PER_P28                                          28
#define AVR32_PIO_PER_P28_MASK                             0x10000000
#define AVR32_PIO_PER_P28_OFFSET                                   28
#define AVR32_PIO_PER_P28_SIZE                                      1
#define AVR32_PIO_PER_P29                                          29
#define AVR32_PIO_PER_P29_MASK                             0x20000000
#define AVR32_PIO_PER_P29_OFFSET                                   29
#define AVR32_PIO_PER_P29_SIZE                                      1
#define AVR32_PIO_PER_P2_MASK                              0x00000004
#define AVR32_PIO_PER_P2_OFFSET                                     2
#define AVR32_PIO_PER_P2_SIZE                                       1
#define AVR32_PIO_PER_P3                                            3
#define AVR32_PIO_PER_P30                                          30
#define AVR32_PIO_PER_P30_MASK                             0x40000000
#define AVR32_PIO_PER_P30_OFFSET                                   30
#define AVR32_PIO_PER_P30_SIZE                                      1
#define AVR32_PIO_PER_P31                                          31
#define AVR32_PIO_PER_P31_MASK                             0x80000000
#define AVR32_PIO_PER_P31_OFFSET                                   31
#define AVR32_PIO_PER_P31_SIZE                                      1
#define AVR32_PIO_PER_P3_MASK                              0x00000008
#define AVR32_PIO_PER_P3_OFFSET                                     3
#define AVR32_PIO_PER_P3_SIZE                                       1
#define AVR32_PIO_PER_P4                                            4
#define AVR32_PIO_PER_P4_MASK                              0x00000010
#define AVR32_PIO_PER_P4_OFFSET                                     4
#define AVR32_PIO_PER_P4_SIZE                                       1
#define AVR32_PIO_PER_P5                                            5
#define AVR32_PIO_PER_P5_MASK                              0x00000020
#define AVR32_PIO_PER_P5_OFFSET                                     5
#define AVR32_PIO_PER_P5_SIZE                                       1
#define AVR32_PIO_PER_P6                                            6
#define AVR32_PIO_PER_P6_MASK                              0x00000040
#define AVR32_PIO_PER_P6_OFFSET                                     6
#define AVR32_PIO_PER_P6_SIZE                                       1
#define AVR32_PIO_PER_P7                                            7
#define AVR32_PIO_PER_P7_MASK                              0x00000080
#define AVR32_PIO_PER_P7_OFFSET                                     7
#define AVR32_PIO_PER_P7_SIZE                                       1
#define AVR32_PIO_PER_P8                                            8
#define AVR32_PIO_PER_P8_MASK                              0x00000100
#define AVR32_PIO_PER_P8_OFFSET                                     8
#define AVR32_PIO_PER_P8_SIZE                                       1
#define AVR32_PIO_PER_P9                                            9
#define AVR32_PIO_PER_P9_MASK                              0x00000200
#define AVR32_PIO_PER_P9_OFFSET                                     9
#define AVR32_PIO_PER_P9_SIZE                                       1
#define AVR32_PIO_PSR                                      0x00000008
#define AVR32_PIO_PSR_P0                                            0
#define AVR32_PIO_PSR_P0_MASK                              0x00000001
#define AVR32_PIO_PSR_P0_OFFSET                                     0
#define AVR32_PIO_PSR_P0_SIZE                                       1
#define AVR32_PIO_PSR_P1                                            1
#define AVR32_PIO_PSR_P10                                          10
#define AVR32_PIO_PSR_P10_MASK                             0x00000400
#define AVR32_PIO_PSR_P10_OFFSET                                   10
#define AVR32_PIO_PSR_P10_SIZE                                      1
#define AVR32_PIO_PSR_P11                                          11
#define AVR32_PIO_PSR_P11_MASK                             0x00000800
#define AVR32_PIO_PSR_P11_OFFSET                                   11
#define AVR32_PIO_PSR_P11_SIZE                                      1
#define AVR32_PIO_PSR_P12                                          12
#define AVR32_PIO_PSR_P12_MASK                             0x00001000
#define AVR32_PIO_PSR_P12_OFFSET                                   12
#define AVR32_PIO_PSR_P12_SIZE                                      1
#define AVR32_PIO_PSR_P13                                          13
#define AVR32_PIO_PSR_P13_MASK                             0x00002000
#define AVR32_PIO_PSR_P13_OFFSET                                   13
#define AVR32_PIO_PSR_P13_SIZE                                      1
#define AVR32_PIO_PSR_P14                                          14
#define AVR32_PIO_PSR_P14_MASK                             0x00004000
#define AVR32_PIO_PSR_P14_OFFSET                                   14
#define AVR32_PIO_PSR_P14_SIZE                                      1
#define AVR32_PIO_PSR_P15                                          15
#define AVR32_PIO_PSR_P15_MASK                             0x00008000
#define AVR32_PIO_PSR_P15_OFFSET                                   15
#define AVR32_PIO_PSR_P15_SIZE                                      1
#define AVR32_PIO_PSR_P16                                          16
#define AVR32_PIO_PSR_P16_MASK                             0x00010000
#define AVR32_PIO_PSR_P16_OFFSET                                   16
#define AVR32_PIO_PSR_P16_SIZE                                      1
#define AVR32_PIO_PSR_P17                                          17
#define AVR32_PIO_PSR_P17_MASK                             0x00020000
#define AVR32_PIO_PSR_P17_OFFSET                                   17
#define AVR32_PIO_PSR_P17_SIZE                                      1
#define AVR32_PIO_PSR_P18                                          18
#define AVR32_PIO_PSR_P18_MASK                             0x00040000
#define AVR32_PIO_PSR_P18_OFFSET                                   18
#define AVR32_PIO_PSR_P18_SIZE                                      1
#define AVR32_PIO_PSR_P19                                          19
#define AVR32_PIO_PSR_P19_MASK                             0x00080000
#define AVR32_PIO_PSR_P19_OFFSET                                   19
#define AVR32_PIO_PSR_P19_SIZE                                      1
#define AVR32_PIO_PSR_P1_MASK                              0x00000002
#define AVR32_PIO_PSR_P1_OFFSET                                     1
#define AVR32_PIO_PSR_P1_SIZE                                       1
#define AVR32_PIO_PSR_P2                                            2
#define AVR32_PIO_PSR_P20                                          20
#define AVR32_PIO_PSR_P20_MASK                             0x00100000
#define AVR32_PIO_PSR_P20_OFFSET                                   20
#define AVR32_PIO_PSR_P20_SIZE                                      1
#define AVR32_PIO_PSR_P21                                          21
#define AVR32_PIO_PSR_P21_MASK                             0x00200000
#define AVR32_PIO_PSR_P21_OFFSET                                   21
#define AVR32_PIO_PSR_P21_SIZE                                      1
#define AVR32_PIO_PSR_P22                                          22
#define AVR32_PIO_PSR_P22_MASK                             0x00400000
#define AVR32_PIO_PSR_P22_OFFSET                                   22
#define AVR32_PIO_PSR_P22_SIZE                                      1
#define AVR32_PIO_PSR_P23                                          23
#define AVR32_PIO_PSR_P23_MASK                             0x00800000
#define AVR32_PIO_PSR_P23_OFFSET                                   23
#define AVR32_PIO_PSR_P23_SIZE                                      1
#define AVR32_PIO_PSR_P24                                          24
#define AVR32_PIO_PSR_P24_MASK                             0x01000000
#define AVR32_PIO_PSR_P24_OFFSET                                   24
#define AVR32_PIO_PSR_P24_SIZE                                      1
#define AVR32_PIO_PSR_P25                                          25
#define AVR32_PIO_PSR_P25_MASK                             0x02000000
#define AVR32_PIO_PSR_P25_OFFSET                                   25
#define AVR32_PIO_PSR_P25_SIZE                                      1
#define AVR32_PIO_PSR_P26                                          26
#define AVR32_PIO_PSR_P26_MASK                             0x04000000
#define AVR32_PIO_PSR_P26_OFFSET                                   26
#define AVR32_PIO_PSR_P26_SIZE                                      1
#define AVR32_PIO_PSR_P27                                          27
#define AVR32_PIO_PSR_P27_MASK                             0x08000000
#define AVR32_PIO_PSR_P27_OFFSET                                   27
#define AVR32_PIO_PSR_P27_SIZE                                      1
#define AVR32_PIO_PSR_P28                                          28
#define AVR32_PIO_PSR_P28_MASK                             0x10000000
#define AVR32_PIO_PSR_P28_OFFSET                                   28
#define AVR32_PIO_PSR_P28_SIZE                                      1
#define AVR32_PIO_PSR_P29                                          29
#define AVR32_PIO_PSR_P29_MASK                             0x20000000
#define AVR32_PIO_PSR_P29_OFFSET                                   29
#define AVR32_PIO_PSR_P29_SIZE                                      1
#define AVR32_PIO_PSR_P2_MASK                              0x00000004
#define AVR32_PIO_PSR_P2_OFFSET                                     2
#define AVR32_PIO_PSR_P2_SIZE                                       1
#define AVR32_PIO_PSR_P3                                            3
#define AVR32_PIO_PSR_P30                                          30
#define AVR32_PIO_PSR_P30_MASK                             0x40000000
#define AVR32_PIO_PSR_P30_OFFSET                                   30
#define AVR32_PIO_PSR_P30_SIZE                                      1
#define AVR32_PIO_PSR_P31                                          31
#define AVR32_PIO_PSR_P31_MASK                             0x80000000
#define AVR32_PIO_PSR_P31_OFFSET                                   31
#define AVR32_PIO_PSR_P31_SIZE                                      1
#define AVR32_PIO_PSR_P3_MASK                              0x00000008
#define AVR32_PIO_PSR_P3_OFFSET                                     3
#define AVR32_PIO_PSR_P3_SIZE                                       1
#define AVR32_PIO_PSR_P4                                            4
#define AVR32_PIO_PSR_P4_MASK                              0x00000010
#define AVR32_PIO_PSR_P4_OFFSET                                     4
#define AVR32_PIO_PSR_P4_SIZE                                       1
#define AVR32_PIO_PSR_P5                                            5
#define AVR32_PIO_PSR_P5_MASK                              0x00000020
#define AVR32_PIO_PSR_P5_OFFSET                                     5
#define AVR32_PIO_PSR_P5_SIZE                                       1
#define AVR32_PIO_PSR_P6                                            6
#define AVR32_PIO_PSR_P6_MASK                              0x00000040
#define AVR32_PIO_PSR_P6_OFFSET                                     6
#define AVR32_PIO_PSR_P6_SIZE                                       1
#define AVR32_PIO_PSR_P7                                            7
#define AVR32_PIO_PSR_P7_MASK                              0x00000080
#define AVR32_PIO_PSR_P7_OFFSET                                     7
#define AVR32_PIO_PSR_P7_SIZE                                       1
#define AVR32_PIO_PSR_P8                                            8
#define AVR32_PIO_PSR_P8_MASK                              0x00000100
#define AVR32_PIO_PSR_P8_OFFSET                                     8
#define AVR32_PIO_PSR_P8_SIZE                                       1
#define AVR32_PIO_PSR_P9                                            9
#define AVR32_PIO_PSR_P9_MASK                              0x00000200
#define AVR32_PIO_PSR_P9_OFFSET                                     9
#define AVR32_PIO_PSR_P9_SIZE                                       1
#define AVR32_PIO_PUDR                                     0x00000060
#define AVR32_PIO_PUDR_P0                                           0
#define AVR32_PIO_PUDR_P0_MASK                             0x00000001
#define AVR32_PIO_PUDR_P0_OFFSET                                    0
#define AVR32_PIO_PUDR_P0_SIZE                                      1
#define AVR32_PIO_PUDR_P1                                           1
#define AVR32_PIO_PUDR_P10                                         10
#define AVR32_PIO_PUDR_P10_MASK                            0x00000400
#define AVR32_PIO_PUDR_P10_OFFSET                                  10
#define AVR32_PIO_PUDR_P10_SIZE                                     1
#define AVR32_PIO_PUDR_P11                                         11
#define AVR32_PIO_PUDR_P11_MASK                            0x00000800
#define AVR32_PIO_PUDR_P11_OFFSET                                  11
#define AVR32_PIO_PUDR_P11_SIZE                                     1
#define AVR32_PIO_PUDR_P12                                         12
#define AVR32_PIO_PUDR_P12_MASK                            0x00001000
#define AVR32_PIO_PUDR_P12_OFFSET                                  12
#define AVR32_PIO_PUDR_P12_SIZE                                     1
#define AVR32_PIO_PUDR_P13                                         13
#define AVR32_PIO_PUDR_P13_MASK                            0x00002000
#define AVR32_PIO_PUDR_P13_OFFSET                                  13
#define AVR32_PIO_PUDR_P13_SIZE                                     1
#define AVR32_PIO_PUDR_P14                                         14
#define AVR32_PIO_PUDR_P14_MASK                            0x00004000
#define AVR32_PIO_PUDR_P14_OFFSET                                  14
#define AVR32_PIO_PUDR_P14_SIZE                                     1
#define AVR32_PIO_PUDR_P15                                         15
#define AVR32_PIO_PUDR_P15_MASK                            0x00008000
#define AVR32_PIO_PUDR_P15_OFFSET                                  15
#define AVR32_PIO_PUDR_P15_SIZE                                     1
#define AVR32_PIO_PUDR_P16                                         16
#define AVR32_PIO_PUDR_P16_MASK                            0x00010000
#define AVR32_PIO_PUDR_P16_OFFSET                                  16
#define AVR32_PIO_PUDR_P16_SIZE                                     1
#define AVR32_PIO_PUDR_P17                                         17
#define AVR32_PIO_PUDR_P17_MASK                            0x00020000
#define AVR32_PIO_PUDR_P17_OFFSET                                  17
#define AVR32_PIO_PUDR_P17_SIZE                                     1
#define AVR32_PIO_PUDR_P18                                         18
#define AVR32_PIO_PUDR_P18_MASK                            0x00040000
#define AVR32_PIO_PUDR_P18_OFFSET                                  18
#define AVR32_PIO_PUDR_P18_SIZE                                     1
#define AVR32_PIO_PUDR_P19                                         19
#define AVR32_PIO_PUDR_P19_MASK                            0x00080000
#define AVR32_PIO_PUDR_P19_OFFSET                                  19
#define AVR32_PIO_PUDR_P19_SIZE                                     1
#define AVR32_PIO_PUDR_P1_MASK                             0x00000002
#define AVR32_PIO_PUDR_P1_OFFSET                                    1
#define AVR32_PIO_PUDR_P1_SIZE                                      1
#define AVR32_PIO_PUDR_P2                                           2
#define AVR32_PIO_PUDR_P20                                         20
#define AVR32_PIO_PUDR_P20_MASK                            0x00100000
#define AVR32_PIO_PUDR_P20_OFFSET                                  20
#define AVR32_PIO_PUDR_P20_SIZE                                     1
#define AVR32_PIO_PUDR_P21                                         21
#define AVR32_PIO_PUDR_P21_MASK                            0x00200000
#define AVR32_PIO_PUDR_P21_OFFSET                                  21
#define AVR32_PIO_PUDR_P21_SIZE                                     1
#define AVR32_PIO_PUDR_P22                                         22
#define AVR32_PIO_PUDR_P22_MASK                            0x00400000
#define AVR32_PIO_PUDR_P22_OFFSET                                  22
#define AVR32_PIO_PUDR_P22_SIZE                                     1
#define AVR32_PIO_PUDR_P23                                         23
#define AVR32_PIO_PUDR_P23_MASK                            0x00800000
#define AVR32_PIO_PUDR_P23_OFFSET                                  23
#define AVR32_PIO_PUDR_P23_SIZE                                     1
#define AVR32_PIO_PUDR_P24                                         24
#define AVR32_PIO_PUDR_P24_MASK                            0x01000000
#define AVR32_PIO_PUDR_P24_OFFSET                                  24
#define AVR32_PIO_PUDR_P24_SIZE                                     1
#define AVR32_PIO_PUDR_P25                                         25
#define AVR32_PIO_PUDR_P25_MASK                            0x02000000
#define AVR32_PIO_PUDR_P25_OFFSET                                  25
#define AVR32_PIO_PUDR_P25_SIZE                                     1
#define AVR32_PIO_PUDR_P26                                         26
#define AVR32_PIO_PUDR_P26_MASK                            0x04000000
#define AVR32_PIO_PUDR_P26_OFFSET                                  26
#define AVR32_PIO_PUDR_P26_SIZE                                     1
#define AVR32_PIO_PUDR_P27                                         27
#define AVR32_PIO_PUDR_P27_MASK                            0x08000000
#define AVR32_PIO_PUDR_P27_OFFSET                                  27
#define AVR32_PIO_PUDR_P27_SIZE                                     1
#define AVR32_PIO_PUDR_P28                                         28
#define AVR32_PIO_PUDR_P28_MASK                            0x10000000
#define AVR32_PIO_PUDR_P28_OFFSET                                  28
#define AVR32_PIO_PUDR_P28_SIZE                                     1
#define AVR32_PIO_PUDR_P29                                         29
#define AVR32_PIO_PUDR_P29_MASK                            0x20000000
#define AVR32_PIO_PUDR_P29_OFFSET                                  29
#define AVR32_PIO_PUDR_P29_SIZE                                     1
#define AVR32_PIO_PUDR_P2_MASK                             0x00000004
#define AVR32_PIO_PUDR_P2_OFFSET                                    2
#define AVR32_PIO_PUDR_P2_SIZE                                      1
#define AVR32_PIO_PUDR_P3                                           3
#define AVR32_PIO_PUDR_P30                                         30
#define AVR32_PIO_PUDR_P30_MASK                            0x40000000
#define AVR32_PIO_PUDR_P30_OFFSET                                  30
#define AVR32_PIO_PUDR_P30_SIZE                                     1
#define AVR32_PIO_PUDR_P31                                         31
#define AVR32_PIO_PUDR_P31_MASK                            0x80000000
#define AVR32_PIO_PUDR_P31_OFFSET                                  31
#define AVR32_PIO_PUDR_P31_SIZE                                     1
#define AVR32_PIO_PUDR_P3_MASK                             0x00000008
#define AVR32_PIO_PUDR_P3_OFFSET                                    3
#define AVR32_PIO_PUDR_P3_SIZE                                      1
#define AVR32_PIO_PUDR_P4                                           4
#define AVR32_PIO_PUDR_P4_MASK                             0x00000010
#define AVR32_PIO_PUDR_P4_OFFSET                                    4
#define AVR32_PIO_PUDR_P4_SIZE                                      1
#define AVR32_PIO_PUDR_P5                                           5
#define AVR32_PIO_PUDR_P5_MASK                             0x00000020
#define AVR32_PIO_PUDR_P5_OFFSET                                    5
#define AVR32_PIO_PUDR_P5_SIZE                                      1
#define AVR32_PIO_PUDR_P6                                           6
#define AVR32_PIO_PUDR_P6_MASK                             0x00000040
#define AVR32_PIO_PUDR_P6_OFFSET                                    6
#define AVR32_PIO_PUDR_P6_SIZE                                      1
#define AVR32_PIO_PUDR_P7                                           7
#define AVR32_PIO_PUDR_P7_MASK                             0x00000080
#define AVR32_PIO_PUDR_P7_OFFSET                                    7
#define AVR32_PIO_PUDR_P7_SIZE                                      1
#define AVR32_PIO_PUDR_P8                                           8
#define AVR32_PIO_PUDR_P8_MASK                             0x00000100
#define AVR32_PIO_PUDR_P8_OFFSET                                    8
#define AVR32_PIO_PUDR_P8_SIZE                                      1
#define AVR32_PIO_PUDR_P9                                           9
#define AVR32_PIO_PUDR_P9_MASK                             0x00000200
#define AVR32_PIO_PUDR_P9_OFFSET                                    9
#define AVR32_PIO_PUDR_P9_SIZE                                      1
#define AVR32_PIO_PUER                                     0x00000064
#define AVR32_PIO_PUER_P0                                           0
#define AVR32_PIO_PUER_P0_MASK                             0x00000001
#define AVR32_PIO_PUER_P0_OFFSET                                    0
#define AVR32_PIO_PUER_P0_SIZE                                      1
#define AVR32_PIO_PUER_P1                                           1
#define AVR32_PIO_PUER_P10                                         10
#define AVR32_PIO_PUER_P10_MASK                            0x00000400
#define AVR32_PIO_PUER_P10_OFFSET                                  10
#define AVR32_PIO_PUER_P10_SIZE                                     1
#define AVR32_PIO_PUER_P11                                         11
#define AVR32_PIO_PUER_P11_MASK                            0x00000800
#define AVR32_PIO_PUER_P11_OFFSET                                  11
#define AVR32_PIO_PUER_P11_SIZE                                     1
#define AVR32_PIO_PUER_P12                                         12
#define AVR32_PIO_PUER_P12_MASK                            0x00001000
#define AVR32_PIO_PUER_P12_OFFSET                                  12
#define AVR32_PIO_PUER_P12_SIZE                                     1
#define AVR32_PIO_PUER_P13                                         13
#define AVR32_PIO_PUER_P13_MASK                            0x00002000
#define AVR32_PIO_PUER_P13_OFFSET                                  13
#define AVR32_PIO_PUER_P13_SIZE                                     1
#define AVR32_PIO_PUER_P14                                         14
#define AVR32_PIO_PUER_P14_MASK                            0x00004000
#define AVR32_PIO_PUER_P14_OFFSET                                  14
#define AVR32_PIO_PUER_P14_SIZE                                     1
#define AVR32_PIO_PUER_P15                                         15
#define AVR32_PIO_PUER_P15_MASK                            0x00008000
#define AVR32_PIO_PUER_P15_OFFSET                                  15
#define AVR32_PIO_PUER_P15_SIZE                                     1
#define AVR32_PIO_PUER_P16                                         16
#define AVR32_PIO_PUER_P16_MASK                            0x00010000
#define AVR32_PIO_PUER_P16_OFFSET                                  16
#define AVR32_PIO_PUER_P16_SIZE                                     1
#define AVR32_PIO_PUER_P17                                         17
#define AVR32_PIO_PUER_P17_MASK                            0x00020000
#define AVR32_PIO_PUER_P17_OFFSET                                  17
#define AVR32_PIO_PUER_P17_SIZE                                     1
#define AVR32_PIO_PUER_P18                                         18
#define AVR32_PIO_PUER_P18_MASK                            0x00040000
#define AVR32_PIO_PUER_P18_OFFSET                                  18
#define AVR32_PIO_PUER_P18_SIZE                                     1
#define AVR32_PIO_PUER_P19                                         19
#define AVR32_PIO_PUER_P19_MASK                            0x00080000
#define AVR32_PIO_PUER_P19_OFFSET                                  19
#define AVR32_PIO_PUER_P19_SIZE                                     1
#define AVR32_PIO_PUER_P1_MASK                             0x00000002
#define AVR32_PIO_PUER_P1_OFFSET                                    1
#define AVR32_PIO_PUER_P1_SIZE                                      1
#define AVR32_PIO_PUER_P2                                           2
#define AVR32_PIO_PUER_P20                                         20
#define AVR32_PIO_PUER_P20_MASK                            0x00100000
#define AVR32_PIO_PUER_P20_OFFSET                                  20
#define AVR32_PIO_PUER_P20_SIZE                                     1
#define AVR32_PIO_PUER_P21                                         21
#define AVR32_PIO_PUER_P21_MASK                            0x00200000
#define AVR32_PIO_PUER_P21_OFFSET                                  21
#define AVR32_PIO_PUER_P21_SIZE                                     1
#define AVR32_PIO_PUER_P22                                         22
#define AVR32_PIO_PUER_P22_MASK                            0x00400000
#define AVR32_PIO_PUER_P22_OFFSET                                  22
#define AVR32_PIO_PUER_P22_SIZE                                     1
#define AVR32_PIO_PUER_P23                                         23
#define AVR32_PIO_PUER_P23_MASK                            0x00800000
#define AVR32_PIO_PUER_P23_OFFSET                                  23
#define AVR32_PIO_PUER_P23_SIZE                                     1
#define AVR32_PIO_PUER_P24                                         24
#define AVR32_PIO_PUER_P24_MASK                            0x01000000
#define AVR32_PIO_PUER_P24_OFFSET                                  24
#define AVR32_PIO_PUER_P24_SIZE                                     1
#define AVR32_PIO_PUER_P25                                         25
#define AVR32_PIO_PUER_P25_MASK                            0x02000000
#define AVR32_PIO_PUER_P25_OFFSET                                  25
#define AVR32_PIO_PUER_P25_SIZE                                     1
#define AVR32_PIO_PUER_P26                                         26
#define AVR32_PIO_PUER_P26_MASK                            0x04000000
#define AVR32_PIO_PUER_P26_OFFSET                                  26
#define AVR32_PIO_PUER_P26_SIZE                                     1
#define AVR32_PIO_PUER_P27                                         27
#define AVR32_PIO_PUER_P27_MASK                            0x08000000
#define AVR32_PIO_PUER_P27_OFFSET                                  27
#define AVR32_PIO_PUER_P27_SIZE                                     1
#define AVR32_PIO_PUER_P28                                         28
#define AVR32_PIO_PUER_P28_MASK                            0x10000000
#define AVR32_PIO_PUER_P28_OFFSET                                  28
#define AVR32_PIO_PUER_P28_SIZE                                     1
#define AVR32_PIO_PUER_P29                                         29
#define AVR32_PIO_PUER_P29_MASK                            0x20000000
#define AVR32_PIO_PUER_P29_OFFSET                                  29
#define AVR32_PIO_PUER_P29_SIZE                                     1
#define AVR32_PIO_PUER_P2_MASK                             0x00000004
#define AVR32_PIO_PUER_P2_OFFSET                                    2
#define AVR32_PIO_PUER_P2_SIZE                                      1
#define AVR32_PIO_PUER_P3                                           3
#define AVR32_PIO_PUER_P30                                         30
#define AVR32_PIO_PUER_P30_MASK                            0x40000000
#define AVR32_PIO_PUER_P30_OFFSET                                  30
#define AVR32_PIO_PUER_P30_SIZE                                     1
#define AVR32_PIO_PUER_P31                                         31
#define AVR32_PIO_PUER_P31_MASK                            0x80000000
#define AVR32_PIO_PUER_P31_OFFSET                                  31
#define AVR32_PIO_PUER_P31_SIZE                                     1
#define AVR32_PIO_PUER_P3_MASK                             0x00000008
#define AVR32_PIO_PUER_P3_OFFSET                                    3
#define AVR32_PIO_PUER_P3_SIZE                                      1
#define AVR32_PIO_PUER_P4                                           4
#define AVR32_PIO_PUER_P4_MASK                             0x00000010
#define AVR32_PIO_PUER_P4_OFFSET                                    4
#define AVR32_PIO_PUER_P4_SIZE                                      1
#define AVR32_PIO_PUER_P5                                           5
#define AVR32_PIO_PUER_P5_MASK                             0x00000020
#define AVR32_PIO_PUER_P5_OFFSET                                    5
#define AVR32_PIO_PUER_P5_SIZE                                      1
#define AVR32_PIO_PUER_P6                                           6
#define AVR32_PIO_PUER_P6_MASK                             0x00000040
#define AVR32_PIO_PUER_P6_OFFSET                                    6
#define AVR32_PIO_PUER_P6_SIZE                                      1
#define AVR32_PIO_PUER_P7                                           7
#define AVR32_PIO_PUER_P7_MASK                             0x00000080
#define AVR32_PIO_PUER_P7_OFFSET                                    7
#define AVR32_PIO_PUER_P7_SIZE                                      1
#define AVR32_PIO_PUER_P8                                           8
#define AVR32_PIO_PUER_P8_MASK                             0x00000100
#define AVR32_PIO_PUER_P8_OFFSET                                    8
#define AVR32_PIO_PUER_P8_SIZE                                      1
#define AVR32_PIO_PUER_P9                                           9
#define AVR32_PIO_PUER_P9_MASK                             0x00000200
#define AVR32_PIO_PUER_P9_OFFSET                                    9
#define AVR32_PIO_PUER_P9_SIZE                                      1
#define AVR32_PIO_PUSR                                     0x00000068
#define AVR32_PIO_PUSR_P0                                           0
#define AVR32_PIO_PUSR_P0_MASK                             0x00000001
#define AVR32_PIO_PUSR_P0_OFFSET                                    0
#define AVR32_PIO_PUSR_P0_SIZE                                      1
#define AVR32_PIO_PUSR_P1                                           1
#define AVR32_PIO_PUSR_P10                                         10
#define AVR32_PIO_PUSR_P10_MASK                            0x00000400
#define AVR32_PIO_PUSR_P10_OFFSET                                  10
#define AVR32_PIO_PUSR_P10_SIZE                                     1
#define AVR32_PIO_PUSR_P11                                         11
#define AVR32_PIO_PUSR_P11_MASK                            0x00000800
#define AVR32_PIO_PUSR_P11_OFFSET                                  11
#define AVR32_PIO_PUSR_P11_SIZE                                     1
#define AVR32_PIO_PUSR_P12                                         12
#define AVR32_PIO_PUSR_P12_MASK                            0x00001000
#define AVR32_PIO_PUSR_P12_OFFSET                                  12
#define AVR32_PIO_PUSR_P12_SIZE                                     1
#define AVR32_PIO_PUSR_P13                                         13
#define AVR32_PIO_PUSR_P13_MASK                            0x00002000
#define AVR32_PIO_PUSR_P13_OFFSET                                  13
#define AVR32_PIO_PUSR_P13_SIZE                                     1
#define AVR32_PIO_PUSR_P14                                         14
#define AVR32_PIO_PUSR_P14_MASK                            0x00004000
#define AVR32_PIO_PUSR_P14_OFFSET                                  14
#define AVR32_PIO_PUSR_P14_SIZE                                     1
#define AVR32_PIO_PUSR_P15                                         15
#define AVR32_PIO_PUSR_P15_MASK                            0x00008000
#define AVR32_PIO_PUSR_P15_OFFSET                                  15
#define AVR32_PIO_PUSR_P15_SIZE                                     1
#define AVR32_PIO_PUSR_P16                                         16
#define AVR32_PIO_PUSR_P16_MASK                            0x00010000
#define AVR32_PIO_PUSR_P16_OFFSET                                  16
#define AVR32_PIO_PUSR_P16_SIZE                                     1
#define AVR32_PIO_PUSR_P17                                         17
#define AVR32_PIO_PUSR_P17_MASK                            0x00020000
#define AVR32_PIO_PUSR_P17_OFFSET                                  17
#define AVR32_PIO_PUSR_P17_SIZE                                     1
#define AVR32_PIO_PUSR_P18                                         18
#define AVR32_PIO_PUSR_P18_MASK                            0x00040000
#define AVR32_PIO_PUSR_P18_OFFSET                                  18
#define AVR32_PIO_PUSR_P18_SIZE                                     1
#define AVR32_PIO_PUSR_P19                                         19
#define AVR32_PIO_PUSR_P19_MASK                            0x00080000
#define AVR32_PIO_PUSR_P19_OFFSET                                  19
#define AVR32_PIO_PUSR_P19_SIZE                                     1
#define AVR32_PIO_PUSR_P1_MASK                             0x00000002
#define AVR32_PIO_PUSR_P1_OFFSET                                    1
#define AVR32_PIO_PUSR_P1_SIZE                                      1
#define AVR32_PIO_PUSR_P2                                           2
#define AVR32_PIO_PUSR_P20                                         20
#define AVR32_PIO_PUSR_P20_MASK                            0x00100000
#define AVR32_PIO_PUSR_P20_OFFSET                                  20
#define AVR32_PIO_PUSR_P20_SIZE                                     1
#define AVR32_PIO_PUSR_P21                                         21
#define AVR32_PIO_PUSR_P21_MASK                            0x00200000
#define AVR32_PIO_PUSR_P21_OFFSET                                  21
#define AVR32_PIO_PUSR_P21_SIZE                                     1
#define AVR32_PIO_PUSR_P22                                         22
#define AVR32_PIO_PUSR_P22_MASK                            0x00400000
#define AVR32_PIO_PUSR_P22_OFFSET                                  22
#define AVR32_PIO_PUSR_P22_SIZE                                     1
#define AVR32_PIO_PUSR_P23                                         23
#define AVR32_PIO_PUSR_P23_MASK                            0x00800000
#define AVR32_PIO_PUSR_P23_OFFSET                                  23
#define AVR32_PIO_PUSR_P23_SIZE                                     1
#define AVR32_PIO_PUSR_P24                                         24
#define AVR32_PIO_PUSR_P24_MASK                            0x01000000
#define AVR32_PIO_PUSR_P24_OFFSET                                  24
#define AVR32_PIO_PUSR_P24_SIZE                                     1
#define AVR32_PIO_PUSR_P25                                         25
#define AVR32_PIO_PUSR_P25_MASK                            0x02000000
#define AVR32_PIO_PUSR_P25_OFFSET                                  25
#define AVR32_PIO_PUSR_P25_SIZE                                     1
#define AVR32_PIO_PUSR_P26                                         26
#define AVR32_PIO_PUSR_P26_MASK                            0x04000000
#define AVR32_PIO_PUSR_P26_OFFSET                                  26
#define AVR32_PIO_PUSR_P26_SIZE                                     1
#define AVR32_PIO_PUSR_P27                                         27
#define AVR32_PIO_PUSR_P27_MASK                            0x08000000
#define AVR32_PIO_PUSR_P27_OFFSET                                  27
#define AVR32_PIO_PUSR_P27_SIZE                                     1
#define AVR32_PIO_PUSR_P28                                         28
#define AVR32_PIO_PUSR_P28_MASK                            0x10000000
#define AVR32_PIO_PUSR_P28_OFFSET                                  28
#define AVR32_PIO_PUSR_P28_SIZE                                     1
#define AVR32_PIO_PUSR_P29                                         29
#define AVR32_PIO_PUSR_P29_MASK                            0x20000000
#define AVR32_PIO_PUSR_P29_OFFSET                                  29
#define AVR32_PIO_PUSR_P29_SIZE                                     1
#define AVR32_PIO_PUSR_P2_MASK                             0x00000004
#define AVR32_PIO_PUSR_P2_OFFSET                                    2
#define AVR32_PIO_PUSR_P2_SIZE                                      1
#define AVR32_PIO_PUSR_P3                                           3
#define AVR32_PIO_PUSR_P30                                         30
#define AVR32_PIO_PUSR_P30_MASK                            0x40000000
#define AVR32_PIO_PUSR_P30_OFFSET                                  30
#define AVR32_PIO_PUSR_P30_SIZE                                     1
#define AVR32_PIO_PUSR_P31                                         31
#define AVR32_PIO_PUSR_P31_MASK                            0x80000000
#define AVR32_PIO_PUSR_P31_OFFSET                                  31
#define AVR32_PIO_PUSR_P31_SIZE                                     1
#define AVR32_PIO_PUSR_P3_MASK                             0x00000008
#define AVR32_PIO_PUSR_P3_OFFSET                                    3
#define AVR32_PIO_PUSR_P3_SIZE                                      1
#define AVR32_PIO_PUSR_P4                                           4
#define AVR32_PIO_PUSR_P4_MASK                             0x00000010
#define AVR32_PIO_PUSR_P4_OFFSET                                    4
#define AVR32_PIO_PUSR_P4_SIZE                                      1
#define AVR32_PIO_PUSR_P5                                           5
#define AVR32_PIO_PUSR_P5_MASK                             0x00000020
#define AVR32_PIO_PUSR_P5_OFFSET                                    5
#define AVR32_PIO_PUSR_P5_SIZE                                      1
#define AVR32_PIO_PUSR_P6                                           6
#define AVR32_PIO_PUSR_P6_MASK                             0x00000040
#define AVR32_PIO_PUSR_P6_OFFSET                                    6
#define AVR32_PIO_PUSR_P6_SIZE                                      1
#define AVR32_PIO_PUSR_P7                                           7
#define AVR32_PIO_PUSR_P7_MASK                             0x00000080
#define AVR32_PIO_PUSR_P7_OFFSET                                    7
#define AVR32_PIO_PUSR_P7_SIZE                                      1
#define AVR32_PIO_PUSR_P8                                           8
#define AVR32_PIO_PUSR_P8_MASK                             0x00000100
#define AVR32_PIO_PUSR_P8_OFFSET                                    8
#define AVR32_PIO_PUSR_P8_SIZE                                      1
#define AVR32_PIO_PUSR_P9                                           9
#define AVR32_PIO_PUSR_P9_MASK                             0x00000200
#define AVR32_PIO_PUSR_P9_OFFSET                                    9
#define AVR32_PIO_PUSR_P9_SIZE                                      1
#define AVR32_PIO_SODR                                     0x00000030
#define AVR32_PIO_SODR_P0                                           0
#define AVR32_PIO_SODR_P0_MASK                             0x00000001
#define AVR32_PIO_SODR_P0_OFFSET                                    0
#define AVR32_PIO_SODR_P0_SIZE                                      1
#define AVR32_PIO_SODR_P1                                           1
#define AVR32_PIO_SODR_P10                                         10
#define AVR32_PIO_SODR_P10_MASK                            0x00000400
#define AVR32_PIO_SODR_P10_OFFSET                                  10
#define AVR32_PIO_SODR_P10_SIZE                                     1
#define AVR32_PIO_SODR_P11                                         11
#define AVR32_PIO_SODR_P11_MASK                            0x00000800
#define AVR32_PIO_SODR_P11_OFFSET                                  11
#define AVR32_PIO_SODR_P11_SIZE                                     1
#define AVR32_PIO_SODR_P12                                         12
#define AVR32_PIO_SODR_P12_MASK                            0x00001000
#define AVR32_PIO_SODR_P12_OFFSET                                  12
#define AVR32_PIO_SODR_P12_SIZE                                     1
#define AVR32_PIO_SODR_P13                                         13
#define AVR32_PIO_SODR_P13_MASK                            0x00002000
#define AVR32_PIO_SODR_P13_OFFSET                                  13
#define AVR32_PIO_SODR_P13_SIZE                                     1
#define AVR32_PIO_SODR_P14                                         14
#define AVR32_PIO_SODR_P14_MASK                            0x00004000
#define AVR32_PIO_SODR_P14_OFFSET                                  14
#define AVR32_PIO_SODR_P14_SIZE                                     1
#define AVR32_PIO_SODR_P15                                         15
#define AVR32_PIO_SODR_P15_MASK                            0x00008000
#define AVR32_PIO_SODR_P15_OFFSET                                  15
#define AVR32_PIO_SODR_P15_SIZE                                     1
#define AVR32_PIO_SODR_P16                                         16
#define AVR32_PIO_SODR_P16_MASK                            0x00010000
#define AVR32_PIO_SODR_P16_OFFSET                                  16
#define AVR32_PIO_SODR_P16_SIZE                                     1
#define AVR32_PIO_SODR_P17                                         17
#define AVR32_PIO_SODR_P17_MASK                            0x00020000
#define AVR32_PIO_SODR_P17_OFFSET                                  17
#define AVR32_PIO_SODR_P17_SIZE                                     1
#define AVR32_PIO_SODR_P18                                         18
#define AVR32_PIO_SODR_P18_MASK                            0x00040000
#define AVR32_PIO_SODR_P18_OFFSET                                  18
#define AVR32_PIO_SODR_P18_SIZE                                     1
#define AVR32_PIO_SODR_P19                                         19
#define AVR32_PIO_SODR_P19_MASK                            0x00080000
#define AVR32_PIO_SODR_P19_OFFSET                                  19
#define AVR32_PIO_SODR_P19_SIZE                                     1
#define AVR32_PIO_SODR_P1_MASK                             0x00000002
#define AVR32_PIO_SODR_P1_OFFSET                                    1
#define AVR32_PIO_SODR_P1_SIZE                                      1
#define AVR32_PIO_SODR_P2                                           2
#define AVR32_PIO_SODR_P20                                         20
#define AVR32_PIO_SODR_P20_MASK                            0x00100000
#define AVR32_PIO_SODR_P20_OFFSET                                  20
#define AVR32_PIO_SODR_P20_SIZE                                     1
#define AVR32_PIO_SODR_P21                                         21
#define AVR32_PIO_SODR_P21_MASK                            0x00200000
#define AVR32_PIO_SODR_P21_OFFSET                                  21
#define AVR32_PIO_SODR_P21_SIZE                                     1
#define AVR32_PIO_SODR_P22                                         22
#define AVR32_PIO_SODR_P22_MASK                            0x00400000
#define AVR32_PIO_SODR_P22_OFFSET                                  22
#define AVR32_PIO_SODR_P22_SIZE                                     1
#define AVR32_PIO_SODR_P23                                         23
#define AVR32_PIO_SODR_P23_MASK                            0x00800000
#define AVR32_PIO_SODR_P23_OFFSET                                  23
#define AVR32_PIO_SODR_P23_SIZE                                     1
#define AVR32_PIO_SODR_P24                                         24
#define AVR32_PIO_SODR_P24_MASK                            0x01000000
#define AVR32_PIO_SODR_P24_OFFSET                                  24
#define AVR32_PIO_SODR_P24_SIZE                                     1
#define AVR32_PIO_SODR_P25                                         25
#define AVR32_PIO_SODR_P25_MASK                            0x02000000
#define AVR32_PIO_SODR_P25_OFFSET                                  25
#define AVR32_PIO_SODR_P25_SIZE                                     1
#define AVR32_PIO_SODR_P26                                         26
#define AVR32_PIO_SODR_P26_MASK                            0x04000000
#define AVR32_PIO_SODR_P26_OFFSET                                  26
#define AVR32_PIO_SODR_P26_SIZE                                     1
#define AVR32_PIO_SODR_P27                                         27
#define AVR32_PIO_SODR_P27_MASK                            0x08000000
#define AVR32_PIO_SODR_P27_OFFSET                                  27
#define AVR32_PIO_SODR_P27_SIZE                                     1
#define AVR32_PIO_SODR_P28                                         28
#define AVR32_PIO_SODR_P28_MASK                            0x10000000
#define AVR32_PIO_SODR_P28_OFFSET                                  28
#define AVR32_PIO_SODR_P28_SIZE                                     1
#define AVR32_PIO_SODR_P29                                         29
#define AVR32_PIO_SODR_P29_MASK                            0x20000000
#define AVR32_PIO_SODR_P29_OFFSET                                  29
#define AVR32_PIO_SODR_P29_SIZE                                     1
#define AVR32_PIO_SODR_P2_MASK                             0x00000004
#define AVR32_PIO_SODR_P2_OFFSET                                    2
#define AVR32_PIO_SODR_P2_SIZE                                      1
#define AVR32_PIO_SODR_P3                                           3
#define AVR32_PIO_SODR_P30                                         30
#define AVR32_PIO_SODR_P30_MASK                            0x40000000
#define AVR32_PIO_SODR_P30_OFFSET                                  30
#define AVR32_PIO_SODR_P30_SIZE                                     1
#define AVR32_PIO_SODR_P31                                         31
#define AVR32_PIO_SODR_P31_MASK                            0x80000000
#define AVR32_PIO_SODR_P31_OFFSET                                  31
#define AVR32_PIO_SODR_P31_SIZE                                     1
#define AVR32_PIO_SODR_P3_MASK                             0x00000008
#define AVR32_PIO_SODR_P3_OFFSET                                    3
#define AVR32_PIO_SODR_P3_SIZE                                      1
#define AVR32_PIO_SODR_P4                                           4
#define AVR32_PIO_SODR_P4_MASK                             0x00000010
#define AVR32_PIO_SODR_P4_OFFSET                                    4
#define AVR32_PIO_SODR_P4_SIZE                                      1
#define AVR32_PIO_SODR_P5                                           5
#define AVR32_PIO_SODR_P5_MASK                             0x00000020
#define AVR32_PIO_SODR_P5_OFFSET                                    5
#define AVR32_PIO_SODR_P5_SIZE                                      1
#define AVR32_PIO_SODR_P6                                           6
#define AVR32_PIO_SODR_P6_MASK                             0x00000040
#define AVR32_PIO_SODR_P6_OFFSET                                    6
#define AVR32_PIO_SODR_P6_SIZE                                      1
#define AVR32_PIO_SODR_P7                                           7
#define AVR32_PIO_SODR_P7_MASK                             0x00000080
#define AVR32_PIO_SODR_P7_OFFSET                                    7
#define AVR32_PIO_SODR_P7_SIZE                                      1
#define AVR32_PIO_SODR_P8                                           8
#define AVR32_PIO_SODR_P8_MASK                             0x00000100
#define AVR32_PIO_SODR_P8_OFFSET                                    8
#define AVR32_PIO_SODR_P8_SIZE                                      1
#define AVR32_PIO_SODR_P9                                           9
#define AVR32_PIO_SODR_P9_MASK                             0x00000200
#define AVR32_PIO_SODR_P9_OFFSET                                    9
#define AVR32_PIO_SODR_P9_SIZE                                      1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_pio_per_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_per_t;



typedef struct avr32_pio_pdr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_pdr_t;



typedef struct avr32_pio_psr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_psr_t;



typedef struct avr32_pio_oer_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_oer_t;



typedef struct avr32_pio_odr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_odr_t;



typedef struct avr32_pio_osr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_osr_t;



typedef struct avr32_pio_ifer_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_ifer_t;



typedef struct avr32_pio_ifdr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_ifdr_t;



typedef struct avr32_pio_ifsr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_ifsr_t;



typedef struct avr32_pio_sodr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_sodr_t;



typedef struct avr32_pio_codr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_codr_t;



typedef struct avr32_pio_odsr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_odsr_t;



typedef struct avr32_pio_pdsr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_pdsr_t;



typedef struct avr32_pio_ier_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_ier_t;



typedef struct avr32_pio_idr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_idr_t;



typedef struct avr32_pio_imr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_imr_t;



typedef struct avr32_pio_isr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_isr_t;



typedef struct avr32_pio_mder_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_mder_t;



typedef struct avr32_pio_mddr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_mddr_t;



typedef struct avr32_pio_mdsr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_mdsr_t;



typedef struct avr32_pio_pudr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_pudr_t;



typedef struct avr32_pio_puer_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_puer_t;



typedef struct avr32_pio_pusr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_pusr_t;



typedef struct avr32_pio_asr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_asr_t;



typedef struct avr32_pio_bsr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_bsr_t;



typedef struct avr32_pio_absr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_absr_t;



typedef struct avr32_pio_ower_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_ower_t;



typedef struct avr32_pio_owdr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_owdr_t;



typedef struct avr32_pio_owsr_t {
    unsigned int p31             : 1;
    unsigned int p30             : 1;
    unsigned int p29             : 1;
    unsigned int p28             : 1;
    unsigned int p27             : 1;
    unsigned int p26             : 1;
    unsigned int p25             : 1;
    unsigned int p24             : 1;
    unsigned int p23             : 1;
    unsigned int p22             : 1;
    unsigned int p21             : 1;
    unsigned int p20             : 1;
    unsigned int p19             : 1;
    unsigned int p18             : 1;
    unsigned int p17             : 1;
    unsigned int p16             : 1;
    unsigned int p15             : 1;
    unsigned int p14             : 1;
    unsigned int p13             : 1;
    unsigned int p12             : 1;
    unsigned int p11             : 1;
    unsigned int p10             : 1;
    unsigned int p9              : 1;
    unsigned int p8              : 1;
    unsigned int p7              : 1;
    unsigned int p6              : 1;
    unsigned int p5              : 1;
    unsigned int p4              : 1;
    unsigned int p3              : 1;
    unsigned int p2              : 1;
    unsigned int p1              : 1;
    unsigned int p0              : 1;
} avr32_pio_owsr_t;



typedef struct avr32_pio_t {
  union {
          unsigned long                  per       ;//0x0000
          avr32_pio_per_t                PER       ;
  };
  union {
          unsigned long                  pdr       ;//0x0004
          avr32_pio_pdr_t                PDR       ;
  };
  union {
    const unsigned long                  psr       ;//0x0008
    const avr32_pio_psr_t                PSR       ;
  };
          unsigned int                   :32       ;//0x000c
  union {
          unsigned long                  oer       ;//0x0010
          avr32_pio_oer_t                OER       ;
  };
  union {
          unsigned long                  odr       ;//0x0014
          avr32_pio_odr_t                ODR       ;
  };
  union {
    const unsigned long                  osr       ;//0x0018
    const avr32_pio_osr_t                OSR       ;
  };
          unsigned int                   :32       ;//0x001c
  union {
          unsigned long                  ifer      ;//0x0020
          avr32_pio_ifer_t               IFER      ;
  };
  union {
          unsigned long                  ifdr      ;//0x0024
          avr32_pio_ifdr_t               IFDR      ;
  };
  union {
    const unsigned long                  ifsr      ;//0x0028
    const avr32_pio_ifsr_t               IFSR      ;
  };
          unsigned int                   :32       ;//0x002c
  union {
          unsigned long                  sodr      ;//0x0030
          avr32_pio_sodr_t               SODR      ;
  };
  union {
          unsigned long                  codr      ;//0x0034
          avr32_pio_codr_t               CODR      ;
  };
  union {
          unsigned long                  odsr      ;//0x0038
          avr32_pio_odsr_t               ODSR      ;
  };
  union {
    const unsigned long                  pdsr      ;//0x003c
    const avr32_pio_pdsr_t               PDSR      ;
  };
  union {
          unsigned long                  ier       ;//0x0040
          avr32_pio_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0044
          avr32_pio_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0048
    const avr32_pio_imr_t                IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x004c
    const avr32_pio_isr_t                ISR       ;
  };
  union {
          unsigned long                  mder      ;//0x0050
          avr32_pio_mder_t               MDER      ;
  };
  union {
          unsigned long                  mddr      ;//0x0054
          avr32_pio_mddr_t               MDDR      ;
  };
  union {
    const unsigned long                  mdsr      ;//0x0058
    const avr32_pio_mdsr_t               MDSR      ;
  };
          unsigned int                   :32       ;//0x005c
  union {
          unsigned long                  pudr      ;//0x0060
          avr32_pio_pudr_t               PUDR      ;
  };
  union {
          unsigned long                  puer      ;//0x0064
          avr32_pio_puer_t               PUER      ;
  };
  union {
    const unsigned long                  pusr      ;//0x0068
    const avr32_pio_pusr_t               PUSR      ;
  };
          unsigned int                   :32       ;//0x006c
  union {
          unsigned long                  asr       ;//0x0070
          avr32_pio_asr_t                ASR       ;
  };
  union {
          unsigned long                  bsr       ;//0x0074
          avr32_pio_bsr_t                BSR       ;
  };
  union {
    const unsigned long                  absr      ;//0x0078
    const avr32_pio_absr_t               ABSR      ;
  };
          unsigned int                   :32       ;//0x007c
          unsigned int                   :32       ;//0x0080
          unsigned int                   :32       ;//0x0084
          unsigned int                   :32       ;//0x0088
          unsigned int                   :32       ;//0x008c
          unsigned int                   :32       ;//0x0090
          unsigned int                   :32       ;//0x0094
          unsigned int                   :32       ;//0x0098
          unsigned int                   :32       ;//0x009c
  union {
          unsigned long                  ower      ;//0x00a0
          avr32_pio_ower_t               OWER      ;
  };
  union {
          unsigned long                  owdr      ;//0x00a4
          avr32_pio_owdr_t               OWDR      ;
  };
  union {
    const unsigned long                  owsr      ;//0x00a8
    const avr32_pio_owsr_t               OWSR      ;
  };
} avr32_pio_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_PIO_202_H_INCLUDED*/
#endif

