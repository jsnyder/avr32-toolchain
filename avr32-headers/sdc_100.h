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
#ifndef AVR32_SDC_100_H_INCLUDED
#define AVR32_SDC_100_H_INCLUDED

#define AVR32_SDC_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_SDC_<register>
 - Bitfield mask:   AVR32_SDC_<register>_<bitfield>
 - Bitfield offset: AVR32_SDC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SDC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_SDC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_SDC_<bitfield>
 - Bitfield offset: AVR32_SDC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SDC_<bitfield>_SIZE
 - Bitfield values: AVR32_SDC_<bitfield>_<value name>
 - Bitfield values: AVR32_SDC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_SDC_0_RCOSC                                  0x00000000
#define AVR32_SDC_131072_RCOSC                             0x00000006
#define AVR32_SDC_262144_RCOSC                             0x00000007
#define AVR32_SDC_32768_RCOSC                              0x00000004
#define AVR32_SDC_4096_RCOSC                               0x00000002
#define AVR32_SDC_64_RCOSC                                 0x00000001
#define AVR32_SDC_65536_RCOSC                              0x00000005
#define AVR32_SDC_8192_RCOSC                               0x00000003
#define AVR32_SDC_AST_EN                                            8
#define AVR32_SDC_AST_EN_MASK                              0x00000100
#define AVR32_SDC_AST_EN_OFFSET                                     8
#define AVR32_SDC_AST_EN_SIZE                                       1
#define AVR32_SDC_AST_EVENT                                         8
#define AVR32_SDC_AST_EVENT_MASK                           0x00000100
#define AVR32_SDC_AST_EVENT_OFFSET                                  8
#define AVR32_SDC_AST_EVENT_SIZE                                    1
#define AVR32_SDC_ASYNC                                    0x00000004
#define AVR32_SDC_ASYNC_KEY                                        24
#define AVR32_SDC_ASYNC_KEY_MASK                           0xff000000
#define AVR32_SDC_ASYNC_KEY_OFFSET                                 24
#define AVR32_SDC_ASYNC_KEY_SIZE                                    8
#define AVR32_SDC_ASYNC_KEY_VALUE                          0x00000055
#define AVR32_SDC_ASYNC_MODE                                        4
#define AVR32_SDC_ASYNC_MODE_EDGE                          0x00000000
#define AVR32_SDC_ASYNC_MODE_LEVEL                         0x00000001
#define AVR32_SDC_ASYNC_MODE_MASK                          0x00000010
#define AVR32_SDC_ASYNC_MODE_OFFSET                                 4
#define AVR32_SDC_ASYNC_MODE_SIZE                                   1
#define AVR32_SDC_ASYNC_POL                                         8
#define AVR32_SDC_ASYNC_POL_FALLING_EDGE                   0x00000000
#define AVR32_SDC_ASYNC_POL_HIGH_LEVEL                     0x00000001
#define AVR32_SDC_ASYNC_POL_LOW_LEVEL                      0x00000000
#define AVR32_SDC_ASYNC_POL_MASK                           0x00000100
#define AVR32_SDC_ASYNC_POL_OFFSET                                  8
#define AVR32_SDC_ASYNC_POL_RISING_EDGE                    0x00000001
#define AVR32_SDC_ASYNC_POL_SIZE                                    1
#define AVR32_SDC_BUSY                                             30
#define AVR32_SDC_BUSY_MASK                                0x40000000
#define AVR32_SDC_BUSY_OFFSET                                      30
#define AVR32_SDC_BUSY_SIZE                                         1
#define AVR32_SDC_CR                                       0x00000000
#define AVR32_SDC_CRYSTAL_STRONGER_DRIVE                   0x00000002
#define AVR32_SDC_CRYSTAL_WEAKER_DRIVE                     0x00000001
#define AVR32_SDC_CR_AST_EN                                         8
#define AVR32_SDC_CR_AST_EN_MASK                           0x00000100
#define AVR32_SDC_CR_AST_EN_OFFSET                                  8
#define AVR32_SDC_CR_AST_EN_SIZE                                    1
#define AVR32_SDC_CR_JTAG_EN                                       11
#define AVR32_SDC_CR_JTAG_EN_MASK                          0x00000800
#define AVR32_SDC_CR_JTAG_EN_OFFSET                                11
#define AVR32_SDC_CR_JTAG_EN_SIZE                                   1
#define AVR32_SDC_CR_KEY                                           24
#define AVR32_SDC_CR_KEY_MASK                              0xff000000
#define AVR32_SDC_CR_KEY_OFFSET                                    24
#define AVR32_SDC_CR_KEY_SIZE                                       8
#define AVR32_SDC_CR_KEY_VALUE                             0x00000055
#define AVR32_SDC_CR_OCD_EN                                        10
#define AVR32_SDC_CR_OCD_EN_MASK                           0x00000400
#define AVR32_SDC_CR_OCD_EN_OFFSET                                 10
#define AVR32_SDC_CR_OCD_EN_SIZE                                    1
#define AVR32_SDC_CR_OCD_SHDN                                      22
#define AVR32_SDC_CR_OCD_SHDN_MASK                         0x00400000
#define AVR32_SDC_CR_OCD_SHDN_OFFSET                               22
#define AVR32_SDC_CR_OCD_SHDN_SIZE                                  1
#define AVR32_SDC_CR_PIN_EN                                         0
#define AVR32_SDC_CR_PIN_EN_MASK                           0x00000001
#define AVR32_SDC_CR_PIN_EN_OFFSET                                  0
#define AVR32_SDC_CR_PIN_EN_SIZE                                    1
#define AVR32_SDC_CR_POR_TEST                                      23
#define AVR32_SDC_CR_POR_TEST_MASK                         0x00800000
#define AVR32_SDC_CR_POR_TEST_OFFSET                               23
#define AVR32_SDC_CR_POR_TEST_SIZE                                  1
#define AVR32_SDC_CR_WDT_EN                                         9
#define AVR32_SDC_CR_WDT_EN_MASK                           0x00000200
#define AVR32_SDC_CR_WDT_EN_OFFSET                                  9
#define AVR32_SDC_CR_WDT_EN_SIZE                                    1
#define AVR32_SDC_DIS_INT_FB_RESISTANCE                    0x00000000
#define AVR32_SDC_DIS_INT_SCHMITT_TRIGGER                  0x00000000
#define AVR32_SDC_ECR                                      0x00000018
#define AVR32_SDC_ECR_AST_EVENT                                     8
#define AVR32_SDC_ECR_AST_EVENT_MASK                       0x00000100
#define AVR32_SDC_ECR_AST_EVENT_OFFSET                              8
#define AVR32_SDC_ECR_AST_EVENT_SIZE                                1
#define AVR32_SDC_ECR_JTAG_EVENT                                   11
#define AVR32_SDC_ECR_JTAG_EVENT_MASK                      0x00000800
#define AVR32_SDC_ECR_JTAG_EVENT_OFFSET                            11
#define AVR32_SDC_ECR_JTAG_EVENT_SIZE                               1
#define AVR32_SDC_ECR_OCD_EVENT                                    10
#define AVR32_SDC_ECR_OCD_EVENT_MASK                       0x00000400
#define AVR32_SDC_ECR_OCD_EVENT_OFFSET                             10
#define AVR32_SDC_ECR_OCD_EVENT_SIZE                                1
#define AVR32_SDC_ECR_PIN_EVENT                                     0
#define AVR32_SDC_ECR_PIN_EVENT_MASK                       0x00000001
#define AVR32_SDC_ECR_PIN_EVENT_OFFSET                              0
#define AVR32_SDC_ECR_PIN_EVENT_SIZE                                1
#define AVR32_SDC_ECR_READY                                        24
#define AVR32_SDC_ECR_READY_MASK                           0x01000000
#define AVR32_SDC_ECR_READY_OFFSET                                 24
#define AVR32_SDC_ECR_READY_SIZE                                    1
#define AVR32_SDC_ECR_WDT_EVENT                                     9
#define AVR32_SDC_ECR_WDT_EVENT_MASK                       0x00000200
#define AVR32_SDC_ECR_WDT_EVENT_OFFSET                              9
#define AVR32_SDC_ECR_WDT_EVENT_SIZE                                1
#define AVR32_SDC_EDGE                                     0x00000000
#define AVR32_SDC_EN                                                0
#define AVR32_SDC_EN_INT_FB_RESISTANCE                     0x00000008
#define AVR32_SDC_EN_INT_SCHMITT_TRIGGER                   0x00000004
#define AVR32_SDC_EN_MASK                                  0x00000001
#define AVR32_SDC_EN_OFFSET                                         0
#define AVR32_SDC_EN_SIZE                                           1
#define AVR32_SDC_EXT_CLOCK                                0x00000000
#define AVR32_SDC_FALLING_EDGE                             0x00000000
#define AVR32_SDC_FILTER                                           12
#define AVR32_SDC_FILTERDUR                                0x0000000c
#define AVR32_SDC_FILTERDUR_FILTERDUR                               0
#define AVR32_SDC_FILTERDUR_FILTERDUR_MASK                 0x0000ffff
#define AVR32_SDC_FILTERDUR_FILTERDUR_OFFSET                        0
#define AVR32_SDC_FILTERDUR_FILTERDUR_SIZE                         16
#define AVR32_SDC_FILTERDUR_KEY                                    24
#define AVR32_SDC_FILTERDUR_KEY_MASK                       0xff000000
#define AVR32_SDC_FILTERDUR_KEY_OFFSET                             24
#define AVR32_SDC_FILTERDUR_KEY_SIZE                                8
#define AVR32_SDC_FILTERDUR_KEY_VALUE                      0x00000055
#define AVR32_SDC_FILTERDUR_MASK                           0x0000ffff
#define AVR32_SDC_FILTERDUR_OFFSET                                  0
#define AVR32_SDC_FILTERDUR_SIZE                                   16
#define AVR32_SDC_FILTER_MASK                              0x00001000
#define AVR32_SDC_FILTER_OFFSET                                    12
#define AVR32_SDC_FILTER_SIZE                                       1
#define AVR32_SDC_GPLP                                     0x00000040
#define AVR32_SDC_HIGH_LEVEL                               0x00000001
#define AVR32_SDC_IDR                                      0x00000020
#define AVR32_SDC_IDR_PIN_EVENT                                     0
#define AVR32_SDC_IDR_PIN_EVENT_MASK                       0x00000001
#define AVR32_SDC_IDR_PIN_EVENT_OFFSET                              0
#define AVR32_SDC_IDR_PIN_EVENT_SIZE                                1
#define AVR32_SDC_IDR_READY                                        24
#define AVR32_SDC_IDR_READY_MASK                           0x01000000
#define AVR32_SDC_IDR_READY_OFFSET                                 24
#define AVR32_SDC_IDR_READY_SIZE                                    1
#define AVR32_SDC_IER                                      0x0000001c
#define AVR32_SDC_IER_PIN_EVENT                                     0
#define AVR32_SDC_IER_PIN_EVENT_MASK                       0x00000001
#define AVR32_SDC_IER_PIN_EVENT_OFFSET                              0
#define AVR32_SDC_IER_PIN_EVENT_SIZE                                1
#define AVR32_SDC_IER_READY                                        24
#define AVR32_SDC_IER_READY_MASK                           0x01000000
#define AVR32_SDC_IER_READY_OFFSET                                 24
#define AVR32_SDC_IER_READY_SIZE                                    1
#define AVR32_SDC_IMR                                      0x00000024
#define AVR32_SDC_IMR_PIN_EVENT                                     0
#define AVR32_SDC_IMR_PIN_EVENT_MASK                       0x00000001
#define AVR32_SDC_IMR_PIN_EVENT_OFFSET                              0
#define AVR32_SDC_IMR_PIN_EVENT_SIZE                                1
#define AVR32_SDC_IMR_READY                                        24
#define AVR32_SDC_IMR_READY_MASK                           0x01000000
#define AVR32_SDC_IMR_READY_OFFSET                                 24
#define AVR32_SDC_IMR_READY_SIZE                                    1
#define AVR32_SDC_JTAG_EN                                          11
#define AVR32_SDC_JTAG_EN_MASK                             0x00000800
#define AVR32_SDC_JTAG_EN_OFFSET                                   11
#define AVR32_SDC_JTAG_EN_SIZE                                      1
#define AVR32_SDC_JTAG_EVENT                                       11
#define AVR32_SDC_JTAG_EVENT_MASK                          0x00000800
#define AVR32_SDC_JTAG_EVENT_OFFSET                                11
#define AVR32_SDC_JTAG_EVENT_SIZE                                   1
#define AVR32_SDC_KEY                                              24
#define AVR32_SDC_KEY_MASK                                 0xff000000
#define AVR32_SDC_KEY_OFFSET                                       24
#define AVR32_SDC_KEY_SIZE                                          8
#define AVR32_SDC_KEY_VALUE                                0x00000055
#define AVR32_SDC_LEVEL                                    0x00000001
#define AVR32_SDC_LOW_LEVEL                                0x00000000
#define AVR32_SDC_MODE_CRYSTAL_STRONGER_DRIVE              0x00000002
#define AVR32_SDC_MODE_CRYSTAL_WEAKER_DRIVE                0x00000001
#define AVR32_SDC_MODE_DIS_INT_FB_RESISTANCE               0x00000000
#define AVR32_SDC_MODE_DIS_INT_SCHMITT_TRIGGER             0x00000000
#define AVR32_SDC_MODE_EDGE                                0x00000000
#define AVR32_SDC_MODE_EN_INT_FB_RESISTANCE                0x00000008
#define AVR32_SDC_MODE_EN_INT_SCHMITT_TRIGGER              0x00000004
#define AVR32_SDC_MODE_EXT_CLOCK                           0x00000000
#define AVR32_SDC_MODE_LEVEL                               0x00000001
#define AVR32_SDC_OCD_EN                                           10
#define AVR32_SDC_OCD_EN_MASK                              0x00000400
#define AVR32_SDC_OCD_EN_OFFSET                                    10
#define AVR32_SDC_OCD_EN_SIZE                                       1
#define AVR32_SDC_OCD_EVENT                                        10
#define AVR32_SDC_OCD_EVENT_MASK                           0x00000400
#define AVR32_SDC_OCD_EVENT_OFFSET                                 10
#define AVR32_SDC_OCD_EVENT_SIZE                                    1
#define AVR32_SDC_OCD_SHDN                                         22
#define AVR32_SDC_OCD_SHDN_MASK                            0x00400000
#define AVR32_SDC_OCD_SHDN_OFFSET                                  22
#define AVR32_SDC_OCD_SHDN_SIZE                                     1
#define AVR32_SDC_OSCCTRL32                                0x00000010
#define AVR32_SDC_OSCCTRL32_EN                                      0
#define AVR32_SDC_OSCCTRL32_EN_MASK                        0x00000001
#define AVR32_SDC_OSCCTRL32_EN_OFFSET                               0
#define AVR32_SDC_OSCCTRL32_EN_SIZE                                 1
#define AVR32_SDC_OSCCTRL32_KEY                                    24
#define AVR32_SDC_OSCCTRL32_KEY_MASK                       0xff000000
#define AVR32_SDC_OSCCTRL32_KEY_OFFSET                             24
#define AVR32_SDC_OSCCTRL32_KEY_SIZE                                8
#define AVR32_SDC_OSCCTRL32_KEY_VALUE                      0x00000055
#define AVR32_SDC_OSCCTRL32_MODE                                    8
#define AVR32_SDC_OSCCTRL32_MODE_CRYSTAL_STRONGER_DRIVE    0x00000002
#define AVR32_SDC_OSCCTRL32_MODE_CRYSTAL_WEAKER_DRIVE      0x00000001
#define AVR32_SDC_OSCCTRL32_MODE_DIS_INT_FB_RESISTANCE     0x00000000
#define AVR32_SDC_OSCCTRL32_MODE_DIS_INT_SCHMITT_TRIGGER   0x00000000
#define AVR32_SDC_OSCCTRL32_MODE_EN_INT_FB_RESISTANCE      0x00000008
#define AVR32_SDC_OSCCTRL32_MODE_EN_INT_SCHMITT_TRIGGER    0x00000004
#define AVR32_SDC_OSCCTRL32_MODE_EXT_CLOCK                 0x00000000
#define AVR32_SDC_OSCCTRL32_MODE_MASK                      0x00000f00
#define AVR32_SDC_OSCCTRL32_MODE_OFFSET                             8
#define AVR32_SDC_OSCCTRL32_MODE_SIZE                               4
#define AVR32_SDC_OSCCTRL32_STARTUP                                16
#define AVR32_SDC_OSCCTRL32_STARTUP_0_RCOSC                0x00000000
#define AVR32_SDC_OSCCTRL32_STARTUP_131072_RCOSC           0x00000006
#define AVR32_SDC_OSCCTRL32_STARTUP_262144_RCOSC           0x00000007
#define AVR32_SDC_OSCCTRL32_STARTUP_32768_RCOSC            0x00000004
#define AVR32_SDC_OSCCTRL32_STARTUP_4096_RCOSC             0x00000002
#define AVR32_SDC_OSCCTRL32_STARTUP_64_RCOSC               0x00000001
#define AVR32_SDC_OSCCTRL32_STARTUP_65536_RCOSC            0x00000005
#define AVR32_SDC_OSCCTRL32_STARTUP_8192_RCOSC             0x00000003
#define AVR32_SDC_OSCCTRL32_STARTUP_MASK                   0x00070000
#define AVR32_SDC_OSCCTRL32_STARTUP_OFFSET                         16
#define AVR32_SDC_OSCCTRL32_STARTUP_SIZE                            3
#define AVR32_SDC_PIN                                              16
#define AVR32_SDC_PIN_EN                                            0
#define AVR32_SDC_PIN_EN_MASK                              0x00000001
#define AVR32_SDC_PIN_EN_OFFSET                                     0
#define AVR32_SDC_PIN_EN_SIZE                                       1
#define AVR32_SDC_PIN_EVENT                                         0
#define AVR32_SDC_PIN_EVENT_MASK                           0x00000001
#define AVR32_SDC_PIN_EVENT_OFFSET                                  0
#define AVR32_SDC_PIN_EVENT_SIZE                                    1
#define AVR32_SDC_PIN_MASK                                 0x00010000
#define AVR32_SDC_PIN_OFFSET                                       16
#define AVR32_SDC_PIN_SIZE                                          1
#define AVR32_SDC_POL                                               8
#define AVR32_SDC_POL_FALLING_EDGE                         0x00000000
#define AVR32_SDC_POL_HIGH_LEVEL                           0x00000001
#define AVR32_SDC_POL_LOW_LEVEL                            0x00000000
#define AVR32_SDC_POL_MASK                                 0x00000100
#define AVR32_SDC_POL_OFFSET                                        8
#define AVR32_SDC_POL_RISING_EDGE                          0x00000001
#define AVR32_SDC_POL_SIZE                                          1
#define AVR32_SDC_POR_TEST                                         23
#define AVR32_SDC_POR_TEST_MASK                            0x00800000
#define AVR32_SDC_POR_TEST_OFFSET                                  23
#define AVR32_SDC_POR_TEST_SIZE                                     1
#define AVR32_SDC_READY                                            24
#define AVR32_SDC_READY_MASK                               0x01000000
#define AVR32_SDC_READY_OFFSET                                     24
#define AVR32_SDC_READY_SIZE                                        1
#define AVR32_SDC_RISING_EDGE                              0x00000001
#define AVR32_SDC_STARTUP                                          16
#define AVR32_SDC_STARTUP_0_RCOSC                          0x00000000
#define AVR32_SDC_STARTUP_131072_RCOSC                     0x00000006
#define AVR32_SDC_STARTUP_262144_RCOSC                     0x00000007
#define AVR32_SDC_STARTUP_32768_RCOSC                      0x00000004
#define AVR32_SDC_STARTUP_4096_RCOSC                       0x00000002
#define AVR32_SDC_STARTUP_64_RCOSC                         0x00000001
#define AVR32_SDC_STARTUP_65536_RCOSC                      0x00000005
#define AVR32_SDC_STARTUP_8192_RCOSC                       0x00000003
#define AVR32_SDC_STARTUP_MASK                             0x00070000
#define AVR32_SDC_STARTUP_OFFSET                                   16
#define AVR32_SDC_STARTUP_SIZE                                      3
#define AVR32_SDC_STATUS                                   0x00000014
#define AVR32_SDC_STATUS_AST_EVENT                                  8
#define AVR32_SDC_STATUS_AST_EVENT_MASK                    0x00000100
#define AVR32_SDC_STATUS_AST_EVENT_OFFSET                           8
#define AVR32_SDC_STATUS_AST_EVENT_SIZE                             1
#define AVR32_SDC_STATUS_BUSY                                      30
#define AVR32_SDC_STATUS_BUSY_MASK                         0x40000000
#define AVR32_SDC_STATUS_BUSY_OFFSET                               30
#define AVR32_SDC_STATUS_BUSY_SIZE                                  1
#define AVR32_SDC_STATUS_JTAG_EVENT                                11
#define AVR32_SDC_STATUS_JTAG_EVENT_MASK                   0x00000800
#define AVR32_SDC_STATUS_JTAG_EVENT_OFFSET                         11
#define AVR32_SDC_STATUS_JTAG_EVENT_SIZE                            1
#define AVR32_SDC_STATUS_OCD_EVENT                                 10
#define AVR32_SDC_STATUS_OCD_EVENT_MASK                    0x00000400
#define AVR32_SDC_STATUS_OCD_EVENT_OFFSET                          10
#define AVR32_SDC_STATUS_OCD_EVENT_SIZE                             1
#define AVR32_SDC_STATUS_PIN                                       16
#define AVR32_SDC_STATUS_PIN_EVENT                                  0
#define AVR32_SDC_STATUS_PIN_EVENT_MASK                    0x00000001
#define AVR32_SDC_STATUS_PIN_EVENT_OFFSET                           0
#define AVR32_SDC_STATUS_PIN_EVENT_SIZE                             1
#define AVR32_SDC_STATUS_PIN_MASK                          0x00010000
#define AVR32_SDC_STATUS_PIN_OFFSET                                16
#define AVR32_SDC_STATUS_PIN_SIZE                                   1
#define AVR32_SDC_STATUS_READY                                     24
#define AVR32_SDC_STATUS_READY_MASK                        0x01000000
#define AVR32_SDC_STATUS_READY_OFFSET                              24
#define AVR32_SDC_STATUS_READY_SIZE                                 1
#define AVR32_SDC_STATUS_VBAT                                      31
#define AVR32_SDC_STATUS_VBAT_MASK                         0x80000000
#define AVR32_SDC_STATUS_VBAT_OFFSET                               31
#define AVR32_SDC_STATUS_VBAT_SIZE                                  1
#define AVR32_SDC_STATUS_WDT_EVENT                                  9
#define AVR32_SDC_STATUS_WDT_EVENT_MASK                    0x00000200
#define AVR32_SDC_STATUS_WDT_EVENT_OFFSET                           9
#define AVR32_SDC_STATUS_WDT_EVENT_SIZE                             1
#define AVR32_SDC_SYNC                                     0x00000008
#define AVR32_SDC_SYNC_EN                                           0
#define AVR32_SDC_SYNC_EN_MASK                             0x00000001
#define AVR32_SDC_SYNC_EN_OFFSET                                    0
#define AVR32_SDC_SYNC_EN_SIZE                                      1
#define AVR32_SDC_SYNC_FILTER                                      12
#define AVR32_SDC_SYNC_FILTER_MASK                         0x00001000
#define AVR32_SDC_SYNC_FILTER_OFFSET                               12
#define AVR32_SDC_SYNC_FILTER_SIZE                                  1
#define AVR32_SDC_SYNC_KEY                                         24
#define AVR32_SDC_SYNC_KEY_MASK                            0xff000000
#define AVR32_SDC_SYNC_KEY_OFFSET                                  24
#define AVR32_SDC_SYNC_KEY_SIZE                                     8
#define AVR32_SDC_SYNC_KEY_VALUE                           0x00000055
#define AVR32_SDC_SYNC_MODE                                         4
#define AVR32_SDC_SYNC_MODE_EDGE                           0x00000000
#define AVR32_SDC_SYNC_MODE_LEVEL                          0x00000001
#define AVR32_SDC_SYNC_MODE_MASK                           0x00000010
#define AVR32_SDC_SYNC_MODE_OFFSET                                  4
#define AVR32_SDC_SYNC_MODE_SIZE                                    1
#define AVR32_SDC_SYNC_POL                                          8
#define AVR32_SDC_SYNC_POL_FALLING_EDGE                    0x00000000
#define AVR32_SDC_SYNC_POL_HIGH_LEVEL                      0x00000001
#define AVR32_SDC_SYNC_POL_LOW_LEVEL                       0x00000000
#define AVR32_SDC_SYNC_POL_MASK                            0x00000100
#define AVR32_SDC_SYNC_POL_OFFSET                                   8
#define AVR32_SDC_SYNC_POL_RISING_EDGE                     0x00000001
#define AVR32_SDC_SYNC_POL_SIZE                                     1
#define AVR32_SDC_VALUE                                    0x00000055
#define AVR32_SDC_VBAT                                             31
#define AVR32_SDC_VBAT_MASK                                0x80000000
#define AVR32_SDC_VBAT_OFFSET                                      31
#define AVR32_SDC_VBAT_SIZE                                         1
#define AVR32_SDC_VERSION                                  0x000003fc
#define AVR32_SDC_VERSION_MASK                             0x00000fff
#define AVR32_SDC_VERSION_OFFSET                                    0
#define AVR32_SDC_VERSION_SIZE                                     12
#define AVR32_SDC_VERSION_VERSION                                   0
#define AVR32_SDC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_SDC_VERSION_VERSION_OFFSET                            0
#define AVR32_SDC_VERSION_VERSION_SIZE                             12
#define AVR32_SDC_WDT_EN                                            9
#define AVR32_SDC_WDT_EN_MASK                              0x00000200
#define AVR32_SDC_WDT_EN_OFFSET                                     9
#define AVR32_SDC_WDT_EN_SIZE                                       1
#define AVR32_SDC_WDT_EVENT                                         9
#define AVR32_SDC_WDT_EVENT_MASK                           0x00000200
#define AVR32_SDC_WDT_EVENT_OFFSET                                  9
#define AVR32_SDC_WDT_EVENT_SIZE                                    1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_sdc_cr_t {
    unsigned int key             : 8;
    unsigned int por_test        : 1;
    unsigned int ocd_shdn        : 1;
    unsigned int                 :10;
    unsigned int jtag_en         : 1;
    unsigned int ocd_en          : 1;
    unsigned int wdt_en          : 1;
    unsigned int ast_en          : 1;
    unsigned int                 : 7;
    unsigned int pin_en          : 1;
} avr32_sdc_cr_t;



