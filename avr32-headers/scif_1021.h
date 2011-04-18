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
 * Model        : UC3C0512C
 * Revision     : $Revision: 85321 $
 * Checkin Date : $Date: 2010-05-26 14:41:37 +0200 (Wed, 26 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_SCIF_1021_H_INCLUDED
#define AVR32_SCIF_1021_H_INCLUDED

#define AVR32_SCIF_H_VERSION 1021

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_SCIF_<register>
 - Bitfield mask:   AVR32_SCIF_<register>_<bitfield>
 - Bitfield offset: AVR32_SCIF_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SCIF_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_SCIF_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_SCIF_<bitfield>
 - Bitfield offset: AVR32_SCIF_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SCIF_<bitfield>_SIZE
 - Bitfield values: AVR32_SCIF_<bitfield>_<value name>
 - Bitfield values: AVR32_SCIF_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_SCIF_ADDR                                              0
#define AVR32_SCIF_ADDR_MASK                                0x0000ffff
#define AVR32_SCIF_ADDR_OFFSET                                       0
#define AVR32_SCIF_ADDR_SIZE                                        16
#define AVR32_SCIF_AE                                               31
#define AVR32_SCIF_AE_MASK                                  0x80000000
#define AVR32_SCIF_AE_OFFSET                                        31
#define AVR32_SCIF_AE_SIZE                                           1
#define AVR32_SCIF_AGC                                               3
#define AVR32_SCIF_AGC_MASK                                 0x00000008
#define AVR32_SCIF_AGC_OFFSET                                        3
#define AVR32_SCIF_AGC_SIZE                                          1
#define AVR32_SCIF_BGCR                                     0x00000030
#define AVR32_SCIF_BGCR_CALIB                                        0
#define AVR32_SCIF_BGCR_CALIB_MASK                          0x00000007
#define AVR32_SCIF_BGCR_CALIB_OFFSET                                 0
#define AVR32_SCIF_BGCR_CALIB_SIZE                                   3
#define AVR32_SCIF_BGCR_FCD                                         16
#define AVR32_SCIF_BGCR_FCD_MASK                            0x00010000
#define AVR32_SCIF_BGCR_FCD_OFFSET                                  16
#define AVR32_SCIF_BGCR_FCD_SIZE                                     1
#define AVR32_SCIF_BGCR_MASK                                0x80010007
#define AVR32_SCIF_BGCR_RESETVALUE                          0x00000000
#define AVR32_SCIF_BGCR_SFV                                         31
#define AVR32_SCIF_BGCR_SFV_MASK                            0x80000000
#define AVR32_SCIF_BGCR_SFV_OFFSET                                  31
#define AVR32_SCIF_BGCR_SFV_SIZE                                     1
#define AVR32_SCIF_BOD                                      0x0000002c
#define AVR32_SCIF_BOD33                                    0x00000034
#define AVR32_SCIF_BOD33DET                                          7
#define AVR32_SCIF_BOD33DET_MASK                            0x00000080
#define AVR32_SCIF_BOD33DET_OFFSET                                   7
#define AVR32_SCIF_BOD33DET_SIZE                                     1
#define AVR32_SCIF_BOD33_CTRL                                        8
#define AVR32_SCIF_BOD33_CTRL_ENABLED                       0x00000001
#define AVR32_SCIF_BOD33_CTRL_ENABLED_NORESET               0x00000002
#define AVR32_SCIF_BOD33_CTRL_MASK                          0x00000300
#define AVR32_SCIF_BOD33_CTRL_OFF1                          0x00000000
#define AVR32_SCIF_BOD33_CTRL_OFF2                          0x00000003
#define AVR32_SCIF_BOD33_CTRL_OFFSET                                 8
#define AVR32_SCIF_BOD33_CTRL_SIZE                                   2
#define AVR32_SCIF_BOD33_FCD                                        16
#define AVR32_SCIF_BOD33_FCD_MASK                           0x00010000
#define AVR32_SCIF_BOD33_FCD_OFFSET                                 16
#define AVR32_SCIF_BOD33_FCD_SIZE                                    1
#define AVR32_SCIF_BOD33_HYST                                        6
#define AVR32_SCIF_BOD33_HYST_MASK                          0x00000040
#define AVR32_SCIF_BOD33_HYST_OFFSET                                 6
#define AVR32_SCIF_BOD33_HYST_SIZE                                   1
#define AVR32_SCIF_BOD33_LEVEL                                       0
#define AVR32_SCIF_BOD33_LEVEL_MASK                         0x0000003f
#define AVR32_SCIF_BOD33_LEVEL_OFFSET                                0
#define AVR32_SCIF_BOD33_LEVEL_SIZE                                  6
#define AVR32_SCIF_BOD33_MASK                               0x8001037f
#define AVR32_SCIF_BOD33_RESETVALUE                         0x00000000
#define AVR32_SCIF_BOD33_SFV                                        31
#define AVR32_SCIF_BOD33_SFV_MASK                           0x80000000
#define AVR32_SCIF_BOD33_SFV_OFFSET                                 31
#define AVR32_SCIF_BOD33_SFV_SIZE                                    1
#define AVR32_SCIF_BOD50                                    0x00000038
#define AVR32_SCIF_BOD50DET                                          8
#define AVR32_SCIF_BOD50DET_MASK                            0x00000100
#define AVR32_SCIF_BOD50DET_OFFSET                                   8
#define AVR32_SCIF_BOD50DET_SIZE                                     1
#define AVR32_SCIF_BOD50_CTRL                                        8
#define AVR32_SCIF_BOD50_CTRL_ENABLED_NORESET               0x00000001
#define AVR32_SCIF_BOD50_CTRL_MASK                          0x00000100
#define AVR32_SCIF_BOD50_CTRL_OFF1                          0x00000000
#define AVR32_SCIF_BOD50_CTRL_OFFSET                                 8
#define AVR32_SCIF_BOD50_CTRL_SIZE                                   1
#define AVR32_SCIF_BOD50_HYST                                        6
#define AVR32_SCIF_BOD50_HYST_MASK                          0x00000040
#define AVR32_SCIF_BOD50_HYST_OFFSET                                 6
#define AVR32_SCIF_BOD50_HYST_SIZE                                   1
#define AVR32_SCIF_BOD50_LEVEL                                       0
#define AVR32_SCIF_BOD50_LEVEL_MASK                         0x0000003f
#define AVR32_SCIF_BOD50_LEVEL_OFFSET                                0
#define AVR32_SCIF_BOD50_LEVEL_SIZE                                  6
#define AVR32_SCIF_BOD50_MASK                               0x8000017f
#define AVR32_SCIF_BOD50_RESETVALUE                         0x00000000
#define AVR32_SCIF_BOD50_SFV                                        31
#define AVR32_SCIF_BOD50_SFV_MASK                           0x80000000
#define AVR32_SCIF_BOD50_SFV_OFFSET                                 31
#define AVR32_SCIF_BOD50_SFV_SIZE                                    1
#define AVR32_SCIF_BODBVERSION                              0x000003d4
#define AVR32_SCIF_BODBVERSION_MASK                         0x00000000
#define AVR32_SCIF_BODBVERSION_RESETVALUE                   0x00000200
#define AVR32_SCIF_BODDET                                            6
#define AVR32_SCIF_BODDET_MASK                              0x00000040
#define AVR32_SCIF_BODDET_OFFSET                                     6
#define AVR32_SCIF_BODDET_SIZE                                       1
#define AVR32_SCIF_BODVERSION                               0x000003d0
#define AVR32_SCIF_BODVERSION_MASK                          0x00000000
#define AVR32_SCIF_BODVERSION_RESETVALUE                    0x00000120
#define AVR32_SCIF_BOD_CTRL                                          8
#define AVR32_SCIF_BOD_CTRL_ENABLED                         0x00000001
#define AVR32_SCIF_BOD_CTRL_ENABLED_NORESET                 0x00000002
#define AVR32_SCIF_BOD_CTRL_MASK                            0x00000300
#define AVR32_SCIF_BOD_CTRL_OFF1                            0x00000000
#define AVR32_SCIF_BOD_CTRL_OFF2                            0x00000003
#define AVR32_SCIF_BOD_CTRL_OFFSET                                   8
#define AVR32_SCIF_BOD_CTRL_SIZE                                     2
#define AVR32_SCIF_BOD_FCD                                          16
#define AVR32_SCIF_BOD_FCD_MASK                             0x00010000
#define AVR32_SCIF_BOD_FCD_OFFSET                                   16
#define AVR32_SCIF_BOD_FCD_SIZE                                      1
#define AVR32_SCIF_BOD_HYST                                          6
#define AVR32_SCIF_BOD_HYST_MASK                            0x00000040
#define AVR32_SCIF_BOD_HYST_OFFSET                                   6
#define AVR32_SCIF_BOD_HYST_SIZE                                     1
#define AVR32_SCIF_BOD_LEVEL                                         0
#define AVR32_SCIF_BOD_LEVEL_MASK                           0x0000003f
#define AVR32_SCIF_BOD_LEVEL_OFFSET                                  0
#define AVR32_SCIF_BOD_LEVEL_SIZE                                    6
#define AVR32_SCIF_BOD_MASK                                 0x8001037f
#define AVR32_SCIF_BOD_RESETVALUE                           0x00000000
#define AVR32_SCIF_BOD_SFV                                          31
#define AVR32_SCIF_BOD_SFV_MASK                             0x80000000
#define AVR32_SCIF_BOD_SFV_OFFSET                                   31
#define AVR32_SCIF_BOD_SFV_SIZE                                      1
#define AVR32_SCIF_BYPASSMODE                               0x00000001
#define AVR32_SCIF_CALIB                                             0
#define AVR32_SCIF_CALIB_OFFSET                                      0
#define AVR32_SCIF_CEN                                               0
#define AVR32_SCIF_CEN_MASK                                 0x00000001
#define AVR32_SCIF_CEN_OFFSET                                        0
#define AVR32_SCIF_CEN_SIZE                                          1
#define AVR32_SCIF_CRIPOSC                                  0x00000054
#define AVR32_SCIF_CRIPOSCVERSION                           0x000003ec
#define AVR32_SCIF_CRIPOSCVERSION_MASK                      0x00000000
#define AVR32_SCIF_CRIPOSCVERSION_RESETVALUE                0x00000200
#define AVR32_SCIF_CRIPOSC_DIVBY2                                    1
#define AVR32_SCIF_CRIPOSC_DIVBY2_MASK                      0x00000002
#define AVR32_SCIF_CRIPOSC_DIVBY2_OFFSET                             1
#define AVR32_SCIF_CRIPOSC_DIVBY2_SIZE                               1
#define AVR32_SCIF_CRIPOSC_EN                                        0
#define AVR32_SCIF_CRIPOSC_EN_MASK                          0x00000001
#define AVR32_SCIF_CRIPOSC_EN_OFFSET                                 0
#define AVR32_SCIF_CRIPOSC_EN_SIZE                                   1
#define AVR32_SCIF_CRIPOSC_FCD                                      16
#define AVR32_SCIF_CRIPOSC_FCD_MASK                         0x00010000
#define AVR32_SCIF_CRIPOSC_FCD_OFFSET                               16
#define AVR32_SCIF_CRIPOSC_FCD_SIZE                                  1
#define AVR32_SCIF_CRIPOSC_MASK                             0x80011f03
#define AVR32_SCIF_CRIPOSC_RESETVALUE                       0x00000000
#define AVR32_SCIF_CRIPOSC_SEL                                       8
#define AVR32_SCIF_CRIPOSC_SEL_MASK                         0x00001f00
#define AVR32_SCIF_CRIPOSC_SEL_OFFSET                                8
#define AVR32_SCIF_CRIPOSC_SEL_SIZE                                  5
#define AVR32_SCIF_CRIPOSC_SFV                                      31
#define AVR32_SCIF_CRIPOSC_SFV_MASK                         0x80000000
#define AVR32_SCIF_CRIPOSC_SFV_OFFSET                               31
#define AVR32_SCIF_CRIPOSC_SFV_SIZE                                  1
#define AVR32_SCIF_CRYSTAL                                  0x00000001
#define AVR32_SCIF_CRYSTAL_ACG                              0x00000001
#define AVR32_SCIF_CRYSTAL_NO_ACG                           0x00000002
#define AVR32_SCIF_CTRL                                              8
#define AVR32_SCIF_CTRL_ENABLED                             0x00000001
#define AVR32_SCIF_CTRL_OFF1                                0x00000000
#define AVR32_SCIF_CTRL_OFF2                                0x00000003
#define AVR32_SCIF_CTRL_OFFSET                                       8
#define AVR32_SCIF_DIV                                              16
#define AVR32_SCIF_DIVBY2                                            1
#define AVR32_SCIF_DIVBY2_MASK                              0x00000002
#define AVR32_SCIF_DIVBY2_OFFSET                                     1
#define AVR32_SCIF_DIVBY2_SIZE                                       1
#define AVR32_SCIF_DIVEN                                             1
#define AVR32_SCIF_DIVEN_MASK                               0x00000002
#define AVR32_SCIF_DIVEN_OFFSET                                      1
#define AVR32_SCIF_DIVEN_SIZE                                        1
#define AVR32_SCIF_DIV_MASK                                 0x00ff0000
#define AVR32_SCIF_DIV_OFFSET                                       16
#define AVR32_SCIF_DIV_SIZE                                          8
#define AVR32_SCIF_DMD                                               9
#define AVR32_SCIF_DMD_MASK                                 0x00000200
#define AVR32_SCIF_DMD_OFFSET                                        9
#define AVR32_SCIF_DMD_SIZE                                          1
#define AVR32_SCIF_EN                                                0
#define AVR32_SCIF_ENABLED                                  0x00000001
#define AVR32_SCIF_EN_MASK                                  0x00000001
#define AVR32_SCIF_EN_OFFSET                                         0
#define AVR32_SCIF_EN_SIZE                                           1
#define AVR32_SCIF_EXT_CLOCK                                0x00000000
#define AVR32_SCIF_FCD                                              16
#define AVR32_SCIF_FCD_MASK                                 0x00010000
#define AVR32_SCIF_FCD_OFFSET                                       16
#define AVR32_SCIF_FCD_SIZE                                          1
#define AVR32_SCIF_FREQMODE                                         25
#define AVR32_SCIF_FREQMODE_MASK                            0x02000000
#define AVR32_SCIF_FREQMODE_OFFSET                                  25
#define AVR32_SCIF_FREQMODE_SIZE                                     1
#define AVR32_SCIF_GAIN                                              1
#define AVR32_SCIF_GAIN_MASK                                0x00000006
#define AVR32_SCIF_GAIN_OFFSET                                       1
#define AVR32_SCIF_GAIN_SIZE                                         2
#define AVR32_SCIF_GCCTRL                                   0x00000064
#define AVR32_SCIF_GCCTRL_CEN                                        0
#define AVR32_SCIF_GCCTRL_CEN_MASK                          0x00000001
#define AVR32_SCIF_GCCTRL_CEN_OFFSET                                 0
#define AVR32_SCIF_GCCTRL_CEN_SIZE                                   1
#define AVR32_SCIF_GCCTRL_DIV                                       16
#define AVR32_SCIF_GCCTRL_DIVEN                                      1
#define AVR32_SCIF_GCCTRL_DIVEN_MASK                        0x00000002
#define AVR32_SCIF_GCCTRL_DIVEN_OFFSET                               1
#define AVR32_SCIF_GCCTRL_DIVEN_SIZE                                 1
#define AVR32_SCIF_GCCTRL_DIV_MASK                          0x00ff0000
#define AVR32_SCIF_GCCTRL_DIV_OFFSET                                16
#define AVR32_SCIF_GCCTRL_DIV_SIZE                                   8
#define AVR32_SCIF_GCCTRL_MASK                              0x00ff0f03
#define AVR32_SCIF_GCCTRL_OSCSEL                                     8
#define AVR32_SCIF_GCCTRL_OSCSEL_MASK                       0x00000f00
#define AVR32_SCIF_GCCTRL_OSCSEL_OFFSET                              8
#define AVR32_SCIF_GCCTRL_OSCSEL_SIZE                                4
#define AVR32_SCIF_GCCTRL_RESETVALUE                        0x00000000
#define AVR32_SCIF_GCLKVERSION                              0x000003f8
#define AVR32_SCIF_GCLKVERSION_MASK                         0x00000000
#define AVR32_SCIF_GCLKVERSION_RESETVALUE                   0x00000101
#define AVR32_SCIF_GPLP                                     0x0000005c
#define AVR32_SCIF_GPLPVERSION                              0x000003f4
#define AVR32_SCIF_GPLPVERSION_MASK                         0x00000000
#define AVR32_SCIF_GPLPVERSION_RESETVALUE                   0x00000110
#define AVR32_SCIF_GPLP_GPLP                                         0
#define AVR32_SCIF_GPLP_GPLP_MASK                           0xffffffff
#define AVR32_SCIF_GPLP_GPLP_OFFSET                                  0
#define AVR32_SCIF_GPLP_GPLP_SIZE                                   32
#define AVR32_SCIF_GPLP_MASK                                0xffffffff
#define AVR32_SCIF_GPLP_OFFSET                                       0
#define AVR32_SCIF_GPLP_RESETVALUE                          0x00000000
#define AVR32_SCIF_GPLP_SIZE                                        32
#define AVR32_SCIF_HYST                                              6
#define AVR32_SCIF_HYST_MASK                                0x00000040
#define AVR32_SCIF_HYST_OFFSET                                       6
#define AVR32_SCIF_HYST_SIZE                                         1
#define AVR32_SCIF_ICR                                      0x00000010
#define AVR32_SCIF_ICR_AE                                           31
#define AVR32_SCIF_ICR_AE_MASK                              0x80000000
#define AVR32_SCIF_ICR_AE_OFFSET                                    31
#define AVR32_SCIF_ICR_AE_SIZE                                       1
#define AVR32_SCIF_ICR_BOD33DET                                      7
#define AVR32_SCIF_ICR_BOD33DET_MASK                        0x00000080
#define AVR32_SCIF_ICR_BOD33DET_OFFSET                               7
#define AVR32_SCIF_ICR_BOD33DET_SIZE                                 1
#define AVR32_SCIF_ICR_BOD50DET                                      8
#define AVR32_SCIF_ICR_BOD50DET_MASK                        0x00000100
#define AVR32_SCIF_ICR_BOD50DET_OFFSET                               8
#define AVR32_SCIF_ICR_BOD50DET_SIZE                                 1
#define AVR32_SCIF_ICR_BODDET                                        6
#define AVR32_SCIF_ICR_BODDET_MASK                          0x00000040
#define AVR32_SCIF_ICR_BODDET_OFFSET                                 6
#define AVR32_SCIF_ICR_BODDET_SIZE                                   1
#define AVR32_SCIF_ICR_MASK                                 0x800007ff
#define AVR32_SCIF_ICR_OSC0RDY                                       0
#define AVR32_SCIF_ICR_OSC0RDY_MASK                         0x00000001
#define AVR32_SCIF_ICR_OSC0RDY_OFFSET                                0
#define AVR32_SCIF_ICR_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_ICR_OSC1RDY                                       1
#define AVR32_SCIF_ICR_OSC1RDY_MASK                         0x00000002
#define AVR32_SCIF_ICR_OSC1RDY_OFFSET                                1
#define AVR32_SCIF_ICR_OSC1RDY_SIZE                                  1
#define AVR32_SCIF_ICR_OSC32RDY                                      2
#define AVR32_SCIF_ICR_OSC32RDY_MASK                        0x00000004
#define AVR32_SCIF_ICR_OSC32RDY_OFFSET                               2
#define AVR32_SCIF_ICR_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_ICR_PLL0_LOCK                                     4
#define AVR32_SCIF_ICR_PLL0_LOCKLOST                                 9
#define AVR32_SCIF_ICR_PLL0_LOCKLOST_MASK                   0x00000200
#define AVR32_SCIF_ICR_PLL0_LOCKLOST_OFFSET                          9
#define AVR32_SCIF_ICR_PLL0_LOCKLOST_SIZE                            1
#define AVR32_SCIF_ICR_PLL0_LOCK_MASK                       0x00000010
#define AVR32_SCIF_ICR_PLL0_LOCK_OFFSET                              4
#define AVR32_SCIF_ICR_PLL0_LOCK_SIZE                                1
#define AVR32_SCIF_ICR_PLL1_LOCK                                     5
#define AVR32_SCIF_ICR_PLL1_LOCKLOST                                10
#define AVR32_SCIF_ICR_PLL1_LOCKLOST_MASK                   0x00000400
#define AVR32_SCIF_ICR_PLL1_LOCKLOST_OFFSET                         10
#define AVR32_SCIF_ICR_PLL1_LOCKLOST_SIZE                            1
#define AVR32_SCIF_ICR_PLL1_LOCK_MASK                       0x00000020
#define AVR32_SCIF_ICR_PLL1_LOCK_OFFSET                              5
#define AVR32_SCIF_ICR_PLL1_LOCK_SIZE                                1
#define AVR32_SCIF_ICR_RCOSC8MRDY                                    3
#define AVR32_SCIF_ICR_RCOSC8MRDY_MASK                      0x00000008
#define AVR32_SCIF_ICR_RCOSC8MRDY_OFFSET                             3
#define AVR32_SCIF_ICR_RCOSC8MRDY_SIZE                               1
#define AVR32_SCIF_ICR_RESETVALUE                           0x00000000
#define AVR32_SCIF_IDR                                      0x00000004
#define AVR32_SCIF_IDR_AE                                           31
#define AVR32_SCIF_IDR_AE_MASK                              0x80000000
#define AVR32_SCIF_IDR_AE_OFFSET                                    31
#define AVR32_SCIF_IDR_AE_SIZE                                       1
#define AVR32_SCIF_IDR_BOD33DET                                      7
#define AVR32_SCIF_IDR_BOD33DET_MASK                        0x00000080
#define AVR32_SCIF_IDR_BOD33DET_OFFSET                               7
#define AVR32_SCIF_IDR_BOD33DET_SIZE                                 1
#define AVR32_SCIF_IDR_BOD50DET                                      8
#define AVR32_SCIF_IDR_BOD50DET_MASK                        0x00000100
#define AVR32_SCIF_IDR_BOD50DET_OFFSET                               8
#define AVR32_SCIF_IDR_BOD50DET_SIZE                                 1
#define AVR32_SCIF_IDR_BODDET                                        6
#define AVR32_SCIF_IDR_BODDET_MASK                          0x00000040
#define AVR32_SCIF_IDR_BODDET_OFFSET                                 6
#define AVR32_SCIF_IDR_BODDET_SIZE                                   1
#define AVR32_SCIF_IDR_MASK                                 0x800007ff
#define AVR32_SCIF_IDR_OSC0RDY                                       0
#define AVR32_SCIF_IDR_OSC0RDY_MASK                         0x00000001
#define AVR32_SCIF_IDR_OSC0RDY_OFFSET                                0
#define AVR32_SCIF_IDR_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_IDR_OSC1RDY                                       1
#define AVR32_SCIF_IDR_OSC1RDY_MASK                         0x00000002
#define AVR32_SCIF_IDR_OSC1RDY_OFFSET                                1
#define AVR32_SCIF_IDR_OSC1RDY_SIZE                                  1
#define AVR32_SCIF_IDR_OSC32RDY                                      2
#define AVR32_SCIF_IDR_OSC32RDY_MASK                        0x00000004
#define AVR32_SCIF_IDR_OSC32RDY_OFFSET                               2
#define AVR32_SCIF_IDR_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_IDR_PLL0_LOCK                                     4
#define AVR32_SCIF_IDR_PLL0_LOCKLOST                                 9
#define AVR32_SCIF_IDR_PLL0_LOCKLOST_MASK                   0x00000200
#define AVR32_SCIF_IDR_PLL0_LOCKLOST_OFFSET                          9
#define AVR32_SCIF_IDR_PLL0_LOCKLOST_SIZE                            1
#define AVR32_SCIF_IDR_PLL0_LOCK_MASK                       0x00000010
#define AVR32_SCIF_IDR_PLL0_LOCK_OFFSET                              4
#define AVR32_SCIF_IDR_PLL0_LOCK_SIZE                                1
#define AVR32_SCIF_IDR_PLL1_LOCK                                     5
#define AVR32_SCIF_IDR_PLL1_LOCKLOST                                10
#define AVR32_SCIF_IDR_PLL1_LOCKLOST_MASK                   0x00000400
#define AVR32_SCIF_IDR_PLL1_LOCKLOST_OFFSET                         10
#define AVR32_SCIF_IDR_PLL1_LOCKLOST_SIZE                            1
#define AVR32_SCIF_IDR_PLL1_LOCK_MASK                       0x00000020
#define AVR32_SCIF_IDR_PLL1_LOCK_OFFSET                              5
#define AVR32_SCIF_IDR_PLL1_LOCK_SIZE                                1
#define AVR32_SCIF_IDR_RCOSC8MRDY                                    3
#define AVR32_SCIF_IDR_RCOSC8MRDY_MASK                      0x00000008
#define AVR32_SCIF_IDR_RCOSC8MRDY_OFFSET                             3
#define AVR32_SCIF_IDR_RCOSC8MRDY_SIZE                               1
#define AVR32_SCIF_IDR_RESETVALUE                           0x00000000
#define AVR32_SCIF_IER                                      0x00000000
#define AVR32_SCIF_IER_AE                                           31
#define AVR32_SCIF_IER_AE_MASK                              0x80000000
#define AVR32_SCIF_IER_AE_OFFSET                                    31
#define AVR32_SCIF_IER_AE_SIZE                                       1
#define AVR32_SCIF_IER_BOD33DET                                      7
#define AVR32_SCIF_IER_BOD33DET_MASK                        0x00000080
#define AVR32_SCIF_IER_BOD33DET_OFFSET                               7
#define AVR32_SCIF_IER_BOD33DET_SIZE                                 1
#define AVR32_SCIF_IER_BOD50DET                                      8
#define AVR32_SCIF_IER_BOD50DET_MASK                        0x00000100
#define AVR32_SCIF_IER_BOD50DET_OFFSET                               8
#define AVR32_SCIF_IER_BOD50DET_SIZE                                 1
#define AVR32_SCIF_IER_BODDET                                        6
#define AVR32_SCIF_IER_BODDET_MASK                          0x00000040
#define AVR32_SCIF_IER_BODDET_OFFSET                                 6
#define AVR32_SCIF_IER_BODDET_SIZE                                   1
#define AVR32_SCIF_IER_MASK                                 0x800007ff
#define AVR32_SCIF_IER_OSC0RDY                                       0
#define AVR32_SCIF_IER_OSC0RDY_MASK                         0x00000001
#define AVR32_SCIF_IER_OSC0RDY_OFFSET                                0
#define AVR32_SCIF_IER_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_IER_OSC1RDY                                       1
#define AVR32_SCIF_IER_OSC1RDY_MASK                         0x00000002
#define AVR32_SCIF_IER_OSC1RDY_OFFSET                                1
#define AVR32_SCIF_IER_OSC1RDY_SIZE                                  1
#define AVR32_SCIF_IER_OSC32RDY                                      2
#define AVR32_SCIF_IER_OSC32RDY_MASK                        0x00000004
#define AVR32_SCIF_IER_OSC32RDY_OFFSET                               2
#define AVR32_SCIF_IER_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_IER_PLL0_LOCK                                     4
#define AVR32_SCIF_IER_PLL0_LOCKLOST                                 9
#define AVR32_SCIF_IER_PLL0_LOCKLOST_MASK                   0x00000200
#define AVR32_SCIF_IER_PLL0_LOCKLOST_OFFSET                          9
#define AVR32_SCIF_IER_PLL0_LOCKLOST_SIZE                            1
#define AVR32_SCIF_IER_PLL0_LOCK_MASK                       0x00000010
#define AVR32_SCIF_IER_PLL0_LOCK_OFFSET                              4
#define AVR32_SCIF_IER_PLL0_LOCK_SIZE                                1
#define AVR32_SCIF_IER_PLL1_LOCK                                     5
#define AVR32_SCIF_IER_PLL1_LOCKLOST                                10
#define AVR32_SCIF_IER_PLL1_LOCKLOST_MASK                   0x00000400
#define AVR32_SCIF_IER_PLL1_LOCKLOST_OFFSET                         10
#define AVR32_SCIF_IER_PLL1_LOCKLOST_SIZE                            1
#define AVR32_SCIF_IER_PLL1_LOCK_MASK                       0x00000020
#define AVR32_SCIF_IER_PLL1_LOCK_OFFSET                              5
#define AVR32_SCIF_IER_PLL1_LOCK_SIZE                                1
#define AVR32_SCIF_IER_RCOSC8MRDY                                    3
#define AVR32_SCIF_IER_RCOSC8MRDY_MASK                      0x00000008
#define AVR32_SCIF_IER_RCOSC8MRDY_OFFSET                             3
#define AVR32_SCIF_IER_RCOSC8MRDY_SIZE                               1
#define AVR32_SCIF_IER_RESETVALUE                           0x00000000
#define AVR32_SCIF_IMR                                      0x00000008
#define AVR32_SCIF_IMR_AE                                           31
#define AVR32_SCIF_IMR_AE_MASK                              0x80000000
#define AVR32_SCIF_IMR_AE_OFFSET                                    31
#define AVR32_SCIF_IMR_AE_SIZE                                       1
#define AVR32_SCIF_IMR_BOD33DET                                      7
#define AVR32_SCIF_IMR_BOD33DET_MASK                        0x00000080
#define AVR32_SCIF_IMR_BOD33DET_OFFSET                               7
#define AVR32_SCIF_IMR_BOD33DET_SIZE                                 1
#define AVR32_SCIF_IMR_BOD50DET                                      8
#define AVR32_SCIF_IMR_BOD50DET_MASK                        0x00000100
#define AVR32_SCIF_IMR_BOD50DET_OFFSET                               8
#define AVR32_SCIF_IMR_BOD50DET_SIZE                                 1
#define AVR32_SCIF_IMR_BODDET                                        6
#define AVR32_SCIF_IMR_BODDET_MASK                          0x00000040
#define AVR32_SCIF_IMR_BODDET_OFFSET                                 6
#define AVR32_SCIF_IMR_BODDET_SIZE                                   1
#define AVR32_SCIF_IMR_MASK                                 0x800007ff
#define AVR32_SCIF_IMR_OSC0RDY                                       0
#define AVR32_SCIF_IMR_OSC0RDY_MASK                         0x00000001
#define AVR32_SCIF_IMR_OSC0RDY_OFFSET                                0
#define AVR32_SCIF_IMR_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_IMR_OSC1RDY                                       1
#define AVR32_SCIF_IMR_OSC1RDY_MASK                         0x00000002
#define AVR32_SCIF_IMR_OSC1RDY_OFFSET                                1
#define AVR32_SCIF_IMR_OSC1RDY_SIZE                                  1
#define AVR32_SCIF_IMR_OSC32RDY                                      2
#define AVR32_SCIF_IMR_OSC32RDY_MASK                        0x00000004
#define AVR32_SCIF_IMR_OSC32RDY_OFFSET                               2
#define AVR32_SCIF_IMR_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_IMR_PLL0_LOCK                                     4
#define AVR32_SCIF_IMR_PLL0_LOCKLOST                                 9
#define AVR32_SCIF_IMR_PLL0_LOCKLOST_MASK                   0x00000200
#define AVR32_SCIF_IMR_PLL0_LOCKLOST_OFFSET                          9
#define AVR32_SCIF_IMR_PLL0_LOCKLOST_SIZE                            1
#define AVR32_SCIF_IMR_PLL0_LOCK_MASK                       0x00000010
#define AVR32_SCIF_IMR_PLL0_LOCK_OFFSET                              4
#define AVR32_SCIF_IMR_PLL0_LOCK_SIZE                                1
#define AVR32_SCIF_IMR_PLL1_LOCK                                     5
#define AVR32_SCIF_IMR_PLL1_LOCKLOST                                10
#define AVR32_SCIF_IMR_PLL1_LOCKLOST_MASK                   0x00000400
#define AVR32_SCIF_IMR_PLL1_LOCKLOST_OFFSET                         10
#define AVR32_SCIF_IMR_PLL1_LOCKLOST_SIZE                            1
#define AVR32_SCIF_IMR_PLL1_LOCK_MASK                       0x00000020
#define AVR32_SCIF_IMR_PLL1_LOCK_OFFSET                              5
#define AVR32_SCIF_IMR_PLL1_LOCK_SIZE                                1
#define AVR32_SCIF_IMR_RCOSC8MRDY                                    3
#define AVR32_SCIF_IMR_RCOSC8MRDY_MASK                      0x00000008
#define AVR32_SCIF_IMR_RCOSC8MRDY_OFFSET                             3
#define AVR32_SCIF_IMR_RCOSC8MRDY_SIZE                               1
#define AVR32_SCIF_IMR_RESETVALUE                           0x00000000
#define AVR32_SCIF_ISR                                      0x0000000c
#define AVR32_SCIF_ISR_AE                                           31
#define AVR32_SCIF_ISR_AE_MASK                              0x80000000
#define AVR32_SCIF_ISR_AE_OFFSET                                    31
#define AVR32_SCIF_ISR_AE_SIZE                                       1
#define AVR32_SCIF_ISR_BOD33DET                                      7
#define AVR32_SCIF_ISR_BOD33DET_MASK                        0x00000080
#define AVR32_SCIF_ISR_BOD33DET_OFFSET                               7
#define AVR32_SCIF_ISR_BOD33DET_SIZE                                 1
#define AVR32_SCIF_ISR_BOD50DET                                      8
#define AVR32_SCIF_ISR_BOD50DET_MASK                        0x00000100
#define AVR32_SCIF_ISR_BOD50DET_OFFSET                               8
#define AVR32_SCIF_ISR_BOD50DET_SIZE                                 1
#define AVR32_SCIF_ISR_BODDET                                        6
#define AVR32_SCIF_ISR_BODDET_MASK                          0x00000040
#define AVR32_SCIF_ISR_BODDET_OFFSET                                 6
#define AVR32_SCIF_ISR_BODDET_SIZE                                   1
#define AVR32_SCIF_ISR_MASK                                 0x800007ff
#define AVR32_SCIF_ISR_OSC0RDY                                       0
#define AVR32_SCIF_ISR_OSC0RDY_MASK                         0x00000001
#define AVR32_SCIF_ISR_OSC0RDY_OFFSET                                0
#define AVR32_SCIF_ISR_OSC0RDY_SIZE                                  1
#define AVR32_SCIF_ISR_OSC1RDY                                       1
#define AVR32_SCIF_ISR_OSC1RDY_MASK                         0x00000002
#define AVR32_SCIF_ISR_OSC1RDY_OFFSET                                1
#define AVR32_SCIF_ISR_OSC1RDY_SIZE                                  1
#define AVR32_SCIF_ISR_OSC32RDY                                      2
#define AVR32_SCIF_ISR_OSC32RDY_MASK                        0x00000004
#define AVR32_SCIF_ISR_OSC32RDY_OFFSET                               2
#define AVR32_SCIF_ISR_OSC32RDY_SIZE                                 1
#define AVR32_SCIF_ISR_PLL0_LOCK                                     4
#define AVR32_SCIF_ISR_PLL0_LOCKLOST                                 9
#define AVR32_SCIF_ISR_PLL0_LOCKLOST_MASK                   0x00000200
#define AVR32_SCIF_ISR_PLL0_LOCKLOST_OFFSET                          9
#define AVR32_SCIF_ISR_PLL0_LOCKLOST_SIZE                            1
#define AVR32_SCIF_ISR_PLL0_LOCK_MASK                       0x00000010
#define AVR32_SCIF_ISR_PLL0_LOCK_OFFSET                              4
#define AVR32_SCIF_ISR_PLL0_LOCK_SIZE                                1
#define AVR32_SCIF_ISR_PLL1_LOCK                                     5
#define AVR32_SCIF_ISR_PLL1_LOCKLOST                                10
#define AVR32_SCIF_ISR_PLL1_LOCKLOST_MASK                   0x00000400
#define AVR32_SCIF_ISR_PLL1_LOCKLOST_OFFSET                         10
#define AVR32_SCIF_ISR_PLL1_LOCKLOST_SIZE                            1
#define AVR32_SCIF_ISR_PLL1_LOCK_MASK                       0x00000020
#define AVR32_SCIF_ISR_PLL1_LOCK_OFFSET                              5
#define AVR32_SCIF_ISR_PLL1_LOCK_SIZE                                1
#define AVR32_SCIF_ISR_RCOSC8MRDY                                    3
#define AVR32_SCIF_ISR_RCOSC8MRDY_MASK                      0x00000008
#define AVR32_SCIF_ISR_RCOSC8MRDY_OFFSET                             3
#define AVR32_SCIF_ISR_RCOSC8MRDY_SIZE                               1
#define AVR32_SCIF_ISR_RESETVALUE                           0x00000000
#define AVR32_SCIF_KEY                                              24
#define AVR32_SCIF_KEY_MASK                                 0xff000000
#define AVR32_SCIF_KEY_OFFSET                                       24
#define AVR32_SCIF_KEY_SIZE                                          8
#define AVR32_SCIF_LEVEL                                             0
#define AVR32_SCIF_LEVEL_MASK                               0x0000003f
#define AVR32_SCIF_LEVEL_OFFSET                                      0
#define AVR32_SCIF_LEVEL_SIZE                                        6
#define AVR32_SCIF_MODE_CRYSTAL                             0x00000001
#define AVR32_SCIF_MODE_CRYSTAL_ACG                         0x00000001
#define AVR32_SCIF_MODE_CRYSTAL_NO_ACG                      0x00000002
#define AVR32_SCIF_MODE_EXT_CLOCK                           0x00000000
#define AVR32_SCIF_OFF1                                     0x00000000
#define AVR32_SCIF_OFF2                                     0x00000003
#define AVR32_SCIF_OPMODE                                   0x00000000
#define AVR32_SCIF_OPMODE3V                                 0x00000003
#define AVR32_SCIF_OPMODE5V                                 0x00000000
#define AVR32_SCIF_OSC0                                     0x00000000
#define AVR32_SCIF_OSC0RDY                                           0
#define AVR32_SCIF_OSC0RDY_MASK                             0x00000001
#define AVR32_SCIF_OSC0RDY_OFFSET                                    0
#define AVR32_SCIF_OSC0RDY_SIZE                                      1
#define AVR32_SCIF_OSC1                                     0x00000001
#define AVR32_SCIF_OSC1RDY                                           1
#define AVR32_SCIF_OSC1RDY_MASK                             0x00000002
#define AVR32_SCIF_OSC1RDY_OFFSET                                    1
#define AVR32_SCIF_OSC1RDY_SIZE                                      1
#define AVR32_SCIF_OSC32EN                                           0
#define AVR32_SCIF_OSC32EN_MASK                             0x00000001
#define AVR32_SCIF_OSC32EN_OFFSET                                    0
#define AVR32_SCIF_OSC32EN_SIZE                                      1
#define AVR32_SCIF_OSC32RDY                                          2
#define AVR32_SCIF_OSC32RDY_MASK                            0x00000004
#define AVR32_SCIF_OSC32RDY_OFFSET                                   2
#define AVR32_SCIF_OSC32RDY_SIZE                                     1
#define AVR32_SCIF_OSC32VERSION                             0x000003e4
#define AVR32_SCIF_OSC32VERSION_MASK                        0x00000000
#define AVR32_SCIF_OSC32VERSION_RESETVALUE                  0x00000100
#define AVR32_SCIF_OSCCTRL                                  0x00000024
#define AVR32_SCIF_OSCCTRL_OSCEN_DISABLE                    0x00000000  
#define AVR32_SCIF_OSCCTRL_OSCEN_ENABLE                     0x00000001  
#define AVR32_SCIF_OSCCTRL0_GAIN_G0                         0x00000000
#define AVR32_SCIF_OSCCTRL0_GAIN_G1                         0x00000001
#define AVR32_SCIF_OSCCTRL0_GAIN_G2                         0x00000002
#define AVR32_SCIF_OSCCTRL0_GAIN_G3                         0x00000003
#define AVR32_SCIF_OSCCTRL0_MODE_CRYSTAL                    0x00000001
#define AVR32_SCIF_OSCCTRL0_MODE_EXTCLK                     0x00000000
#define AVR32_SCIF_OSCCTRL0_STARTUP_0_RCOSC                 0x00000000
#define AVR32_SCIF_OSCCTRL0_STARTUP_128_RCOSC               0x00000002
#define AVR32_SCIF_OSCCTRL0_STARTUP_16384_RCOSC             0x00000006
#define AVR32_SCIF_OSCCTRL0_STARTUP_2048_RCOSC              0x00000003
#define AVR32_SCIF_OSCCTRL0_STARTUP_4096_RCOSC              0x00000004
#define AVR32_SCIF_OSCCTRL0_STARTUP_64_RCOSC                0x00000001
#define AVR32_SCIF_OSCCTRL0_STARTUP_8192_RCOSC              0x00000005
#define AVR32_SCIF_OSCCTRL0_STARTUP_32768_RCOSC             0x00000007
#define AVR32_SCIF_OSCCTRL0_STARTUP_4_RCOSC                 0x00000008
#define AVR32_SCIF_OSCCTRL0_STARTUP_8_RCOSC                 0x00000009
#define AVR32_SCIF_OSCCTRL0_STARTUP_16_RCOSC                0x0000000a
#define AVR32_SCIF_OSCCTRL0_STARTUP_32_RCOSC                0x0000000b
#define AVR32_SCIF_OSCCTRL0_STARTUP_256_RCOSC               0x0000000c
#define AVR32_SCIF_OSCCTRL0_STARTUP_512_RCOSC               0x0000000d
#define AVR32_SCIF_OSCCTRL0_STARTUP_1024_RCOSC              0x0000000e
#define AVR32_SCIF_OSCCTRL1_GAIN_G0                         0x00000000
#define AVR32_SCIF_OSCCTRL1_GAIN_G1                         0x00000001
#define AVR32_SCIF_OSCCTRL1_GAIN_G2                         0x00000002
#define AVR32_SCIF_OSCCTRL1_GAIN_G3                         0x00000003
#define AVR32_SCIF_OSCCTRL1_STARTUP_0_RCOSC                 0x00000000
#define AVR32_SCIF_OSCCTRL1_STARTUP_128_RCOSC               0x00000002
#define AVR32_SCIF_OSCCTRL1_STARTUP_16384_RCOSC             0x00000006
#define AVR32_SCIF_OSCCTRL1_STARTUP_2048_RCOSC              0x00000003
#define AVR32_SCIF_OSCCTRL1_STARTUP_4096_RCOSC              0x00000004
#define AVR32_SCIF_OSCCTRL1_STARTUP_64_RCOSC                0x00000001
#define AVR32_SCIF_OSCCTRL1_STARTUP_8192_RCOSC              0x00000005
#define AVR32_SCIF_OSCCTRL1_STARTUP_32768_RCOSC             0x00000007
#define AVR32_SCIF_OSCCTRL1_STARTUP_4_RCOSC                 0x00000008
#define AVR32_SCIF_OSCCTRL1_STARTUP_8_RCOSC                 0x00000009
#define AVR32_SCIF_OSCCTRL1_STARTUP_16_RCOSC                0x0000000a
#define AVR32_SCIF_OSCCTRL1_STARTUP_32_RCOSC                0x0000000b
#define AVR32_SCIF_OSCCTRL1_STARTUP_256_RCOSC               0x0000000c
#define AVR32_SCIF_OSCCTRL1_STARTUP_512_RCOSC               0x0000000d
#define AVR32_SCIF_OSCCTRL1_STARTUP_1024_RCOSC              0x0000000e
#define AVR32_SCIF_OSCCTRL32                                0x0000004c
#define AVR32_SCIF_OSCCTRL32_MASK                           0x00070301
#define AVR32_SCIF_OSCCTRL32_MODE                                    8
#define AVR32_SCIF_OSCCTRL32_MODE_CRYSTAL_ACG               0x00000001
#define AVR32_SCIF_OSCCTRL32_MODE_CRYSTAL_NO_ACG            0x00000002
#define AVR32_SCIF_OSCCTRL32_MODE_EXT_CLOCK                 0x00000000
#define AVR32_SCIF_OSCCTRL32_MODE_MASK                      0x00000300
#define AVR32_SCIF_OSCCTRL32_MODE_OFFSET                             8
#define AVR32_SCIF_OSCCTRL32_MODE_SIZE                               2
#define AVR32_SCIF_OSCCTRL32_OSC32EN                                 0
#define AVR32_SCIF_OSCCTRL32_OSC32EN_DISABLE                0x00000000
#define AVR32_SCIF_OSCCTRL32_OSC32EN_ENABLE                 0x00000001  
#define AVR32_SCIF_OSCCTRL32_OSC32EN_MASK                   0x00000001
#define AVR32_SCIF_OSCCTRL32_OSC32EN_OFFSET                          0
#define AVR32_SCIF_OSCCTRL32_OSC32EN_SIZE                            1
#define AVR32_SCIF_OSCCTRL32_RESETVALUE                     0x00000000
#define AVR32_SCIF_OSCCTRL32_STARTUP                                16
#define AVR32_SCIF_OSCCTRL32_STARTUP_0_RCOSC                0x00000000
#define AVR32_SCIF_OSCCTRL32_STARTUP_128_RCOSC              0x00000001
#define AVR32_SCIF_OSCCTRL32_STARTUP_131072_RCOSC           0x00000005
#define AVR32_SCIF_OSCCTRL32_STARTUP_16384_RCOSC            0x00000003
#define AVR32_SCIF_OSCCTRL32_STARTUP_262144_RCOSC           0x00000006
#define AVR32_SCIF_OSCCTRL32_STARTUP_524288_RCOSC           0x00000007
#define AVR32_SCIF_OSCCTRL32_STARTUP_65536_RCOSC            0x00000004
#define AVR32_SCIF_OSCCTRL32_STARTUP_8192_RCOSC             0x00000002
#define AVR32_SCIF_OSCCTRL32_STARTUP_MASK                   0x00070000
#define AVR32_SCIF_OSCCTRL32_STARTUP_OFFSET                         16
#define AVR32_SCIF_OSCCTRL32_STARTUP_SIZE                            3
#define AVR32_SCIF_OSCCTRL_AGC                                       3
#define AVR32_SCIF_OSCCTRL_AGC_MASK                         0x00000008
#define AVR32_SCIF_OSCCTRL_AGC_OFFSET                                3
#define AVR32_SCIF_OSCCTRL_AGC_SIZE                                  1
#define AVR32_SCIF_OSCCTRL_GAIN                                      1
#define AVR32_SCIF_OSCCTRL_GAIN_MASK                        0x00000006
#define AVR32_SCIF_OSCCTRL_GAIN_OFFSET                               1
#define AVR32_SCIF_OSCCTRL_GAIN_SIZE                                 2
#define AVR32_SCIF_OSCCTRL_MASK                             0x00010f0f
#define AVR32_SCIF_OSCCTRL_MODE                                      0
#define AVR32_SCIF_OSCCTRL_MODE_CRYSTAL                     0x00000001
#define AVR32_SCIF_OSCCTRL_MODE_EXT_CLOCK                   0x00000000
#define AVR32_SCIF_OSCCTRL_MODE_MASK                        0x00000001
#define AVR32_SCIF_OSCCTRL_MODE_OFFSET                               0
#define AVR32_SCIF_OSCCTRL_MODE_SIZE                                 1
#define AVR32_SCIF_OSCCTRL_OSCEN                                    16
#define AVR32_SCIF_OSCCTRL_OSCEN_MASK                       0x00010000
#define AVR32_SCIF_OSCCTRL_OSCEN_OFFSET                             16
#define AVR32_SCIF_OSCCTRL_OSCEN_SIZE                                1
#define AVR32_SCIF_OSCCTRL_RESETVALUE                       0x00000000
#define AVR32_SCIF_OSCCTRL_STARTUP                                   8
#define AVR32_SCIF_OSCCTRL_STARTUP_MASK                     0x00000f00
#define AVR32_SCIF_OSCCTRL_STARTUP_OFFSET                            8
#define AVR32_SCIF_OSCCTRL_STARTUP_SIZE                              4
#define AVR32_SCIF_OSCEN                                            16
#define AVR32_SCIF_OSCEN_MASK                               0x00010000
#define AVR32_SCIF_OSCEN_OFFSET                                     16
#define AVR32_SCIF_OSCEN_SIZE                                        1
#define AVR32_SCIF_OSCSEL                                            8
#define AVR32_SCIF_OSCSEL_MASK                              0x00000f00
#define AVR32_SCIF_OSCSEL_OFFSET                                     8
#define AVR32_SCIF_OSCSEL_SIZE                                       4
#define AVR32_SCIF_OSCVERSION                               0x000003cc
#define AVR32_SCIF_OSCVERSION_MASK                          0x00000000
#define AVR32_SCIF_OSCVERSION_RESETVALUE                    0x00000110
#define AVR32_SCIF_PCLKSR                                   0x00000014
#define AVR32_SCIF_PCLKSR_AE                                        31
#define AVR32_SCIF_PCLKSR_AE_MASK                           0x80000000
#define AVR32_SCIF_PCLKSR_AE_OFFSET                                 31
#define AVR32_SCIF_PCLKSR_AE_SIZE                                    1
#define AVR32_SCIF_PCLKSR_BOD33DET                                   7
#define AVR32_SCIF_PCLKSR_BOD33DET_MASK                     0x00000080
#define AVR32_SCIF_PCLKSR_BOD33DET_OFFSET                            7
#define AVR32_SCIF_PCLKSR_BOD33DET_SIZE                              1
#define AVR32_SCIF_PCLKSR_BOD50DET                                   8
#define AVR32_SCIF_PCLKSR_BOD50DET_MASK                     0x00000100
#define AVR32_SCIF_PCLKSR_BOD50DET_OFFSET                            8
#define AVR32_SCIF_PCLKSR_BOD50DET_SIZE                              1
#define AVR32_SCIF_PCLKSR_BODDET                                     6
#define AVR32_SCIF_PCLKSR_BODDET_MASK                       0x00000040
#define AVR32_SCIF_PCLKSR_BODDET_OFFSET                              6
#define AVR32_SCIF_PCLKSR_BODDET_SIZE                                1
#define AVR32_SCIF_PCLKSR_MASK                              0x800007ff
#define AVR32_SCIF_PCLKSR_OSC0RDY                                    0
#define AVR32_SCIF_PCLKSR_OSC0RDY_MASK                      0x00000001
#define AVR32_SCIF_PCLKSR_OSC0RDY_OFFSET                             0
#define AVR32_SCIF_PCLKSR_OSC0RDY_SIZE                               1
#define AVR32_SCIF_PCLKSR_OSC1RDY                                    1
#define AVR32_SCIF_PCLKSR_OSC1RDY_MASK                      0x00000002
#define AVR32_SCIF_PCLKSR_OSC1RDY_OFFSET                             1
#define AVR32_SCIF_PCLKSR_OSC1RDY_SIZE                               1
#define AVR32_SCIF_PCLKSR_OSC32RDY                                   2
#define AVR32_SCIF_PCLKSR_OSC32RDY_MASK                     0x00000004
#define AVR32_SCIF_PCLKSR_OSC32RDY_OFFSET                            2
#define AVR32_SCIF_PCLKSR_OSC32RDY_SIZE                              1
#define AVR32_SCIF_PCLKSR_PLL0_LOCK                                  4
#define AVR32_SCIF_PCLKSR_PLL0_LOCKLOST                              9
#define AVR32_SCIF_PCLKSR_PLL0_LOCKLOST_MASK                0x00000200
#define AVR32_SCIF_PCLKSR_PLL0_LOCKLOST_OFFSET                       9
#define AVR32_SCIF_PCLKSR_PLL0_LOCKLOST_SIZE                         1
#define AVR32_SCIF_PCLKSR_PLL0_LOCK_MASK                    0x00000010
#define AVR32_SCIF_PCLKSR_PLL0_LOCK_OFFSET                           4
#define AVR32_SCIF_PCLKSR_PLL0_LOCK_SIZE                             1
#define AVR32_SCIF_PCLKSR_PLL1_LOCK                                  5
#define AVR32_SCIF_PCLKSR_PLL1_LOCKLOST                             10
#define AVR32_SCIF_PCLKSR_PLL1_LOCKLOST_MASK                0x00000400
#define AVR32_SCIF_PCLKSR_PLL1_LOCKLOST_OFFSET                      10
#define AVR32_SCIF_PCLKSR_PLL1_LOCKLOST_SIZE                         1
#define AVR32_SCIF_PCLKSR_PLL1_LOCK_MASK                    0x00000020
#define AVR32_SCIF_PCLKSR_PLL1_LOCK_OFFSET                           5
#define AVR32_SCIF_PCLKSR_PLL1_LOCK_SIZE                             1
#define AVR32_SCIF_PCLKSR_RCOSC8MRDY                                 3
#define AVR32_SCIF_PCLKSR_RCOSC8MRDY_MASK                   0x00000008
#define AVR32_SCIF_PCLKSR_RCOSC8MRDY_OFFSET                          3
#define AVR32_SCIF_PCLKSR_RCOSC8MRDY_SIZE                            1
#define AVR32_SCIF_PCLKSR_RESETVALUE                        0x00000000
#define AVR32_SCIF_PLL                                      0x0000001c
#define AVR32_SCIF_PLL0_LOCK                                         4
#define AVR32_SCIF_PLL0_LOCKLOST                                     9
#define AVR32_SCIF_PLL0_LOCKLOST_MASK                       0x00000200
#define AVR32_SCIF_PLL0_LOCKLOST_OFFSET                              9
#define AVR32_SCIF_PLL0_LOCKLOST_SIZE                                1
#define AVR32_SCIF_PLL0_LOCK_MASK                           0x00000010
#define AVR32_SCIF_PLL0_LOCK_OFFSET                                  4
#define AVR32_SCIF_PLL0_LOCK_SIZE                                    1
#define AVR32_SCIF_PLL1_LOCK                                         5
#define AVR32_SCIF_PLL1_LOCKLOST                                    10
#define AVR32_SCIF_PLL1_LOCKLOST_MASK                       0x00000400
#define AVR32_SCIF_PLL1_LOCKLOST_OFFSET                             10
#define AVR32_SCIF_PLL1_LOCKLOST_SIZE                                1
#define AVR32_SCIF_PLL1_LOCK_MASK                           0x00000020
#define AVR32_SCIF_PLL1_LOCK_OFFSET                                  5
#define AVR32_SCIF_PLL1_LOCK_SIZE                                    1
#define AVR32_SCIF_PLLBPL                                            7
#define AVR32_SCIF_PLLBPL_MASK                              0x00000080
#define AVR32_SCIF_PLLBPL_OFFSET                                     7
#define AVR32_SCIF_PLLBPL_SIZE                                       1
#define AVR32_SCIF_PLLCOUNT                                         24
#define AVR32_SCIF_PLLCOUNT_MASK                            0x3f000000
#define AVR32_SCIF_PLLCOUNT_OFFSET                                  24
#define AVR32_SCIF_PLLCOUNT_SIZE                                     6
#define AVR32_SCIF_PLLDIV                                            8
#define AVR32_SCIF_PLLDIV_MASK                              0x00000f00
#define AVR32_SCIF_PLLDIV_OFFSET                                     8
#define AVR32_SCIF_PLLDIV_SIZE                                       4
#define AVR32_SCIF_PLLEN                                             0
#define AVR32_SCIF_PLLEN_MASK                               0x00000001
#define AVR32_SCIF_PLLEN_OFFSET                                      0
#define AVR32_SCIF_PLLEN_SIZE                                        1
#define AVR32_SCIF_PLLIOTESTEN                                      30
#define AVR32_SCIF_PLLIOTESTEN_MASK                         0x40000000
#define AVR32_SCIF_PLLIOTESTEN_OFFSET                               30
#define AVR32_SCIF_PLLIOTESTEN_SIZE                                  1
#define AVR32_SCIF_PLLMUL                                           16
#define AVR32_SCIF_PLLMUL_MASK                              0x000f0000
#define AVR32_SCIF_PLLMUL_OFFSET                                    16
#define AVR32_SCIF_PLLMUL_SIZE                                       4
#define AVR32_SCIF_PLLOPT                                            3
#define AVR32_SCIF_PLLOPT_MASK                              0x00000038
#define AVR32_SCIF_PLLOPT_OFFSET                                     3
#define AVR32_SCIF_PLLOPT_SIZE                                       3
#define AVR32_SCIF_PLLOSC                                            1
#define AVR32_SCIF_PLLOSC_MASK                              0x00000006
#define AVR32_SCIF_PLLOSC_OFFSET                                     1
#define AVR32_SCIF_PLLOSC_OSC0                              0x00000000
#define AVR32_SCIF_PLLOSC_OSC1                              0x00000001
#define AVR32_SCIF_PLLOSC_RCOSC8                            0x00000002
#define AVR32_SCIF_PLLOSC_RESERVED                          0x00000003
#define AVR32_SCIF_PLLOSC_SIZE                                       2
#define AVR32_SCIF_PLLTEST                                          31
#define AVR32_SCIF_PLLTEST_MASK                             0x80000000
#define AVR32_SCIF_PLLTEST_OFFSET                                   31
#define AVR32_SCIF_PLLTEST_SIZE                                      1
#define AVR32_SCIF_PLLVERSION                               0x000003c8
#define AVR32_SCIF_PLLVERSION_MASK                          0x00000000
#define AVR32_SCIF_PLLVERSION_RESETVALUE                    0x00000101
#define AVR32_SCIF_PLL_MASK                                 0xff0f0fbf
#define AVR32_SCIF_PLL_PLLBPL                                        7
#define AVR32_SCIF_PLL_PLLBPL_MASK                          0x00000080
#define AVR32_SCIF_PLL_PLLBPL_OFFSET                                 7
#define AVR32_SCIF_PLL_PLLBPL_SIZE                                   1
#define AVR32_SCIF_PLL_PLLCOUNT                                     24
#define AVR32_SCIF_PLL_PLLCOUNT_MASK                        0x3f000000
#define AVR32_SCIF_PLL_PLLCOUNT_OFFSET                              24
#define AVR32_SCIF_PLL_PLLCOUNT_SIZE                                 6
#define AVR32_SCIF_PLL_PLLDIV                                        8
#define AVR32_SCIF_PLL_PLLDIV_MASK                          0x00000f00
#define AVR32_SCIF_PLL_PLLDIV_OFFSET                                 8
#define AVR32_SCIF_PLL_PLLDIV_SIZE                                   4
#define AVR32_SCIF_PLL_PLLEN                                         0
#define AVR32_SCIF_PLL_PLLEN_MASK                           0x00000001
#define AVR32_SCIF_PLL_PLLEN_OFFSET                                  0
#define AVR32_SCIF_PLL_PLLEN_SIZE                                    1
#define AVR32_SCIF_PLL_PLLIOTESTEN                                  30
#define AVR32_SCIF_PLL_PLLIOTESTEN_MASK                     0x40000000
#define AVR32_SCIF_PLL_PLLIOTESTEN_OFFSET                           30
#define AVR32_SCIF_PLL_PLLIOTESTEN_SIZE                              1
#define AVR32_SCIF_PLL_PLLMUL                                       16
#define AVR32_SCIF_PLL_PLLMUL_MASK                          0x000f0000
#define AVR32_SCIF_PLL_PLLMUL_OFFSET                                16
#define AVR32_SCIF_PLL_PLLMUL_SIZE                                   4
#define AVR32_SCIF_PLL_PLLOPT                                        3
#define AVR32_SCIF_PLL_PLLOPT_MASK                          0x00000038
#define AVR32_SCIF_PLL_PLLOPT_OFFSET                                 3
#define AVR32_SCIF_PLL_PLLOPT_SIZE                                   3
#define AVR32_SCIF_PLL_PLLOSC                                        1
#define AVR32_SCIF_PLL_PLLOSC_MASK                          0x00000006
#define AVR32_SCIF_PLL_PLLOSC_OFFSET                                 1
#define AVR32_SCIF_PLL_PLLOSC_OSC0                          0x00000000
#define AVR32_SCIF_PLL_PLLOSC_OSC1                          0x00000001
#define AVR32_SCIF_PLL_PLLOSC_RCOSC8                        0x00000002
#define AVR32_SCIF_PLL_PLLOSC_RESERVED                      0x00000003
#define AVR32_SCIF_PLL_PLLOSC_SIZE                                   2
#define AVR32_SCIF_PLL_PLLTEST                                      31
#define AVR32_SCIF_PLL_PLLTEST_MASK                         0x80000000
#define AVR32_SCIF_PLL_PLLTEST_OFFSET                               31
#define AVR32_SCIF_PLL_PLLTEST_SIZE                                  1
#define AVR32_SCIF_PLL_RESETVALUE                           0x00000000
#define AVR32_SCIF_RC120MCR                                 0x00000058
#define AVR32_SCIF_RC120MCR_EN                                       0
#define AVR32_SCIF_RC120MCR_EN_MASK                         0x00000001
#define AVR32_SCIF_RC120MCR_EN_OFFSET                                0
#define AVR32_SCIF_RC120MCR_EN_SIZE                                  1
#define AVR32_SCIF_RC120MCR_MASK                            0x00000001
#define AVR32_SCIF_RC120MCR_RESETVALUE                      0x00000000
#define AVR32_SCIF_RC120MVERSION                            0x000003f0
#define AVR32_SCIF_RC120MVERSION_MASK                       0x00000000
#define AVR32_SCIF_RC120MVERSION_RESETVALUE                 0x00000110
#define AVR32_SCIF_RCCR                                     0x00000044
#define AVR32_SCIF_RCCR8                                    0x00000048
#define AVR32_SCIF_RCCR8VERSION                             0x000003e0
#define AVR32_SCIF_RCCR8VERSION_MASK                        0x00000000
#define AVR32_SCIF_RCCR8VERSION_RESETVALUE                  0x00000100
#define AVR32_SCIF_RCCR8_CALIB                                       0
#define AVR32_SCIF_RCCR8_CALIB_MASK                         0x000000ff
#define AVR32_SCIF_RCCR8_CALIB_OFFSET                                0
#define AVR32_SCIF_RCCR8_CALIB_SIZE                                  8
#define AVR32_SCIF_RCCR8_FCD                                        16
#define AVR32_SCIF_RCCR8_FCD_MASK                           0x00010000
#define AVR32_SCIF_RCCR8_FCD_OFFSET                                 16
#define AVR32_SCIF_RCCR8_FCD_SIZE                                    1
#define AVR32_SCIF_RCCR8_FREQMODE                                   25
#define AVR32_SCIF_RCCR8_FREQMODE_MASK                      0x02000000
#define AVR32_SCIF_RCCR8_FREQMODE_OFFSET                            25
#define AVR32_SCIF_RCCR8_FREQMODE_SIZE                               1
#define AVR32_SCIF_RCCR8_MASK                               0x030100ff
#define AVR32_SCIF_RCCR8_RCOSC8_EN                                  24
#define AVR32_SCIF_RCCR8_RCOSC8_EN_MASK                     0x01000000
#define AVR32_SCIF_RCCR8_RCOSC8_EN_OFFSET                           24
#define AVR32_SCIF_RCCR8_RCOSC8_EN_SIZE                              1
#define AVR32_SCIF_RCCR8_RESETVALUE                         0x00000000
#define AVR32_SCIF_RCCRVERSION                              0x000003dc
#define AVR32_SCIF_RCCRVERSION_MASK                         0x00000000
#define AVR32_SCIF_RCCRVERSION_RESETVALUE                   0x00000110
#define AVR32_SCIF_RCCR_CALIB                                        0
#define AVR32_SCIF_RCCR_CALIB_MASK                          0x000003ff
#define AVR32_SCIF_RCCR_CALIB_OFFSET                                 0
#define AVR32_SCIF_RCCR_CALIB_SIZE                                  10
#define AVR32_SCIF_RCCR_FCD                                         16
#define AVR32_SCIF_RCCR_FCD_MASK                            0x00010000
#define AVR32_SCIF_RCCR_FCD_OFFSET                                  16
#define AVR32_SCIF_RCCR_FCD_SIZE                                     1
#define AVR32_SCIF_RCCR_MASK                                0x000103ff
#define AVR32_SCIF_RCCR_RESETVALUE                          0x00000000
#define AVR32_SCIF_RCOSC8                                   0x00000002
#define AVR32_SCIF_RCOSC8MRDY                                        3
#define AVR32_SCIF_RCOSC8MRDY_MASK                          0x00000008
#define AVR32_SCIF_RCOSC8MRDY_OFFSET                                 3
#define AVR32_SCIF_RCOSC8MRDY_SIZE                                   1
#define AVR32_SCIF_RCOSC8_EN                                        24
#define AVR32_SCIF_RCOSC8_EN_MASK                           0x01000000
#define AVR32_SCIF_RCOSC8_EN_OFFSET                                 24
#define AVR32_SCIF_RCOSC8_EN_SIZE                                    1
#define AVR32_SCIF_RESERVED                                 0x00000003
#define AVR32_SCIF_SEL                                               8
#define AVR32_SCIF_SEL_MASK                                 0x00001f00
#define AVR32_SCIF_SEL_OFFSET                                        8
#define AVR32_SCIF_SEL_SIZE                                          5
#define AVR32_SCIF_SFV                                              31
#define AVR32_SCIF_SFV_MASK                                 0x80000000
#define AVR32_SCIF_SFV_OFFSET                                       31
#define AVR32_SCIF_SFV_SIZE                                          1
#define AVR32_SCIF_SLEEPCALIB                                        8
#define AVR32_SCIF_SLEEPCALIB_MASK                          0x00000700
#define AVR32_SCIF_SLEEPCALIB_OFFSET                                 8
#define AVR32_SCIF_SLEEPCALIB_SIZE                                   3
#define AVR32_SCIF_TESTBYPASSMODE                           0x00000003
#define AVR32_SCIF_TESTMODE                                 0x00000002
#define AVR32_SCIF_TSENS                                    0x00000050
#define AVR32_SCIF_TSENSVERSION                             0x000003e8
#define AVR32_SCIF_TSENSVERSION_MASK                        0x00000000
#define AVR32_SCIF_TSENSVERSION_RESETVALUE                  0x00000100
#define AVR32_SCIF_TSENS_EN                                          0
#define AVR32_SCIF_TSENS_EN_MASK                            0x00000001
#define AVR32_SCIF_TSENS_EN_OFFSET                                   0
#define AVR32_SCIF_TSENS_EN_SIZE                                     1
#define AVR32_SCIF_TSENS_MASK                               0x00000001
#define AVR32_SCIF_TSENS_RESETVALUE                         0x00000000
#define AVR32_SCIF_UNLOCK                                   0x00000018
#define AVR32_SCIF_UNLOCK_ADDR                                       0
#define AVR32_SCIF_UNLOCK_ADDR_MASK                         0x0000ffff
#define AVR32_SCIF_UNLOCK_ADDR_OFFSET                                0
#define AVR32_SCIF_UNLOCK_ADDR_SIZE                                 16
#define AVR32_SCIF_UNLOCK_KEY                                       24
#define AVR32_SCIF_UNLOCK_KEY_MASK                          0xff000000
#define AVR32_SCIF_UNLOCK_KEY_OFFSET                                24
#define AVR32_SCIF_UNLOCK_KEY_SIZE                                   8
#define AVR32_SCIF_UNLOCK_KEY_VALUE                         0x000000AA
#define AVR32_SCIF_UNLOCK_MASK                              0xff00ffff
#define AVR32_SCIF_UNLOCK_RESETVALUE                        0x00000000
#define AVR32_SCIF_VERSION                                  0x000003fc
#define AVR32_SCIF_VERSION_MASK                             0x00000000
#define AVR32_SCIF_VERSION_RESETVALUE                       0x00000102
#define AVR32_SCIF_VREG18CTL                                         0
#define AVR32_SCIF_VREG18CTL_BYPASSMODE                     0x00000001
#define AVR32_SCIF_VREG18CTL_MASK                           0x00000003
#define AVR32_SCIF_VREG18CTL_OFFSET                                  0
#define AVR32_SCIF_VREG18CTL_OPMODE                         0x00000000
#define AVR32_SCIF_VREG18CTL_SIZE                                    2
#define AVR32_SCIF_VREG18CTL_TESTBYPASSMODE                 0x00000003
#define AVR32_SCIF_VREG18CTL_TESTMODE                       0x00000002
#define AVR32_SCIF_VREG33CTL                                         2
#define AVR32_SCIF_VREG33CTL_BYPASSMODE                     0x00000001
#define AVR32_SCIF_VREG33CTL_MASK                           0x0000000c
#define AVR32_SCIF_VREG33CTL_OFFSET                                  2
#define AVR32_SCIF_VREG33CTL_OPMODE3V                       0x00000003
#define AVR32_SCIF_VREG33CTL_OPMODE5V                       0x00000000
#define AVR32_SCIF_VREG33CTL_SIZE                                    2
#define AVR32_SCIF_VREG33CTL_TESTMODE                       0x00000002
#define AVR32_SCIF_VREGCR                                   0x0000003c
#define AVR32_SCIF_VREGCR_CALIB                                      0
#define AVR32_SCIF_VREGCR_CALIB_MASK                        0x00000007
#define AVR32_SCIF_VREGCR_CALIB_OFFSET                               0
#define AVR32_SCIF_VREGCR_CALIB_SIZE                                 3
#define AVR32_SCIF_VREGCR_FCD                                       16
#define AVR32_SCIF_VREGCR_FCD_MASK                          0x00010000
#define AVR32_SCIF_VREGCR_FCD_OFFSET                                16
#define AVR32_SCIF_VREGCR_FCD_SIZE                                   1
#define AVR32_SCIF_VREGCR_MASK                              0x80010707
#define AVR32_SCIF_VREGCR_RESETVALUE                        0x00000000
#define AVR32_SCIF_VREGCR_SFV                                       31
#define AVR32_SCIF_VREGCR_SFV_MASK                          0x80000000
#define AVR32_SCIF_VREGCR_SFV_OFFSET                                31
#define AVR32_SCIF_VREGCR_SFV_SIZE                                   1
#define AVR32_SCIF_VREGCR_SLEEPCALIB                                 8
#define AVR32_SCIF_VREGCR_SLEEPCALIB_MASK                   0x00000700
#define AVR32_SCIF_VREGCR_SLEEPCALIB_OFFSET                          8
#define AVR32_SCIF_VREGCR_SLEEPCALIB_SIZE                            3
#define AVR32_SCIF_VREGCTRL                                 0x00000040
#define AVR32_SCIF_VREGCTRL_DMD                                      9
#define AVR32_SCIF_VREGCTRL_DMD_MASK                        0x00000200
#define AVR32_SCIF_VREGCTRL_DMD_OFFSET                               9
#define AVR32_SCIF_VREGCTRL_DMD_SIZE                                 1
#define AVR32_SCIF_VREGCTRL_MASK                            0x8000020f
#define AVR32_SCIF_VREGCTRL_RESETVALUE                      0x00000000
#define AVR32_SCIF_VREGCTRL_SFV                                     31
#define AVR32_SCIF_VREGCTRL_SFV_MASK                        0x80000000
#define AVR32_SCIF_VREGCTRL_SFV_OFFSET                              31
#define AVR32_SCIF_VREGCTRL_SFV_SIZE                                 1
#define AVR32_SCIF_VREGCTRL_VREG18CTL                                0
#define AVR32_SCIF_VREGCTRL_VREG18CTL_BYPASSMODE            0x00000001
#define AVR32_SCIF_VREGCTRL_VREG18CTL_MASK                  0x00000003
#define AVR32_SCIF_VREGCTRL_VREG18CTL_OFFSET                         0
#define AVR32_SCIF_VREGCTRL_VREG18CTL_OPMODE                0x00000000
#define AVR32_SCIF_VREGCTRL_VREG18CTL_SIZE                           2
#define AVR32_SCIF_VREGCTRL_VREG18CTL_TESTBYPASSMODE        0x00000003
#define AVR32_SCIF_VREGCTRL_VREG18CTL_TESTMODE              0x00000002
#define AVR32_SCIF_VREGCTRL_VREG33CTL                                2
#define AVR32_SCIF_VREGCTRL_VREG33CTL_BYPASSMODE            0x00000001
#define AVR32_SCIF_VREGCTRL_VREG33CTL_MASK                  0x0000000c
#define AVR32_SCIF_VREGCTRL_VREG33CTL_OFFSET                         2
#define AVR32_SCIF_VREGCTRL_VREG33CTL_OPMODE3V              0x00000003
#define AVR32_SCIF_VREGCTRL_VREG33CTL_OPMODE5V              0x00000000
#define AVR32_SCIF_VREGCTRL_VREG33CTL_SIZE                           2
#define AVR32_SCIF_VREGCTRL_VREG33CTL_TESTMODE              0x00000002
#define AVR32_SCIF_VREGVERSION                              0x000003d8
#define AVR32_SCIF_VREGVERSION_MASK                         0x00000000
#define AVR32_SCIF_VREGVERSION_RESETVALUE                   0x00000110

#define AVR32_SCIF_ACCESS_KEY                          0x000000aa



#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_scif_ier_t {
    unsigned int ae              : 1;
    unsigned int                 :20;
    unsigned int pll1_locklost   : 1;
    unsigned int pll0_locklost   : 1;
    unsigned int bod50det        : 1;
    unsigned int bod33det        : 1;
    unsigned int boddet          : 1;
    unsigned int pll1_lock       : 1;
    unsigned int pll0_lock       : 1;
    unsigned int rcosc8mrdy      : 1;
    unsigned int osc32rdy        : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_scif_ier_t;



typedef struct avr32_scif_idr_t {
    unsigned int ae              : 1;
    unsigned int                 :20;
    unsigned int pll1_locklost   : 1;
    unsigned int pll0_locklost   : 1;
    unsigned int bod50det        : 1;
    unsigned int bod33det        : 1;
    unsigned int boddet          : 1;
    unsigned int pll1_lock       : 1;
    unsigned int pll0_lock       : 1;
    unsigned int rcosc8mrdy      : 1;
    unsigned int osc32rdy        : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_scif_idr_t;



typedef struct avr32_scif_imr_t {
    unsigned int ae              : 1;
    unsigned int                 :20;
    unsigned int pll1_locklost   : 1;
    unsigned int pll0_locklost   : 1;
    unsigned int bod50det        : 1;
    unsigned int bod33det        : 1;
    unsigned int boddet          : 1;
    unsigned int pll1_lock       : 1;
    unsigned int pll0_lock       : 1;
    unsigned int rcosc8mrdy      : 1;
    unsigned int osc32rdy        : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_scif_imr_t;



typedef struct avr32_scif_isr_t {
    unsigned int ae              : 1;
    unsigned int                 :20;
    unsigned int pll1_locklost   : 1;
    unsigned int pll0_locklost   : 1;
    unsigned int bod50det        : 1;
    unsigned int bod33det        : 1;
    unsigned int boddet          : 1;
    unsigned int pll1_lock       : 1;
    unsigned int pll0_lock       : 1;
    unsigned int rcosc8mrdy      : 1;
    unsigned int osc32rdy        : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_scif_isr_t;



typedef struct avr32_scif_icr_t {
    unsigned int ae              : 1;
    unsigned int                 :20;
    unsigned int pll1_locklost   : 1;
    unsigned int pll0_locklost   : 1;
    unsigned int bod50det        : 1;
    unsigned int bod33det        : 1;
    unsigned int boddet          : 1;
    unsigned int pll1_lock       : 1;
    unsigned int pll0_lock       : 1;
    unsigned int rcosc8mrdy      : 1;
    unsigned int osc32rdy        : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_scif_icr_t;



typedef struct avr32_scif_pclksr_t {
    unsigned int ae              : 1;
    unsigned int                 :20;
    unsigned int pll1_locklost   : 1;
    unsigned int pll0_locklost   : 1;
    unsigned int bod50det        : 1;
    unsigned int bod33det        : 1;
    unsigned int boddet          : 1;
    unsigned int pll1_lock       : 1;
    unsigned int pll0_lock       : 1;
    unsigned int rcosc8mrdy      : 1;
    unsigned int osc32rdy        : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_scif_pclksr_t;



typedef struct avr32_scif_unlock_t {
    unsigned int key             : 8;
    unsigned int                 : 8;
    unsigned int addr            :16;
} avr32_scif_unlock_t;



typedef struct avr32_scif_pll_t {
    unsigned int plltest         : 1;
    unsigned int plliotesten     : 1;
    unsigned int pllcount        : 6;
    unsigned int                 : 4;
    unsigned int pllmul          : 4;
    unsigned int                 : 4;
    unsigned int plldiv          : 4;
    unsigned int pllbpl          : 1;
    unsigned int                 : 1;
    unsigned int pllopt          : 3;
    unsigned int pllosc          : 2;
    unsigned int pllen           : 1;
} avr32_scif_pll_t;



typedef struct avr32_scif_oscctrl_t {
    unsigned int                 :15;
    unsigned int oscen           : 1;
    unsigned int                 : 4;
    unsigned int startup         : 4;
    unsigned int                 : 4;
    unsigned int agc             : 1;
    unsigned int gain            : 2;
    unsigned int mode            : 1;
} avr32_scif_oscctrl_t;



typedef struct avr32_scif_bod_t {
    unsigned int sfv             : 1;
    unsigned int                 :14;
    unsigned int fcd             : 1;
    unsigned int                 : 6;
    unsigned int ctrl            : 2;
    unsigned int                 : 1;
    unsigned int hyst            : 1;
    unsigned int level           : 6;
} avr32_scif_bod_t;



typedef struct avr32_scif_bgcr_t {
    unsigned int sfv             : 1;
    unsigned int                 :14;
    unsigned int fcd             : 1;
    unsigned int                 :13;
    unsigned int calib           : 3;
} avr32_scif_bgcr_t;



typedef struct avr32_scif_bod33_t {
    unsigned int sfv             : 1;
    unsigned int                 :14;
    unsigned int fcd             : 1;
    unsigned int                 : 6;
    unsigned int ctrl            : 2;
    unsigned int                 : 1;
    unsigned int hyst            : 1;
    unsigned int level           : 6;
} avr32_scif_bod33_t;



typedef struct avr32_scif_bod50_t {
    unsigned int sfv             : 1;
    unsigned int                 :22;
    unsigned int ctrl            : 1;
    unsigned int                 : 1;
    unsigned int hyst            : 1;
    unsigned int level           : 6;
} avr32_scif_bod50_t;



typedef struct avr32_scif_vregcr_t {
    unsigned int sfv             : 1;
    unsigned int                 :14;
    unsigned int fcd             : 1;
    unsigned int                 : 5;
    unsigned int sleepcalib      : 3;
    unsigned int                 : 5;
    unsigned int calib           : 3;
} avr32_scif_vregcr_t;



typedef struct avr32_scif_vregctrl_t {
    unsigned int sfv             : 1;
    unsigned int                 :21;
    unsigned int dmd             : 1;
    unsigned int                 : 5;
    unsigned int vreg33ctl       : 2;
    unsigned int vreg18ctl       : 2;
} avr32_scif_vregctrl_t;



typedef struct avr32_scif_rccr_t {
    unsigned int                 :15;
    unsigned int fcd             : 1;
    unsigned int                 : 6;
    unsigned int calib           :10;
} avr32_scif_rccr_t;



typedef struct avr32_scif_rccr8_t {
    unsigned int                 : 6;
    unsigned int freqmode        : 1;
    unsigned int rcosc8_en       : 1;
    unsigned int                 : 7;
    unsigned int fcd             : 1;
    unsigned int                 : 8;
    unsigned int calib           : 8;
} avr32_scif_rccr8_t;



typedef struct avr32_scif_oscctrl32_t {
    unsigned int                 :13;
    unsigned int startup         : 3;
    unsigned int                 : 6;
    unsigned int mode            : 2;
    unsigned int                 : 7;
    unsigned int osc32en         : 1;
} avr32_scif_oscctrl32_t;



typedef struct avr32_scif_tsens_t {
    unsigned int                 :31;
    unsigned int en              : 1;
} avr32_scif_tsens_t;



typedef struct avr32_scif_criposc_t {
    unsigned int sfv             : 1;
    unsigned int                 :14;
    unsigned int fcd             : 1;
    unsigned int                 : 3;
    unsigned int sel             : 5;
    unsigned int                 : 6;
    unsigned int divby2          : 1;
    unsigned int en              : 1;
} avr32_scif_criposc_t;



typedef struct avr32_scif_rc120mcr_t {
    unsigned int                 :31;
    unsigned int en              : 1;
} avr32_scif_rc120mcr_t;



typedef struct avr32_scif_gcctrl_t {
    unsigned int                 : 8;
    unsigned int div             : 8;
    unsigned int                 : 4;
    unsigned int oscsel          : 4;
    unsigned int                 : 6;
    unsigned int diven           : 1;
    unsigned int cen             : 1;
} avr32_scif_gcctrl_t;



typedef struct avr32_scif_t {
  union {
          unsigned long                  ier       ;//0x0000
          avr32_scif_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0004
          avr32_scif_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0008
    const avr32_scif_imr_t               IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x000c
    const avr32_scif_isr_t               ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0010
          avr32_scif_icr_t               ICR       ;
  };
  union {
    const unsigned long                  pclksr    ;//0x0014
    const avr32_scif_pclksr_t            PCLKSR    ;
  };
  union {
          unsigned long                  unlock    ;//0x0018
          avr32_scif_unlock_t            UNLOCK    ;
  };
  union {
          unsigned long                  pll       [2];//0x001c
          avr32_scif_pll_t               PLL       [2];
  };
  union {
          unsigned long                  oscctrl   [2];//0x0024
          avr32_scif_oscctrl_t           OSCCTRL   [2];
  };
  union {
          unsigned long                  bod       ;//0x002c
          avr32_scif_bod_t               BOD       ;
  };
  union {
          unsigned long                  bgcr      ;//0x0030
          avr32_scif_bgcr_t              BGCR      ;
  };
  union {
          unsigned long                  bod33     ;//0x0034
          avr32_scif_bod33_t             BOD33     ;
  };
  union {
          unsigned long                  bod50     ;//0x0038
          avr32_scif_bod50_t             BOD50     ;
  };
  union {
          unsigned long                  vregcr    ;//0x003c
          avr32_scif_vregcr_t            VREGCR    ;
  };
  union {
          unsigned long                  vregctrl  ;//0x0040
          avr32_scif_vregctrl_t          VREGCTRL  ;
  };
  union {
          unsigned long                  rccr      ;//0x0044
          avr32_scif_rccr_t              RCCR      ;
  };
  union {
          unsigned long                  rccr8     ;//0x0048
          avr32_scif_rccr8_t             RCCR8     ;
  };
  union {
          unsigned long                  oscctrl32 ;//0x004c
          avr32_scif_oscctrl32_t         OSCCTRL32 ;
  };
  union {
          unsigned long                  tsens     ;//0x0050
          avr32_scif_tsens_t             TSENS     ;
  };
  union {
          unsigned long                  criposc   ;//0x0054
          avr32_scif_criposc_t           CRIPOSC   ;
  };
  union {
          unsigned long                  rc120mcr  ;//0x0058
          avr32_scif_rc120mcr_t          RC120MCR  ;
  };
          unsigned long                  gplp      [2];//0x005c
  union {
          unsigned long                  gcctrl    [11];//0x0064
          avr32_scif_gcctrl_t            GCCTRL    [11];
  };
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
    const unsigned long                  pllversion;//0x03c8
    const unsigned long                  oscversion;//0x03cc
    const unsigned long                  bodversion;//0x03d0
    const unsigned long                  bodbversion;//0x03d4
    const unsigned long                  vregversion;//0x03d8
    const unsigned long                  rccrversion;//0x03dc
    const unsigned long                  rccr8version;//0x03e0
    const unsigned long                  osc32version;//0x03e4
    const unsigned long                  tsensversion;//0x03e8
    const unsigned long                  criposcversion;//0x03ec
    const unsigned long                  rc120mversion;//0x03f0
    const unsigned long                  gplpversion;//0x03f4
    const unsigned long                  gclkversion;//0x03f8
    const unsigned long                  version   ;//0x03fc
} avr32_scif_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_SCIF_1021_H_INCLUDED*/
#endif

