/*****************************************************************************
 *
 * Copyright (C) 2010 Atmel Corporation
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
 * Model        : UC3C0512C
 * Revision     : $Revision: 81795 $
 * Checkin Date : $Date: 2010-09-16 10:52:41 +0200 (Thu, 16 Sep 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_MDMA_101_H_INCLUDED
#define AVR32_MDMA_101_H_INCLUDED

#define AVR32_MDMA_H_VERSION 101

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_MDMA_<register>
 - Bitfield mask:   AVR32_MDMA_<register>_<bitfield>
 - Bitfield offset: AVR32_MDMA_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MDMA_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_MDMA_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_MDMA_<bitfield>
 - Bitfield offset: AVR32_MDMA_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MDMA_<bitfield>_SIZE
 - Bitfield values: AVR32_MDMA_<bitfield>_<value name>
 - Bitfield values: AVR32_MDMA_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_MDMA_ARB                                              24
#define AVR32_MDMA_ARB_MASK                                 0x01000000
#define AVR32_MDMA_ARB_OFFSET                                       24
#define AVR32_MDMA_ARB_SIZE                                          1
#define AVR32_MDMA_BERR0                                             8
#define AVR32_MDMA_BERR0_MASK                               0x00000100
#define AVR32_MDMA_BERR0_OFFSET                                      8
#define AVR32_MDMA_BERR0_SIZE                                        1
#define AVR32_MDMA_BERR1                                             9
#define AVR32_MDMA_BERR1_MASK                               0x00000200
#define AVR32_MDMA_BERR1_OFFSET                                      9
#define AVR32_MDMA_BERR1_SIZE                                        1
#define AVR32_MDMA_BERR2                                            10
#define AVR32_MDMA_BERR2_MASK                               0x00000400
#define AVR32_MDMA_BERR2_OFFSET                                     10
#define AVR32_MDMA_BERR2_SIZE                                        1
#define AVR32_MDMA_BERR3                                            11
#define AVR32_MDMA_BERR3_MASK                               0x00000800
#define AVR32_MDMA_BERR3_OFFSET                                     11
#define AVR32_MDMA_BERR3_SIZE                                        1
#define AVR32_MDMA_BSWP                                             24
#define AVR32_MDMA_BSWP_MASK                                0x03000000
#define AVR32_MDMA_BSWP_OFFSET                                      24
#define AVR32_MDMA_BSWP_SIZE                                         2
#define AVR32_MDMA_BURST_SIZE                                        2
#define AVR32_MDMA_CCR0                                     0x0000004c
#define AVR32_MDMA_CCR0_BSWP                                        24
#define AVR32_MDMA_CCR0_BSWP_MASK                           0x03000000
#define AVR32_MDMA_CCR0_BSWP_OFFSET                                 24
#define AVR32_MDMA_CCR0_BSWP_SIZE                                    2
#define AVR32_MDMA_CCR0_BURST                                       18
#define AVR32_MDMA_CCR0_BURST_MASK                          0x000c0000
#define AVR32_MDMA_CCR0_BURST_OFFSET                                18
#define AVR32_MDMA_CCR0_BURST_SIZE                                   2
#define AVR32_MDMA_CCR0_L                                           22
#define AVR32_MDMA_CCR0_L_MASK                              0x00400000
#define AVR32_MDMA_CCR0_L_OFFSET                                    22
#define AVR32_MDMA_CCR0_L_SIZE                                       1
#define AVR32_MDMA_CCR0_MASK                                0x037fffff
#define AVR32_MDMA_CCR0_RESETVALUE                          0x00000000
#define AVR32_MDMA_CCR0_SIZE                                        16
#define AVR32_MDMA_CCR0_SIZE_MASK                           0x00030000
#define AVR32_MDMA_CCR0_SIZE_OFFSET                                 16
#define AVR32_MDMA_CCR0_SIZE_SIZE                                    2
#define AVR32_MDMA_CCR0_TCIE                                        20
#define AVR32_MDMA_CCR0_TCIE_MASK                           0x00100000
#define AVR32_MDMA_CCR0_TCIE_OFFSET                                 20
#define AVR32_MDMA_CCR0_TCIE_SIZE                                    1
#define AVR32_MDMA_CCR0_TCNT                                         0
#define AVR32_MDMA_CCR0_TCNT_MASK                           0x0000ffff
#define AVR32_MDMA_CCR0_TCNT_OFFSET                                  0
#define AVR32_MDMA_CCR0_TCNT_SIZE                                   16
#define AVR32_MDMA_CCR0_V                                           21
#define AVR32_MDMA_CCR0_V_MASK                              0x00200000
#define AVR32_MDMA_CCR0_V_OFFSET                                    21
#define AVR32_MDMA_CCR0_V_SIZE                                       1
#define AVR32_MDMA_CCR1                                     0x0000005c
#define AVR32_MDMA_CCR1_BSWP                                        24
#define AVR32_MDMA_CCR1_BSWP_MASK                           0x03000000
#define AVR32_MDMA_CCR1_BSWP_OFFSET                                 24
#define AVR32_MDMA_CCR1_BSWP_SIZE                                    2
#define AVR32_MDMA_CCR1_BURST                                       18
#define AVR32_MDMA_CCR1_BURST_MASK                          0x000c0000
#define AVR32_MDMA_CCR1_BURST_OFFSET                                18
#define AVR32_MDMA_CCR1_BURST_SIZE                                   2
#define AVR32_MDMA_CCR1_L                                           22
#define AVR32_MDMA_CCR1_L_MASK                              0x00400000
#define AVR32_MDMA_CCR1_L_OFFSET                                    22
#define AVR32_MDMA_CCR1_L_SIZE                                       1
#define AVR32_MDMA_CCR1_MASK                                0x037fffff
#define AVR32_MDMA_CCR1_RESETVALUE                          0x00000000
#define AVR32_MDMA_CCR1_SIZE                                        16
#define AVR32_MDMA_CCR1_SIZE_MASK                           0x00030000
#define AVR32_MDMA_CCR1_SIZE_OFFSET                                 16
#define AVR32_MDMA_CCR1_SIZE_SIZE                                    2
#define AVR32_MDMA_CCR1_TCIE                                        20
#define AVR32_MDMA_CCR1_TCIE_MASK                           0x00100000
#define AVR32_MDMA_CCR1_TCIE_OFFSET                                 20
#define AVR32_MDMA_CCR1_TCIE_SIZE                                    1
#define AVR32_MDMA_CCR1_TCNT                                         0
#define AVR32_MDMA_CCR1_TCNT_MASK                           0x0000ffff
#define AVR32_MDMA_CCR1_TCNT_OFFSET                                  0
#define AVR32_MDMA_CCR1_TCNT_SIZE                                   16
#define AVR32_MDMA_CCR1_V                                           21
#define AVR32_MDMA_CCR1_V_MASK                              0x00200000
#define AVR32_MDMA_CCR1_V_OFFSET                                    21
#define AVR32_MDMA_CCR1_V_SIZE                                       1
#define AVR32_MDMA_CCR2                                     0x0000006c
#define AVR32_MDMA_CCR2_BSWP                                        24
#define AVR32_MDMA_CCR2_BSWP_MASK                           0x03000000
#define AVR32_MDMA_CCR2_BSWP_OFFSET                                 24
#define AVR32_MDMA_CCR2_BSWP_SIZE                                    2
#define AVR32_MDMA_CCR2_BURST                                       18
#define AVR32_MDMA_CCR2_BURST_MASK                          0x000c0000
#define AVR32_MDMA_CCR2_BURST_OFFSET                                18
#define AVR32_MDMA_CCR2_BURST_SIZE                                   2
#define AVR32_MDMA_CCR2_L                                           22
#define AVR32_MDMA_CCR2_L_MASK                              0x00400000
#define AVR32_MDMA_CCR2_L_OFFSET                                    22
#define AVR32_MDMA_CCR2_L_SIZE                                       1
#define AVR32_MDMA_CCR2_MASK                                0x037fffff
#define AVR32_MDMA_CCR2_RESETVALUE                          0x00000000
#define AVR32_MDMA_CCR2_SIZE                                        16
#define AVR32_MDMA_CCR2_SIZE_MASK                           0x00030000
#define AVR32_MDMA_CCR2_SIZE_OFFSET                                 16
#define AVR32_MDMA_CCR2_SIZE_SIZE                                    2
#define AVR32_MDMA_CCR2_TCIE                                        20
#define AVR32_MDMA_CCR2_TCIE_MASK                           0x00100000
#define AVR32_MDMA_CCR2_TCIE_OFFSET                                 20
#define AVR32_MDMA_CCR2_TCIE_SIZE                                    1
#define AVR32_MDMA_CCR2_TCNT                                         0
#define AVR32_MDMA_CCR2_TCNT_MASK                           0x0000ffff
#define AVR32_MDMA_CCR2_TCNT_OFFSET                                  0
#define AVR32_MDMA_CCR2_TCNT_SIZE                                   16
#define AVR32_MDMA_CCR2_V                                           21
#define AVR32_MDMA_CCR2_V_MASK                              0x00200000
#define AVR32_MDMA_CCR2_V_OFFSET                                    21
#define AVR32_MDMA_CCR2_V_SIZE                                       1
#define AVR32_MDMA_CCR3                                     0x0000007c
#define AVR32_MDMA_CCR3_BSWP                                        24
#define AVR32_MDMA_CCR3_BSWP_MASK                           0x03000000
#define AVR32_MDMA_CCR3_BSWP_OFFSET                                 24
#define AVR32_MDMA_CCR3_BSWP_SIZE                                    2
#define AVR32_MDMA_CCR3_BURST                                       18
#define AVR32_MDMA_CCR3_BURST_MASK                          0x000c0000
#define AVR32_MDMA_CCR3_BURST_OFFSET                                18
#define AVR32_MDMA_CCR3_BURST_SIZE                                   2
#define AVR32_MDMA_CCR3_L                                           22
#define AVR32_MDMA_CCR3_L_MASK                              0x00400000
#define AVR32_MDMA_CCR3_L_OFFSET                                    22
#define AVR32_MDMA_CCR3_L_SIZE                                       1
#define AVR32_MDMA_CCR3_MASK                                0x037fffff
#define AVR32_MDMA_CCR3_RESETVALUE                          0x00000000
#define AVR32_MDMA_CCR3_SIZE                                        16
#define AVR32_MDMA_CCR3_SIZE_MASK                           0x00030000
#define AVR32_MDMA_CCR3_SIZE_OFFSET                                 16
#define AVR32_MDMA_CCR3_SIZE_SIZE                                    2
#define AVR32_MDMA_CCR3_TCIE                                        20
#define AVR32_MDMA_CCR3_TCIE_MASK                           0x00100000
#define AVR32_MDMA_CCR3_TCIE_OFFSET                                 20
#define AVR32_MDMA_CCR3_TCIE_SIZE                                    1
#define AVR32_MDMA_CCR3_TCNT                                         0
#define AVR32_MDMA_CCR3_TCNT_MASK                           0x0000ffff
#define AVR32_MDMA_CCR3_TCNT_OFFSET                                  0
#define AVR32_MDMA_CCR3_TCNT_SIZE                                   16
#define AVR32_MDMA_CCR3_V                                           21
#define AVR32_MDMA_CCR3_V_MASK                              0x00200000
#define AVR32_MDMA_CCR3_V_OFFSET                                    21
#define AVR32_MDMA_CCR3_V_SIZE                                       1
#define AVR32_MDMA_CDAR                                              0
#define AVR32_MDMA_CDAR0                                    0x00000040
#define AVR32_MDMA_CDAR0_CDAR                                        0
#define AVR32_MDMA_CDAR0_CDAR_MASK                          0xffffffff
#define AVR32_MDMA_CDAR0_CDAR_OFFSET                                 0
#define AVR32_MDMA_CDAR0_CDAR_SIZE                                  32
#define AVR32_MDMA_CDAR0_MASK                               0xffffffff
#define AVR32_MDMA_CDAR0_RESETVALUE                         0x00000000
#define AVR32_MDMA_CDAR1                                    0x00000050
#define AVR32_MDMA_CDAR1_CDAR                                        0
#define AVR32_MDMA_CDAR1_CDAR_MASK                          0xffffffff
#define AVR32_MDMA_CDAR1_CDAR_OFFSET                                 0
#define AVR32_MDMA_CDAR1_CDAR_SIZE                                  32
#define AVR32_MDMA_CDAR1_MASK                               0xffffffff
#define AVR32_MDMA_CDAR1_RESETVALUE                         0x00000000
#define AVR32_MDMA_CDAR2                                    0x00000060
#define AVR32_MDMA_CDAR2_CDAR                                        0
#define AVR32_MDMA_CDAR2_CDAR_MASK                          0xffffffff
#define AVR32_MDMA_CDAR2_CDAR_OFFSET                                 0
#define AVR32_MDMA_CDAR2_CDAR_SIZE                                  32
#define AVR32_MDMA_CDAR2_MASK                               0xffffffff
#define AVR32_MDMA_CDAR2_RESETVALUE                         0x00000000
#define AVR32_MDMA_CDAR3                                    0x00000070
#define AVR32_MDMA_CDAR3_CDAR                                        0
#define AVR32_MDMA_CDAR3_CDAR_MASK                          0xffffffff
#define AVR32_MDMA_CDAR3_CDAR_OFFSET                                 0
#define AVR32_MDMA_CDAR3_CDAR_SIZE                                  32
#define AVR32_MDMA_CDAR3_MASK                               0xffffffff
#define AVR32_MDMA_CDAR3_RESETVALUE                         0x00000000
#define AVR32_MDMA_CDAR_MASK                                0xffffffff
#define AVR32_MDMA_CDAR_OFFSET                                       0
#define AVR32_MDMA_CDAR_SIZE                                        32
#define AVR32_MDMA_CH0C                                              0
#define AVR32_MDMA_CH0C_MASK                                0x00000001
#define AVR32_MDMA_CH0C_OFFSET                                       0
#define AVR32_MDMA_CH0C_SIZE                                         1
#define AVR32_MDMA_CH0DIS                                           16
#define AVR32_MDMA_CH0DIS_MASK                              0x00010000
#define AVR32_MDMA_CH0DIS_OFFSET                                    16
#define AVR32_MDMA_CH0DIS_SIZE                                       1
#define AVR32_MDMA_CH0EN                                             0
#define AVR32_MDMA_CH0EN_MASK                               0x00000001
#define AVR32_MDMA_CH0EN_OFFSET                                      0
#define AVR32_MDMA_CH0EN_SIZE                                        1
#define AVR32_MDMA_CH0I                                              0
#define AVR32_MDMA_CH0I_MASK                                0x00000001
#define AVR32_MDMA_CH0I_OFFSET                                       0
#define AVR32_MDMA_CH0I_SIZE                                         1
#define AVR32_MDMA_CH0M                                              8
#define AVR32_MDMA_CH0M_MASK                                0x00000100
#define AVR32_MDMA_CH0M_OFFSET                                       8
#define AVR32_MDMA_CH0M_SIZE                                         1
#define AVR32_MDMA_CH1C                                              1
#define AVR32_MDMA_CH1C_MASK                                0x00000002
#define AVR32_MDMA_CH1C_OFFSET                                       1
#define AVR32_MDMA_CH1C_SIZE                                         1
#define AVR32_MDMA_CH1DIS                                           17
#define AVR32_MDMA_CH1DIS_MASK                              0x00020000
#define AVR32_MDMA_CH1DIS_OFFSET                                    17
#define AVR32_MDMA_CH1DIS_SIZE                                       1
#define AVR32_MDMA_CH1EN                                             1
#define AVR32_MDMA_CH1EN_MASK                               0x00000002
#define AVR32_MDMA_CH1EN_OFFSET                                      1
#define AVR32_MDMA_CH1EN_SIZE                                        1
#define AVR32_MDMA_CH1I                                              1
#define AVR32_MDMA_CH1I_MASK                                0x00000002
#define AVR32_MDMA_CH1I_OFFSET                                       1
#define AVR32_MDMA_CH1I_SIZE                                         1
#define AVR32_MDMA_CH1M                                              9
#define AVR32_MDMA_CH1M_MASK                                0x00000200
#define AVR32_MDMA_CH1M_OFFSET                                       9
#define AVR32_MDMA_CH1M_SIZE                                         1
#define AVR32_MDMA_CH2C                                              2
#define AVR32_MDMA_CH2C_MASK                                0x00000004
#define AVR32_MDMA_CH2C_OFFSET                                       2
#define AVR32_MDMA_CH2C_SIZE                                         1
#define AVR32_MDMA_CH2DIS                                           18
#define AVR32_MDMA_CH2DIS_MASK                              0x00040000
#define AVR32_MDMA_CH2DIS_OFFSET                                    18
#define AVR32_MDMA_CH2DIS_SIZE                                       1
#define AVR32_MDMA_CH2EN                                             2
#define AVR32_MDMA_CH2EN_MASK                               0x00000004
#define AVR32_MDMA_CH2EN_OFFSET                                      2
#define AVR32_MDMA_CH2EN_SIZE                                        1
#define AVR32_MDMA_CH2I                                              2
#define AVR32_MDMA_CH2I_MASK                                0x00000004
#define AVR32_MDMA_CH2I_OFFSET                                       2
#define AVR32_MDMA_CH2I_SIZE                                         1
#define AVR32_MDMA_CH2M                                             10
#define AVR32_MDMA_CH2M_MASK                                0x00000400
#define AVR32_MDMA_CH2M_OFFSET                                      10
#define AVR32_MDMA_CH2M_SIZE                                         1
#define AVR32_MDMA_CH3C                                              3
#define AVR32_MDMA_CH3C_MASK                                0x00000008
#define AVR32_MDMA_CH3C_OFFSET                                       3
#define AVR32_MDMA_CH3C_SIZE                                         1
#define AVR32_MDMA_CH3DIS                                           19
#define AVR32_MDMA_CH3DIS_MASK                              0x00080000
#define AVR32_MDMA_CH3DIS_OFFSET                                    19
#define AVR32_MDMA_CH3DIS_SIZE                                       1
#define AVR32_MDMA_CH3EN                                             3
#define AVR32_MDMA_CH3EN_MASK                               0x00000008
#define AVR32_MDMA_CH3EN_OFFSET                                      3
#define AVR32_MDMA_CH3EN_SIZE                                        1
#define AVR32_MDMA_CH3I                                              3
#define AVR32_MDMA_CH3I_MASK                                0x00000008
#define AVR32_MDMA_CH3I_OFFSET                                       3
#define AVR32_MDMA_CH3I_SIZE                                         1
#define AVR32_MDMA_CH3M                                             11
#define AVR32_MDMA_CH3M_MASK                                0x00000800
#define AVR32_MDMA_CH3M_OFFSET                                      11
#define AVR32_MDMA_CH3M_SIZE                                         1
#define AVR32_MDMA_CHOC                                              0
#define AVR32_MDMA_CHOC_MASK                                0x00000001
#define AVR32_MDMA_CHOC_OFFSET                                       0
#define AVR32_MDMA_CHOC_SIZE                                         1
#define AVR32_MDMA_CR                                       0x00000000
#define AVR32_MDMA_CR_ARB                                           24
#define AVR32_MDMA_CR_ARB_MASK                              0x01000000
#define AVR32_MDMA_CR_ARB_OFFSET                                    24
#define AVR32_MDMA_CR_ARB_SIZE                                       1
#define AVR32_MDMA_CR_CH0DIS                                        16
#define AVR32_MDMA_CR_CH0DIS_MASK                           0x00010000
#define AVR32_MDMA_CR_CH0DIS_OFFSET                                 16
#define AVR32_MDMA_CR_CH0DIS_SIZE                                    1
#define AVR32_MDMA_CR_CH0EN                                          0
#define AVR32_MDMA_CR_CH0EN_MASK                            0x00000001
#define AVR32_MDMA_CR_CH0EN_OFFSET                                   0
#define AVR32_MDMA_CR_CH0EN_SIZE                                     1
#define AVR32_MDMA_CR_CH0M                                           8
#define AVR32_MDMA_CR_CH0M_MASK                             0x00000100
#define AVR32_MDMA_CR_CH0M_OFFSET                                    8
#define AVR32_MDMA_CR_CH0M_SIZE                                      1
#define AVR32_MDMA_CR_CH1DIS                                        17
#define AVR32_MDMA_CR_CH1DIS_MASK                           0x00020000
#define AVR32_MDMA_CR_CH1DIS_OFFSET                                 17
#define AVR32_MDMA_CR_CH1DIS_SIZE                                    1
#define AVR32_MDMA_CR_CH1EN                                          1
#define AVR32_MDMA_CR_CH1EN_MASK                            0x00000002
#define AVR32_MDMA_CR_CH1EN_OFFSET                                   1
#define AVR32_MDMA_CR_CH1EN_SIZE                                     1
#define AVR32_MDMA_CR_CH1M                                           9
#define AVR32_MDMA_CR_CH1M_MASK                             0x00000200
#define AVR32_MDMA_CR_CH1M_OFFSET                                    9
#define AVR32_MDMA_CR_CH1M_SIZE                                      1
#define AVR32_MDMA_CR_CH2DIS                                        18
#define AVR32_MDMA_CR_CH2DIS_MASK                           0x00040000
#define AVR32_MDMA_CR_CH2DIS_OFFSET                                 18
#define AVR32_MDMA_CR_CH2DIS_SIZE                                    1
#define AVR32_MDMA_CR_CH2EN                                          2
#define AVR32_MDMA_CR_CH2EN_MASK                            0x00000004
#define AVR32_MDMA_CR_CH2EN_OFFSET                                   2
#define AVR32_MDMA_CR_CH2EN_SIZE                                     1
#define AVR32_MDMA_CR_CH2M                                          10
#define AVR32_MDMA_CR_CH2M_MASK                             0x00000400
#define AVR32_MDMA_CR_CH2M_OFFSET                                   10
#define AVR32_MDMA_CR_CH2M_SIZE                                      1
#define AVR32_MDMA_CR_CH3DIS                                        19
#define AVR32_MDMA_CR_CH3DIS_MASK                           0x00080000
#define AVR32_MDMA_CR_CH3DIS_OFFSET                                 19
#define AVR32_MDMA_CR_CH3DIS_SIZE                                    1
#define AVR32_MDMA_CR_CH3EN                                          3
#define AVR32_MDMA_CR_CH3EN_MASK                            0x00000008
#define AVR32_MDMA_CR_CH3EN_OFFSET                                   3
#define AVR32_MDMA_CR_CH3EN_SIZE                                     1
#define AVR32_MDMA_CR_CH3M                                          11
#define AVR32_MDMA_CR_CH3M_MASK                             0x00000800
#define AVR32_MDMA_CR_CH3M_OFFSET                                   11
#define AVR32_MDMA_CR_CH3M_SIZE                                      1
#define AVR32_MDMA_CR_MASK                                  0x010f0f0f
#define AVR32_MDMA_CR_RESETVALUE                            0x00000000
#define AVR32_MDMA_DSAR                                              0
#define AVR32_MDMA_DSAR0                                    0x00000020
#define AVR32_MDMA_DSAR0_DSAR                                        0
#define AVR32_MDMA_DSAR0_DSAR_MASK                          0xffffffff
#define AVR32_MDMA_DSAR0_DSAR_OFFSET                                 0
#define AVR32_MDMA_DSAR0_DSAR_SIZE                                  32
#define AVR32_MDMA_DSAR0_MASK                               0xffffffff
#define AVR32_MDMA_DSAR0_RESETVALUE                         0x00000000
#define AVR32_MDMA_DSAR1                                    0x00000024
#define AVR32_MDMA_DSAR1_DSAR                                        0
#define AVR32_MDMA_DSAR1_DSAR_MASK                          0xffffffff
#define AVR32_MDMA_DSAR1_DSAR_OFFSET                                 0
#define AVR32_MDMA_DSAR1_DSAR_SIZE                                  32
#define AVR32_MDMA_DSAR1_MASK                               0xffffffff
#define AVR32_MDMA_DSAR1_RESETVALUE                         0x00000000
#define AVR32_MDMA_DSAR2                                    0x00000028
#define AVR32_MDMA_DSAR2_DSAR                                        0
#define AVR32_MDMA_DSAR2_DSAR_MASK                          0xffffffff
#define AVR32_MDMA_DSAR2_DSAR_OFFSET                                 0
#define AVR32_MDMA_DSAR2_DSAR_SIZE                                  32
#define AVR32_MDMA_DSAR2_MASK                               0xffffffff
#define AVR32_MDMA_DSAR2_RESETVALUE                         0x00000000
#define AVR32_MDMA_DSAR3                                    0x0000002c
#define AVR32_MDMA_DSAR3_DSAR                                        0
#define AVR32_MDMA_DSAR3_DSAR_MASK                          0xffffffff
#define AVR32_MDMA_DSAR3_DSAR_OFFSET                                 0
#define AVR32_MDMA_DSAR3_DSAR_SIZE                                  32
#define AVR32_MDMA_DSAR3_MASK                               0xffffffff
#define AVR32_MDMA_DSAR3_RESETVALUE                         0x00000000
#define AVR32_MDMA_DSAR_MASK                                0xffffffff
#define AVR32_MDMA_DSAR_OFFSET                                       0
#define AVR32_MDMA_DSAR_SIZE                                        32
#define AVR32_MDMA_ICR                                      0x00000014
#define AVR32_MDMA_ICR_BERR0                                         8
#define AVR32_MDMA_ICR_BERR0_MASK                           0x00000100
#define AVR32_MDMA_ICR_BERR0_OFFSET                                  8
#define AVR32_MDMA_ICR_BERR0_SIZE                                    1
#define AVR32_MDMA_ICR_BERR1                                         9
#define AVR32_MDMA_ICR_BERR1_MASK                           0x00000200
#define AVR32_MDMA_ICR_BERR1_OFFSET                                  9
#define AVR32_MDMA_ICR_BERR1_SIZE                                    1
#define AVR32_MDMA_ICR_BERR2                                        10
#define AVR32_MDMA_ICR_BERR2_MASK                           0x00000400
#define AVR32_MDMA_ICR_BERR2_OFFSET                                 10
#define AVR32_MDMA_ICR_BERR2_SIZE                                    1
#define AVR32_MDMA_ICR_BERR3                                        11
#define AVR32_MDMA_ICR_BERR3_MASK                           0x00000800
#define AVR32_MDMA_ICR_BERR3_OFFSET                                 11
#define AVR32_MDMA_ICR_BERR3_SIZE                                    1
#define AVR32_MDMA_ICR_CH1C                                          1
#define AVR32_MDMA_ICR_CH1C_MASK                            0x00000002
#define AVR32_MDMA_ICR_CH1C_OFFSET                                   1
#define AVR32_MDMA_ICR_CH1C_SIZE                                     1
#define AVR32_MDMA_ICR_CH2C                                          2
#define AVR32_MDMA_ICR_CH2C_MASK                            0x00000004
#define AVR32_MDMA_ICR_CH2C_OFFSET                                   2
#define AVR32_MDMA_ICR_CH2C_SIZE                                     1
#define AVR32_MDMA_ICR_CH3C                                          3
#define AVR32_MDMA_ICR_CH3C_MASK                            0x00000008
#define AVR32_MDMA_ICR_CH3C_OFFSET                                   3
#define AVR32_MDMA_ICR_CH3C_SIZE                                     1
#define AVR32_MDMA_ICR_CHOC                                          0
#define AVR32_MDMA_ICR_CHOC_MASK                            0x00000001
#define AVR32_MDMA_ICR_CHOC_OFFSET                                   0
#define AVR32_MDMA_ICR_CHOC_SIZE                                     1
#define AVR32_MDMA_ICR_MASK                                 0x00000f0f
#define AVR32_MDMA_ICR_RESETVALUE                           0x00000000
#define AVR32_MDMA_IDR                                      0x00000008
#define AVR32_MDMA_IDR_BERR0                                         8
#define AVR32_MDMA_IDR_BERR0_MASK                           0x00000100
#define AVR32_MDMA_IDR_BERR0_OFFSET                                  8
#define AVR32_MDMA_IDR_BERR0_SIZE                                    1
#define AVR32_MDMA_IDR_BERR1                                         9
#define AVR32_MDMA_IDR_BERR1_MASK                           0x00000200
#define AVR32_MDMA_IDR_BERR1_OFFSET                                  9
#define AVR32_MDMA_IDR_BERR1_SIZE                                    1
#define AVR32_MDMA_IDR_BERR2                                        10
#define AVR32_MDMA_IDR_BERR2_MASK                           0x00000400
#define AVR32_MDMA_IDR_BERR2_OFFSET                                 10
#define AVR32_MDMA_IDR_BERR2_SIZE                                    1
#define AVR32_MDMA_IDR_BERR3                                        11
#define AVR32_MDMA_IDR_BERR3_MASK                           0x00000800
#define AVR32_MDMA_IDR_BERR3_OFFSET                                 11
#define AVR32_MDMA_IDR_BERR3_SIZE                                    1
#define AVR32_MDMA_IDR_CH0C                                          0
#define AVR32_MDMA_IDR_CH0C_MASK                            0x00000001
#define AVR32_MDMA_IDR_CH0C_OFFSET                                   0
#define AVR32_MDMA_IDR_CH0C_SIZE                                     1
#define AVR32_MDMA_IDR_CH1C                                          1
#define AVR32_MDMA_IDR_CH1C_MASK                            0x00000002
#define AVR32_MDMA_IDR_CH1C_OFFSET                                   1
#define AVR32_MDMA_IDR_CH1C_SIZE                                     1
#define AVR32_MDMA_IDR_CH2C                                          2
#define AVR32_MDMA_IDR_CH2C_MASK                            0x00000004
#define AVR32_MDMA_IDR_CH2C_OFFSET                                   2
#define AVR32_MDMA_IDR_CH2C_SIZE                                     1
#define AVR32_MDMA_IDR_CH3C                                          3
#define AVR32_MDMA_IDR_CH3C_MASK                            0x00000008
#define AVR32_MDMA_IDR_CH3C_OFFSET                                   3
#define AVR32_MDMA_IDR_CH3C_SIZE                                     1
#define AVR32_MDMA_IDR_MASK                                 0x00000f0f
#define AVR32_MDMA_IDR_RESETVALUE                           0x00000000
#define AVR32_MDMA_IER                                      0x00000004
#define AVR32_MDMA_IER_BERR0                                         8
#define AVR32_MDMA_IER_BERR0_MASK                           0x00000100
#define AVR32_MDMA_IER_BERR0_OFFSET                                  8
#define AVR32_MDMA_IER_BERR0_SIZE                                    1
#define AVR32_MDMA_IER_BERR1                                         9
#define AVR32_MDMA_IER_BERR1_MASK                           0x00000200
#define AVR32_MDMA_IER_BERR1_OFFSET                                  9
#define AVR32_MDMA_IER_BERR1_SIZE                                    1
#define AVR32_MDMA_IER_BERR2                                        10
#define AVR32_MDMA_IER_BERR2_MASK                           0x00000400
#define AVR32_MDMA_IER_BERR2_OFFSET                                 10
#define AVR32_MDMA_IER_BERR2_SIZE                                    1
#define AVR32_MDMA_IER_BERR3                                        11
#define AVR32_MDMA_IER_BERR3_MASK                           0x00000800
#define AVR32_MDMA_IER_BERR3_OFFSET                                 11
#define AVR32_MDMA_IER_BERR3_SIZE                                    1
#define AVR32_MDMA_IER_CH0C                                          0
#define AVR32_MDMA_IER_CH0C_MASK                            0x00000001
#define AVR32_MDMA_IER_CH0C_OFFSET                                   0
#define AVR32_MDMA_IER_CH0C_SIZE                                     1
#define AVR32_MDMA_IER_CH1C                                          1
#define AVR32_MDMA_IER_CH1C_MASK                            0x00000002
#define AVR32_MDMA_IER_CH1C_OFFSET                                   1
#define AVR32_MDMA_IER_CH1C_SIZE                                     1
#define AVR32_MDMA_IER_CH2C                                          2
#define AVR32_MDMA_IER_CH2C_MASK                            0x00000004
#define AVR32_MDMA_IER_CH2C_OFFSET                                   2
#define AVR32_MDMA_IER_CH2C_SIZE                                     1
#define AVR32_MDMA_IER_CH3C                                          3
#define AVR32_MDMA_IER_CH3C_MASK                            0x00000008
#define AVR32_MDMA_IER_CH3C_OFFSET                                   3
#define AVR32_MDMA_IER_CH3C_SIZE                                     1
#define AVR32_MDMA_IER_MASK                                 0x00000f0f
#define AVR32_MDMA_IER_RESETVALUE                           0x00000000
#define AVR32_MDMA_IMR                                      0x0000000c
#define AVR32_MDMA_IMR_BERR0                                         8
#define AVR32_MDMA_IMR_BERR0_MASK                           0x00000100
#define AVR32_MDMA_IMR_BERR0_OFFSET                                  8
#define AVR32_MDMA_IMR_BERR0_SIZE                                    1
#define AVR32_MDMA_IMR_BERR1                                         9
#define AVR32_MDMA_IMR_BERR1_MASK                           0x00000200
#define AVR32_MDMA_IMR_BERR1_OFFSET                                  9
#define AVR32_MDMA_IMR_BERR1_SIZE                                    1
#define AVR32_MDMA_IMR_BERR2                                        10
#define AVR32_MDMA_IMR_BERR2_MASK                           0x00000400
#define AVR32_MDMA_IMR_BERR2_OFFSET                                 10
#define AVR32_MDMA_IMR_BERR2_SIZE                                    1
#define AVR32_MDMA_IMR_BERR3                                        11
#define AVR32_MDMA_IMR_BERR3_MASK                           0x00000800
#define AVR32_MDMA_IMR_BERR3_OFFSET                                 11
#define AVR32_MDMA_IMR_BERR3_SIZE                                    1
#define AVR32_MDMA_IMR_CH0C                                          0
#define AVR32_MDMA_IMR_CH0C_MASK                            0x00000001
#define AVR32_MDMA_IMR_CH0C_OFFSET                                   0
#define AVR32_MDMA_IMR_CH0C_SIZE                                     1
#define AVR32_MDMA_IMR_CH1C                                          1
#define AVR32_MDMA_IMR_CH1C_MASK                            0x00000002
#define AVR32_MDMA_IMR_CH1C_OFFSET                                   1
#define AVR32_MDMA_IMR_CH1C_SIZE                                     1
#define AVR32_MDMA_IMR_CH2C                                          2
#define AVR32_MDMA_IMR_CH2C_MASK                            0x00000004
#define AVR32_MDMA_IMR_CH2C_OFFSET                                   2
#define AVR32_MDMA_IMR_CH2C_SIZE                                     1
#define AVR32_MDMA_IMR_CH3C                                          3
#define AVR32_MDMA_IMR_CH3C_MASK                            0x00000008
#define AVR32_MDMA_IMR_CH3C_OFFSET                                   3
#define AVR32_MDMA_IMR_CH3C_SIZE                                     1
#define AVR32_MDMA_IMR_MASK                                 0x00000f0f
#define AVR32_MDMA_IMR_RESETVALUE                           0x00000000
#define AVR32_MDMA_ISR                                      0x00000010
#define AVR32_MDMA_ISR_BERR0                                         8
#define AVR32_MDMA_ISR_BERR0_MASK                           0x00000100
#define AVR32_MDMA_ISR_BERR0_OFFSET                                  8
#define AVR32_MDMA_ISR_BERR0_SIZE                                    1
#define AVR32_MDMA_ISR_BERR1                                         9
#define AVR32_MDMA_ISR_BERR1_MASK                           0x00000200
#define AVR32_MDMA_ISR_BERR1_OFFSET                                  9
#define AVR32_MDMA_ISR_BERR1_SIZE                                    1
#define AVR32_MDMA_ISR_BERR2                                        10
#define AVR32_MDMA_ISR_BERR2_MASK                           0x00000400
#define AVR32_MDMA_ISR_BERR2_OFFSET                                 10
#define AVR32_MDMA_ISR_BERR2_SIZE                                    1
#define AVR32_MDMA_ISR_BERR3                                        11
#define AVR32_MDMA_ISR_BERR3_MASK                           0x00000800
#define AVR32_MDMA_ISR_BERR3_OFFSET                                 11
#define AVR32_MDMA_ISR_BERR3_SIZE                                    1
#define AVR32_MDMA_ISR_CH0C                                          0
#define AVR32_MDMA_ISR_CH0C_MASK                            0x00000001
#define AVR32_MDMA_ISR_CH0C_OFFSET                                   0
#define AVR32_MDMA_ISR_CH0C_SIZE                                     1
#define AVR32_MDMA_ISR_CH1C                                          1
#define AVR32_MDMA_ISR_CH1C_MASK                            0x00000002
#define AVR32_MDMA_ISR_CH1C_OFFSET                                   1
#define AVR32_MDMA_ISR_CH1C_SIZE                                     1
#define AVR32_MDMA_ISR_CH2C                                          2
#define AVR32_MDMA_ISR_CH2C_MASK                            0x00000004
#define AVR32_MDMA_ISR_CH2C_OFFSET                                   2
#define AVR32_MDMA_ISR_CH2C_SIZE                                     1
#define AVR32_MDMA_ISR_CH3C                                          3
#define AVR32_MDMA_ISR_CH3C_MASK                            0x00000008
#define AVR32_MDMA_ISR_CH3C_OFFSET                                   3
#define AVR32_MDMA_ISR_CH3C_SIZE                                     1
#define AVR32_MDMA_ISR_MASK                                 0x00000f0f
#define AVR32_MDMA_ISR_RESETVALUE                           0x00000000
#define AVR32_MDMA_L                                                22
#define AVR32_MDMA_L_MASK                                   0x00400000
#define AVR32_MDMA_L_OFFSET                                         22
#define AVR32_MDMA_L_SIZE                                            1
#define AVR32_MDMA_PR                                       0x00000018
#define AVR32_MDMA_PR_BURST                                          8
#define AVR32_MDMA_PR_BURST_MASK                            0x00000300
#define AVR32_MDMA_PR_BURST_OFFSET                                   8
#define AVR32_MDMA_PR_BURST_SIZE                                     2
#define AVR32_MDMA_PR_CH0I                                           0
#define AVR32_MDMA_PR_CH0I_MASK                             0x00000001
#define AVR32_MDMA_PR_CH0I_OFFSET                                    0
#define AVR32_MDMA_PR_CH0I_SIZE                                      1
#define AVR32_MDMA_PR_CH1I                                           1
#define AVR32_MDMA_PR_CH1I_MASK                             0x00000002
#define AVR32_MDMA_PR_CH1I_OFFSET                                    1
#define AVR32_MDMA_PR_CH1I_SIZE                                      1
#define AVR32_MDMA_PR_CH2I                                           2
#define AVR32_MDMA_PR_CH2I_MASK                             0x00000004
#define AVR32_MDMA_PR_CH2I_OFFSET                                    2
#define AVR32_MDMA_PR_CH2I_SIZE                                      1
#define AVR32_MDMA_PR_CH3I                                           3
#define AVR32_MDMA_PR_CH3I_MASK                             0x00000008
#define AVR32_MDMA_PR_CH3I_OFFSET                                    3
#define AVR32_MDMA_PR_CH3I_SIZE                                      1
#define AVR32_MDMA_PR_MASK                                  0x0000030f
#define AVR32_MDMA_PR_RESETVALUE                            0x00000101
#define AVR32_MDMA_RAR                                               0
#define AVR32_MDMA_RAR0                                     0x00000044
#define AVR32_MDMA_RAR0_MASK                                0xffffffff
#define AVR32_MDMA_RAR0_RAR                                          0
#define AVR32_MDMA_RAR0_RAR_MASK                            0xffffffff
#define AVR32_MDMA_RAR0_RAR_OFFSET                                   0
#define AVR32_MDMA_RAR0_RAR_SIZE                                    32
#define AVR32_MDMA_RAR0_RESETVALUE                          0x00000000
#define AVR32_MDMA_RAR1                                     0x00000054
#define AVR32_MDMA_RAR1_MASK                                0xffffffff
#define AVR32_MDMA_RAR1_RAR                                          0
#define AVR32_MDMA_RAR1_RAR_MASK                            0xffffffff
#define AVR32_MDMA_RAR1_RAR_OFFSET                                   0
#define AVR32_MDMA_RAR1_RAR_SIZE                                    32
#define AVR32_MDMA_RAR1_RESETVALUE                          0x00000000
#define AVR32_MDMA_RAR2                                     0x00000064
#define AVR32_MDMA_RAR2_MASK                                0xffffffff
#define AVR32_MDMA_RAR2_RAR                                          0
#define AVR32_MDMA_RAR2_RAR_MASK                            0xffffffff
#define AVR32_MDMA_RAR2_RAR_OFFSET                                   0
#define AVR32_MDMA_RAR2_RAR_SIZE                                    32
#define AVR32_MDMA_RAR2_RESETVALUE                          0x00000000
#define AVR32_MDMA_RAR3                                     0x00000074
#define AVR32_MDMA_RAR3_MASK                                0xffffffff
#define AVR32_MDMA_RAR3_RAR                                          0
#define AVR32_MDMA_RAR3_RAR_MASK                            0xffffffff
#define AVR32_MDMA_RAR3_RAR_OFFSET                                   0
#define AVR32_MDMA_RAR3_RAR_SIZE                                    32
#define AVR32_MDMA_RAR3_RESETVALUE                          0x00000000
#define AVR32_MDMA_RAR_MASK                                 0xffffffff
#define AVR32_MDMA_RAR_OFFSET                                        0
#define AVR32_MDMA_RAR_SIZE                                         32
#define AVR32_MDMA_SIZE                                             16
#define AVR32_MDMA_SIZE_MASK                                0x00030000
#define AVR32_MDMA_SIZE_OFFSET                                      16
#define AVR32_MDMA_SIZE_SIZE                                         2
#define AVR32_MDMA_TCIE                                             20
#define AVR32_MDMA_TCIE_MASK                                0x00100000
#define AVR32_MDMA_TCIE_OFFSET                                      20
#define AVR32_MDMA_TCIE_SIZE                                         1
#define AVR32_MDMA_TCNT                                              0
#define AVR32_MDMA_TCNT_MASK                                0x0000ffff
#define AVR32_MDMA_TCNT_OFFSET                                       0
#define AVR32_MDMA_TCNT_SIZE                                        16
#define AVR32_MDMA_V                                                21
#define AVR32_MDMA_VERSION                                           0
#define AVR32_MDMA_VERSION_MASK                             0x00000fff
#define AVR32_MDMA_VERSION_OFFSET                                    0
#define AVR32_MDMA_VERSION_SIZE                                     12
#define AVR32_MDMA_VR                                       0x0000001c
#define AVR32_MDMA_VR_MASK                                  0x00000fff
#define AVR32_MDMA_VR_RESETVALUE                            0x00000101
#define AVR32_MDMA_VR_VERSION                                        0
#define AVR32_MDMA_VR_VERSION_MASK                          0x00000fff
#define AVR32_MDMA_VR_VERSION_OFFSET                                 0
#define AVR32_MDMA_VR_VERSION_SIZE                                  12
#define AVR32_MDMA_V_MASK                                   0x00200000
#define AVR32_MDMA_V_OFFSET                                         21
#define AVR32_MDMA_V_SIZE                                            1
#define AVR32_MDMA_WAR                                               0
#define AVR32_MDMA_WAR0                                     0x00000048
#define AVR32_MDMA_WAR0_MASK                                0xffffffff
#define AVR32_MDMA_WAR0_RESETVALUE                          0x00000000
#define AVR32_MDMA_WAR0_WAR                                          0
#define AVR32_MDMA_WAR0_WAR_MASK                            0xffffffff
#define AVR32_MDMA_WAR0_WAR_OFFSET                                   0
#define AVR32_MDMA_WAR0_WAR_SIZE                                    32
#define AVR32_MDMA_WAR1                                     0x00000058
#define AVR32_MDMA_WAR1_MASK                                0xffffffff
#define AVR32_MDMA_WAR1_RESETVALUE                          0x00000000
#define AVR32_MDMA_WAR1_WAR                                          0
#define AVR32_MDMA_WAR1_WAR_MASK                            0xffffffff
#define AVR32_MDMA_WAR1_WAR_OFFSET                                   0
#define AVR32_MDMA_WAR1_WAR_SIZE                                    32
#define AVR32_MDMA_WAR2                                     0x00000068
#define AVR32_MDMA_WAR2_MASK                                0xffffffff
#define AVR32_MDMA_WAR2_RESETVALUE                          0x00000000
#define AVR32_MDMA_WAR2_WAR                                          0
#define AVR32_MDMA_WAR2_WAR_MASK                            0xffffffff
#define AVR32_MDMA_WAR2_WAR_OFFSET                                   0
#define AVR32_MDMA_WAR2_WAR_SIZE                                    32
#define AVR32_MDMA_WAR3                                     0x00000078
#define AVR32_MDMA_WAR3_MASK                                0xffffffff
#define AVR32_MDMA_WAR3_RESETVALUE                          0x00000000
#define AVR32_MDMA_WAR3_WAR                                          0
#define AVR32_MDMA_WAR3_WAR_MASK                            0xffffffff
#define AVR32_MDMA_WAR3_WAR_OFFSET                                   0
#define AVR32_MDMA_WAR3_WAR_SIZE                                    32
#define AVR32_MDMA_WAR_MASK                                 0xffffffff
#define AVR32_MDMA_WAR_OFFSET                                        0
#define AVR32_MDMA_WAR_SIZE                                         32




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_mdma_cr_t {
    unsigned int                 : 7;
    unsigned int arb             : 1;
    unsigned int                 : 4;
    unsigned int ch3dis          : 1;
    unsigned int ch2dis          : 1;
    unsigned int ch1dis          : 1;
    unsigned int ch0dis          : 1;
    unsigned int                 : 4;
    unsigned int ch3m            : 1;
    unsigned int ch2m            : 1;
    unsigned int ch1m            : 1;
    unsigned int ch0m            : 1;
    unsigned int                 : 4;
    unsigned int ch3en           : 1;
    unsigned int ch2en           : 1;
    unsigned int ch1en           : 1;
    unsigned int ch0en           : 1;
} avr32_mdma_cr_t;



typedef struct avr32_mdma_ier_t {
    unsigned int                 :20;
    unsigned int berr3           : 1;
    unsigned int berr2           : 1;
    unsigned int berr1           : 1;
    unsigned int berr0           : 1;
    unsigned int                 : 4;
    unsigned int ch3c            : 1;
    unsigned int ch2c            : 1;
    unsigned int ch1c            : 1;
    unsigned int ch0c            : 1;
} avr32_mdma_ier_t;



typedef struct avr32_mdma_idr_t {
    unsigned int                 :20;
    unsigned int berr3           : 1;
    unsigned int berr2           : 1;
    unsigned int berr1           : 1;
    unsigned int berr0           : 1;
    unsigned int                 : 4;
    unsigned int ch3c            : 1;
    unsigned int ch2c            : 1;
    unsigned int ch1c            : 1;
    unsigned int ch0c            : 1;
} avr32_mdma_idr_t;



typedef struct avr32_mdma_imr_t {
    unsigned int                 :20;
    unsigned int berr3           : 1;
    unsigned int berr2           : 1;
    unsigned int berr1           : 1;
    unsigned int berr0           : 1;
    unsigned int                 : 4;
    unsigned int ch3c            : 1;
    unsigned int ch2c            : 1;
    unsigned int ch1c            : 1;
    unsigned int ch0c            : 1;
} avr32_mdma_imr_t;



typedef struct avr32_mdma_isr_t {
    unsigned int                 :20;
    unsigned int berr3           : 1;
    unsigned int berr2           : 1;
    unsigned int berr1           : 1;
    unsigned int berr0           : 1;
    unsigned int                 : 4;
    unsigned int ch3c            : 1;
    unsigned int ch2c            : 1;
    unsigned int ch1c            : 1;
    unsigned int ch0c            : 1;
} avr32_mdma_isr_t;



typedef struct avr32_mdma_icr_t {
    unsigned int                 :20;
    unsigned int berr3           : 1;
    unsigned int berr2           : 1;
    unsigned int berr1           : 1;
    unsigned int berr0           : 1;
    unsigned int                 : 4;
    unsigned int ch3c            : 1;
    unsigned int ch2c            : 1;
    unsigned int ch1c            : 1;
    unsigned int choc            : 1;
} avr32_mdma_icr_t;



typedef struct avr32_mdma_pr_t {
    unsigned int                 :22;
    unsigned int burst           : 2;
    unsigned int                 : 4;
    unsigned int ch3i            : 1;
    unsigned int ch2i            : 1;
    unsigned int ch1i            : 1;
    unsigned int ch0i            : 1;
} avr32_mdma_pr_t;



typedef struct avr32_mdma_vr_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_mdma_vr_t;



typedef struct avr32_mdma_ccr_t {
    unsigned int                 : 6;
    unsigned int bswp            : 2;
    unsigned int                 : 1;
    unsigned int l               : 1;
    unsigned int v               : 1;
    unsigned int tcie            : 1;
    unsigned int burst           : 2;
    unsigned int size            : 2;
    unsigned int tcnt            :16;
} avr32_mdma_ccr_t;


typedef struct avr32_mdma_channel_t
{
    unsigned long  cdar;    // 0x0000
    unsigned long  rar;     // 0x0004
    unsigned long  war;     // 0x0008
    union
    {
        unsigned long    ccr;  // 0x000c
        avr32_mdma_ccr_t CCR;
    };
} avr32_mdma_channel_t;

typedef struct  avr32_mdma_dsar_t
{
    unsigned long dsar;
} avr32_mdma_dsar_t;

typedef struct avr32_mdma_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_mdma_cr_t                CR        ;
  };
  union {
          unsigned long                  ier       ;//0x0004
          avr32_mdma_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0008
          avr32_mdma_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x000c
    const avr32_mdma_imr_t               IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x0010
    const avr32_mdma_isr_t               ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0014
          avr32_mdma_icr_t               ICR       ;
  };
  union {
    const unsigned long                  pr        ;//0x0018
    const avr32_mdma_pr_t                PR        ;
  };
  union {
    const unsigned long                  vr        ;//0x001c
    const avr32_mdma_vr_t                VR        ;
  };

    avr32_mdma_dsar_t descriptor_channel[4];   // 0x0020

    unsigned int :32;     // 0x0030
    unsigned int :32;     // 0x0034
    unsigned int :32;     // 0x0038
    unsigned int :32;     // 0x003c

    avr32_mdma_channel_t channel[4];    // 0x0040

} avr32_mdma_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_MDMA_101_H_INCLUDED*/
#endif

