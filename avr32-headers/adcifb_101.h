/*****************************************************************************
 *
 * Copyright (C) 2009-2010 Atmel Corporation
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
 * Model        : UC3L064
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_ADCIFB_101_H_INCLUDED
#define AVR32_ADCIFB_101_H_INCLUDED

#define AVR32_ADCIFB_H_VERSION 101

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ADCIFB_<register>
 - Bitfield mask:   AVR32_ADCIFB_<register>_<bitfield>
 - Bitfield offset: AVR32_ADCIFB_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ADCIFB_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ADCIFB_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ADCIFB_<bitfield>
 - Bitfield offset: AVR32_ADCIFB_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ADCIFB_<bitfield>_SIZE
 - Bitfield values: AVR32_ADCIFB_<bitfield>_<value name>
 - Bitfield values: AVR32_ADCIFB_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_ADCIFB_10BIT                                    0x00000001
#define AVR32_ADCIFB_11BIT                                    0x00000002
#define AVR32_ADCIFB_12BIT                                    0x00000003
#define AVR32_ADCIFB_8BIT                                     0x00000000
#define AVR32_ADCIFB_ACE                                               5
#define AVR32_ADCIFB_ACE_MASK                                 0x00000020
#define AVR32_ADCIFB_ACE_OFFSET                                        5
#define AVR32_ADCIFB_ACE_SIZE                                          1
#define AVR32_ADCIFB_ACR                                      0x00000008
#define AVR32_ADCIFB_ACR_MASK                                 0x0f7f3f31
#define AVR32_ADCIFB_ACR_PRESCAL                                       8
#define AVR32_ADCIFB_ACR_PRESCAL_MASK                         0x00003f00
#define AVR32_ADCIFB_ACR_PRESCAL_OFFSET                                8
#define AVR32_ADCIFB_ACR_PRESCAL_SIZE                                  6
#define AVR32_ADCIFB_ACR_RES                                           4
#define AVR32_ADCIFB_ACR_RESETVALUE                           0x00000000
#define AVR32_ADCIFB_ACR_RES_10BIT                            0x00000001
#define AVR32_ADCIFB_ACR_RES_11BIT                            0x00000002
#define AVR32_ADCIFB_ACR_RES_12BIT                            0x00000003
#define AVR32_ADCIFB_ACR_RES_8BIT                             0x00000000
#define AVR32_ADCIFB_ACR_RES_MASK                             0x00000030
#define AVR32_ADCIFB_ACR_RES_OFFSET                                    4
#define AVR32_ADCIFB_ACR_RES_SIZE                                      2
#define AVR32_ADCIFB_ACR_SHTIM                                        24
#define AVR32_ADCIFB_ACR_SHTIM_MASK                           0x0f000000
#define AVR32_ADCIFB_ACR_SHTIM_OFFSET                                 24
#define AVR32_ADCIFB_ACR_SHTIM_SIZE                                    4
#define AVR32_ADCIFB_ACR_SLEEP                                         0
#define AVR32_ADCIFB_ACR_SLEEP_MASK                           0x00000001
#define AVR32_ADCIFB_ACR_SLEEP_NORM                           0x00000000
#define AVR32_ADCIFB_ACR_SLEEP_OFFSET                                  0
#define AVR32_ADCIFB_ACR_SLEEP_SIZE                                    1
#define AVR32_ADCIFB_ACR_SLEEP_SLEEP                          0x00000001
#define AVR32_ADCIFB_ACR_STARTUP                                      16
#define AVR32_ADCIFB_ACR_STARTUP_MASK                         0x007f0000
#define AVR32_ADCIFB_ACR_STARTUP_OFFSET                               16
#define AVR32_ADCIFB_ACR_STARTUP_SIZE                                  7
#define AVR32_ADCIFB_APOE                                              6
#define AVR32_ADCIFB_APOE_MASK                                0x00000040
#define AVR32_ADCIFB_APOE_OFFSET                                       6
#define AVR32_ADCIFB_APOE_SIZE                                         1
#define AVR32_ADCIFB_BUSY                                              9
#define AVR32_ADCIFB_BUSY_MASK                                0x00000200
#define AVR32_ADCIFB_BUSY_OFFSET                                       9
#define AVR32_ADCIFB_BUSY_SIZE                                         1
#define AVR32_ADCIFB_CELSE                                            14
#define AVR32_ADCIFB_CELSE_MASK                               0x00004000
#define AVR32_ADCIFB_CELSE_OFFSET                                     14
#define AVR32_ADCIFB_CELSE_SIZE                                        1
#define AVR32_ADCIFB_CGT                                              13
#define AVR32_ADCIFB_CGT_MASK                                 0x00002000
#define AVR32_ADCIFB_CGT_OFFSET                                       13
#define AVR32_ADCIFB_CGT_SIZE                                          1
#define AVR32_ADCIFB_CH0                                               0
#define AVR32_ADCIFB_CH0_MASK                                 0x00000001
#define AVR32_ADCIFB_CH0_OFFSET                                        0
#define AVR32_ADCIFB_CH0_SIZE                                          1
#define AVR32_ADCIFB_CH1                                               1
#define AVR32_ADCIFB_CH10                                             10
#define AVR32_ADCIFB_CH10_MASK                                0x00000400
#define AVR32_ADCIFB_CH10_OFFSET                                      10
#define AVR32_ADCIFB_CH10_SIZE                                         1
#define AVR32_ADCIFB_CH11                                             11
#define AVR32_ADCIFB_CH11_MASK                                0x00000800
#define AVR32_ADCIFB_CH11_OFFSET                                      11
#define AVR32_ADCIFB_CH11_SIZE                                         1
#define AVR32_ADCIFB_CH12                                             12
#define AVR32_ADCIFB_CH12_MASK                                0x00001000
#define AVR32_ADCIFB_CH12_OFFSET                                      12
#define AVR32_ADCIFB_CH12_SIZE                                         1
#define AVR32_ADCIFB_CH13                                             13
#define AVR32_ADCIFB_CH13_MASK                                0x00002000
#define AVR32_ADCIFB_CH13_OFFSET                                      13
#define AVR32_ADCIFB_CH13_SIZE                                         1
#define AVR32_ADCIFB_CH14                                             14
#define AVR32_ADCIFB_CH14_MASK                                0x00004000
#define AVR32_ADCIFB_CH14_OFFSET                                      14
#define AVR32_ADCIFB_CH14_SIZE                                         1
#define AVR32_ADCIFB_CH15                                             15
#define AVR32_ADCIFB_CH15_MASK                                0x00008000
#define AVR32_ADCIFB_CH15_OFFSET                                      15
#define AVR32_ADCIFB_CH15_SIZE                                         1
#define AVR32_ADCIFB_CH16                                             16
#define AVR32_ADCIFB_CH16_MASK                                0x00010000
#define AVR32_ADCIFB_CH16_OFFSET                                      16
#define AVR32_ADCIFB_CH16_SIZE                                         1
#define AVR32_ADCIFB_CH17                                             17
#define AVR32_ADCIFB_CH17_MASK                                0x00020000
#define AVR32_ADCIFB_CH17_OFFSET                                      17
#define AVR32_ADCIFB_CH17_SIZE                                         1
#define AVR32_ADCIFB_CH18                                             18
#define AVR32_ADCIFB_CH18_MASK                                0x00040000
#define AVR32_ADCIFB_CH18_OFFSET                                      18
#define AVR32_ADCIFB_CH18_SIZE                                         1
#define AVR32_ADCIFB_CH19                                             19
#define AVR32_ADCIFB_CH19_MASK                                0x00080000
#define AVR32_ADCIFB_CH19_OFFSET                                      19
#define AVR32_ADCIFB_CH19_SIZE                                         1
#define AVR32_ADCIFB_CH1_MASK                                 0x00000002
#define AVR32_ADCIFB_CH1_OFFSET                                        1
#define AVR32_ADCIFB_CH1_SIZE                                          1
#define AVR32_ADCIFB_CH2                                               2
#define AVR32_ADCIFB_CH20                                             20
#define AVR32_ADCIFB_CH20_MASK                                0x00100000
#define AVR32_ADCIFB_CH20_OFFSET                                      20
#define AVR32_ADCIFB_CH20_SIZE                                         1
#define AVR32_ADCIFB_CH21                                             21
#define AVR32_ADCIFB_CH21_MASK                                0x00200000
#define AVR32_ADCIFB_CH21_OFFSET                                      21
#define AVR32_ADCIFB_CH21_SIZE                                         1
#define AVR32_ADCIFB_CH22                                             22
#define AVR32_ADCIFB_CH22_MASK                                0x00400000
#define AVR32_ADCIFB_CH22_OFFSET                                      22
#define AVR32_ADCIFB_CH22_SIZE                                         1
#define AVR32_ADCIFB_CH23                                             23
#define AVR32_ADCIFB_CH23_MASK                                0x00800000
#define AVR32_ADCIFB_CH23_OFFSET                                      23
#define AVR32_ADCIFB_CH23_SIZE                                         1
#define AVR32_ADCIFB_CH24                                             24
#define AVR32_ADCIFB_CH24_MASK                                0x01000000
#define AVR32_ADCIFB_CH24_OFFSET                                      24
#define AVR32_ADCIFB_CH24_SIZE                                         1
#define AVR32_ADCIFB_CH25                                             25
#define AVR32_ADCIFB_CH25_MASK                                0x02000000
#define AVR32_ADCIFB_CH25_OFFSET                                      25
#define AVR32_ADCIFB_CH25_SIZE                                         1
#define AVR32_ADCIFB_CH26                                             26
#define AVR32_ADCIFB_CH26_MASK                                0x04000000
#define AVR32_ADCIFB_CH26_OFFSET                                      26
#define AVR32_ADCIFB_CH26_SIZE                                         1
#define AVR32_ADCIFB_CH27                                             27
#define AVR32_ADCIFB_CH27_MASK                                0x08000000
#define AVR32_ADCIFB_CH27_OFFSET                                      27
#define AVR32_ADCIFB_CH27_SIZE                                         1
#define AVR32_ADCIFB_CH28                                             28
#define AVR32_ADCIFB_CH28_MASK                                0x10000000
#define AVR32_ADCIFB_CH28_OFFSET                                      28
#define AVR32_ADCIFB_CH28_SIZE                                         1
#define AVR32_ADCIFB_CH29                                             29
#define AVR32_ADCIFB_CH29_MASK                                0x20000000
#define AVR32_ADCIFB_CH29_OFFSET                                      29
#define AVR32_ADCIFB_CH29_SIZE                                         1
#define AVR32_ADCIFB_CH2_MASK                                 0x00000004
#define AVR32_ADCIFB_CH2_OFFSET                                        2
#define AVR32_ADCIFB_CH2_SIZE                                          1
#define AVR32_ADCIFB_CH3                                               3
#define AVR32_ADCIFB_CH30                                             30
#define AVR32_ADCIFB_CH30_MASK                                0x40000000
#define AVR32_ADCIFB_CH30_OFFSET                                      30
#define AVR32_ADCIFB_CH30_SIZE                                         1
#define AVR32_ADCIFB_CH31                                             31
#define AVR32_ADCIFB_CH31_MASK                                0x80000000
#define AVR32_ADCIFB_CH31_OFFSET                                      31
#define AVR32_ADCIFB_CH31_SIZE                                         1
#define AVR32_ADCIFB_CH3_MASK                                 0x00000008
#define AVR32_ADCIFB_CH3_OFFSET                                        3
#define AVR32_ADCIFB_CH3_SIZE                                          1
#define AVR32_ADCIFB_CH4                                               4
#define AVR32_ADCIFB_CH4_MASK                                 0x00000010
#define AVR32_ADCIFB_CH4_OFFSET                                        4
#define AVR32_ADCIFB_CH4_SIZE                                          1
#define AVR32_ADCIFB_CH5                                               5
#define AVR32_ADCIFB_CH5_MASK                                 0x00000020
#define AVR32_ADCIFB_CH5_OFFSET                                        5
#define AVR32_ADCIFB_CH5_SIZE                                          1
#define AVR32_ADCIFB_CH6                                               6
#define AVR32_ADCIFB_CH6_MASK                                 0x00000040
#define AVR32_ADCIFB_CH6_OFFSET                                        6
#define AVR32_ADCIFB_CH6_SIZE                                          1
#define AVR32_ADCIFB_CH7                                               7
#define AVR32_ADCIFB_CH7_MASK                                 0x00000080
#define AVR32_ADCIFB_CH7_OFFSET                                        7
#define AVR32_ADCIFB_CH7_SIZE                                          1
#define AVR32_ADCIFB_CH8                                               8
#define AVR32_ADCIFB_CH8_MASK                                 0x00000100
#define AVR32_ADCIFB_CH8_OFFSET                                        8
#define AVR32_ADCIFB_CH8_SIZE                                          1
#define AVR32_ADCIFB_CH9                                               9
#define AVR32_ADCIFB_CH9_MASK                                 0x00000200
#define AVR32_ADCIFB_CH9_OFFSET                                        9
#define AVR32_ADCIFB_CH9_SIZE                                          1
#define AVR32_ADCIFB_CHDR                                     0x00000044
#define AVR32_ADCIFB_CHDR_CH0                                          0
#define AVR32_ADCIFB_CHDR_CH0_MASK                            0x00000001
#define AVR32_ADCIFB_CHDR_CH0_OFFSET                                   0
#define AVR32_ADCIFB_CHDR_CH0_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH1                                          1
#define AVR32_ADCIFB_CHDR_CH10                                        10
#define AVR32_ADCIFB_CHDR_CH10_MASK                           0x00000400
#define AVR32_ADCIFB_CHDR_CH10_OFFSET                                 10
#define AVR32_ADCIFB_CHDR_CH10_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH11                                        11
#define AVR32_ADCIFB_CHDR_CH11_MASK                           0x00000800
#define AVR32_ADCIFB_CHDR_CH11_OFFSET                                 11
#define AVR32_ADCIFB_CHDR_CH11_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH12                                        12
#define AVR32_ADCIFB_CHDR_CH12_MASK                           0x00001000
#define AVR32_ADCIFB_CHDR_CH12_OFFSET                                 12
#define AVR32_ADCIFB_CHDR_CH12_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH13                                        13
#define AVR32_ADCIFB_CHDR_CH13_MASK                           0x00002000
#define AVR32_ADCIFB_CHDR_CH13_OFFSET                                 13
#define AVR32_ADCIFB_CHDR_CH13_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH14                                        14
#define AVR32_ADCIFB_CHDR_CH14_MASK                           0x00004000
#define AVR32_ADCIFB_CHDR_CH14_OFFSET                                 14
#define AVR32_ADCIFB_CHDR_CH14_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH15                                        15
#define AVR32_ADCIFB_CHDR_CH15_MASK                           0x00008000
#define AVR32_ADCIFB_CHDR_CH15_OFFSET                                 15
#define AVR32_ADCIFB_CHDR_CH15_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH16                                        16
#define AVR32_ADCIFB_CHDR_CH16_MASK                           0x00010000
#define AVR32_ADCIFB_CHDR_CH16_OFFSET                                 16
#define AVR32_ADCIFB_CHDR_CH16_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH17                                        17
#define AVR32_ADCIFB_CHDR_CH17_MASK                           0x00020000
#define AVR32_ADCIFB_CHDR_CH17_OFFSET                                 17
#define AVR32_ADCIFB_CHDR_CH17_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH18                                        18
#define AVR32_ADCIFB_CHDR_CH18_MASK                           0x00040000
#define AVR32_ADCIFB_CHDR_CH18_OFFSET                                 18
#define AVR32_ADCIFB_CHDR_CH18_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH19                                        19
#define AVR32_ADCIFB_CHDR_CH19_MASK                           0x00080000
#define AVR32_ADCIFB_CHDR_CH19_OFFSET                                 19
#define AVR32_ADCIFB_CHDR_CH19_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH1_MASK                            0x00000002
#define AVR32_ADCIFB_CHDR_CH1_OFFSET                                   1
#define AVR32_ADCIFB_CHDR_CH1_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH2                                          2
#define AVR32_ADCIFB_CHDR_CH20                                        20
#define AVR32_ADCIFB_CHDR_CH20_MASK                           0x00100000
#define AVR32_ADCIFB_CHDR_CH20_OFFSET                                 20
#define AVR32_ADCIFB_CHDR_CH20_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH21                                        21
#define AVR32_ADCIFB_CHDR_CH21_MASK                           0x00200000
#define AVR32_ADCIFB_CHDR_CH21_OFFSET                                 21
#define AVR32_ADCIFB_CHDR_CH21_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH22                                        22
#define AVR32_ADCIFB_CHDR_CH22_MASK                           0x00400000
#define AVR32_ADCIFB_CHDR_CH22_OFFSET                                 22
#define AVR32_ADCIFB_CHDR_CH22_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH23                                        23
#define AVR32_ADCIFB_CHDR_CH23_MASK                           0x00800000
#define AVR32_ADCIFB_CHDR_CH23_OFFSET                                 23
#define AVR32_ADCIFB_CHDR_CH23_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH24                                        24
#define AVR32_ADCIFB_CHDR_CH24_MASK                           0x01000000
#define AVR32_ADCIFB_CHDR_CH24_OFFSET                                 24
#define AVR32_ADCIFB_CHDR_CH24_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH25                                        25
#define AVR32_ADCIFB_CHDR_CH25_MASK                           0x02000000
#define AVR32_ADCIFB_CHDR_CH25_OFFSET                                 25
#define AVR32_ADCIFB_CHDR_CH25_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH26                                        26
#define AVR32_ADCIFB_CHDR_CH26_MASK                           0x04000000
#define AVR32_ADCIFB_CHDR_CH26_OFFSET                                 26
#define AVR32_ADCIFB_CHDR_CH26_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH27                                        27
#define AVR32_ADCIFB_CHDR_CH27_MASK                           0x08000000
#define AVR32_ADCIFB_CHDR_CH27_OFFSET                                 27
#define AVR32_ADCIFB_CHDR_CH27_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH28                                        28
#define AVR32_ADCIFB_CHDR_CH28_MASK                           0x10000000
#define AVR32_ADCIFB_CHDR_CH28_OFFSET                                 28
#define AVR32_ADCIFB_CHDR_CH28_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH29                                        29
#define AVR32_ADCIFB_CHDR_CH29_MASK                           0x20000000
#define AVR32_ADCIFB_CHDR_CH29_OFFSET                                 29
#define AVR32_ADCIFB_CHDR_CH29_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH2_MASK                            0x00000004
#define AVR32_ADCIFB_CHDR_CH2_OFFSET                                   2
#define AVR32_ADCIFB_CHDR_CH2_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH3                                          3
#define AVR32_ADCIFB_CHDR_CH30                                        30
#define AVR32_ADCIFB_CHDR_CH30_MASK                           0x40000000
#define AVR32_ADCIFB_CHDR_CH30_OFFSET                                 30
#define AVR32_ADCIFB_CHDR_CH30_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH31                                        31
#define AVR32_ADCIFB_CHDR_CH31_MASK                           0x80000000
#define AVR32_ADCIFB_CHDR_CH31_OFFSET                                 31
#define AVR32_ADCIFB_CHDR_CH31_SIZE                                    1
#define AVR32_ADCIFB_CHDR_CH3_MASK                            0x00000008
#define AVR32_ADCIFB_CHDR_CH3_OFFSET                                   3
#define AVR32_ADCIFB_CHDR_CH3_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH4                                          4
#define AVR32_ADCIFB_CHDR_CH4_MASK                            0x00000010
#define AVR32_ADCIFB_CHDR_CH4_OFFSET                                   4
#define AVR32_ADCIFB_CHDR_CH4_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH5                                          5
#define AVR32_ADCIFB_CHDR_CH5_MASK                            0x00000020
#define AVR32_ADCIFB_CHDR_CH5_OFFSET                                   5
#define AVR32_ADCIFB_CHDR_CH5_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH6                                          6
#define AVR32_ADCIFB_CHDR_CH6_MASK                            0x00000040
#define AVR32_ADCIFB_CHDR_CH6_OFFSET                                   6
#define AVR32_ADCIFB_CHDR_CH6_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH7                                          7
#define AVR32_ADCIFB_CHDR_CH7_MASK                            0x00000080
#define AVR32_ADCIFB_CHDR_CH7_OFFSET                                   7
#define AVR32_ADCIFB_CHDR_CH7_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH8                                          8
#define AVR32_ADCIFB_CHDR_CH8_MASK                            0x00000100
#define AVR32_ADCIFB_CHDR_CH8_OFFSET                                   8
#define AVR32_ADCIFB_CHDR_CH8_SIZE                                     1
#define AVR32_ADCIFB_CHDR_CH9                                          9
#define AVR32_ADCIFB_CHDR_CH9_MASK                            0x00000200
#define AVR32_ADCIFB_CHDR_CH9_OFFSET                                   9
#define AVR32_ADCIFB_CHDR_CH9_SIZE                                     1
#define AVR32_ADCIFB_CHDR_MASK                                0xffffffff
#define AVR32_ADCIFB_CHDR_RESETVALUE                          0x00000000
#define AVR32_ADCIFB_CHER                                     0x00000040
#define AVR32_ADCIFB_CHER_CH0                                          0
#define AVR32_ADCIFB_CHER_CH0_MASK                            0x00000001
#define AVR32_ADCIFB_CHER_CH0_OFFSET                                   0
#define AVR32_ADCIFB_CHER_CH0_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH1                                          1
#define AVR32_ADCIFB_CHER_CH10                                        10
#define AVR32_ADCIFB_CHER_CH10_MASK                           0x00000400
#define AVR32_ADCIFB_CHER_CH10_OFFSET                                 10
#define AVR32_ADCIFB_CHER_CH10_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH11                                        11
#define AVR32_ADCIFB_CHER_CH11_MASK                           0x00000800
#define AVR32_ADCIFB_CHER_CH11_OFFSET                                 11
#define AVR32_ADCIFB_CHER_CH11_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH12                                        12
#define AVR32_ADCIFB_CHER_CH12_MASK                           0x00001000
#define AVR32_ADCIFB_CHER_CH12_OFFSET                                 12
#define AVR32_ADCIFB_CHER_CH12_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH13                                        13
#define AVR32_ADCIFB_CHER_CH13_MASK                           0x00002000
#define AVR32_ADCIFB_CHER_CH13_OFFSET                                 13
#define AVR32_ADCIFB_CHER_CH13_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH14                                        14
#define AVR32_ADCIFB_CHER_CH14_MASK                           0x00004000
#define AVR32_ADCIFB_CHER_CH14_OFFSET                                 14
#define AVR32_ADCIFB_CHER_CH14_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH15                                        15
#define AVR32_ADCIFB_CHER_CH15_MASK                           0x00008000
#define AVR32_ADCIFB_CHER_CH15_OFFSET                                 15
#define AVR32_ADCIFB_CHER_CH15_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH16                                        16
#define AVR32_ADCIFB_CHER_CH16_MASK                           0x00010000
#define AVR32_ADCIFB_CHER_CH16_OFFSET                                 16
#define AVR32_ADCIFB_CHER_CH16_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH17                                        17
#define AVR32_ADCIFB_CHER_CH17_MASK                           0x00020000
#define AVR32_ADCIFB_CHER_CH17_OFFSET                                 17
#define AVR32_ADCIFB_CHER_CH17_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH18                                        18
#define AVR32_ADCIFB_CHER_CH18_MASK                           0x00040000
#define AVR32_ADCIFB_CHER_CH18_OFFSET                                 18
#define AVR32_ADCIFB_CHER_CH18_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH19                                        19
#define AVR32_ADCIFB_CHER_CH19_MASK                           0x00080000
#define AVR32_ADCIFB_CHER_CH19_OFFSET                                 19
#define AVR32_ADCIFB_CHER_CH19_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH1_MASK                            0x00000002
#define AVR32_ADCIFB_CHER_CH1_OFFSET                                   1
#define AVR32_ADCIFB_CHER_CH1_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH2                                          2
#define AVR32_ADCIFB_CHER_CH20                                        20
#define AVR32_ADCIFB_CHER_CH20_MASK                           0x00100000
#define AVR32_ADCIFB_CHER_CH20_OFFSET                                 20
#define AVR32_ADCIFB_CHER_CH20_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH21                                        21
#define AVR32_ADCIFB_CHER_CH21_MASK                           0x00200000
#define AVR32_ADCIFB_CHER_CH21_OFFSET                                 21
#define AVR32_ADCIFB_CHER_CH21_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH22                                        22
#define AVR32_ADCIFB_CHER_CH22_MASK                           0x00400000
#define AVR32_ADCIFB_CHER_CH22_OFFSET                                 22
#define AVR32_ADCIFB_CHER_CH22_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH23                                        23
#define AVR32_ADCIFB_CHER_CH23_MASK                           0x00800000
#define AVR32_ADCIFB_CHER_CH23_OFFSET                                 23
#define AVR32_ADCIFB_CHER_CH23_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH24                                        24
#define AVR32_ADCIFB_CHER_CH24_MASK                           0x01000000
#define AVR32_ADCIFB_CHER_CH24_OFFSET                                 24
#define AVR32_ADCIFB_CHER_CH24_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH25                                        25
#define AVR32_ADCIFB_CHER_CH25_MASK                           0x02000000
#define AVR32_ADCIFB_CHER_CH25_OFFSET                                 25
#define AVR32_ADCIFB_CHER_CH25_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH26                                        26
#define AVR32_ADCIFB_CHER_CH26_MASK                           0x04000000
#define AVR32_ADCIFB_CHER_CH26_OFFSET                                 26
#define AVR32_ADCIFB_CHER_CH26_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH27                                        27
#define AVR32_ADCIFB_CHER_CH27_MASK                           0x08000000
#define AVR32_ADCIFB_CHER_CH27_OFFSET                                 27
#define AVR32_ADCIFB_CHER_CH27_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH28                                        28
#define AVR32_ADCIFB_CHER_CH28_MASK                           0x10000000
#define AVR32_ADCIFB_CHER_CH28_OFFSET                                 28
#define AVR32_ADCIFB_CHER_CH28_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH29                                        29
#define AVR32_ADCIFB_CHER_CH29_MASK                           0x20000000
#define AVR32_ADCIFB_CHER_CH29_OFFSET                                 29
#define AVR32_ADCIFB_CHER_CH29_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH2_MASK                            0x00000004
#define AVR32_ADCIFB_CHER_CH2_OFFSET                                   2
#define AVR32_ADCIFB_CHER_CH2_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH3                                          3
#define AVR32_ADCIFB_CHER_CH30                                        30
#define AVR32_ADCIFB_CHER_CH30_MASK                           0x40000000
#define AVR32_ADCIFB_CHER_CH30_OFFSET                                 30
#define AVR32_ADCIFB_CHER_CH30_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH31                                        31
#define AVR32_ADCIFB_CHER_CH31_MASK                           0x80000000
#define AVR32_ADCIFB_CHER_CH31_OFFSET                                 31
#define AVR32_ADCIFB_CHER_CH31_SIZE                                    1
#define AVR32_ADCIFB_CHER_CH3_MASK                            0x00000008
#define AVR32_ADCIFB_CHER_CH3_OFFSET                                   3
#define AVR32_ADCIFB_CHER_CH3_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH4                                          4
#define AVR32_ADCIFB_CHER_CH4_MASK                            0x00000010
#define AVR32_ADCIFB_CHER_CH4_OFFSET                                   4
#define AVR32_ADCIFB_CHER_CH4_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH5                                          5
#define AVR32_ADCIFB_CHER_CH5_MASK                            0x00000020
#define AVR32_ADCIFB_CHER_CH5_OFFSET                                   5
#define AVR32_ADCIFB_CHER_CH5_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH6                                          6
#define AVR32_ADCIFB_CHER_CH6_MASK                            0x00000040
#define AVR32_ADCIFB_CHER_CH6_OFFSET                                   6
#define AVR32_ADCIFB_CHER_CH6_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH7                                          7
#define AVR32_ADCIFB_CHER_CH7_MASK                            0x00000080
#define AVR32_ADCIFB_CHER_CH7_OFFSET                                   7
#define AVR32_ADCIFB_CHER_CH7_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH8                                          8
#define AVR32_ADCIFB_CHER_CH8_MASK                            0x00000100
#define AVR32_ADCIFB_CHER_CH8_OFFSET                                   8
#define AVR32_ADCIFB_CHER_CH8_SIZE                                     1
#define AVR32_ADCIFB_CHER_CH9                                          9
#define AVR32_ADCIFB_CHER_CH9_MASK                            0x00000200
#define AVR32_ADCIFB_CHER_CH9_OFFSET                                   9
#define AVR32_ADCIFB_CHER_CH9_SIZE                                     1
#define AVR32_ADCIFB_CHER_MASK                                0xffffffff
#define AVR32_ADCIFB_CHER_RESETVALUE                          0x00000000
#define AVR32_ADCIFB_CHSR                                     0x00000048
#define AVR32_ADCIFB_CHSR_CH0                                          0
#define AVR32_ADCIFB_CHSR_CH0_MASK                            0x00000001
#define AVR32_ADCIFB_CHSR_CH0_OFFSET                                   0
#define AVR32_ADCIFB_CHSR_CH0_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH1                                          1
#define AVR32_ADCIFB_CHSR_CH10                                        10
#define AVR32_ADCIFB_CHSR_CH10_MASK                           0x00000400
#define AVR32_ADCIFB_CHSR_CH10_OFFSET                                 10
#define AVR32_ADCIFB_CHSR_CH10_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH11                                        11
#define AVR32_ADCIFB_CHSR_CH11_MASK                           0x00000800
#define AVR32_ADCIFB_CHSR_CH11_OFFSET                                 11
#define AVR32_ADCIFB_CHSR_CH11_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH12                                        12
#define AVR32_ADCIFB_CHSR_CH12_MASK                           0x00001000
#define AVR32_ADCIFB_CHSR_CH12_OFFSET                                 12
#define AVR32_ADCIFB_CHSR_CH12_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH13                                        13
#define AVR32_ADCIFB_CHSR_CH13_MASK                           0x00002000
#define AVR32_ADCIFB_CHSR_CH13_OFFSET                                 13
#define AVR32_ADCIFB_CHSR_CH13_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH14                                        14
#define AVR32_ADCIFB_CHSR_CH14_MASK                           0x00004000
#define AVR32_ADCIFB_CHSR_CH14_OFFSET                                 14
#define AVR32_ADCIFB_CHSR_CH14_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH15                                        15
#define AVR32_ADCIFB_CHSR_CH15_MASK                           0x00008000
#define AVR32_ADCIFB_CHSR_CH15_OFFSET                                 15
#define AVR32_ADCIFB_CHSR_CH15_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH16                                        16
#define AVR32_ADCIFB_CHSR_CH16_MASK                           0x00010000
#define AVR32_ADCIFB_CHSR_CH16_OFFSET                                 16
#define AVR32_ADCIFB_CHSR_CH16_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH17                                        17
#define AVR32_ADCIFB_CHSR_CH17_MASK                           0x00020000
#define AVR32_ADCIFB_CHSR_CH17_OFFSET                                 17
#define AVR32_ADCIFB_CHSR_CH17_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH18                                        18
#define AVR32_ADCIFB_CHSR_CH18_MASK                           0x00040000
#define AVR32_ADCIFB_CHSR_CH18_OFFSET                                 18
#define AVR32_ADCIFB_CHSR_CH18_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH19                                        19
#define AVR32_ADCIFB_CHSR_CH19_MASK                           0x00080000
#define AVR32_ADCIFB_CHSR_CH19_OFFSET                                 19
#define AVR32_ADCIFB_CHSR_CH19_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH1_MASK                            0x00000002
#define AVR32_ADCIFB_CHSR_CH1_OFFSET                                   1
#define AVR32_ADCIFB_CHSR_CH1_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH2                                          2
#define AVR32_ADCIFB_CHSR_CH20                                        20
#define AVR32_ADCIFB_CHSR_CH20_MASK                           0x00100000
#define AVR32_ADCIFB_CHSR_CH20_OFFSET                                 20
#define AVR32_ADCIFB_CHSR_CH20_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH21                                        21
#define AVR32_ADCIFB_CHSR_CH21_MASK                           0x00200000
#define AVR32_ADCIFB_CHSR_CH21_OFFSET                                 21
#define AVR32_ADCIFB_CHSR_CH21_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH22                                        22
#define AVR32_ADCIFB_CHSR_CH22_MASK                           0x00400000
#define AVR32_ADCIFB_CHSR_CH22_OFFSET                                 22
#define AVR32_ADCIFB_CHSR_CH22_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH23                                        23
#define AVR32_ADCIFB_CHSR_CH23_MASK                           0x00800000
#define AVR32_ADCIFB_CHSR_CH23_OFFSET                                 23
#define AVR32_ADCIFB_CHSR_CH23_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH24                                        24
#define AVR32_ADCIFB_CHSR_CH24_MASK                           0x01000000
#define AVR32_ADCIFB_CHSR_CH24_OFFSET                                 24
#define AVR32_ADCIFB_CHSR_CH24_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH25                                        25
#define AVR32_ADCIFB_CHSR_CH25_MASK                           0x02000000
#define AVR32_ADCIFB_CHSR_CH25_OFFSET                                 25
#define AVR32_ADCIFB_CHSR_CH25_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH26                                        26
#define AVR32_ADCIFB_CHSR_CH26_MASK                           0x04000000
#define AVR32_ADCIFB_CHSR_CH26_OFFSET                                 26
#define AVR32_ADCIFB_CHSR_CH26_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH27                                        27
#define AVR32_ADCIFB_CHSR_CH27_MASK                           0x08000000
#define AVR32_ADCIFB_CHSR_CH27_OFFSET                                 27
#define AVR32_ADCIFB_CHSR_CH27_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH28                                        28
#define AVR32_ADCIFB_CHSR_CH28_MASK                           0x10000000
#define AVR32_ADCIFB_CHSR_CH28_OFFSET                                 28
#define AVR32_ADCIFB_CHSR_CH28_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH29                                        29
#define AVR32_ADCIFB_CHSR_CH29_MASK                           0x20000000
#define AVR32_ADCIFB_CHSR_CH29_OFFSET                                 29
#define AVR32_ADCIFB_CHSR_CH29_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH2_MASK                            0x00000004
#define AVR32_ADCIFB_CHSR_CH2_OFFSET                                   2
#define AVR32_ADCIFB_CHSR_CH2_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH3                                          3
#define AVR32_ADCIFB_CHSR_CH30                                        30
#define AVR32_ADCIFB_CHSR_CH30_MASK                           0x40000000
#define AVR32_ADCIFB_CHSR_CH30_OFFSET                                 30
#define AVR32_ADCIFB_CHSR_CH30_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH31                                        31
#define AVR32_ADCIFB_CHSR_CH31_MASK                           0x80000000
#define AVR32_ADCIFB_CHSR_CH31_OFFSET                                 31
#define AVR32_ADCIFB_CHSR_CH31_SIZE                                    1
#define AVR32_ADCIFB_CHSR_CH3_MASK                            0x00000008
#define AVR32_ADCIFB_CHSR_CH3_OFFSET                                   3
#define AVR32_ADCIFB_CHSR_CH3_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH4                                          4
#define AVR32_ADCIFB_CHSR_CH4_MASK                            0x00000010
#define AVR32_ADCIFB_CHSR_CH4_OFFSET                                   4
#define AVR32_ADCIFB_CHSR_CH4_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH5                                          5
#define AVR32_ADCIFB_CHSR_CH5_MASK                            0x00000020
#define AVR32_ADCIFB_CHSR_CH5_OFFSET                                   5
#define AVR32_ADCIFB_CHSR_CH5_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH6                                          6
#define AVR32_ADCIFB_CHSR_CH6_MASK                            0x00000040
#define AVR32_ADCIFB_CHSR_CH6_OFFSET                                   6
#define AVR32_ADCIFB_CHSR_CH6_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH7                                          7
#define AVR32_ADCIFB_CHSR_CH7_MASK                            0x00000080
#define AVR32_ADCIFB_CHSR_CH7_OFFSET                                   7
#define AVR32_ADCIFB_CHSR_CH7_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH8                                          8
#define AVR32_ADCIFB_CHSR_CH8_MASK                            0x00000100
#define AVR32_ADCIFB_CHSR_CH8_OFFSET                                   8
#define AVR32_ADCIFB_CHSR_CH8_SIZE                                     1
#define AVR32_ADCIFB_CHSR_CH9                                          9
#define AVR32_ADCIFB_CHSR_CH9_MASK                            0x00000200
#define AVR32_ADCIFB_CHSR_CH9_OFFSET                                   9
#define AVR32_ADCIFB_CHSR_CH9_SIZE                                     1
#define AVR32_ADCIFB_CHSR_MASK                                0xffffffff
#define AVR32_ADCIFB_CHSR_RESETVALUE                          0x00000000
#define AVR32_ADCIFB_CLT                                              12
#define AVR32_ADCIFB_CLT_MASK                                 0x00001000
#define AVR32_ADCIFB_CLT_OFFSET                                       12
#define AVR32_ADCIFB_CLT_SIZE                                          1
#define AVR32_ADCIFB_CM                                       0x00000006
#define AVR32_ADCIFB_CR                                       0x00000000
#define AVR32_ADCIFB_CR_DIS                                            9
#define AVR32_ADCIFB_CR_DIS_MASK                              0x00000200
#define AVR32_ADCIFB_CR_DIS_OFFSET                                     9
#define AVR32_ADCIFB_CR_DIS_SIZE                                       1
#define AVR32_ADCIFB_CR_EN                                             8
#define AVR32_ADCIFB_CR_EN_MASK                               0x00000100
#define AVR32_ADCIFB_CR_EN_OFFSET                                      8
#define AVR32_ADCIFB_CR_EN_SIZE                                        1
#define AVR32_ADCIFB_CR_MASK                                  0x00000303
#define AVR32_ADCIFB_CR_RESETVALUE                            0x00000000
#define AVR32_ADCIFB_CR_START                                          1
#define AVR32_ADCIFB_CR_START_MASK                            0x00000002
#define AVR32_ADCIFB_CR_START_OFFSET                                   1
#define AVR32_ADCIFB_CR_START_SIZE                                     1
#define AVR32_ADCIFB_CR_SWRST                                          0
#define AVR32_ADCIFB_CR_SWRST_MASK                            0x00000001
#define AVR32_ADCIFB_CR_SWRST_OFFSET                                   0
#define AVR32_ADCIFB_CR_SWRST_SIZE                                     1
#define AVR32_ADCIFB_CVR                                      0x00000010
#define AVR32_ADCIFB_CVR_HV                                           16
#define AVR32_ADCIFB_CVR_HV_MASK                              0x0fff0000
#define AVR32_ADCIFB_CVR_HV_OFFSET                                    16
#define AVR32_ADCIFB_CVR_HV_SIZE                                      12
#define AVR32_ADCIFB_CVR_LV                                            0
#define AVR32_ADCIFB_CVR_LV_MASK                              0x00000fff
#define AVR32_ADCIFB_CVR_LV_OFFSET                                     0
#define AVR32_ADCIFB_CVR_LV_SIZE                                      12
#define AVR32_ADCIFB_CVR_MASK                                 0x0fff0fff
#define AVR32_ADCIFB_CVR_RESETVALUE                           0x00000000
#define AVR32_ADCIFB_DIS                                               9
#define AVR32_ADCIFB_DIS_MASK                                 0x00000200
#define AVR32_ADCIFB_DIS_OFFSET                                        9
#define AVR32_ADCIFB_DIS_SIZE                                          1
#define AVR32_ADCIFB_DRDY                                              0
#define AVR32_ADCIFB_DRDY_MASK                                0x00000001
#define AVR32_ADCIFB_DRDY_OFFSET                                       0
#define AVR32_ADCIFB_DRDY_SIZE                                         1
#define AVR32_ADCIFB_EN_SIZE                                           1
#define AVR32_ADCIFB_ETAE                                     0x00000003
#define AVR32_ADCIFB_ETFE                                     0x00000002
#define AVR32_ADCIFB_ETRE                                     0x00000001
#define AVR32_ADCIFB_EVT                                      0x00000007
#define AVR32_ADCIFB_HV                                               16
#define AVR32_ADCIFB_HV_MASK                                  0x0fff0000
#define AVR32_ADCIFB_HV_OFFSET                                        16
#define AVR32_ADCIFB_HV_SIZE                                          12
#define AVR32_ADCIFB_ICR                                      0x0000001c
#define AVR32_ADCIFB_ICR_BUSY                                          9
#define AVR32_ADCIFB_ICR_BUSY_MASK                            0x00000200
#define AVR32_ADCIFB_ICR_BUSY_OFFSET                                   9
#define AVR32_ADCIFB_ICR_BUSY_SIZE                                     1
#define AVR32_ADCIFB_ICR_CELSE                                        14
#define AVR32_ADCIFB_ICR_CELSE_MASK                           0x00004000
#define AVR32_ADCIFB_ICR_CELSE_OFFSET                                 14
#define AVR32_ADCIFB_ICR_CELSE_SIZE                                    1
#define AVR32_ADCIFB_ICR_CGT                                          13
#define AVR32_ADCIFB_ICR_CGT_MASK                             0x00002000
#define AVR32_ADCIFB_ICR_CGT_OFFSET                                   13
#define AVR32_ADCIFB_ICR_CGT_SIZE                                      1
#define AVR32_ADCIFB_ICR_CLT                                          12
#define AVR32_ADCIFB_ICR_CLT_MASK                             0x00001000
#define AVR32_ADCIFB_ICR_CLT_OFFSET                                   12
#define AVR32_ADCIFB_ICR_CLT_SIZE                                      1
#define AVR32_ADCIFB_ICR_DRDY                                          0
#define AVR32_ADCIFB_ICR_DRDY_MASK                            0x00000001
#define AVR32_ADCIFB_ICR_DRDY_OFFSET                                   0
#define AVR32_ADCIFB_ICR_DRDY_SIZE                                     1
#define AVR32_ADCIFB_ICR_MASK                                 0x00007333
#define AVR32_ADCIFB_ICR_NOCNT                                         5
#define AVR32_ADCIFB_ICR_NOCNT_MASK                           0x00000020
#define AVR32_ADCIFB_ICR_NOCNT_OFFSET                                  5
#define AVR32_ADCIFB_ICR_NOCNT_SIZE                                    1
#define AVR32_ADCIFB_ICR_OVRE                                          1
#define AVR32_ADCIFB_ICR_OVRE_MASK                            0x00000002
#define AVR32_ADCIFB_ICR_OVRE_OFFSET                                   1
#define AVR32_ADCIFB_ICR_OVRE_SIZE                                     1
#define AVR32_ADCIFB_ICR_PENCNT                                        4
#define AVR32_ADCIFB_ICR_PENCNT_MASK                          0x00000010
#define AVR32_ADCIFB_ICR_PENCNT_OFFSET                                 4
#define AVR32_ADCIFB_ICR_PENCNT_SIZE                                   1
#define AVR32_ADCIFB_ICR_READY                                         8
#define AVR32_ADCIFB_ICR_READY_MASK                           0x00000100
#define AVR32_ADCIFB_ICR_READY_OFFSET                                  8
#define AVR32_ADCIFB_ICR_READY_SIZE                                    1
#define AVR32_ADCIFB_ICR_RESETVALUE                           0x00000000
#define AVR32_ADCIFB_IDR                                      0x00000024
#define AVR32_ADCIFB_IDR_BUSY                                          9
#define AVR32_ADCIFB_IDR_BUSY_MASK                            0x00000200
#define AVR32_ADCIFB_IDR_BUSY_OFFSET                                   9
#define AVR32_ADCIFB_IDR_BUSY_SIZE                                     1
#define AVR32_ADCIFB_IDR_CELSE                                        14
#define AVR32_ADCIFB_IDR_CELSE_MASK                           0x00004000
#define AVR32_ADCIFB_IDR_CELSE_OFFSET                                 14
#define AVR32_ADCIFB_IDR_CELSE_SIZE                                    1
#define AVR32_ADCIFB_IDR_CGT                                          13
#define AVR32_ADCIFB_IDR_CGT_MASK                             0x00002000
#define AVR32_ADCIFB_IDR_CGT_OFFSET                                   13
#define AVR32_ADCIFB_IDR_CGT_SIZE                                      1
#define AVR32_ADCIFB_IDR_CLT                                          12
#define AVR32_ADCIFB_IDR_CLT_MASK                             0x00001000
#define AVR32_ADCIFB_IDR_CLT_OFFSET                                   12
#define AVR32_ADCIFB_IDR_CLT_SIZE                                      1
#define AVR32_ADCIFB_IDR_DRDY                                          0
#define AVR32_ADCIFB_IDR_DRDY_MASK                            0x00000001
#define AVR32_ADCIFB_IDR_DRDY_OFFSET                                   0
#define AVR32_ADCIFB_IDR_DRDY_SIZE                                     1
#define AVR32_ADCIFB_IDR_MASK                                 0x00007333
#define AVR32_ADCIFB_IDR_NOCNT                                         5
#define AVR32_ADCIFB_IDR_NOCNT_MASK                           0x00000020
#define AVR32_ADCIFB_IDR_NOCNT_OFFSET                                  5
#define AVR32_ADCIFB_IDR_NOCNT_SIZE                                    1
#define AVR32_ADCIFB_IDR_OVRE                                          1
#define AVR32_ADCIFB_IDR_OVRE_MASK                            0x00000002
#define AVR32_ADCIFB_IDR_OVRE_OFFSET                                   1
#define AVR32_ADCIFB_IDR_OVRE_SIZE                                     1
#define AVR32_ADCIFB_IDR_PENCNT                                        4
#define AVR32_ADCIFB_IDR_PENCNT_MASK                          0x00000010
#define AVR32_ADCIFB_IDR_PENCNT_OFFSET                                 4
#define AVR32_ADCIFB_IDR_PENCNT_SIZE                                   1
#define AVR32_ADCIFB_IDR_READY                                         8
#define AVR32_ADCIFB_IDR_READY_MASK                           0x00000100
#define AVR32_ADCIFB_IDR_READY_OFFSET                                  8
#define AVR32_ADCIFB_IDR_READY_SIZE                                    1
#define AVR32_ADCIFB_IDR_RESETVALUE                           0x00000000
#define AVR32_ADCIFB_IER                                      0x00000020
#define AVR32_ADCIFB_IER_BUSY                                          9
#define AVR32_ADCIFB_IER_BUSY_MASK                            0x00000200
#define AVR32_ADCIFB_IER_BUSY_OFFSET                                   9
#define AVR32_ADCIFB_IER_BUSY_SIZE                                     1
#define AVR32_ADCIFB_IER_CELSE                                        14
#define AVR32_ADCIFB_IER_CELSE_MASK                           0x00004000
#define AVR32_ADCIFB_IER_CELSE_OFFSET                                 14
#define AVR32_ADCIFB_IER_CELSE_SIZE                                    1
#define AVR32_ADCIFB_IER_CGT                                          13
#define AVR32_ADCIFB_IER_CGT_MASK                             0x00002000
#define AVR32_ADCIFB_IER_CGT_OFFSET                                   13
#define AVR32_ADCIFB_IER_CGT_SIZE                                      1
#define AVR32_ADCIFB_IER_CLT                                          12
#define AVR32_ADCIFB_IER_CLT_MASK                             0x00001000
#define AVR32_ADCIFB_IER_CLT_OFFSET                                   12
#define AVR32_ADCIFB_IER_CLT_SIZE                                      1
#define AVR32_ADCIFB_IER_DRDY                                          0
#define AVR32_ADCIFB_IER_DRDY_MASK                            0x00000001
#define AVR32_ADCIFB_IER_DRDY_OFFSET                                   0
#define AVR32_ADCIFB_IER_DRDY_SIZE                                     1
#define AVR32_ADCIFB_IER_MASK                                 0x00007333
#define AVR32_ADCIFB_IER_NOCNT                                         5
#define AVR32_ADCIFB_IER_NOCNT_MASK                           0x00000020
#define AVR32_ADCIFB_IER_NOCNT_OFFSET                                  5
#define AVR32_ADCIFB_IER_NOCNT_SIZE                                    1
#define AVR32_ADCIFB_IER_OVRE                                          1
#define AVR32_ADCIFB_IER_OVRE_MASK                            0x00000002
#define AVR32_ADCIFB_IER_OVRE_OFFSET                                   1
#define AVR32_ADCIFB_IER_OVRE_SIZE                                     1
#define AVR32_ADCIFB_IER_PENCNT                                        4
#define AVR32_ADCIFB_IER_PENCNT_MASK                          0x00000010
#define AVR32_ADCIFB_IER_PENCNT_OFFSET                                 4
#define AVR32_ADCIFB_IER_PENCNT_SIZE                                   1
#define AVR32_ADCIFB_IER_READY                                         8
#define AVR32_ADCIFB_IER_READY_MASK                           0x00000100
#define AVR32_ADCIFB_IER_READY_OFFSET                                  8
#define AVR32_ADCIFB_IER_READY_SIZE                                    1
#define AVR32_ADCIFB_IER_RESETVALUE                           0x00000000
#define AVR32_ADCIFB_IMR                                      0x00000028
#define AVR32_ADCIFB_IMR_BUSY                                          9
#define AVR32_ADCIFB_IMR_BUSY_MASK                            0x00000200
#define AVR32_ADCIFB_IMR_BUSY_OFFSET                                   9
#define AVR32_ADCIFB_IMR_BUSY_SIZE                                     1
#define AVR32_ADCIFB_IMR_CELSE                                        14
#define AVR32_ADCIFB_IMR_CELSE_MASK                           0x00004000
#define AVR32_ADCIFB_IMR_CELSE_OFFSET                                 14
#define AVR32_ADCIFB_IMR_CELSE_SIZE                                    1
#define AVR32_ADCIFB_IMR_CGT                                          13
#define AVR32_ADCIFB_IMR_CGT_MASK                             0x00002000
#define AVR32_ADCIFB_IMR_CGT_OFFSET                                   13
#define AVR32_ADCIFB_IMR_CGT_SIZE                                      1
#define AVR32_ADCIFB_IMR_CLT                                          12
#define AVR32_ADCIFB_IMR_CLT_MASK                             0x00001000
#define AVR32_ADCIFB_IMR_CLT_OFFSET                                   12
#define AVR32_ADCIFB_IMR_CLT_SIZE                                      1
#define AVR32_ADCIFB_IMR_DRDY                                          0
#define AVR32_ADCIFB_IMR_DRDY_MASK                            0x00000001
#define AVR32_ADCIFB_IMR_DRDY_OFFSET                                   0
#define AVR32_ADCIFB_IMR_DRDY_SIZE                                     1
#define AVR32_ADCIFB_IMR_MASK                                 0x00007333
#define AVR32_ADCIFB_IMR_NOCNT                                         5
#define AVR32_ADCIFB_IMR_NOCNT_MASK                           0x00000020
#define AVR32_ADCIFB_IMR_NOCNT_OFFSET                                  5
#define AVR32_ADCIFB_IMR_NOCNT_SIZE                                    1
#define AVR32_ADCIFB_IMR_OVRE                                          1
#define AVR32_ADCIFB_IMR_OVRE_MASK                            0x00000002
#define AVR32_ADCIFB_IMR_OVRE_OFFSET                                   1
#define AVR32_ADCIFB_IMR_OVRE_SIZE                                     1
#define AVR32_ADCIFB_IMR_PENCNT                                        4
#define AVR32_ADCIFB_IMR_PENCNT_MASK                          0x00000010
#define AVR32_ADCIFB_IMR_PENCNT_OFFSET                                 4
#define AVR32_ADCIFB_IMR_PENCNT_SIZE                                   1
#define AVR32_ADCIFB_IMR_READY                                         8
#define AVR32_ADCIFB_IMR_READY_MASK                           0x00000100
#define AVR32_ADCIFB_IMR_READY_OFFSET                                  8
#define AVR32_ADCIFB_IMR_READY_SIZE                                    1
#define AVR32_ADCIFB_IMR_RESETVALUE                           0x00000000
#define AVR32_ADCIFB_ISR                                      0x00000018
#define AVR32_ADCIFB_ISR_BUSY                                          9
#define AVR32_ADCIFB_ISR_BUSY_MASK                            0x00000200
#define AVR32_ADCIFB_ISR_BUSY_OFFSET                                   9
#define AVR32_ADCIFB_ISR_BUSY_SIZE                                     1
#define AVR32_ADCIFB_ISR_CELSE                                        14
#define AVR32_ADCIFB_ISR_CELSE_MASK                           0x00004000
#define AVR32_ADCIFB_ISR_CELSE_OFFSET                                 14
#define AVR32_ADCIFB_ISR_CELSE_SIZE                                    1
#define AVR32_ADCIFB_ISR_CGT                                          13
#define AVR32_ADCIFB_ISR_CGT_MASK                             0x00002000
#define AVR32_ADCIFB_ISR_CGT_OFFSET                                   13
#define AVR32_ADCIFB_ISR_CGT_SIZE                                      1
#define AVR32_ADCIFB_ISR_CLT                                          12
#define AVR32_ADCIFB_ISR_CLT_MASK                             0x00001000
#define AVR32_ADCIFB_ISR_CLT_OFFSET                                   12
#define AVR32_ADCIFB_ISR_CLT_SIZE                                      1
#define AVR32_ADCIFB_ISR_DRDY                                          0
#define AVR32_ADCIFB_ISR_DRDY_MASK                            0x00000001
#define AVR32_ADCIFB_ISR_DRDY_OFFSET                                   0
#define AVR32_ADCIFB_ISR_DRDY_SIZE                                     1
#define AVR32_ADCIFB_ISR_MASK                                 0x00007333
#define AVR32_ADCIFB_ISR_NOCNT                                         5
#define AVR32_ADCIFB_ISR_NOCNT_MASK                           0x00000020
#define AVR32_ADCIFB_ISR_NOCNT_OFFSET                                  5
#define AVR32_ADCIFB_ISR_NOCNT_SIZE                                    1
#define AVR32_ADCIFB_ISR_OVRE                                          1
#define AVR32_ADCIFB_ISR_OVRE_MASK                            0x00000002
#define AVR32_ADCIFB_ISR_OVRE_OFFSET                                   1
#define AVR32_ADCIFB_ISR_OVRE_SIZE                                     1
#define AVR32_ADCIFB_ISR_PENCNT                                        4
#define AVR32_ADCIFB_ISR_PENCNT_MASK                          0x00000010
#define AVR32_ADCIFB_ISR_PENCNT_OFFSET                                 4
#define AVR32_ADCIFB_ISR_PENCNT_SIZE                                   1
#define AVR32_ADCIFB_ISR_READY                                         8
#define AVR32_ADCIFB_ISR_READY_MASK                           0x00000100
#define AVR32_ADCIFB_ISR_READY_OFFSET                                  8
#define AVR32_ADCIFB_ISR_READY_SIZE                                    1
#define AVR32_ADCIFB_ISR_RESETVALUE                           0x00000000
#define AVR32_ADCIFB_LCCH                                             16
#define AVR32_ADCIFB_LCCH_MASK                                0x00ff0000
#define AVR32_ADCIFB_LCCH_OFFSET                                      16
#define AVR32_ADCIFB_LCCH_SIZE                                         8
#define AVR32_ADCIFB_LCDR                                     0x0000002c
#define AVR32_ADCIFB_LCDR_LCCH                                        16
#define AVR32_ADCIFB_LCDR_LCCH_MASK                           0x00ff0000
#define AVR32_ADCIFB_LCDR_LCCH_OFFSET                                 16
#define AVR32_ADCIFB_LCDR_LCCH_SIZE                                    8
#define AVR32_ADCIFB_LCDR_LDATA                                        0
#define AVR32_ADCIFB_LCDR_LDATA_MASK                          0x00000fff
#define AVR32_ADCIFB_LCDR_LDATA_OFFSET                                 0
#define AVR32_ADCIFB_LCDR_LDATA_SIZE                                  12
#define AVR32_ADCIFB_LCDR_MASK                                0x00ff0fff
#define AVR32_ADCIFB_LCDR_RESETVALUE                          0x00000000
#define AVR32_ADCIFB_LDATA                                             0
#define AVR32_ADCIFB_LDATA_MASK                               0x00000fff
#define AVR32_ADCIFB_LDATA_OFFSET                                      0
#define AVR32_ADCIFB_LDATA_SIZE                                       12
#define AVR32_ADCIFB_LV                                                0
#define AVR32_ADCIFB_LV_MASK                                  0x00000fff
#define AVR32_ADCIFB_LV_OFFSET                                         0
#define AVR32_ADCIFB_LV_SIZE                                          12
#define AVR32_ADCIFB_MR                                       0x00000004
#define AVR32_ADCIFB_MR_ACE                                            5
#define AVR32_ADCIFB_MR_ACE_MASK                              0x00000020
#define AVR32_ADCIFB_MR_ACE_OFFSET                                     5
#define AVR32_ADCIFB_MR_ACE_SIZE                                       1
#define AVR32_ADCIFB_MR_APOE                                           6
#define AVR32_ADCIFB_MR_APOE_MASK                             0x00000040
#define AVR32_ADCIFB_MR_APOE_OFFSET                                    6
#define AVR32_ADCIFB_MR_APOE_SIZE                                      1
#define AVR32_ADCIFB_MR_MASK                                  0xf0ff0071
#define AVR32_ADCIFB_MR_PENDBC                                        28
#define AVR32_ADCIFB_MR_PENDBC_MASK                           0xf0000000
#define AVR32_ADCIFB_MR_PENDBC_OFFSET                                 28
#define AVR32_ADCIFB_MR_PENDBC_SIZE                                    4
#define AVR32_ADCIFB_MR_PENDET                                         4
#define AVR32_ADCIFB_MR_PENDET_MASK                           0x00000010
#define AVR32_ADCIFB_MR_PENDET_OFFSET                                  4
#define AVR32_ADCIFB_MR_PENDET_SIZE                                    1
#define AVR32_ADCIFB_MR_RESETVALUE                            0x00000000
#define AVR32_ADCIFB_MR_TSAMOD                                         0
#define AVR32_ADCIFB_MR_TSAMOD_MASK                           0x00000001
#define AVR32_ADCIFB_MR_TSAMOD_OFFSET                                  0
#define AVR32_ADCIFB_MR_TSAMOD_SIZE                                    1
#define AVR32_ADCIFB_MR_TSPO                                          16
#define AVR32_ADCIFB_MR_TSPO_MASK                             0x00ff0000
#define AVR32_ADCIFB_MR_TSPO_OFFSET                                   16
#define AVR32_ADCIFB_MR_TSPO_SIZE                                      8
#define AVR32_ADCIFB_NOCNT                                             5
#define AVR32_ADCIFB_NOCNT_MASK                               0x00000020
#define AVR32_ADCIFB_NOCNT_OFFSET                                      5
#define AVR32_ADCIFB_NOCNT_SIZE                                        1
#define AVR32_ADCIFB_NORM                                     0x00000000
#define AVR32_ADCIFB_NT                                       0x00000000
#define AVR32_ADCIFB_OVRE                                              1
#define AVR32_ADCIFB_OVRE_MASK                                0x00000002
#define AVR32_ADCIFB_OVRE_OFFSET                                       1
#define AVR32_ADCIFB_OVRE_SIZE                                         1
#define AVR32_ADCIFB_PARAMETER                                0x00000030
#define AVR32_ADCIFB_PARAMETER_CH0                                     0
#define AVR32_ADCIFB_PARAMETER_CH0_MASK                       0x00000001
#define AVR32_ADCIFB_PARAMETER_CH0_OFFSET                              0
#define AVR32_ADCIFB_PARAMETER_CH0_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH1                                     1
#define AVR32_ADCIFB_PARAMETER_CH10                                   10
#define AVR32_ADCIFB_PARAMETER_CH10_MASK                      0x00000400
#define AVR32_ADCIFB_PARAMETER_CH10_OFFSET                            10
#define AVR32_ADCIFB_PARAMETER_CH10_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH11                                   11
#define AVR32_ADCIFB_PARAMETER_CH11_MASK                      0x00000800
#define AVR32_ADCIFB_PARAMETER_CH11_OFFSET                            11
#define AVR32_ADCIFB_PARAMETER_CH11_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH12                                   12
#define AVR32_ADCIFB_PARAMETER_CH12_MASK                      0x00001000
#define AVR32_ADCIFB_PARAMETER_CH12_OFFSET                            12
#define AVR32_ADCIFB_PARAMETER_CH12_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH13                                   13
#define AVR32_ADCIFB_PARAMETER_CH13_MASK                      0x00002000
#define AVR32_ADCIFB_PARAMETER_CH13_OFFSET                            13
#define AVR32_ADCIFB_PARAMETER_CH13_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH14                                   14
#define AVR32_ADCIFB_PARAMETER_CH14_MASK                      0x00004000
#define AVR32_ADCIFB_PARAMETER_CH14_OFFSET                            14
#define AVR32_ADCIFB_PARAMETER_CH14_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH15                                   15
#define AVR32_ADCIFB_PARAMETER_CH15_MASK                      0x00008000
#define AVR32_ADCIFB_PARAMETER_CH15_OFFSET                            15
#define AVR32_ADCIFB_PARAMETER_CH15_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH16                                   16
#define AVR32_ADCIFB_PARAMETER_CH16_MASK                      0x00010000
#define AVR32_ADCIFB_PARAMETER_CH16_OFFSET                            16
#define AVR32_ADCIFB_PARAMETER_CH16_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH17                                   17
#define AVR32_ADCIFB_PARAMETER_CH17_MASK                      0x00020000
#define AVR32_ADCIFB_PARAMETER_CH17_OFFSET                            17
#define AVR32_ADCIFB_PARAMETER_CH17_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH18                                   18
#define AVR32_ADCIFB_PARAMETER_CH18_MASK                      0x00040000
#define AVR32_ADCIFB_PARAMETER_CH18_OFFSET                            18
#define AVR32_ADCIFB_PARAMETER_CH18_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH19                                   19
#define AVR32_ADCIFB_PARAMETER_CH19_MASK                      0x00080000
#define AVR32_ADCIFB_PARAMETER_CH19_OFFSET                            19
#define AVR32_ADCIFB_PARAMETER_CH19_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH1_MASK                       0x00000002
#define AVR32_ADCIFB_PARAMETER_CH1_OFFSET                              1
#define AVR32_ADCIFB_PARAMETER_CH1_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH2                                     2
#define AVR32_ADCIFB_PARAMETER_CH20                                   20
#define AVR32_ADCIFB_PARAMETER_CH20_MASK                      0x00100000
#define AVR32_ADCIFB_PARAMETER_CH20_OFFSET                            20
#define AVR32_ADCIFB_PARAMETER_CH20_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH21                                   21
#define AVR32_ADCIFB_PARAMETER_CH21_MASK                      0x00200000
#define AVR32_ADCIFB_PARAMETER_CH21_OFFSET                            21
#define AVR32_ADCIFB_PARAMETER_CH21_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH22                                   22
#define AVR32_ADCIFB_PARAMETER_CH22_MASK                      0x00400000
#define AVR32_ADCIFB_PARAMETER_CH22_OFFSET                            22
#define AVR32_ADCIFB_PARAMETER_CH22_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH23                                   23
#define AVR32_ADCIFB_PARAMETER_CH23_MASK                      0x00800000
#define AVR32_ADCIFB_PARAMETER_CH23_OFFSET                            23
#define AVR32_ADCIFB_PARAMETER_CH23_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH24                                   24
#define AVR32_ADCIFB_PARAMETER_CH24_MASK                      0x01000000
#define AVR32_ADCIFB_PARAMETER_CH24_OFFSET                            24
#define AVR32_ADCIFB_PARAMETER_CH24_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH25                                   25
#define AVR32_ADCIFB_PARAMETER_CH25_MASK                      0x02000000
#define AVR32_ADCIFB_PARAMETER_CH25_OFFSET                            25
#define AVR32_ADCIFB_PARAMETER_CH25_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH26                                   26
#define AVR32_ADCIFB_PARAMETER_CH26_MASK                      0x04000000
#define AVR32_ADCIFB_PARAMETER_CH26_OFFSET                            26
#define AVR32_ADCIFB_PARAMETER_CH26_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH27                                   27
#define AVR32_ADCIFB_PARAMETER_CH27_MASK                      0x08000000
#define AVR32_ADCIFB_PARAMETER_CH27_OFFSET                            27
#define AVR32_ADCIFB_PARAMETER_CH27_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH28                                   28
#define AVR32_ADCIFB_PARAMETER_CH28_MASK                      0x10000000
#define AVR32_ADCIFB_PARAMETER_CH28_OFFSET                            28
#define AVR32_ADCIFB_PARAMETER_CH28_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH29                                   29
#define AVR32_ADCIFB_PARAMETER_CH29_MASK                      0x20000000
#define AVR32_ADCIFB_PARAMETER_CH29_OFFSET                            29
#define AVR32_ADCIFB_PARAMETER_CH29_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH2_MASK                       0x00000004
#define AVR32_ADCIFB_PARAMETER_CH2_OFFSET                              2
#define AVR32_ADCIFB_PARAMETER_CH2_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH3                                     3
#define AVR32_ADCIFB_PARAMETER_CH30                                   30
#define AVR32_ADCIFB_PARAMETER_CH30_MASK                      0x40000000
#define AVR32_ADCIFB_PARAMETER_CH30_OFFSET                            30
#define AVR32_ADCIFB_PARAMETER_CH30_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH31                                   31
#define AVR32_ADCIFB_PARAMETER_CH31_MASK                      0x80000000
#define AVR32_ADCIFB_PARAMETER_CH31_OFFSET                            31
#define AVR32_ADCIFB_PARAMETER_CH31_SIZE                               1
#define AVR32_ADCIFB_PARAMETER_CH3_MASK                       0x00000008
#define AVR32_ADCIFB_PARAMETER_CH3_OFFSET                              3
#define AVR32_ADCIFB_PARAMETER_CH3_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH4                                     4
#define AVR32_ADCIFB_PARAMETER_CH4_MASK                       0x00000010
#define AVR32_ADCIFB_PARAMETER_CH4_OFFSET                              4
#define AVR32_ADCIFB_PARAMETER_CH4_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH5                                     5
#define AVR32_ADCIFB_PARAMETER_CH5_MASK                       0x00000020
#define AVR32_ADCIFB_PARAMETER_CH5_OFFSET                              5
#define AVR32_ADCIFB_PARAMETER_CH5_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH6                                     6
#define AVR32_ADCIFB_PARAMETER_CH6_MASK                       0x00000040
#define AVR32_ADCIFB_PARAMETER_CH6_OFFSET                              6
#define AVR32_ADCIFB_PARAMETER_CH6_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH7                                     7
#define AVR32_ADCIFB_PARAMETER_CH7_MASK                       0x00000080
#define AVR32_ADCIFB_PARAMETER_CH7_OFFSET                              7
#define AVR32_ADCIFB_PARAMETER_CH7_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH8                                     8
#define AVR32_ADCIFB_PARAMETER_CH8_MASK                       0x00000100
#define AVR32_ADCIFB_PARAMETER_CH8_OFFSET                              8
#define AVR32_ADCIFB_PARAMETER_CH8_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_CH9                                     9
#define AVR32_ADCIFB_PARAMETER_CH9_MASK                       0x00000200
#define AVR32_ADCIFB_PARAMETER_CH9_OFFSET                              9
#define AVR32_ADCIFB_PARAMETER_CH9_SIZE                                1
#define AVR32_ADCIFB_PARAMETER_MASK                           0xffffffff
#define AVR32_ADCIFB_PARAMETER_RESETVALUE                     0x00000000
#define AVR32_ADCIFB_PDT                                      0x00000004
#define AVR32_ADCIFB_PENCNT                                            4
#define AVR32_ADCIFB_PENCNT_MASK                              0x00000010
#define AVR32_ADCIFB_PENCNT_OFFSET                                     4
#define AVR32_ADCIFB_PENCNT_SIZE                                       1
#define AVR32_ADCIFB_PENDBC                                           28
#define AVR32_ADCIFB_PENDBC_MASK                              0xf0000000
#define AVR32_ADCIFB_PENDBC_OFFSET                                    28
#define AVR32_ADCIFB_PENDBC_SIZE                                       4
#define AVR32_ADCIFB_PENDET                                            4
#define AVR32_ADCIFB_PENDET_MASK                              0x00000010
#define AVR32_ADCIFB_PENDET_OFFSET                                     4
#define AVR32_ADCIFB_PENDET_SIZE                                       1
#define AVR32_ADCIFB_PRESCAL                                           8
#define AVR32_ADCIFB_PRESCAL_MASK                             0x00003f00
#define AVR32_ADCIFB_PRESCAL_OFFSET                                    8
#define AVR32_ADCIFB_PRESCAL_SIZE                                      6
#define AVR32_ADCIFB_PT                                       0x00000005
#define AVR32_ADCIFB_READY                                             8
#define AVR32_ADCIFB_READY_MASK                               0x00000100
#define AVR32_ADCIFB_READY_OFFSET                                      8
#define AVR32_ADCIFB_READY_SIZE                                        1
#define AVR32_ADCIFB_RES                                               4
#define AVR32_ADCIFB_RES_10BIT                                0x00000001
#define AVR32_ADCIFB_RES_11BIT                                0x00000002
#define AVR32_ADCIFB_RES_12BIT                                0x00000003
#define AVR32_ADCIFB_RES_8BIT                                 0x00000000
#define AVR32_ADCIFB_RES_MASK                                 0x00000030
#define AVR32_ADCIFB_RES_OFFSET                                        4
#define AVR32_ADCIFB_RES_SIZE                                          2
#define AVR32_ADCIFB_SHTIM                                            24
#define AVR32_ADCIFB_SHTIM_MASK                               0x0f000000
#define AVR32_ADCIFB_SHTIM_OFFSET                                     24
#define AVR32_ADCIFB_SHTIM_SIZE                                        4
#define AVR32_ADCIFB_SLEEP_MASK                               0x00000001
#define AVR32_ADCIFB_SLEEP_NORM                               0x00000000
#define AVR32_ADCIFB_SLEEP_OFFSET                                      0
#define AVR32_ADCIFB_SLEEP_SIZE                                        1
#define AVR32_ADCIFB_SLEEP_SLEEP                              0x00000001
#define AVR32_ADCIFB_SR                                       0x00000014
#define AVR32_ADCIFB_SR_BUSY                                           9
#define AVR32_ADCIFB_SR_BUSY_MASK                             0x00000200
#define AVR32_ADCIFB_SR_BUSY_OFFSET                                    9
#define AVR32_ADCIFB_SR_BUSY_SIZE                                      1
#define AVR32_ADCIFB_SR_CELSE                                         14
#define AVR32_ADCIFB_SR_CELSE_MASK                            0x00004000
#define AVR32_ADCIFB_SR_CELSE_OFFSET                                  14
#define AVR32_ADCIFB_SR_CELSE_SIZE                                     1
#define AVR32_ADCIFB_SR_CGT                                           13
#define AVR32_ADCIFB_SR_CGT_MASK                              0x00002000
#define AVR32_ADCIFB_SR_CGT_OFFSET                                    13
#define AVR32_ADCIFB_SR_CGT_SIZE                                       1
#define AVR32_ADCIFB_SR_CLT                                           12
#define AVR32_ADCIFB_SR_CLT_MASK                              0x00001000
#define AVR32_ADCIFB_SR_CLT_OFFSET                                    12
#define AVR32_ADCIFB_SR_CLT_SIZE                                       1
#define AVR32_ADCIFB_SR_DRDY                                           0
#define AVR32_ADCIFB_SR_DRDY_MASK                             0x00000001
#define AVR32_ADCIFB_SR_DRDY_OFFSET                                    0
#define AVR32_ADCIFB_SR_DRDY_SIZE                                      1
#define AVR32_ADCIFB_SR_EN                                            24
#define AVR32_ADCIFB_SR_EN_MASK                               0x01000000
#define AVR32_ADCIFB_SR_EN_OFFSET                                     24
#define AVR32_ADCIFB_SR_EN_SIZE                                        1
#define AVR32_ADCIFB_SR_MASK                                  0x01007333
#define AVR32_ADCIFB_SR_NOCNT                                          5
#define AVR32_ADCIFB_SR_NOCNT_MASK                            0x00000020
#define AVR32_ADCIFB_SR_NOCNT_OFFSET                                   5
#define AVR32_ADCIFB_SR_NOCNT_SIZE                                     1
#define AVR32_ADCIFB_SR_OVRE                                           1
#define AVR32_ADCIFB_SR_OVRE_MASK                             0x00000002
#define AVR32_ADCIFB_SR_OVRE_OFFSET                                    1
#define AVR32_ADCIFB_SR_OVRE_SIZE                                      1
#define AVR32_ADCIFB_SR_PENCNT                                         4
#define AVR32_ADCIFB_SR_PENCNT_MASK                           0x00000010
#define AVR32_ADCIFB_SR_PENCNT_OFFSET                                  4
#define AVR32_ADCIFB_SR_PENCNT_SIZE                                    1
#define AVR32_ADCIFB_SR_READY                                          8
#define AVR32_ADCIFB_SR_READY_MASK                            0x00000100
#define AVR32_ADCIFB_SR_READY_OFFSET                                   8
#define AVR32_ADCIFB_SR_READY_SIZE                                     1
#define AVR32_ADCIFB_SR_RESETVALUE                            0x00000000
#define AVR32_ADCIFB_START                                             1
#define AVR32_ADCIFB_STARTUP                                          16
#define AVR32_ADCIFB_STARTUP_MASK                             0x007f0000
#define AVR32_ADCIFB_STARTUP_OFFSET                                   16
#define AVR32_ADCIFB_STARTUP_SIZE                                      7
#define AVR32_ADCIFB_START_MASK                               0x00000002
#define AVR32_ADCIFB_START_OFFSET                                      1
#define AVR32_ADCIFB_START_SIZE                                        1
#define AVR32_ADCIFB_SWRST                                             0
#define AVR32_ADCIFB_SWRST_MASK                               0x00000001
#define AVR32_ADCIFB_SWRST_OFFSET                                      0
#define AVR32_ADCIFB_SWRST_SIZE                                        1
#define AVR32_ADCIFB_TRGMOD                                            0
#define AVR32_ADCIFB_TRGMOD_CM                                0x00000006
#define AVR32_ADCIFB_TRGMOD_ETAE                              0x00000003
#define AVR32_ADCIFB_TRGMOD_ETFE                              0x00000002
#define AVR32_ADCIFB_TRGMOD_ETRE                              0x00000001
#define AVR32_ADCIFB_TRGMOD_EVT                               0x00000007
#define AVR32_ADCIFB_TRGMOD_MASK                              0x00000007
#define AVR32_ADCIFB_TRGMOD_NT                                0x00000000
#define AVR32_ADCIFB_TRGMOD_OFFSET                                     0
#define AVR32_ADCIFB_TRGMOD_PDT                               0x00000004
#define AVR32_ADCIFB_TRGMOD_PT                                0x00000005
#define AVR32_ADCIFB_TRGMOD_SIZE                                       3
#define AVR32_ADCIFB_TRGPER                                           16
#define AVR32_ADCIFB_TRGPER_MASK                              0xffff0000
#define AVR32_ADCIFB_TRGPER_OFFSET                                    16
#define AVR32_ADCIFB_TRGPER_SIZE                                      16
#define AVR32_ADCIFB_TRGR                                     0x0000000c
#define AVR32_ADCIFB_TRGR_MASK                                0xffff0007
#define AVR32_ADCIFB_TRGR_RESETVALUE                          0x00000000
#define AVR32_ADCIFB_TRGR_TRGMOD                                       0
#define AVR32_ADCIFB_TRGR_TRGMOD_CM                           0x00000006
#define AVR32_ADCIFB_TRGR_TRGMOD_ETAE                         0x00000003
#define AVR32_ADCIFB_TRGR_TRGMOD_ETFE                         0x00000002
#define AVR32_ADCIFB_TRGR_TRGMOD_ETRE                         0x00000001
#define AVR32_ADCIFB_TRGR_TRGMOD_EVT                          0x00000007
#define AVR32_ADCIFB_TRGR_TRGMOD_MASK                         0x00000007
#define AVR32_ADCIFB_TRGR_TRGMOD_NT                           0x00000000
#define AVR32_ADCIFB_TRGR_TRGMOD_OFFSET                                0
#define AVR32_ADCIFB_TRGR_TRGMOD_PDT                          0x00000004
#define AVR32_ADCIFB_TRGR_TRGMOD_PT                           0x00000005
#define AVR32_ADCIFB_TRGR_TRGMOD_SIZE                                  3
#define AVR32_ADCIFB_TRGR_TRGPER                                      16
#define AVR32_ADCIFB_TRGR_TRGPER_MASK                         0xffff0000
#define AVR32_ADCIFB_TRGR_TRGPER_OFFSET                               16
#define AVR32_ADCIFB_TRGR_TRGPER_SIZE                                 16
#define AVR32_ADCIFB_TSAMOD                                            0
#define AVR32_ADCIFB_TSAMOD_MASK                              0x00000001
#define AVR32_ADCIFB_TSAMOD_OFFSET                                     0
#define AVR32_ADCIFB_TSAMOD_SIZE                                       1
#define AVR32_ADCIFB_TSPO                                             16
#define AVR32_ADCIFB_TSPO_MASK                                0x00ff0000
#define AVR32_ADCIFB_TSPO_OFFSET                                      16
#define AVR32_ADCIFB_TSPO_SIZE                                         8
#define AVR32_ADCIFB_VARIANT                                          16
#define AVR32_ADCIFB_VARIANT_MASK                             0x000f0000
#define AVR32_ADCIFB_VARIANT_OFFSET                                   16
#define AVR32_ADCIFB_VARIANT_SIZE                                      4
#define AVR32_ADCIFB_VERSION                                  0x00000034
#define AVR32_ADCIFB_VERSION_MASK                             0x000f0fff
#define AVR32_ADCIFB_VERSION_OFFSET                                    0
#define AVR32_ADCIFB_VERSION_RESETVALUE                       0x00000101
#define AVR32_ADCIFB_VERSION_SIZE                                     12
#define AVR32_ADCIFB_VERSION_VARIANT                                  16
#define AVR32_ADCIFB_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_ADCIFB_VERSION_VARIANT_OFFSET                           16
#define AVR32_ADCIFB_VERSION_VARIANT_SIZE                              4
#define AVR32_ADCIFB_VERSION_VERSION                                   0
#define AVR32_ADCIFB_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_ADCIFB_VERSION_VERSION_OFFSET                            0
#define AVR32_ADCIFB_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_adcifb_cr_t {
    unsigned int                 :22;
    unsigned int dis             : 1;
    unsigned int en              : 1;
    unsigned int                 : 6;
    unsigned int start           : 1;
    unsigned int swrst           : 1;
} avr32_adcifb_cr_t;



typedef struct avr32_adcifb_mr_t {
    unsigned int pendbc          : 4;
    unsigned int                 : 4;
    unsigned int tspo            : 8;
    unsigned int                 : 9;
    unsigned int apoe            : 1;
    unsigned int ace             : 1;
    unsigned int pendet          : 1;
    unsigned int                 : 3;
    unsigned int tsamod          : 1;
} avr32_adcifb_mr_t;



typedef struct avr32_adcifb_acr_t {
    unsigned int                 : 4;
    unsigned int shtim           : 4;
    unsigned int                 : 1;
    unsigned int startup         : 7;
    unsigned int                 : 2;
    unsigned int prescal         : 6;
    unsigned int                 : 2;
    unsigned int res             : 2;
    unsigned int                 : 3;
    unsigned int sleep           : 1;
} avr32_adcifb_acr_t;



typedef struct avr32_adcifb_trgr_t {
    unsigned int trgper          :16;
    unsigned int                 :13;
    unsigned int trgmod          : 3;
} avr32_adcifb_trgr_t;



typedef struct avr32_adcifb_cvr_t {
    unsigned int                 : 4;
    unsigned int hv              :12;
    unsigned int                 : 4;
    unsigned int lv              :12;
} avr32_adcifb_cvr_t;



typedef struct avr32_adcifb_sr_t {
    unsigned int                 : 7;
    unsigned int en              : 1;
    unsigned int                 : 9;
    unsigned int celse           : 1;
    unsigned int cgt             : 1;
    unsigned int clt             : 1;
    unsigned int                 : 2;
    unsigned int busy            : 1;
    unsigned int ready           : 1;
    unsigned int                 : 2;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int                 : 2;
    unsigned int ovre            : 1;
    unsigned int drdy            : 1;
} avr32_adcifb_sr_t;



typedef struct avr32_adcifb_isr_t {
    unsigned int                 :17;
    unsigned int celse           : 1;
    unsigned int cgt             : 1;
    unsigned int clt             : 1;
    unsigned int                 : 2;
    unsigned int busy            : 1;
    unsigned int ready           : 1;
    unsigned int                 : 2;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int                 : 2;
    unsigned int ovre            : 1;
    unsigned int drdy            : 1;
} avr32_adcifb_isr_t;



typedef struct avr32_adcifb_icr_t {
    unsigned int                 :17;
    unsigned int celse           : 1;
    unsigned int cgt             : 1;
    unsigned int clt             : 1;
    unsigned int                 : 2;
    unsigned int busy            : 1;
    unsigned int ready           : 1;
    unsigned int                 : 2;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int                 : 2;
    unsigned int ovre            : 1;
    unsigned int drdy            : 1;
} avr32_adcifb_icr_t;



typedef struct avr32_adcifb_ier_t {
    unsigned int                 :17;
    unsigned int celse           : 1;
    unsigned int cgt             : 1;
    unsigned int clt             : 1;
    unsigned int                 : 2;
    unsigned int busy            : 1;
    unsigned int ready           : 1;
    unsigned int                 : 2;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int                 : 2;
    unsigned int ovre            : 1;
    unsigned int drdy            : 1;
} avr32_adcifb_ier_t;



typedef struct avr32_adcifb_idr_t {
    unsigned int                 :17;
    unsigned int celse           : 1;
    unsigned int cgt             : 1;
    unsigned int clt             : 1;
    unsigned int                 : 2;
    unsigned int busy            : 1;
    unsigned int ready           : 1;
    unsigned int                 : 2;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int                 : 2;
    unsigned int ovre            : 1;
    unsigned int drdy            : 1;
} avr32_adcifb_idr_t;



typedef struct avr32_adcifb_imr_t {
    unsigned int                 :17;
    unsigned int celse           : 1;
    unsigned int cgt             : 1;
    unsigned int clt             : 1;
    unsigned int                 : 2;
    unsigned int busy            : 1;
    unsigned int ready           : 1;
    unsigned int                 : 2;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int                 : 2;
    unsigned int ovre            : 1;
    unsigned int drdy            : 1;
} avr32_adcifb_imr_t;



typedef struct avr32_adcifb_lcdr_t {
    unsigned int                 : 8;
    unsigned int lcch            : 8;
    unsigned int                 : 4;
    unsigned int ldata           :12;
} avr32_adcifb_lcdr_t;



typedef struct avr32_adcifb_parameter_t {
    unsigned int ch31            : 1;
    unsigned int ch30            : 1;
    unsigned int ch29            : 1;
    unsigned int ch28            : 1;
    unsigned int ch27            : 1;
    unsigned int ch26            : 1;
    unsigned int ch25            : 1;
    unsigned int ch24            : 1;
    unsigned int ch23            : 1;
    unsigned int ch22            : 1;
    unsigned int ch21            : 1;
    unsigned int ch20            : 1;
    unsigned int ch19            : 1;
    unsigned int ch18            : 1;
    unsigned int ch17            : 1;
    unsigned int ch16            : 1;
    unsigned int ch15            : 1;
    unsigned int ch14            : 1;
    unsigned int ch13            : 1;
    unsigned int ch12            : 1;
    unsigned int ch11            : 1;
    unsigned int ch10            : 1;
    unsigned int ch9             : 1;
    unsigned int ch8             : 1;
    unsigned int ch7             : 1;
    unsigned int ch6             : 1;
    unsigned int ch5             : 1;
    unsigned int ch4             : 1;
    unsigned int ch3             : 1;
    unsigned int ch2             : 1;
    unsigned int ch1             : 1;
    unsigned int ch0             : 1;
} avr32_adcifb_parameter_t;



typedef struct avr32_adcifb_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_adcifb_version_t;



typedef struct avr32_adcifb_cher_t {
    unsigned int ch31            : 1;
    unsigned int ch30            : 1;
    unsigned int ch29            : 1;
    unsigned int ch28            : 1;
    unsigned int ch27            : 1;
    unsigned int ch26            : 1;
    unsigned int ch25            : 1;
    unsigned int ch24            : 1;
    unsigned int ch23            : 1;
    unsigned int ch22            : 1;
    unsigned int ch21            : 1;
    unsigned int ch20            : 1;
    unsigned int ch19            : 1;
    unsigned int ch18            : 1;
    unsigned int ch17            : 1;
    unsigned int ch16            : 1;
    unsigned int ch15            : 1;
    unsigned int ch14            : 1;
    unsigned int ch13            : 1;
    unsigned int ch12            : 1;
    unsigned int ch11            : 1;
    unsigned int ch10            : 1;
    unsigned int ch9             : 1;
    unsigned int ch8             : 1;
    unsigned int ch7             : 1;
    unsigned int ch6             : 1;
    unsigned int ch5             : 1;
    unsigned int ch4             : 1;
    unsigned int ch3             : 1;
    unsigned int ch2             : 1;
    unsigned int ch1             : 1;
    unsigned int ch0             : 1;
} avr32_adcifb_cher_t;



typedef struct avr32_adcifb_chdr_t {
    unsigned int ch31            : 1;
    unsigned int ch30            : 1;
    unsigned int ch29            : 1;
    unsigned int ch28            : 1;
    unsigned int ch27            : 1;
    unsigned int ch26            : 1;
    unsigned int ch25            : 1;
    unsigned int ch24            : 1;
    unsigned int ch23            : 1;
    unsigned int ch22            : 1;
    unsigned int ch21            : 1;
    unsigned int ch20            : 1;
    unsigned int ch19            : 1;
    unsigned int ch18            : 1;
    unsigned int ch17            : 1;
    unsigned int ch16            : 1;
    unsigned int ch15            : 1;
    unsigned int ch14            : 1;
    unsigned int ch13            : 1;
    unsigned int ch12            : 1;
    unsigned int ch11            : 1;
    unsigned int ch10            : 1;
    unsigned int ch9             : 1;
    unsigned int ch8             : 1;
    unsigned int ch7             : 1;
    unsigned int ch6             : 1;
    unsigned int ch5             : 1;
    unsigned int ch4             : 1;
    unsigned int ch3             : 1;
    unsigned int ch2             : 1;
    unsigned int ch1             : 1;
    unsigned int ch0             : 1;
} avr32_adcifb_chdr_t;



typedef struct avr32_adcifb_chsr_t {
    unsigned int ch31            : 1;
    unsigned int ch30            : 1;
    unsigned int ch29            : 1;
    unsigned int ch28            : 1;
    unsigned int ch27            : 1;
    unsigned int ch26            : 1;
    unsigned int ch25            : 1;
    unsigned int ch24            : 1;
    unsigned int ch23            : 1;
    unsigned int ch22            : 1;
    unsigned int ch21            : 1;
    unsigned int ch20            : 1;
    unsigned int ch19            : 1;
    unsigned int ch18            : 1;
    unsigned int ch17            : 1;
    unsigned int ch16            : 1;
    unsigned int ch15            : 1;
    unsigned int ch14            : 1;
    unsigned int ch13            : 1;
    unsigned int ch12            : 1;
    unsigned int ch11            : 1;
    unsigned int ch10            : 1;
    unsigned int ch9             : 1;
    unsigned int ch8             : 1;
    unsigned int ch7             : 1;
    unsigned int ch6             : 1;
    unsigned int ch5             : 1;
    unsigned int ch4             : 1;
    unsigned int ch3             : 1;
    unsigned int ch2             : 1;
    unsigned int ch1             : 1;
    unsigned int ch0             : 1;
} avr32_adcifb_chsr_t;



typedef struct avr32_adcifb_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_adcifb_cr_t              CR        ;
  };
  union {
          unsigned long                  mr        ;//0x0004
          avr32_adcifb_mr_t              MR        ;
  };
  union {
          unsigned long                  acr       ;//0x0008
          avr32_adcifb_acr_t             ACR       ;
  };
  union {
          unsigned long                  trgr      ;//0x000c
          avr32_adcifb_trgr_t            TRGR      ;
  };
  union {
          unsigned long                  cvr       ;//0x0010
          avr32_adcifb_cvr_t             CVR       ;
  };
  union {
    const unsigned long                  sr        ;//0x0014
    const avr32_adcifb_sr_t              SR        ;
  };
  union {
    const unsigned long                  isr       ;//0x0018
    const avr32_adcifb_isr_t             ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x001c
          avr32_adcifb_icr_t             ICR       ;
  };
  union {
          unsigned long                  ier       ;//0x0020
          avr32_adcifb_ier_t             IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0024
          avr32_adcifb_idr_t             IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0028
    const avr32_adcifb_imr_t             IMR       ;
  };
  union {
    const unsigned long                  lcdr      ;//0x002c
    const avr32_adcifb_lcdr_t            LCDR      ;
  };
  union {
    const unsigned long                  parameter ;//0x0030
    const avr32_adcifb_parameter_t       PARAMETER ;
  };
  union {
    const unsigned long                  version   ;//0x0034
    const avr32_adcifb_version_t         VERSION   ;
  };
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
  union {
          unsigned long                  cher      ;//0x0040
          avr32_adcifb_cher_t            CHER      ;
  };
  union {
          unsigned long                  chdr      ;//0x0044
          avr32_adcifb_chdr_t            CHDR      ;
  };
  union {
    const unsigned long                  chsr      ;//0x0048
    const avr32_adcifb_chsr_t            CHSR      ;
  };
} avr32_adcifb_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ADCIFB_101_H_INCLUDED*/
#endif