typedef struct avr32_sdc_async_t {
    unsigned int key             : 8;
    unsigned int                 :15;
    unsigned int pol             : 1;
    unsigned int                 : 3;
    unsigned int mode            : 1;
    unsigned int                 : 4;
} avr32_sdc_async_t;



typedef struct avr32_sdc_sync_t {
    unsigned int key             : 8;
    unsigned int                 :11;
    unsigned int filter          : 1;
    unsigned int                 : 3;
    unsigned int pol             : 1;
    unsigned int                 : 3;
    unsigned int mode            : 1;
    unsigned int                 : 3;
    unsigned int en              : 1;
} avr32_sdc_sync_t;



typedef struct avr32_sdc_filterdur_t {
    unsigned int key             : 8;
    unsigned int                 : 8;
    unsigned int filterdur       :16;
} avr32_sdc_filterdur_t;



typedef struct avr32_sdc_oscctrl32_t {
    unsigned int key             : 8;
    unsigned int                 : 5;
    unsigned int startup         : 3;
    unsigned int                 : 4;
    unsigned int mode            : 4;
    unsigned int                 : 7;
    unsigned int en              : 1;
} avr32_sdc_oscctrl32_t;



typedef struct avr32_sdc_status_t {
    unsigned int vbat            : 1;
    unsigned int busy            : 1;
    unsigned int                 : 5;
    unsigned int ready           : 1;
    unsigned int                 : 7;
    unsigned int pin             : 1;
    unsigned int                 : 4;
    unsigned int jtag_event      : 1;
    unsigned int ocd_event       : 1;
    unsigned int wdt_event       : 1;
    unsigned int ast_event       : 1;
    unsigned int                 : 7;
    unsigned int pin_event       : 1;
} avr32_sdc_status_t;



