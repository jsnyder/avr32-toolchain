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
 * Model        : UC3L064T
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_AST_300_H_INCLUDED
#define AVR32_AST_300_H_INCLUDED

#define AVR32_AST_H_VERSION 300

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_AST_<register>
 - Bitfield mask:   AVR32_AST_<register>_<bitfield>
 - Bitfield offset: AVR32_AST_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AST_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_AST_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_AST_<bitfield>
 - Bitfield offset: AVR32_AST_<bitfield>_OFFSET
 - Bitfield size:   AVR32_AST_<bitfield>_SIZE
 - Bitfield values: AVR32_AST_<bitfield>_<value name>
 - Bitfield values: AVR32_AST_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_AST_1KHZCLK                                  0x00000004
#define AVR32_AST_32KHZCLK                                 0x00000001  /* Deprecated. */
#define AVR32_AST_32_KHZ_CLOCK                             0x00000001
#define AVR32_AST_ADD                                               5
#define AVR32_AST_ADD_MASK                                 0x00000020
#define AVR32_AST_ADD_OFFSET                                        5
#define AVR32_AST_ADD_SIZE                                          1
#define AVR32_AST_ALARM0                                            8
#define AVR32_AST_ALARM0_MASK                              0x00000100
#define AVR32_AST_ALARM0_OFFSET                                     8
#define AVR32_AST_ALARM0_SIZE                                       1
#define AVR32_AST_ALARM1                                            9
#define AVR32_AST_ALARM1_MASK                              0x00000200
#define AVR32_AST_ALARM1_OFFSET                                     9
#define AVR32_AST_ALARM1_SIZE                                       1
#define AVR32_AST_AR0                                      0x00000020
#define AVR32_AST_AR0_MASK                                 0xffffffff
#define AVR32_AST_AR0_RESETVALUE                           0x00000000
#define AVR32_AST_AR0_VALUE                                         0
#define AVR32_AST_AR0_VALUE_MASK                           0xffffffff
#define AVR32_AST_AR0_VALUE_OFFSET                                  0
#define AVR32_AST_AR0_VALUE_SIZE                                   32
#define AVR32_AST_AR1                                      0x00000024
#define AVR32_AST_AR1_MASK                                 0xffffffff
#define AVR32_AST_AR1_RESETVALUE                           0x00000000
#define AVR32_AST_AR1_VALUE                                         0
#define AVR32_AST_AR1_VALUE_MASK                           0xffffffff
#define AVR32_AST_AR1_VALUE_OFFSET                                  0
#define AVR32_AST_AR1_VALUE_SIZE                                   32
#define AVR32_AST_BUSY                                             24
#define AVR32_AST_BUSY_MASK                                0x01000000
#define AVR32_AST_BUSY_OFFSET                                      24
#define AVR32_AST_BUSY_SIZE                                         1
#define AVR32_AST_CA0                                               8
#define AVR32_AST_CA0_MASK                                 0x00000100
#define AVR32_AST_CA0_OFFSET                                        8
#define AVR32_AST_CA0_SIZE                                          1
#define AVR32_AST_CA1                                               9
#define AVR32_AST_CA1_MASK                                 0x00000200
#define AVR32_AST_CA1_OFFSET                                        9
#define AVR32_AST_CA1_SIZE                                          1
#define AVR32_AST_CAL                                               2
#define AVR32_AST_CALV                                     0x00000054
#define AVR32_AST_CALV_DAY                                         17
#define AVR32_AST_CALV_DAY_MASK                            0x003e0000
#define AVR32_AST_CALV_DAY_OFFSET                                  17
#define AVR32_AST_CALV_DAY_SIZE                                     5
#define AVR32_AST_CALV_HOUR                                        12
#define AVR32_AST_CALV_HOUR_MASK                           0x0001f000
#define AVR32_AST_CALV_HOUR_OFFSET                                 12
#define AVR32_AST_CALV_HOUR_SIZE                                    5
#define AVR32_AST_CALV_MASK                                0xffffffff
#define AVR32_AST_CALV_MIN                                          6
#define AVR32_AST_CALV_MIN_MASK                            0x00000fc0
#define AVR32_AST_CALV_MIN_OFFSET                                   6
#define AVR32_AST_CALV_MIN_SIZE                                     6
#define AVR32_AST_CALV_MONTH                                       22
#define AVR32_AST_CALV_MONTH_MASK                          0x03c00000
#define AVR32_AST_CALV_MONTH_OFFSET                                22
#define AVR32_AST_CALV_MONTH_SIZE                                   4
#define AVR32_AST_CALV_RESETVALUE                          0x00000000
#define AVR32_AST_CALV_SEC                                          0
#define AVR32_AST_CALV_SEC_MASK                            0x0000003f
#define AVR32_AST_CALV_SEC_OFFSET                                   0
#define AVR32_AST_CALV_SEC_SIZE                                     6
#define AVR32_AST_CALV_YEAR                                        26
#define AVR32_AST_CALV_YEAR_MASK                           0xfc000000
#define AVR32_AST_CALV_YEAR_OFFSET                                 26
#define AVR32_AST_CALV_YEAR_SIZE                                    6
#define AVR32_AST_CAL_MASK                                 0x00000004
#define AVR32_AST_CAL_OFFSET                                        2
#define AVR32_AST_CAL_SIZE                                          1
#define AVR32_AST_CEN                                               0
#define AVR32_AST_CEN_MASK                                 0x00000001
#define AVR32_AST_CEN_OFFSET                                        0
#define AVR32_AST_CEN_SIZE                                          1
#define AVR32_AST_CLKBUSY                                          28
#define AVR32_AST_CLKBUSY_MASK                             0x10000000
#define AVR32_AST_CLKBUSY_OFFSET                                   28
#define AVR32_AST_CLKBUSY_SIZE                                      1
#define AVR32_AST_CLKRDY                                           29
#define AVR32_AST_CLKRDY_MASK                              0x20000000
#define AVR32_AST_CLKRDY_OFFSET                                    29
#define AVR32_AST_CLKRDY_SIZE                                       1
#define AVR32_AST_CLOCK                                    0x00000040
#define AVR32_AST_CLOCK_CEN                                         0
#define AVR32_AST_CLOCK_CEN_MASK                           0x00000001
#define AVR32_AST_CLOCK_CEN_OFFSET                                  0
#define AVR32_AST_CLOCK_CEN_SIZE                                    1
#define AVR32_AST_CLOCK_CSSEL                                       8
#define AVR32_AST_CLOCK_CSSEL_1KHZCLK                      0x00000004
#define AVR32_AST_CLOCK_CSSEL_32KHZCLK                     0x00000001  /* Deprecated */
#define AVR32_AST_CLOCK_CSSEL_32_KHZ_CLOCK                 0x00000001
#define AVR32_AST_CLOCK_CSSEL_GCLK                         0x00000003
#define AVR32_AST_CLOCK_CSSEL_MASK                         0x00000700
#define AVR32_AST_CLOCK_CSSEL_OFFSET                                8
#define AVR32_AST_CLOCK_CSSEL_PBCLOCK                      0x00000002  /* Deprecated. */
#define AVR32_AST_CLOCK_CSSEL_PB_CLOCK                     0x00000002
#define AVR32_AST_CLOCK_CSSEL_SIZE                                  3
#define AVR32_AST_CLOCK_CSSEL_SLOWCLOCK                    0x00000000  /* Deprecated. */
#define AVR32_AST_CLOCK_CSSEL_SLOW_CLOCK                   0x00000000
#define AVR32_AST_CLOCK_MASK                               0x00000701
#define AVR32_AST_CLOCK_RESETVALUE                         0x00000000
#define AVR32_AST_CR                                       0x00000000
#define AVR32_AST_CR_CA0                                            8
#define AVR32_AST_CR_CA0_MASK                              0x00000100
#define AVR32_AST_CR_CA0_OFFSET                                     8
#define AVR32_AST_CR_CA0_SIZE                                       1
#define AVR32_AST_CR_CA1                                            9
#define AVR32_AST_CR_CA1_MASK                              0x00000200
#define AVR32_AST_CR_CA1_OFFSET                                     9
#define AVR32_AST_CR_CA1_SIZE                                       1
#define AVR32_AST_CR_CAL                                            2
#define AVR32_AST_CR_CAL_MASK                              0x00000004
#define AVR32_AST_CR_CAL_OFFSET                                     2
#define AVR32_AST_CR_CAL_SIZE                                       1
#define AVR32_AST_CR_EN                                             0
#define AVR32_AST_CR_EN_MASK                               0x00000001
#define AVR32_AST_CR_EN_OFFSET                                      0
#define AVR32_AST_CR_EN_SIZE                                        1
#define AVR32_AST_CR_MASK                                  0x001f0307
#define AVR32_AST_CR_PCLR                                           1
#define AVR32_AST_CR_PCLR_MASK                             0x00000002
#define AVR32_AST_CR_PCLR_OFFSET                                    1
#define AVR32_AST_CR_PCLR_SIZE                                      1
#define AVR32_AST_CR_PSEL                                          16
#define AVR32_AST_CR_PSEL_MASK                             0x001f0000
#define AVR32_AST_CR_PSEL_OFFSET                                   16
#define AVR32_AST_CR_PSEL_SIZE                                      5
#define AVR32_AST_CR_RESETVALUE                            0x00000000
#define AVR32_AST_CSSEL                                             8
#define AVR32_AST_CSSEL_1KHZCLK                            0x00000004
#define AVR32_AST_CSSEL_32KHZCLK                           0x00000001  /* Deprecated. */
#define AVR32_AST_CSSEL_32_KHZ_CLOCK                       0x00000001
#define AVR32_AST_CSSEL_GCLK                               0x00000003
#define AVR32_AST_CSSEL_MASK                               0x00000700
#define AVR32_AST_CSSEL_OFFSET                                      8
#define AVR32_AST_CSSEL_PBCLOCK                            0x00000002  /* Deprecated. */
#define AVR32_AST_CSSEL_PB_CLOCK                           0x00000002
#define AVR32_AST_CSSEL_SIZE                                        3
#define AVR32_AST_CSSEL_SLOWCLOCK                          0x00000000  /* Deprecated. */
#define AVR32_AST_CSSEL_SLOW_CLOCK                         0x00000000
#define AVR32_AST_CV                                       0x00000004
#define AVR32_AST_CV_MASK                                  0xffffffff
#define AVR32_AST_CV_RESETVALUE                            0x00000000
#define AVR32_AST_CV_VALUE                                          0
#define AVR32_AST_CV_VALUE_MASK                            0xffffffff
#define AVR32_AST_CV_VALUE_OFFSET                                   0
#define AVR32_AST_CV_VALUE_SIZE                                    32
#define AVR32_AST_DAY                                              17
#define AVR32_AST_DAY_MASK                                 0x003e0000
#define AVR32_AST_DAY_OFFSET                                       17
#define AVR32_AST_DAY_SIZE                                          5
#define AVR32_AST_DT                                                0
#define AVR32_AST_DTEXPVALUE                                        2
#define AVR32_AST_DTEXPVALUE_MASK                          0x0000007c
#define AVR32_AST_DTEXPVALUE_OFFSET                                 2
#define AVR32_AST_DTEXPVALUE_SIZE                                   5
#define AVR32_AST_DTEXPWA                                           1
#define AVR32_AST_DTEXPWA_MASK                             0x00000002
#define AVR32_AST_DTEXPWA_OFFSET                                    1
#define AVR32_AST_DTEXPWA_SIZE                                      1
#define AVR32_AST_DTR                                      0x00000044
#define AVR32_AST_DTR_ADD                                           5
#define AVR32_AST_DTR_ADD_MASK                             0x00000020
#define AVR32_AST_DTR_ADD_OFFSET                                    5
#define AVR32_AST_DTR_ADD_SIZE                                      1
#define AVR32_AST_DTR_EXP                                           0
#define AVR32_AST_DTR_EXP_MASK                             0x0000001f
#define AVR32_AST_DTR_EXP_OFFSET                                    0
#define AVR32_AST_DTR_EXP_SIZE                                      5
#define AVR32_AST_DTR_MASK                                 0x0000ff3f
#define AVR32_AST_DTR_RESETVALUE                           0x00000000
#define AVR32_AST_DTR_VALUE                                         8
#define AVR32_AST_DTR_VALUE_MASK                           0x0000ff00
#define AVR32_AST_DTR_VALUE_OFFSET                                  8
#define AVR32_AST_DTR_VALUE_SIZE                                    8
#define AVR32_AST_DT_MASK                                  0x00000001
#define AVR32_AST_DT_OFF                                   0x00000000
#define AVR32_AST_DT_OFFSET                                         0
#define AVR32_AST_DT_ON                                    0x00000001
#define AVR32_AST_DT_SIZE                                           1
#define AVR32_AST_EN                                                0
#define AVR32_AST_EN_MASK                                  0x00000001
#define AVR32_AST_EN_OFFSET                                         0
#define AVR32_AST_EN_SIZE                                           1
#define AVR32_AST_EVD                                      0x0000004c
#define AVR32_AST_EVD_ALARM0                                        8
#define AVR32_AST_EVD_ALARM0_MASK                          0x00000100
#define AVR32_AST_EVD_ALARM0_OFFSET                                 8
#define AVR32_AST_EVD_ALARM0_SIZE                                   1
#define AVR32_AST_EVD_ALARM1                                        9
#define AVR32_AST_EVD_ALARM1_MASK                          0x00000200
#define AVR32_AST_EVD_ALARM1_OFFSET                                 9
#define AVR32_AST_EVD_ALARM1_SIZE                                   1
#define AVR32_AST_EVD_MASK                                 0x00030301
#define AVR32_AST_EVD_OVF                                           0
#define AVR32_AST_EVD_OVF_MASK                             0x00000001
#define AVR32_AST_EVD_OVF_OFFSET                                    0
#define AVR32_AST_EVD_OVF_SIZE                                      1
#define AVR32_AST_EVD_PER0                                         16
#define AVR32_AST_EVD_PER0_MASK                            0x00010000
#define AVR32_AST_EVD_PER0_OFFSET                                  16
#define AVR32_AST_EVD_PER0_SIZE                                     1
#define AVR32_AST_EVD_PER1                                         17
#define AVR32_AST_EVD_PER1_MASK                            0x00020000
#define AVR32_AST_EVD_PER1_OFFSET                                  17
#define AVR32_AST_EVD_PER1_SIZE                                     1
#define AVR32_AST_EVD_RESETVALUE                           0x00000000
#define AVR32_AST_EVE                                      0x00000048
#define AVR32_AST_EVE_ALARM0                                        8
#define AVR32_AST_EVE_ALARM0_MASK                          0x00000100
#define AVR32_AST_EVE_ALARM0_OFFSET                                 8
#define AVR32_AST_EVE_ALARM0_SIZE                                   1
#define AVR32_AST_EVE_ALARM1                                        9
#define AVR32_AST_EVE_ALARM1_MASK                          0x00000200
#define AVR32_AST_EVE_ALARM1_OFFSET                                 9
#define AVR32_AST_EVE_ALARM1_SIZE                                   1
#define AVR32_AST_EVE_MASK                                 0x00030301
#define AVR32_AST_EVE_OVF                                           0
#define AVR32_AST_EVE_OVF_MASK                             0x00000001
#define AVR32_AST_EVE_OVF_OFFSET                                    0
#define AVR32_AST_EVE_OVF_SIZE                                      1
#define AVR32_AST_EVE_PER0                                         16
#define AVR32_AST_EVE_PER0_MASK                            0x00010000
#define AVR32_AST_EVE_PER0_OFFSET                                  16
#define AVR32_AST_EVE_PER0_SIZE                                     1
#define AVR32_AST_EVE_PER1                                         17
#define AVR32_AST_EVE_PER1_MASK                            0x00020000
#define AVR32_AST_EVE_PER1_OFFSET                                  17
#define AVR32_AST_EVE_PER1_SIZE                                     1
#define AVR32_AST_EVE_RESETVALUE                           0x00000000
#define AVR32_AST_EVM                                      0x00000050
#define AVR32_AST_EVM_ALARM0                                        8
#define AVR32_AST_EVM_ALARM0_MASK                          0x00000100
#define AVR32_AST_EVM_ALARM0_OFFSET                                 8
#define AVR32_AST_EVM_ALARM0_SIZE                                   1
#define AVR32_AST_EVM_ALARM1                                        9
#define AVR32_AST_EVM_ALARM1_MASK                          0x00000200
#define AVR32_AST_EVM_ALARM1_OFFSET                                 9
#define AVR32_AST_EVM_ALARM1_SIZE                                   1
#define AVR32_AST_EVM_MASK                                 0x00030301
#define AVR32_AST_EVM_OVF                                           0
#define AVR32_AST_EVM_OVF_MASK                             0x00000001
#define AVR32_AST_EVM_OVF_OFFSET                                    0
#define AVR32_AST_EVM_OVF_SIZE                                      1
#define AVR32_AST_EVM_PER0                                         16
#define AVR32_AST_EVM_PER0_MASK                            0x00010000
#define AVR32_AST_EVM_PER0_OFFSET                                  16
#define AVR32_AST_EVM_PER0_SIZE                                     1
#define AVR32_AST_EVM_PER1                                         17
#define AVR32_AST_EVM_PER1_MASK                            0x00020000
#define AVR32_AST_EVM_PER1_OFFSET                                  17
#define AVR32_AST_EVM_PER1_SIZE                                     1
#define AVR32_AST_EVM_RESETVALUE                           0x00000000
#define AVR32_AST_EXP                                               0
#define AVR32_AST_EXP_MASK                                 0x0000001f
#define AVR32_AST_EXP_OFFSET                                        0
#define AVR32_AST_EXP_SIZE                                          5
#define AVR32_AST_GCLK                                     0x00000003
#define AVR32_AST_HOUR                                             12
#define AVR32_AST_HOUR_MASK                                0x0001f000
#define AVR32_AST_HOUR_OFFSET                                      12
#define AVR32_AST_HOUR_SIZE                                         5
#define AVR32_AST_IDR                                      0x00000014
#define AVR32_AST_IDR_ALARM0                                        8
#define AVR32_AST_IDR_ALARM0_MASK                          0x00000100
#define AVR32_AST_IDR_ALARM0_OFFSET                                 8
#define AVR32_AST_IDR_ALARM0_SIZE                                   1
#define AVR32_AST_IDR_ALARM1                                        9
#define AVR32_AST_IDR_ALARM1_MASK                          0x00000200
#define AVR32_AST_IDR_ALARM1_OFFSET                                 9
#define AVR32_AST_IDR_ALARM1_SIZE                                   1
#define AVR32_AST_IDR_CLKRDY                                       29
#define AVR32_AST_IDR_CLKRDY_MASK                          0x20000000
#define AVR32_AST_IDR_CLKRDY_OFFSET                                29
#define AVR32_AST_IDR_CLKRDY_SIZE                                   1
#define AVR32_AST_IDR_MASK                                 0x22030301
#define AVR32_AST_IDR_OVF                                           0
#define AVR32_AST_IDR_OVF_MASK                             0x00000001
#define AVR32_AST_IDR_OVF_OFFSET                                    0
#define AVR32_AST_IDR_OVF_SIZE                                      1
#define AVR32_AST_IDR_PER0                                         16
#define AVR32_AST_IDR_PER0_MASK                            0x00010000
#define AVR32_AST_IDR_PER0_OFFSET                                  16
#define AVR32_AST_IDR_PER0_SIZE                                     1
#define AVR32_AST_IDR_PER1                                         17
#define AVR32_AST_IDR_PER1_MASK                            0x00020000
#define AVR32_AST_IDR_PER1_OFFSET                                  17
#define AVR32_AST_IDR_PER1_SIZE                                     1
#define AVR32_AST_IDR_READY                                        25
#define AVR32_AST_IDR_READY_MASK                           0x02000000
#define AVR32_AST_IDR_READY_OFFSET                                 25
#define AVR32_AST_IDR_READY_SIZE                                    1
#define AVR32_AST_IDR_RESETVALUE                           0x00000000
#define AVR32_AST_IER                                      0x00000010
#define AVR32_AST_IER_ALARM0                                        8
#define AVR32_AST_IER_ALARM0_MASK                          0x00000100
#define AVR32_AST_IER_ALARM0_OFFSET                                 8
#define AVR32_AST_IER_ALARM0_SIZE                                   1
#define AVR32_AST_IER_ALARM1                                        9
#define AVR32_AST_IER_ALARM1_MASK                          0x00000200
#define AVR32_AST_IER_ALARM1_OFFSET                                 9
#define AVR32_AST_IER_ALARM1_SIZE                                   1
#define AVR32_AST_IER_CLKRDY                                       29
#define AVR32_AST_IER_CLKRDY_MASK                          0x20000000
#define AVR32_AST_IER_CLKRDY_OFFSET                                29
#define AVR32_AST_IER_CLKRDY_SIZE                                   1
#define AVR32_AST_IER_MASK                                 0x22030301
#define AVR32_AST_IER_OVF                                           0
#define AVR32_AST_IER_OVF_MASK                             0x00000001
#define AVR32_AST_IER_OVF_OFFSET                                    0
#define AVR32_AST_IER_OVF_SIZE                                      1
#define AVR32_AST_IER_PER0                                         16
#define AVR32_AST_IER_PER0_MASK                            0x00010000
#define AVR32_AST_IER_PER0_OFFSET                                  16
#define AVR32_AST_IER_PER0_SIZE                                     1
#define AVR32_AST_IER_PER1                                         17
#define AVR32_AST_IER_PER1_MASK                            0x00020000
#define AVR32_AST_IER_PER1_OFFSET                                  17
#define AVR32_AST_IER_PER1_SIZE                                     1
#define AVR32_AST_IER_READY                                        25
#define AVR32_AST_IER_READY_MASK                           0x02000000
#define AVR32_AST_IER_READY_OFFSET                                 25
#define AVR32_AST_IER_READY_SIZE                                    1
#define AVR32_AST_IER_RESETVALUE                           0x00000000
#define AVR32_AST_IMR                                      0x00000018
#define AVR32_AST_IMR_ALARM0                                        8
#define AVR32_AST_IMR_ALARM0_MASK                          0x00000100
#define AVR32_AST_IMR_ALARM0_OFFSET                                 8
#define AVR32_AST_IMR_ALARM0_SIZE                                   1
#define AVR32_AST_IMR_ALARM1                                        9
#define AVR32_AST_IMR_ALARM1_MASK                          0x00000200
#define AVR32_AST_IMR_ALARM1_OFFSET                                 9
#define AVR32_AST_IMR_ALARM1_SIZE                                   1
#define AVR32_AST_IMR_CLKRDY                                       29
#define AVR32_AST_IMR_CLKRDY_MASK                          0x20000000
#define AVR32_AST_IMR_CLKRDY_OFFSET                                29
#define AVR32_AST_IMR_CLKRDY_SIZE                                   1
#define AVR32_AST_IMR_MASK                                 0x22030301
#define AVR32_AST_IMR_OVF                                           0
#define AVR32_AST_IMR_OVF_MASK                             0x00000001
#define AVR32_AST_IMR_OVF_OFFSET                                    0
#define AVR32_AST_IMR_OVF_SIZE                                      1
#define AVR32_AST_IMR_PER0                                         16
#define AVR32_AST_IMR_PER0_MASK                            0x00010000
#define AVR32_AST_IMR_PER0_OFFSET                                  16
#define AVR32_AST_IMR_PER0_SIZE                                     1
#define AVR32_AST_IMR_PER1                                         17
#define AVR32_AST_IMR_PER1_MASK                            0x00020000
#define AVR32_AST_IMR_PER1_OFFSET                                  17
#define AVR32_AST_IMR_PER1_SIZE                                     1
#define AVR32_AST_IMR_READY                                        25
#define AVR32_AST_IMR_READY_MASK                           0x02000000
#define AVR32_AST_IMR_READY_OFFSET                                 25
#define AVR32_AST_IMR_READY_SIZE                                    1
#define AVR32_AST_IMR_RESETVALUE                           0x00000000
#define AVR32_AST_INSEL                                             0
#define AVR32_AST_INSEL_MASK                               0x0000001f
#define AVR32_AST_INSEL_OFFSET                                      0
#define AVR32_AST_INSEL_SIZE                                        5
#define AVR32_AST_MIN                                               6
#define AVR32_AST_MIN_MASK                                 0x00000fc0
#define AVR32_AST_MIN_OFFSET                                        6
#define AVR32_AST_MIN_SIZE                                          6
#define AVR32_AST_MONTH                                            22
#define AVR32_AST_MONTH_MASK                               0x03c00000
#define AVR32_AST_MONTH_OFFSET                                     22
#define AVR32_AST_MONTH_SIZE                                        4
#define AVR32_AST_NUMAR                                             8
#define AVR32_AST_NUMAR_MASK                               0x00000300
#define AVR32_AST_NUMAR_OFFSET                                      8
#define AVR32_AST_NUMAR_ONE                                0x00000001
#define AVR32_AST_NUMAR_SIZE                                        2
#define AVR32_AST_NUMAR_TWO                                0x00000002
#define AVR32_AST_NUMAR_ZERO                               0x00000000
#define AVR32_AST_NUMPIR                                           12
#define AVR32_AST_NUMPIR_MASK                              0x00001000
#define AVR32_AST_NUMPIR_OFFSET                                    12
#define AVR32_AST_NUMPIR_ONE                               0x00000000
#define AVR32_AST_NUMPIR_SIZE                                       1
#define AVR32_AST_NUMPIR_TWO                               0x00000001
#define AVR32_AST_OFF                                      0x00000000
#define AVR32_AST_ON                                       0x00000001
#define AVR32_AST_OVF                                               0
#define AVR32_AST_OVF_MASK                                 0x00000001
#define AVR32_AST_OVF_OFFSET                                        0
#define AVR32_AST_OVF_SIZE                                          1
#define AVR32_AST_PARAMETER                                0x000000f0
#define AVR32_AST_PARAMETER_DT                                      0
#define AVR32_AST_PARAMETER_DTEXPVALUE                              2
#define AVR32_AST_PARAMETER_DTEXPVALUE_MASK                0x0000007c
#define AVR32_AST_PARAMETER_DTEXPVALUE_OFFSET                       2
#define AVR32_AST_PARAMETER_DTEXPVALUE_SIZE                         5
#define AVR32_AST_PARAMETER_DTEXPWA                                 1
#define AVR32_AST_PARAMETER_DTEXPWA_MASK                   0x00000002
#define AVR32_AST_PARAMETER_DTEXPWA_OFFSET                          1
#define AVR32_AST_PARAMETER_DTEXPWA_SIZE                            1
#define AVR32_AST_PARAMETER_DT_MASK                        0x00000001
#define AVR32_AST_PARAMETER_DT_OFF                         0x00000000
#define AVR32_AST_PARAMETER_DT_OFFSET                               0
#define AVR32_AST_PARAMETER_DT_ON                          0x00000001
#define AVR32_AST_PARAMETER_DT_SIZE                                 1
#define AVR32_AST_PARAMETER_MASK                           0x1f1fd37f
#define AVR32_AST_PARAMETER_NUMAR                                   8
#define AVR32_AST_PARAMETER_NUMAR_MASK                     0x00000300
#define AVR32_AST_PARAMETER_NUMAR_OFFSET                            8
#define AVR32_AST_PARAMETER_NUMAR_ONE                      0x00000001
#define AVR32_AST_PARAMETER_NUMAR_SIZE                              2
#define AVR32_AST_PARAMETER_NUMAR_TWO                      0x00000002
#define AVR32_AST_PARAMETER_NUMAR_ZERO                     0x00000000
#define AVR32_AST_PARAMETER_NUMPIR                                 12
#define AVR32_AST_PARAMETER_NUMPIR_MASK                    0x00001000
#define AVR32_AST_PARAMETER_NUMPIR_OFFSET                          12
#define AVR32_AST_PARAMETER_NUMPIR_ONE                     0x00000000
#define AVR32_AST_PARAMETER_NUMPIR_SIZE                             1
#define AVR32_AST_PARAMETER_NUMPIR_TWO                     0x00000001
#define AVR32_AST_PARAMETER_PER0VALUE                              16
#define AVR32_AST_PARAMETER_PER0VALUE_MASK                 0x001f0000
#define AVR32_AST_PARAMETER_PER0VALUE_OFFSET                       16
#define AVR32_AST_PARAMETER_PER0VALUE_SIZE                          5
#define AVR32_AST_PARAMETER_PER1VALUE                              24
#define AVR32_AST_PARAMETER_PER1VALUE_MASK                 0x1f000000
#define AVR32_AST_PARAMETER_PER1VALUE_OFFSET                       24
#define AVR32_AST_PARAMETER_PER1VALUE_SIZE                          5
#define AVR32_AST_PARAMETER_PIR0WA                                 14
#define AVR32_AST_PARAMETER_PIR0WA_MASK                    0x00004000
#define AVR32_AST_PARAMETER_PIR0WA_OFFSET                          14
#define AVR32_AST_PARAMETER_PIR0WA_SIZE                             1
#define AVR32_AST_PARAMETER_PIR1WA                                 15
#define AVR32_AST_PARAMETER_PIR1WA_MASK                    0x00008000
#define AVR32_AST_PARAMETER_PIR1WA_OFFSET                          15
#define AVR32_AST_PARAMETER_PIR1WA_SIZE                             1
#define AVR32_AST_PARAMETER_RESETVALUE                     0x00000000
#define AVR32_AST_PBCLOCK                                  0x00000002  /* Deprecated. */
#define AVR32_AST_PB_CLOCK                                 0x00000002
#define AVR32_AST_PCLR                                              1
#define AVR32_AST_PCLR_MASK                                0x00000002
#define AVR32_AST_PCLR_OFFSET                                       1
#define AVR32_AST_PCLR_SIZE                                         1
#define AVR32_AST_PER0                                             16
#define AVR32_AST_PER0VALUE                                        16
#define AVR32_AST_PER0VALUE_MASK                           0x001f0000
#define AVR32_AST_PER0VALUE_OFFSET                                 16
#define AVR32_AST_PER0VALUE_SIZE                                    5
#define AVR32_AST_PER0_MASK                                0x00010000
#define AVR32_AST_PER0_OFFSET                                      16
#define AVR32_AST_PER0_SIZE                                         1
#define AVR32_AST_PER1                                             17
#define AVR32_AST_PER1VALUE                                        24
#define AVR32_AST_PER1VALUE_MASK                           0x1f000000
#define AVR32_AST_PER1VALUE_OFFSET                                 24
#define AVR32_AST_PER1VALUE_SIZE                                    5
#define AVR32_AST_PER1_MASK                                0x00020000
#define AVR32_AST_PER1_OFFSET                                      17
#define AVR32_AST_PER1_SIZE                                         1
#define AVR32_AST_PIR0                                     0x00000030
#define AVR32_AST_PIR0WA                                           14
#define AVR32_AST_PIR0WA_MASK                              0x00004000
#define AVR32_AST_PIR0WA_OFFSET                                    14
#define AVR32_AST_PIR0WA_SIZE                                       1
#define AVR32_AST_PIR0_INSEL                                        0
#define AVR32_AST_PIR0_INSEL_MASK                          0x0000001f
#define AVR32_AST_PIR0_INSEL_OFFSET                                 0
#define AVR32_AST_PIR0_INSEL_SIZE                                   5
#define AVR32_AST_PIR0_MASK                                0x0000001f
#define AVR32_AST_PIR0_RESETVALUE                          0x00000000
#define AVR32_AST_PIR1                                     0x00000034
#define AVR32_AST_PIR1WA                                           15
#define AVR32_AST_PIR1WA_MASK                              0x00008000
#define AVR32_AST_PIR1WA_OFFSET                                    15
#define AVR32_AST_PIR1WA_SIZE                                       1
#define AVR32_AST_PIR1_INSEL                                        0
#define AVR32_AST_PIR1_INSEL_MASK                          0x0000001f
#define AVR32_AST_PIR1_INSEL_OFFSET                                 0
#define AVR32_AST_PIR1_INSEL_SIZE                                   5
#define AVR32_AST_PIR1_MASK                                0x0000001f
#define AVR32_AST_PIR1_RESETVALUE                          0x00000000
#define AVR32_AST_PSEL                                             16
#define AVR32_AST_PSEL_MASK                                0x001f0000
#define AVR32_AST_PSEL_OFFSET                                      16
#define AVR32_AST_PSEL_SIZE                                         5
#define AVR32_AST_READY                                            25
#define AVR32_AST_READY_MASK                               0x02000000
#define AVR32_AST_READY_OFFSET                                     25
#define AVR32_AST_READY_SIZE                                        1
#define AVR32_AST_SCR                                      0x0000000c
#define AVR32_AST_SCR_ALARM0                                        8
#define AVR32_AST_SCR_ALARM0_MASK                          0x00000100
#define AVR32_AST_SCR_ALARM0_OFFSET                                 8
#define AVR32_AST_SCR_ALARM0_SIZE                                   1
#define AVR32_AST_SCR_ALARM1                                        9
#define AVR32_AST_SCR_ALARM1_MASK                          0x00000200
#define AVR32_AST_SCR_ALARM1_OFFSET                                 9
#define AVR32_AST_SCR_ALARM1_SIZE                                   1
#define AVR32_AST_SCR_CLKRDY                                       29
#define AVR32_AST_SCR_CLKRDY_MASK                          0x20000000
#define AVR32_AST_SCR_CLKRDY_OFFSET                                29
#define AVR32_AST_SCR_CLKRDY_SIZE                                   1
#define AVR32_AST_SCR_MASK                                 0x22030301
#define AVR32_AST_SCR_OVF                                           0
#define AVR32_AST_SCR_OVF_MASK                             0x00000001
#define AVR32_AST_SCR_OVF_OFFSET                                    0
#define AVR32_AST_SCR_OVF_SIZE                                      1
#define AVR32_AST_SCR_PER0                                         16
#define AVR32_AST_SCR_PER0_MASK                            0x00010000
#define AVR32_AST_SCR_PER0_OFFSET                                  16
#define AVR32_AST_SCR_PER0_SIZE                                     1
#define AVR32_AST_SCR_PER1                                         17
#define AVR32_AST_SCR_PER1_MASK                            0x00020000
#define AVR32_AST_SCR_PER1_OFFSET                                  17
#define AVR32_AST_SCR_PER1_SIZE                                     1
#define AVR32_AST_SCR_READY                                        25
#define AVR32_AST_SCR_READY_MASK                           0x02000000
#define AVR32_AST_SCR_READY_OFFSET                                 25
#define AVR32_AST_SCR_READY_SIZE                                    1
#define AVR32_AST_SCR_RESETVALUE                           0x00000000
#define AVR32_AST_SEC                                               0
#define AVR32_AST_SEC_MASK                                 0x0000003f
#define AVR32_AST_SEC_OFFSET                                        0
#define AVR32_AST_SEC_SIZE                                          6
#define AVR32_AST_SLOWCLOCK                                0x00000000  /* Deprecated. */
#define AVR32_AST_SLOW_CLOCK                               0x00000000
#define AVR32_AST_SR                                       0x00000008
#define AVR32_AST_SR_ALARM0                                         8
#define AVR32_AST_SR_ALARM0_MASK                           0x00000100
#define AVR32_AST_SR_ALARM0_OFFSET                                  8
#define AVR32_AST_SR_ALARM0_SIZE                                    1
#define AVR32_AST_SR_ALARM1                                         9
#define AVR32_AST_SR_ALARM1_MASK                           0x00000200
#define AVR32_AST_SR_ALARM1_OFFSET                                  9
#define AVR32_AST_SR_ALARM1_SIZE                                    1
#define AVR32_AST_SR_BUSY                                          24
#define AVR32_AST_SR_BUSY_MASK                             0x01000000
#define AVR32_AST_SR_BUSY_OFFSET                                   24
#define AVR32_AST_SR_BUSY_SIZE                                      1
#define AVR32_AST_SR_CLKBUSY                                       28
#define AVR32_AST_SR_CLKBUSY_MASK                          0x10000000
#define AVR32_AST_SR_CLKBUSY_OFFSET                                28
#define AVR32_AST_SR_CLKBUSY_SIZE                                   1
#define AVR32_AST_SR_CLKRDY                                        29
#define AVR32_AST_SR_CLKRDY_MASK                           0x20000000
#define AVR32_AST_SR_CLKRDY_OFFSET                                 29
#define AVR32_AST_SR_CLKRDY_SIZE                                    1
#define AVR32_AST_SR_MASK                                  0x33030301
#define AVR32_AST_SR_OVF                                            0
#define AVR32_AST_SR_OVF_MASK                              0x00000001
#define AVR32_AST_SR_OVF_OFFSET                                     0
#define AVR32_AST_SR_OVF_SIZE                                       1
#define AVR32_AST_SR_PER0                                          16
#define AVR32_AST_SR_PER0_MASK                             0x00010000
#define AVR32_AST_SR_PER0_OFFSET                                   16
#define AVR32_AST_SR_PER0_SIZE                                      1
#define AVR32_AST_SR_PER1                                          17
#define AVR32_AST_SR_PER1_MASK                             0x00020000
#define AVR32_AST_SR_PER1_OFFSET                                   17
#define AVR32_AST_SR_PER1_SIZE                                      1
#define AVR32_AST_SR_READY                                         25
#define AVR32_AST_SR_READY_MASK                            0x02000000
#define AVR32_AST_SR_READY_OFFSET                                  25
#define AVR32_AST_SR_READY_SIZE                                     1
#define AVR32_AST_SR_RESETVALUE                            0x00000000
#define AVR32_AST_VARIANT                                          16
#define AVR32_AST_VARIANT_MASK                             0x000f0000
#define AVR32_AST_VARIANT_OFFSET                                   16
#define AVR32_AST_VARIANT_SIZE                                      4
#define AVR32_AST_VERSION                                  0x000000fc
#define AVR32_AST_VERSION_MASK                             0x000f0fff
#define AVR32_AST_VERSION_OFFSET                                    0
#define AVR32_AST_VERSION_RESETVALUE                       0x00000300
#define AVR32_AST_VERSION_SIZE                                     12
#define AVR32_AST_VERSION_VARIANT                                  16
#define AVR32_AST_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_AST_VERSION_VARIANT_OFFSET                           16
#define AVR32_AST_VERSION_VARIANT_SIZE                              4
#define AVR32_AST_VERSION_VERSION                                   0
#define AVR32_AST_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_AST_VERSION_VERSION_OFFSET                            0
#define AVR32_AST_VERSION_VERSION_SIZE                             12
#define AVR32_AST_WER                                      0x0000001c
#define AVR32_AST_WER_ALARM0                                        8
#define AVR32_AST_WER_ALARM0_MASK                          0x00000100
#define AVR32_AST_WER_ALARM0_OFFSET                                 8
#define AVR32_AST_WER_ALARM0_SIZE                                   1
#define AVR32_AST_WER_ALARM1                                        9
#define AVR32_AST_WER_ALARM1_MASK                          0x00000200
#define AVR32_AST_WER_ALARM1_OFFSET                                 9
#define AVR32_AST_WER_ALARM1_SIZE                                   1
#define AVR32_AST_WER_MASK                                 0x00030301
#define AVR32_AST_WER_OVF                                           0
#define AVR32_AST_WER_OVF_MASK                             0x00000001
#define AVR32_AST_WER_OVF_OFFSET                                    0
#define AVR32_AST_WER_OVF_SIZE                                      1
#define AVR32_AST_WER_PER0                                         16
#define AVR32_AST_WER_PER0_MASK                            0x00010000
#define AVR32_AST_WER_PER0_OFFSET                                  16
#define AVR32_AST_WER_PER0_SIZE                                     1
#define AVR32_AST_WER_PER1                                         17
#define AVR32_AST_WER_PER1_MASK                            0x00020000
#define AVR32_AST_WER_PER1_OFFSET                                  17
#define AVR32_AST_WER_PER1_SIZE                                     1
#define AVR32_AST_WER_RESETVALUE                           0x00000000
#define AVR32_AST_YEAR                                             26
#define AVR32_AST_YEAR_MASK                                0xfc000000
#define AVR32_AST_YEAR_OFFSET                                      26
#define AVR32_AST_YEAR_SIZE                                         6
#define AVR32_AST_ZERO                                     0x00000000




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_ast_cr_t {
    unsigned int                 :11;
    unsigned int psel            : 5;
    unsigned int                 : 6;
    unsigned int ca1             : 1;
    unsigned int ca0             : 1;
    unsigned int                 : 5;
    unsigned int cal             : 1;
    unsigned int pclr            : 1;
    unsigned int en              : 1;
} avr32_ast_cr_t;



typedef struct avr32_ast_sr_t {
    unsigned int                 : 2;
    unsigned int clkrdy          : 1;
    unsigned int clkbusy         : 1;
    unsigned int                 : 2;
    unsigned int ready           : 1;
    unsigned int busy            : 1;
    unsigned int                 : 6;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_sr_t;



typedef struct avr32_ast_scr_t {
    unsigned int                 : 2;
    unsigned int clkrdy          : 1;
    unsigned int                 : 3;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_scr_t;



typedef struct avr32_ast_ier_t {
    unsigned int                 : 2;
    unsigned int clkrdy          : 1;
    unsigned int                 : 3;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_ier_t;



typedef struct avr32_ast_idr_t {
    unsigned int                 : 2;
    unsigned int clkrdy          : 1;
    unsigned int                 : 3;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_idr_t;



typedef struct avr32_ast_imr_t {
    unsigned int                 : 2;
    unsigned int clkrdy          : 1;
    unsigned int                 : 3;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_imr_t;



typedef struct avr32_ast_wer_t {
    unsigned int                 :14;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_wer_t;



typedef struct avr32_ast_pir0_t {
    unsigned int                 :27;
    unsigned int insel           : 5;
} avr32_ast_pir0_t;



typedef struct avr32_ast_pir1_t {
    unsigned int                 :27;
    unsigned int insel           : 5;
} avr32_ast_pir1_t;



typedef struct avr32_ast_clock_t {
    unsigned int                 :21;
    unsigned int cssel           : 3;
    unsigned int                 : 7;
    unsigned int cen             : 1;
} avr32_ast_clock_t;



typedef struct avr32_ast_dtr_t {
    unsigned int                 :16;
    unsigned int value           : 8;
    unsigned int                 : 2;
    unsigned int add             : 1;
    unsigned int exp             : 5;
} avr32_ast_dtr_t;



typedef struct avr32_ast_eve_t {
    unsigned int                 :14;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_eve_t;



typedef struct avr32_ast_evd_t {
    unsigned int                 :14;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_evd_t;



typedef struct avr32_ast_evm_t {
    unsigned int                 :14;
    unsigned int per1            : 1;
    unsigned int per0            : 1;
    unsigned int                 : 6;
    unsigned int alarm1          : 1;
    unsigned int alarm0          : 1;
    unsigned int                 : 7;
    unsigned int ovf             : 1;
} avr32_ast_evm_t;



typedef struct avr32_ast_calv_t {
    unsigned int year            : 6;
    unsigned int month           : 4;
    unsigned int day             : 5;
    unsigned int hour            : 5;
    unsigned int min             : 6;
    unsigned int sec             : 6;
} avr32_ast_calv_t;



typedef struct avr32_ast_parameter_t {
    unsigned int                 : 3;
    unsigned int per1value       : 5;
    unsigned int                 : 3;
    unsigned int per0value       : 5;
    unsigned int pir1wa          : 1;
    unsigned int pir0wa          : 1;
    unsigned int                 : 1;
    unsigned int numpir          : 1;
    unsigned int                 : 2;
    unsigned int numar           : 2;
    unsigned int                 : 1;
    unsigned int dtexpvalue      : 5;
    unsigned int dtexpwa         : 1;
    unsigned int dt              : 1;
} avr32_ast_parameter_t;



typedef struct avr32_ast_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_ast_version_t;



typedef struct avr32_ast_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_ast_cr_t                 CR        ;
  };
          unsigned long                  cv        ;//0x0004
  union {
    const unsigned long                  sr        ;//0x0008
    const avr32_ast_sr_t                 SR        ;
  };
  union {
          unsigned long                  scr       ;//0x000c
          avr32_ast_scr_t                SCR       ;
  };
  union {
          unsigned long                  ier       ;//0x0010
          avr32_ast_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_ast_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0018
    const avr32_ast_imr_t                IMR       ;
  };
  union {
          unsigned long                  wer       ;//0x001c
          avr32_ast_wer_t                WER       ;
  };
          unsigned long                  ar0       ;//0x0020
          unsigned long                  ar1       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
  union {
          unsigned long                  pir0      ;//0x0030
          avr32_ast_pir0_t               PIR0      ;
  };
  union {
          unsigned long                  pir1      ;//0x0034
          avr32_ast_pir1_t               PIR1      ;
  };
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
  union {
          unsigned long                  clock     ;//0x0040
          avr32_ast_clock_t              CLOCK     ;
  };
  union {
          unsigned long                  dtr       ;//0x0044
          avr32_ast_dtr_t                DTR       ;
  };
  union {
          unsigned long                  eve       ;//0x0048
          avr32_ast_eve_t                EVE       ;
  };
  union {
          unsigned long                  evd       ;//0x004c
          avr32_ast_evd_t                EVD       ;
  };
  union {
    const unsigned long                  evm       ;//0x0050
    const avr32_ast_evm_t                EVM       ;
  };
  union {
          unsigned long                  calv      ;//0x0054
          avr32_ast_calv_t               CALV      ;
  };
          unsigned int                   :32       ;//0x0058
          unsigned int                   :32       ;//0x005c
          unsigned int                   :32       ;//0x0060
          unsigned int                   :32       ;//0x0064
          unsigned int                   :32       ;//0x0068
          unsigned int                   :32       ;//0x006c
          unsigned int                   :32       ;//0x0070
          unsigned int                   :32       ;//0x0074
          unsigned int                   :32       ;//0x0078
          unsigned int                   :32       ;//0x007c
          unsigned int                   :32       ;//0x0080
          unsigned int                   :32       ;//0x0084
          unsigned int                   :32       ;//0x0088
          unsigned int                   :32       ;//0x008c
          unsigned int                   :32       ;//0x0090
          unsigned int                   :32       ;//0x0094
          unsigned int                   :32       ;//0x0098
          unsigned int                   :32       ;//0x009c
          unsigned int                   :32       ;//0x00a0
          unsigned int                   :32       ;//0x00a4
          unsigned int                   :32       ;//0x00a8
          unsigned int                   :32       ;//0x00ac
          unsigned int                   :32       ;//0x00b0
          unsigned int                   :32       ;//0x00b4
          unsigned int                   :32       ;//0x00b8
          unsigned int                   :32       ;//0x00bc
          unsigned int                   :32       ;//0x00c0
          unsigned int                   :32       ;//0x00c4
          unsigned int                   :32       ;//0x00c8
          unsigned int                   :32       ;//0x00cc
          unsigned int                   :32       ;//0x00d0
          unsigned int                   :32       ;//0x00d4
          unsigned int                   :32       ;//0x00d8
          unsigned int                   :32       ;//0x00dc
          unsigned int                   :32       ;//0x00e0
          unsigned int                   :32       ;//0x00e4
          unsigned int                   :32       ;//0x00e8
          unsigned int                   :32       ;//0x00ec
  union {
    const unsigned long                  parameter ;//0x00f0
    const avr32_ast_parameter_t          PARAMETER ;
  };
          unsigned int                   :32       ;//0x00f4
          unsigned int                   :32       ;//0x00f8
  union {
    const unsigned long                  version   ;//0x00fc
    const avr32_ast_version_t            VERSION   ;
  };
} avr32_ast_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_AST_300_H_INCLUDED*/
#endif