typedef struct avr32_sdc_ecr_t {
    unsigned int                 : 7;
    unsigned int ready           : 1;
    unsigned int                 :12;
    unsigned int jtag_event      : 1;
    unsigned int ocd_event       : 1;
    unsigned int wdt_event       : 1;
    unsigned int ast_event       : 1;
    unsigned int                 : 7;
    unsigned int pin_event       : 1;
} avr32_sdc_ecr_t;



typedef struct avr32_sdc_ier_t {
    unsigned int                 : 7;
    unsigned int ready           : 1;
    unsigned int                 :23;
    unsigned int pin_event       : 1;
} avr32_sdc_ier_t;



typedef struct avr32_sdc_idr_t {
    unsigned int                 : 7;
    unsigned int ready           : 1;
    unsigned int                 :23;
    unsigned int pin_event       : 1;
} avr32_sdc_idr_t;



typedef struct avr32_sdc_imr_t {
    unsigned int                 : 7;
    unsigned int ready           : 1;
    unsigned int                 :23;
    unsigned int pin_event       : 1;
} avr32_sdc_imr_t;



typedef struct avr32_sdc_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_sdc_version_t;



typedef struct avr32_sdc_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_sdc_cr_t                 CR        ;
  };
  union {
          unsigned long                  async     ;//0x0004
          avr32_sdc_async_t              ASYNC     ;
  };
  union {
          unsigned long                  sync      ;//0x0008
          avr32_sdc_sync_t               SYNC      ;
  };
  union {
          unsigned long                  filterdur ;//0x000c
          avr32_sdc_filterdur_t          FILTERDUR ;
  };
  union {
          unsigned long                  oscctrl32 ;//0x0010
          avr32_sdc_oscctrl32_t          OSCCTRL32 ;
  };
  union {
    const unsigned long                  status    ;//0x0014
    const avr32_sdc_status_t             STATUS    ;
  };
  union {
          unsigned long                  ecr       ;//0x0018
          avr32_sdc_ecr_t                ECR       ;
  };
  union {
          unsigned long                  ier       ;//0x001c
          avr32_sdc_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0020
          avr32_sdc_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0024
    const avr32_sdc_imr_t                IMR       ;
  };
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
          unsigned long                  gplp      [2];//0x0040
          unsigned int                   :32       ;//0x0048
          unsigned int                   :32       ;//0x004c
          unsigned int                   :32       ;//0x0050
          unsigned int                   :32       ;//0x0054
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
          unsigned int                   :32       ;//0x00f0
          unsigned int                   :32       ;//0x00f4
          unsigned int                   :32       ;//0x00f8
          unsigned int                   :32       ;//0x00fc
          unsigned int                   :32       ;//0x0100
          unsigned int                   :32       ;//0x0104
          unsigned int                   :32       ;//0x0108
          unsigned int                   :32       ;//0x010c
          unsigned int                   :32       ;//0x0110
          unsigned int                   :32       ;//0x0114
          unsigned int                   :32       ;//0x0118
          unsigned int                   :32       ;//0x011c
          unsigned int                   :32       ;//0x0120
          unsigned int                   :32       ;//0x0124
          unsigned int                   :32       ;//0x0128
          unsigned int                   :32       ;//0x012c
          unsigned int                   :32       ;//0x0130
          unsigned int                   :32       ;//0x0134
          unsigned int                   :32       ;//0x0138
          unsigned int                   :32       ;//0x013c
          unsigned int                   :32       ;//0x0140
          unsigned int                   :32       ;//0x0144
          unsigned int                   :32       ;//0x0148
          unsigned int                   :32       ;//0x014c
          unsigned int                   :32       ;//0x0150
          unsigned int                   :32       ;//0x0154
          unsigned int                   :32       ;//0x0158
          unsigned int                   :32       ;//0x015c
          unsigned int                   :32       ;//0x0160
          unsigned int                   :32       ;//0x0164
          unsigned int                   :32       ;//0x0168
          unsigned int                   :32       ;//0x016c
          unsigned int                   :32       ;//0x0170
          unsigned int                   :32       ;//0x0174
          unsigned int                   :32       ;//0x0178
          unsigned int                   :32       ;//0x017c
          unsigned int                   :32       ;//0x0180
          unsigned int                   :32       ;//0x0184
          unsigned int                   :32       ;//0x0188
          unsigned int                   :32       ;//0x018c
          unsigned int                   :32       ;//0x0190
          unsigned int                   :32       ;//0x0194
          unsigned int                   :32       ;//0x0198
          unsigned int                   :32       ;//0x019c
          unsigned int                   :32       ;//0x01a0
          unsigned int                   :32       ;//0x01a4
          unsigned int                   :32       ;//0x01a8
          unsigned int                   :32       ;//0x01ac
          unsigned int                   :32       ;//0x01b0
          unsigned int                   :32       ;//0x01b4
          unsigned int                   :32       ;//0x01b8
          unsigned int                   :32       ;//0x01bc
          unsigned int                   :32       ;//0x01c0
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
          unsigned int                   :32       ;//0x01fc
          unsigned int                   :32       ;//0x0200
          unsigned int                   :32       ;//0x0204
          unsigned int                   :32       ;//0x0208
          unsigned int                   :32       ;//0x020c
          unsigned int                   :32       ;//0x0210
          unsigned int                   :32       ;//0x0214
          unsigned int                   :32       ;//0x0218
          unsigned int                   :32       ;//0x021c
          unsigned int                   :32       ;//0x0220
          unsigned int                   :32       ;//0x0224
          unsigned int                   :32       ;//0x0228
          unsigned int                   :32       ;//0x022c
          unsigned int                   :32       ;//0x0230
          unsigned int                   :32       ;//0x0234
          unsigned int                   :32       ;//0x0238
          unsigned int                   :32       ;//0x023c
          unsigned int                   :32       ;//0x0240
          unsigned int                   :32       ;//0x0244
          unsigned int                   :32       ;//0x0248
          unsigned int                   :32       ;//0x024c
          unsigned int                   :32       ;//0x0250
          unsigned int                   :32       ;//0x0254
          unsigned int                   :32       ;//0x0258
          unsigned int                   :32       ;//0x025c
          unsigned int                   :32       ;//0x0260
          unsigned int                   :32       ;//0x0264
          unsigned int                   :32       ;//0x0268
          unsigned int                   :32       ;//0x026c
          unsigned int                   :32       ;//0x0270
          unsigned int                   :32       ;//0x0274
          unsigned int                   :32       ;//0x0278
          unsigned int                   :32       ;//0x027c
          unsigned int                   :32       ;//0x0280
          unsigned int                   :32       ;//0x0284
          unsigned int                   :32       ;//0x0288
          unsigned int                   :32       ;//0x028c
          unsigned int                   :32       ;//0x0290
          unsigned int                   :32       ;//0x0294
          unsigned int                   :32       ;//0x0298
          unsigned int                   :32       ;//0x029c
          unsigned int                   :32       ;//0x02a0
          unsigned int                   :32       ;//0x02a4
          unsigned int                   :32       ;//0x02a8
          unsigned int                   :32       ;//0x02ac
          unsigned int                   :32       ;//0x02b0
          unsigned int                   :32       ;//0x02b4
          unsigned int                   :32       ;//0x02b8
          unsigned int                   :32       ;//0x02bc
          unsigned int                   :32       ;//0x02c0
          unsigned int                   :32       ;//0x02c4
          unsigned int                   :32       ;//0x02c8
          unsigned int                   :32       ;//0x02cc
          unsigned int                   :32       ;//0x02d0
          unsigned int                   :32       ;//0x02d4
          unsigned int                   :32       ;//0x02d8
          unsigned int                   :32       ;//0x02dc
          unsigned int                   :32       ;//0x02e0
          unsigned int                   :32       ;//0x02e4
          unsigned int                   :32       ;//0x02e8
          unsigned int                   :32       ;//0x02ec
          unsigned int                   :32       ;//0x02f0
          unsigned int                   :32       ;//0x02f4
          unsigned int                   :32       ;//0x02f8
          unsigned int                   :32       ;//0x02fc
          unsigned int                   :32       ;//0x0300
          unsigned int                   :32       ;//0x0304
          unsigned int                   :32       ;//0x0308
          unsigned int                   :32       ;//0x030c
          unsigned int                   :32       ;//0x0310
          unsigned int                   :32       ;//0x0314
          unsigned int                   :32       ;//0x0318
          unsigned int                   :32       ;//0x031c
          unsigned int                   :32       ;//0x0320
          unsigned int                   :32       ;//0x0324
          unsigned int                   :32       ;//0x0328
          unsigned int                   :32       ;//0x032c
          unsigned int                   :32       ;//0x0330
          unsigned int                   :32       ;//0x0334
          unsigned int                   :32       ;//0x0338
          unsigned int                   :32       ;//0x033c
          unsigned int                   :32       ;//0x0340
          unsigned int                   :32       ;//0x0344
          unsigned int                   :32       ;//0x0348
          unsigned int                   :32       ;//0x034c
          unsigned int                   :32       ;//0x0350
          unsigned int                   :32       ;//0x0354
          unsigned int                   :32       ;//0x0358
          unsigned int                   :32       ;//0x035c
          unsigned int                   :32       ;//0x0360
          unsigned int                   :32       ;//0x0364
          unsigned int                   :32       ;//0x0368
          unsigned int                   :32       ;//0x036c
          unsigned int                   :32       ;//0x0370
          unsigned int                   :32       ;//0x0374
          unsigned int                   :32       ;//0x0378
          unsigned int                   :32       ;//0x037c
          unsigned int                   :32       ;//0x0380
          unsigned int                   :32       ;//0x0384
          unsigned int                   :32       ;//0x0388
          unsigned int                   :32       ;//0x038c
          unsigned int                   :32       ;//0x0390
          unsigned int                   :32       ;//0x0394
          unsigned int                   :32       ;//0x0398
          unsigned int                   :32       ;//0x039c
          unsigned int                   :32       ;//0x03a0
          unsigned int                   :32       ;//0x03a4
          unsigned int                   :32       ;//0x03a8
          unsigned int                   :32       ;//0x03ac
          unsigned int                   :32       ;//0x03b0
          unsigned int                   :32       ;//0x03b4
          unsigned int                   :32       ;//0x03b8
          unsigned int                   :32       ;//0x03bc
          unsigned int                   :32       ;//0x03c0
          unsigned int                   :32       ;//0x03c4
          unsigned int                   :32       ;//0x03c8
          unsigned int                   :32       ;//0x03cc
          unsigned int                   :32       ;//0x03d0
          unsigned int                   :32       ;//0x03d4
          unsigned int                   :32       ;//0x03d8
          unsigned int                   :32       ;//0x03dc
          unsigned int                   :32       ;//0x03e0
          unsigned int                   :32       ;//0x03e4
          unsigned int                   :32       ;//0x03e8
          unsigned int                   :32       ;//0x03ec
          unsigned int                   :32       ;//0x03f0
          unsigned int                   :32       ;//0x03f4
          unsigned int                   :32       ;//0x03f8
  union {
    const unsigned long                  version   ;//0x03fc
    const avr32_sdc_version_t            VERSION   ;
  };
} avr32_sdc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_SDC_100_H_INCLUDED*/
#endif

