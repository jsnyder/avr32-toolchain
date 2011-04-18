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
#ifndef AVR32_PM_300_H_INCLUDED
#define AVR32_PM_300_H_INCLUDED

#define AVR32_PM_H_VERSION 300

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_PM_<register>
 - Bitfield mask:   AVR32_PM_<register>_<bitfield>
 - Bitfield offset: AVR32_PM_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PM_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_PM_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_PM_<bitfield>
 - Bitfield offset: AVR32_PM_<bitfield>_OFFSET
 - Bitfield size:   AVR32_PM_<bitfield>_SIZE
 - Bitfield values: AVR32_PM_<bitfield>_<value name>
 - Bitfield values: AVR32_PM_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_PM_0_RCOSC                                  0x00000000
#define AVR32_PM_131072_RCOSC                             0x00000005
#define AVR32_PM_2048_RCOSC                               0x00000003
#define AVR32_PM_262144_RCOSC                             0x00000006
#define AVR32_PM_4096_RCOSC                               0x00000004
#define AVR32_PM_524288_RCOSC                             0x00000007
#define AVR32_PM_64_RCOSC                                 0x00000001
#define AVR32_PM_65536_RCOSC                              0x00000004
#define AVR32_PM_AWEN                                     0x00000188
#define AVR32_PM_AWEN_MASK                                0x00000000
#define AVR32_PM_AWEN_RESETVALUE                          0x00000000
#define AVR32_PM_BGCR                                     0x00000144
#define AVR32_PM_BGCR_CALIB                                        0
#define AVR32_PM_BGCR_CALIB_MASK                          0x00000007
#define AVR32_PM_BGCR_CALIB_OFFSET                                 0
#define AVR32_PM_BGCR_CALIB_SIZE                                   3
#define AVR32_PM_BGCR_FCD                                         16
#define AVR32_PM_BGCR_FCD_MASK                            0x00010000
#define AVR32_PM_BGCR_FCD_OFFSET                                  16
#define AVR32_PM_BGCR_FCD_SIZE                                     1
#define AVR32_PM_BGCR_KEY                                         24
#define AVR32_PM_BGCR_KEY_MASK                            0xff000000
#define AVR32_PM_BGCR_KEY_OFFSET                                  24
#define AVR32_PM_BGCR_KEY_SIZE                                     8
#define AVR32_PM_BGCR_MASK                                0xff010007
#define AVR32_PM_BGCR_RESETVALUE                          0x00000000
#define AVR32_PM_BOD                                      0x0000014c
#define AVR32_PM_BODDET                                           27
#define AVR32_PM_BODDET_MASK                              0x08000000
#define AVR32_PM_BODDET_OFFSET                                    27
#define AVR32_PM_BODDET_SIZE                                       1
#define AVR32_PM_BOD_CTRL                                          8
#define AVR32_PM_BOD_CTRL_ENABLED                         0x00000001
#define AVR32_PM_BOD_CTRL_ENABLED_NORESET                 0x00000002
#define AVR32_PM_BOD_CTRL_MASK                            0x00000300
#define AVR32_PM_BOD_CTRL_OFF1                            0x00000000
#define AVR32_PM_BOD_CTRL_OFF2                            0x00000003
#define AVR32_PM_BOD_CTRL_OFFSET                                   8
#define AVR32_PM_BOD_CTRL_SIZE                                     2
#define AVR32_PM_BOD_FCD                                          16
#define AVR32_PM_BOD_FCD_MASK                             0x00010000
#define AVR32_PM_BOD_FCD_OFFSET                                   16
#define AVR32_PM_BOD_FCD_SIZE                                      1
#define AVR32_PM_BOD_HYST                                          6
#define AVR32_PM_BOD_HYST_MASK                            0x00000040
#define AVR32_PM_BOD_HYST_OFFSET                                   6
#define AVR32_PM_BOD_HYST_SIZE                                     1
#define AVR32_PM_BOD_KEY                                          24
#define AVR32_PM_BOD_KEY_MASK                             0xff000000
#define AVR32_PM_BOD_KEY_OFFSET                                   24
#define AVR32_PM_BOD_KEY_SIZE                                      8
#define AVR32_PM_BOD_LEVEL                                         0
#define AVR32_PM_BOD_LEVEL_MASK                           0x0000003f
#define AVR32_PM_BOD_LEVEL_OFFSET                                  0
#define AVR32_PM_BOD_LEVEL_SIZE                                    6
#define AVR32_PM_BOD_MASK                                 0xff01037f
#define AVR32_PM_BOD_OFFSET                                        1
#define AVR32_PM_BOD_RESETVALUE                           0x00000000
#define AVR32_PM_BOD_SIZE                                          1
#define AVR32_PM_CALIB                                             0
#define AVR32_PM_CALIB_OFFSET                                      0
#define AVR32_PM_CEN                                               0
#define AVR32_PM_CEN_MASK                                 0x00000001
#define AVR32_PM_CEN_OFFSET                                        0
#define AVR32_PM_CEN_SIZE                                          1
#define AVR32_PM_CKRDY                                            24
#define AVR32_PM_CKRDY_MASK                               0x01000000
#define AVR32_PM_CKRDY_OFFSET                                     24
#define AVR32_PM_CKRDY_SIZE                                        1
#define AVR32_PM_CKSEL                                    0x00000004
#define AVR32_PM_CKSEL_CPUDIV                                      7
#define AVR32_PM_CKSEL_CPUDIV_MASK                        0x00000080
#define AVR32_PM_CKSEL_CPUDIV_OFFSET                               7
#define AVR32_PM_CKSEL_CPUDIV_SIZE                                 1
#define AVR32_PM_CKSEL_CPUSEL                                      0
#define AVR32_PM_CKSEL_CPUSEL_MASK                        0x00000007
#define AVR32_PM_CKSEL_CPUSEL_OFFSET                               0
#define AVR32_PM_CKSEL_CPUSEL_SIZE                                 3
#define AVR32_PM_CKSEL_HSBDIV                                     15
#define AVR32_PM_CKSEL_HSBDIV_MASK                        0x00008000
#define AVR32_PM_CKSEL_HSBDIV_OFFSET                              15
#define AVR32_PM_CKSEL_HSBDIV_SIZE                                 1
#define AVR32_PM_CKSEL_HSBSEL                                      8
#define AVR32_PM_CKSEL_HSBSEL_MASK                        0x00000700
#define AVR32_PM_CKSEL_HSBSEL_OFFSET                               8
#define AVR32_PM_CKSEL_HSBSEL_SIZE                                 3
#define AVR32_PM_CKSEL_MASK                               0x87878787
#define AVR32_PM_CKSEL_PBADIV                                     23
#define AVR32_PM_CKSEL_PBADIV_MASK                        0x00800000
#define AVR32_PM_CKSEL_PBADIV_OFFSET                              23
#define AVR32_PM_CKSEL_PBADIV_SIZE                                 1
#define AVR32_PM_CKSEL_PBASEL                                     16
#define AVR32_PM_CKSEL_PBASEL_MASK                        0x00070000
#define AVR32_PM_CKSEL_PBASEL_OFFSET                              16
#define AVR32_PM_CKSEL_PBASEL_SIZE                                 3
#define AVR32_PM_CKSEL_PBBDIV                                     31
#define AVR32_PM_CKSEL_PBBDIV_MASK                        0x80000000
#define AVR32_PM_CKSEL_PBBDIV_OFFSET                              31
#define AVR32_PM_CKSEL_PBBDIV_SIZE                                 1
#define AVR32_PM_CKSEL_PBBSEL                                     24
#define AVR32_PM_CKSEL_PBBSEL_MASK                        0x07000000
#define AVR32_PM_CKSEL_PBBSEL_OFFSET                              24
#define AVR32_PM_CKSEL_PBBSEL_SIZE                                 3
#define AVR32_PM_CKSEL_RESETVALUE                         0x00000000
#define AVR32_PM_CLK32                                    0x00000001
#define AVR32_PM_CPUDIV                                            7
#define AVR32_PM_CPUDIV_MASK                              0x00000080
#define AVR32_PM_CPUDIV_OFFSET                                     7
#define AVR32_PM_CPUDIV_SIZE                                       1
#define AVR32_PM_CPUERR                                            7
#define AVR32_PM_CPUERR_MASK                              0x00000080
#define AVR32_PM_CPUERR_OFFSET                                     7
#define AVR32_PM_CPUERR_SIZE                                       1
#define AVR32_PM_CPUMASK                                  0x00000008
#define AVR32_PM_CPUMASK_MASK                             0x00010000
#define AVR32_PM_CPUMASK_RESETVALUE                       0x00000000
#define AVR32_PM_CPUMASK_SYSTIMER                                 16
#define AVR32_PM_CPUMASK_SYSTIMER_MASK                    0x00010000
#define AVR32_PM_CPUMASK_SYSTIMER_OFFSET                          16
#define AVR32_PM_CPUMASK_SYSTIMER_SIZE                             1
#define AVR32_PM_CPUSEL                                            0
#define AVR32_PM_CPUSEL_MASK                              0x00000007
#define AVR32_PM_CPUSEL_OFFSET                                     0
#define AVR32_PM_CPUSEL_SIZE                                       3
#define AVR32_PM_CRIPEL                                           24
#define AVR32_PM_CRIPEL_MASK                              0x01000000
#define AVR32_PM_CRIPEL_OFFSET                                    24
#define AVR32_PM_CRIPEL_SIZE                                       1
#define AVR32_PM_CRYSTAL_ACG                              0x00000001
#define AVR32_PM_CRYSTAL_G0                               0x00000004
#define AVR32_PM_CRYSTAL_G1                               0x00000005
#define AVR32_PM_CRYSTAL_G2                               0x00000006
#define AVR32_PM_CRYSTAL_G3                               0x00000007
#define AVR32_PM_CTRL                                              8
#define AVR32_PM_CTRL_ENABLED                             0x00000001
#define AVR32_PM_CTRL_ENABLED_NORESET                     0x00000002
#define AVR32_PM_CTRL_MASK                                0x00000300
#define AVR32_PM_CTRL_OFF1                                0x00000000
#define AVR32_PM_CTRL_OFF2                                0x00000003
#define AVR32_PM_CTRL_OFFSET                                       8
#define AVR32_PM_CTRL_SIZE                                         2
#define AVR32_PM_DIV                                              16
#define AVR32_PM_DIVEN                                             1
#define AVR32_PM_DIVEN_MASK                               0x00000002
#define AVR32_PM_DIVEN_OFFSET                                      1
#define AVR32_PM_DIVEN_SIZE                                        1
#define AVR32_PM_DIV_MASK                                 0x00ff0000
#define AVR32_PM_DIV_OFFSET                                       16
#define AVR32_PM_DIV_SIZE                                          8
#define AVR32_PM_EBI_VOLT                                          0
#define AVR32_PM_EBI_VOLT_MASK                            0x00000001
#define AVR32_PM_EBI_VOLT_OFFSET                                   0
#define AVR32_PM_EBI_VOLT_SIZE                                     1
#define AVR32_PM_EIC                                              16
#define AVR32_PM_EIC_MASK                                 0x00010000
#define AVR32_PM_EIC_OFFSET                                       16
#define AVR32_PM_EIC_SIZE                                          1
#define AVR32_PM_ENABLED                                  0x00000001
#define AVR32_PM_ENABLED_NORESET                          0x00000002
#define AVR32_PM_EXT                                               2
#define AVR32_PM_EXT_CLOCK                                0x00000000
#define AVR32_PM_EXT_MASK                                 0x00000004
#define AVR32_PM_EXT_OFFSET                                        2
#define AVR32_PM_EXT_SIZE                                          1
#define AVR32_PM_FCD                                              16
#define AVR32_PM_FCD_MASK                                 0x00010000
#define AVR32_PM_FCD_OFFSET                                       16
#define AVR32_PM_FCD_SIZE                                          1
#define AVR32_PM_GCCTRL                                   0x00000100
#define AVR32_PM_GCCTRL_CEN                                        0
#define AVR32_PM_GCCTRL_CEN_MASK                          0x00000001
#define AVR32_PM_GCCTRL_CEN_OFFSET                                 0
#define AVR32_PM_GCCTRL_CEN_SIZE                                   1
#define AVR32_PM_GCCTRL_DIV                                       16
#define AVR32_PM_GCCTRL_DIVEN                                      1
#define AVR32_PM_GCCTRL_DIVEN_MASK                        0x00000002
#define AVR32_PM_GCCTRL_DIVEN_OFFSET                               1
#define AVR32_PM_GCCTRL_DIVEN_SIZE                                 1
#define AVR32_PM_GCCTRL_DIV_MASK                          0x00ff0000
#define AVR32_PM_GCCTRL_DIV_OFFSET                                16
#define AVR32_PM_GCCTRL_DIV_SIZE                                   8
#define AVR32_PM_GCCTRL_MASK                              0x00ff0f03
#define AVR32_PM_GCCTRL_OSCSEL                                     8
#define AVR32_PM_GCCTRL_OSCSEL_CLK32                      0x00000001
#define AVR32_PM_GCCTRL_OSCSEL_MASK                       0x00000f00
#define AVR32_PM_GCCTRL_OSCSEL_OFFSET                              8
#define AVR32_PM_GCCTRL_OSCSEL_OSC0                       0x00000002
#define AVR32_PM_GCCTRL_OSCSEL_OSC1                       0x00000003
#define AVR32_PM_GCCTRL_OSCSEL_PLL0                       0x00000004
#define AVR32_PM_GCCTRL_OSCSEL_PLL1                       0x00000005
#define AVR32_PM_GCCTRL_OSCSEL_SIZE                                4
#define AVR32_PM_GCCTRL_OSCSEL_SLOW                       0x00000000
#define AVR32_PM_GCCTRL_RESETVALUE                        0x00000000
#define AVR32_PM_GPLP                                     0x000001c0
#define AVR32_PM_GPLP_MASK                                0x00000000
#define AVR32_PM_GPLP_RESETVALUE                          0x00000000
#define AVR32_PM_HSBDIV                                           15
#define AVR32_PM_HSBDIV_MASK                              0x00008000
#define AVR32_PM_HSBDIV_OFFSET                                    15
#define AVR32_PM_HSBDIV_SIZE                                       1
#define AVR32_PM_HSBMASK                                  0x0000000c
#define AVR32_PM_HSBMASK_MASK                             0x00000000
#define AVR32_PM_HSBMASK_RESETVALUE                       0x00000000
#define AVR32_PM_HSBSEL                                            8
#define AVR32_PM_HSBSEL_MASK                              0x00000700
#define AVR32_PM_HSBSEL_OFFSET                                     8
#define AVR32_PM_HSBSEL_SIZE                                       3
#define AVR32_PM_HYST                                              6
#define AVR32_PM_HYST_MASK                                0x00000040
#define AVR32_PM_HYST_OFFSET                                       6
#define AVR32_PM_HYST_SIZE                                         1
#define AVR32_PM_ICR                                      0x000000d0
#define AVR32_PM_ICR_BODDET                                       27
#define AVR32_PM_ICR_BODDET_MASK                          0x08000000
#define AVR32_PM_ICR_BODDET_OFFSET                                27
#define AVR32_PM_ICR_BODDET_SIZE                                   1
#define AVR32_PM_ICR_CKRDY                                        24
#define AVR32_PM_ICR_CKRDY_MASK                           0x01000000
#define AVR32_PM_ICR_CKRDY_OFFSET                                 24
#define AVR32_PM_ICR_CKRDY_SIZE                                    1
#define AVR32_PM_ICR_LOCK0                                         8
#define AVR32_PM_ICR_LOCK0LOST                                    16
#define AVR32_PM_ICR_LOCK0LOST_MASK                       0x00010000
#define AVR32_PM_ICR_LOCK0LOST_OFFSET                             16
#define AVR32_PM_ICR_LOCK0LOST_SIZE                                1
#define AVR32_PM_ICR_LOCK0_MASK                           0x00000100
#define AVR32_PM_ICR_LOCK0_OFFSET                                  8
#define AVR32_PM_ICR_LOCK0_SIZE                                    1
#define AVR32_PM_ICR_LOCK1                                         9
#define AVR32_PM_ICR_LOCK1LOST                                    17
#define AVR32_PM_ICR_LOCK1LOST_MASK                       0x00020000
#define AVR32_PM_ICR_LOCK1LOST_OFFSET                             17
#define AVR32_PM_ICR_LOCK1LOST_SIZE                                1
#define AVR32_PM_ICR_LOCK1_MASK                           0x00000200
#define AVR32_PM_ICR_LOCK1_OFFSET                                  9
#define AVR32_PM_ICR_LOCK1_SIZE                                    1
#define AVR32_PM_ICR_LOCK2                                        10
#define AVR32_PM_ICR_LOCK2LOST                                    18
#define AVR32_PM_ICR_LOCK2LOST_MASK                       0x00040000
#define AVR32_PM_ICR_LOCK2LOST_OFFSET                             18
#define AVR32_PM_ICR_LOCK2LOST_SIZE                                1
#define AVR32_PM_ICR_LOCK2_MASK                           0x00000400
#define AVR32_PM_ICR_LOCK2_OFFSET                                 10
#define AVR32_PM_ICR_LOCK2_SIZE                                    1
#define AVR32_PM_ICR_MASK                                 0x1f070787
#define AVR32_PM_ICR_MSKRDY                                       25
#define AVR32_PM_ICR_MSKRDY_MASK                          0x02000000
#define AVR32_PM_ICR_MSKRDY_OFFSET                                25
#define AVR32_PM_ICR_MSKRDY_SIZE                                   1
#define AVR32_PM_ICR_OSC0RDY                                       0
#define AVR32_PM_ICR_OSC0RDY_MASK                         0x00000001
#define AVR32_PM_ICR_OSC0RDY_OFFSET                                0
#define AVR32_PM_ICR_OSC0RDY_SIZE                                  1
#define AVR32_PM_ICR_OSC1RDY                                       1
#define AVR32_PM_ICR_OSC1RDY_MASK                         0x00000002
#define AVR32_PM_ICR_OSC1RDY_OFFSET                                1
#define AVR32_PM_ICR_OSC1RDY_SIZE                                  1
#define AVR32_PM_ICR_OSC2RDY                                       2
#define AVR32_PM_ICR_OSC2RDY_MASK                         0x00000004
#define AVR32_PM_ICR_OSC2RDY_OFFSET                                2
#define AVR32_PM_ICR_OSC2RDY_SIZE                                  1
#define AVR32_PM_ICR_OSC32RDY                                      7
#define AVR32_PM_ICR_OSC32RDY_MASK                        0x00000080
#define AVR32_PM_ICR_OSC32RDY_OFFSET                               7
#define AVR32_PM_ICR_OSC32RDY_SIZE                                 1
#define AVR32_PM_ICR_PERRDY                                       28
#define AVR32_PM_ICR_PERRDY_MASK                          0x10000000
#define AVR32_PM_ICR_PERRDY_OFFSET                                28
#define AVR32_PM_ICR_PERRDY_SIZE                                   1
#define AVR32_PM_ICR_RESETVALUE                           0x00000000
#define AVR32_PM_ICR_WAKE                                         26
#define AVR32_PM_ICR_WAKE_MASK                            0x04000000
#define AVR32_PM_ICR_WAKE_OFFSET                                  26
#define AVR32_PM_ICR_WAKE_SIZE                                     1
#define AVR32_PM_IDR                                      0x000000c4
#define AVR32_PM_IDR_BODDET                                       27
#define AVR32_PM_IDR_BODDET_MASK                          0x08000000
#define AVR32_PM_IDR_BODDET_OFFSET                                27
#define AVR32_PM_IDR_BODDET_SIZE                                   1
#define AVR32_PM_IDR_CKRDY                                        24
#define AVR32_PM_IDR_CKRDY_MASK                           0x01000000
#define AVR32_PM_IDR_CKRDY_OFFSET                                 24
#define AVR32_PM_IDR_CKRDY_SIZE                                    1
#define AVR32_PM_IDR_LOCK0                                         8
#define AVR32_PM_IDR_LOCK0LOST                                    16
#define AVR32_PM_IDR_LOCK0LOST_MASK                       0x00010000
#define AVR32_PM_IDR_LOCK0LOST_OFFSET                             16
#define AVR32_PM_IDR_LOCK0LOST_SIZE                                1
#define AVR32_PM_IDR_LOCK0_MASK                           0x00000100
#define AVR32_PM_IDR_LOCK0_OFFSET                                  8
#define AVR32_PM_IDR_LOCK0_SIZE                                    1
#define AVR32_PM_IDR_LOCK1                                         9
#define AVR32_PM_IDR_LOCK1LOST                                    17
#define AVR32_PM_IDR_LOCK1LOST_MASK                       0x00020000
#define AVR32_PM_IDR_LOCK1LOST_OFFSET                             17
#define AVR32_PM_IDR_LOCK1LOST_SIZE                                1
#define AVR32_PM_IDR_LOCK1_MASK                           0x00000200
#define AVR32_PM_IDR_LOCK1_OFFSET                                  9
#define AVR32_PM_IDR_LOCK1_SIZE                                    1
#define AVR32_PM_IDR_LOCK2                                        10
#define AVR32_PM_IDR_LOCK2LOST                                    18
#define AVR32_PM_IDR_LOCK2LOST_MASK                       0x00040000
#define AVR32_PM_IDR_LOCK2LOST_OFFSET                             18
#define AVR32_PM_IDR_LOCK2LOST_SIZE                                1
#define AVR32_PM_IDR_LOCK2_MASK                           0x00000400
#define AVR32_PM_IDR_LOCK2_OFFSET                                 10
#define AVR32_PM_IDR_LOCK2_SIZE                                    1
#define AVR32_PM_IDR_MASK                                 0x1f070787
#define AVR32_PM_IDR_MSKRDY                                       25
#define AVR32_PM_IDR_MSKRDY_MASK                          0x02000000
#define AVR32_PM_IDR_MSKRDY_OFFSET                                25
#define AVR32_PM_IDR_MSKRDY_SIZE                                   1
#define AVR32_PM_IDR_OSC0RDY                                       0
#define AVR32_PM_IDR_OSC0RDY_MASK                         0x00000001
#define AVR32_PM_IDR_OSC0RDY_OFFSET                                0
#define AVR32_PM_IDR_OSC0RDY_SIZE                                  1
#define AVR32_PM_IDR_OSC1RDY                                       1
#define AVR32_PM_IDR_OSC1RDY_MASK                         0x00000002
#define AVR32_PM_IDR_OSC1RDY_OFFSET                                1
#define AVR32_PM_IDR_OSC1RDY_SIZE                                  1
#define AVR32_PM_IDR_OSC2RDY                                       2
#define AVR32_PM_IDR_OSC2RDY_MASK                         0x00000004
#define AVR32_PM_IDR_OSC2RDY_OFFSET                                2
#define AVR32_PM_IDR_OSC2RDY_SIZE                                  1
#define AVR32_PM_IDR_OSC32RDY                                      7
#define AVR32_PM_IDR_OSC32RDY_MASK                        0x00000080
#define AVR32_PM_IDR_OSC32RDY_OFFSET                               7
#define AVR32_PM_IDR_OSC32RDY_SIZE                                 1
#define AVR32_PM_IDR_PERRDY                                       28
#define AVR32_PM_IDR_PERRDY_MASK                          0x10000000
#define AVR32_PM_IDR_PERRDY_OFFSET                                28
#define AVR32_PM_IDR_PERRDY_SIZE                                   1
#define AVR32_PM_IDR_RESETVALUE                           0x00000000
#define AVR32_PM_IDR_WAKE                                         26
#define AVR32_PM_IDR_WAKE_MASK                            0x04000000
#define AVR32_PM_IDR_WAKE_OFFSET                                  26
#define AVR32_PM_IDR_WAKE_SIZE                                     1
#define AVR32_PM_IER                                      0x000000c0
#define AVR32_PM_IER_BODDET                                       27
#define AVR32_PM_IER_BODDET_MASK                          0x08000000
#define AVR32_PM_IER_BODDET_OFFSET                                27
#define AVR32_PM_IER_BODDET_SIZE                                   1
#define AVR32_PM_IER_CKRDY                                        24
#define AVR32_PM_IER_CKRDY_MASK                           0x01000000
#define AVR32_PM_IER_CKRDY_OFFSET                                 24
#define AVR32_PM_IER_CKRDY_SIZE                                    1
#define AVR32_PM_IER_LOCK0                                         8
#define AVR32_PM_IER_LOCK0LOST                                    16
#define AVR32_PM_IER_LOCK0LOST_MASK                       0x00010000
#define AVR32_PM_IER_LOCK0LOST_OFFSET                             16
#define AVR32_PM_IER_LOCK0LOST_SIZE                                1
#define AVR32_PM_IER_LOCK0_MASK                           0x00000100
#define AVR32_PM_IER_LOCK0_OFFSET                                  8
#define AVR32_PM_IER_LOCK0_SIZE                                    1
#define AVR32_PM_IER_LOCK1                                         9
#define AVR32_PM_IER_LOCK1LOST                                    17
#define AVR32_PM_IER_LOCK1LOST_MASK                       0x00020000
#define AVR32_PM_IER_LOCK1LOST_OFFSET                             17
#define AVR32_PM_IER_LOCK1LOST_SIZE                                1
#define AVR32_PM_IER_LOCK1_MASK                           0x00000200
#define AVR32_PM_IER_LOCK1_OFFSET                                  9
#define AVR32_PM_IER_LOCK1_SIZE                                    1
#define AVR32_PM_IER_LOCK2                                        10
#define AVR32_PM_IER_LOCK2LOST                                    18
#define AVR32_PM_IER_LOCK2LOST_MASK                       0x00040000
#define AVR32_PM_IER_LOCK2LOST_OFFSET                             18
#define AVR32_PM_IER_LOCK2LOST_SIZE                                1
#define AVR32_PM_IER_LOCK2_MASK                           0x00000400
#define AVR32_PM_IER_LOCK2_OFFSET                                 10
#define AVR32_PM_IER_LOCK2_SIZE                                    1
#define AVR32_PM_IER_MASK                                 0x1f070787
#define AVR32_PM_IER_MSKRDY                                       25
#define AVR32_PM_IER_MSKRDY_MASK                          0x02000000
#define AVR32_PM_IER_MSKRDY_OFFSET                                25
#define AVR32_PM_IER_MSKRDY_SIZE                                   1
#define AVR32_PM_IER_OSC0RDY                                       0
#define AVR32_PM_IER_OSC0RDY_MASK                         0x00000001
#define AVR32_PM_IER_OSC0RDY_OFFSET                                0
#define AVR32_PM_IER_OSC0RDY_SIZE                                  1
#define AVR32_PM_IER_OSC1RDY                                       1
#define AVR32_PM_IER_OSC1RDY_MASK                         0x00000002
#define AVR32_PM_IER_OSC1RDY_OFFSET                                1
#define AVR32_PM_IER_OSC1RDY_SIZE                                  1
#define AVR32_PM_IER_OSC2RDY                                       2
#define AVR32_PM_IER_OSC2RDY_MASK                         0x00000004
#define AVR32_PM_IER_OSC2RDY_OFFSET                                2
#define AVR32_PM_IER_OSC2RDY_SIZE                                  1
#define AVR32_PM_IER_OSC32RDY                                      7
#define AVR32_PM_IER_OSC32RDY_MASK                        0x00000080
#define AVR32_PM_IER_OSC32RDY_OFFSET                               7
#define AVR32_PM_IER_OSC32RDY_SIZE                                 1
#define AVR32_PM_IER_PERRDY                                       28
#define AVR32_PM_IER_PERRDY_MASK                          0x10000000
#define AVR32_PM_IER_PERRDY_OFFSET                                28
#define AVR32_PM_IER_PERRDY_SIZE                                   1
#define AVR32_PM_IER_RESETVALUE                           0x00000000
#define AVR32_PM_IER_WAKE                                         26
#define AVR32_PM_IER_WAKE_MASK                            0x04000000
#define AVR32_PM_IER_WAKE_OFFSET                                  26
#define AVR32_PM_IER_WAKE_SIZE                                     1
#define AVR32_PM_IMR                                      0x000000c8
#define AVR32_PM_IMR_BODDET                                       27
#define AVR32_PM_IMR_BODDET_MASK                          0x08000000
#define AVR32_PM_IMR_BODDET_OFFSET                                27
#define AVR32_PM_IMR_BODDET_SIZE                                   1
#define AVR32_PM_IMR_CKRDY                                        24
#define AVR32_PM_IMR_CKRDY_MASK                           0x01000000
#define AVR32_PM_IMR_CKRDY_OFFSET                                 24
#define AVR32_PM_IMR_CKRDY_SIZE                                    1
#define AVR32_PM_IMR_LOCK0                                         8
#define AVR32_PM_IMR_LOCK0LOST                                    16
#define AVR32_PM_IMR_LOCK0LOST_MASK                       0x00010000
#define AVR32_PM_IMR_LOCK0LOST_OFFSET                             16
#define AVR32_PM_IMR_LOCK0LOST_SIZE                                1
#define AVR32_PM_IMR_LOCK0_MASK                           0x00000100
#define AVR32_PM_IMR_LOCK0_OFFSET                                  8
#define AVR32_PM_IMR_LOCK0_SIZE                                    1
#define AVR32_PM_IMR_LOCK1                                         9
#define AVR32_PM_IMR_LOCK1LOST                                    17
#define AVR32_PM_IMR_LOCK1LOST_MASK                       0x00020000
#define AVR32_PM_IMR_LOCK1LOST_OFFSET                             17
#define AVR32_PM_IMR_LOCK1LOST_SIZE                                1
#define AVR32_PM_IMR_LOCK1_MASK                           0x00000200
#define AVR32_PM_IMR_LOCK1_OFFSET                                  9
#define AVR32_PM_IMR_LOCK1_SIZE                                    1
#define AVR32_PM_IMR_LOCK2                                        10
#define AVR32_PM_IMR_LOCK2LOST                                    18
#define AVR32_PM_IMR_LOCK2LOST_MASK                       0x00040000
#define AVR32_PM_IMR_LOCK2LOST_OFFSET                             18
#define AVR32_PM_IMR_LOCK2LOST_SIZE                                1
#define AVR32_PM_IMR_LOCK2_MASK                           0x00000400
#define AVR32_PM_IMR_LOCK2_OFFSET                                 10
#define AVR32_PM_IMR_LOCK2_SIZE                                    1
#define AVR32_PM_IMR_MASK                                 0x1f070787
#define AVR32_PM_IMR_MSKRDY                                       25
#define AVR32_PM_IMR_MSKRDY_MASK                          0x02000000
#define AVR32_PM_IMR_MSKRDY_OFFSET                                25
#define AVR32_PM_IMR_MSKRDY_SIZE                                   1
#define AVR32_PM_IMR_OSC0RDY                                       0
#define AVR32_PM_IMR_OSC0RDY_MASK                         0x00000001
#define AVR32_PM_IMR_OSC0RDY_OFFSET                                0
#define AVR32_PM_IMR_OSC0RDY_SIZE                                  1
#define AVR32_PM_IMR_OSC1RDY                                       1
#define AVR32_PM_IMR_OSC1RDY_MASK                         0x00000002
#define AVR32_PM_IMR_OSC1RDY_OFFSET                                1
#define AVR32_PM_IMR_OSC1RDY_SIZE                                  1
#define AVR32_PM_IMR_OSC2RDY                                       2
#define AVR32_PM_IMR_OSC2RDY_MASK                         0x00000004
#define AVR32_PM_IMR_OSC2RDY_OFFSET                                2
#define AVR32_PM_IMR_OSC2RDY_SIZE                                  1
#define AVR32_PM_IMR_OSC32RDY                                      7
#define AVR32_PM_IMR_OSC32RDY_MASK                        0x00000080
#define AVR32_PM_IMR_OSC32RDY_OFFSET                               7
#define AVR32_PM_IMR_OSC32RDY_SIZE                                 1
#define AVR32_PM_IMR_PERRDY                                       28
#define AVR32_PM_IMR_PERRDY_MASK                          0x10000000
#define AVR32_PM_IMR_PERRDY_OFFSET                                28
#define AVR32_PM_IMR_PERRDY_SIZE                                   1
#define AVR32_PM_IMR_RESETVALUE                           0x00000000
#define AVR32_PM_IMR_WAKE                                         26
#define AVR32_PM_IMR_WAKE_MASK                            0x04000000
#define AVR32_PM_IMR_WAKE_OFFSET                                  26
#define AVR32_PM_IMR_WAKE_SIZE                                     1
#define AVR32_PM_ISR                                      0x000000cc
#define AVR32_PM_ISR_BODDET                                       27
#define AVR32_PM_ISR_BODDET_MASK                          0x08000000
#define AVR32_PM_ISR_BODDET_OFFSET                                27
#define AVR32_PM_ISR_BODDET_SIZE                                   1
#define AVR32_PM_ISR_CKRDY                                        24
#define AVR32_PM_ISR_CKRDY_MASK                           0x01000000
#define AVR32_PM_ISR_CKRDY_OFFSET                                 24
#define AVR32_PM_ISR_CKRDY_SIZE                                    1
#define AVR32_PM_ISR_LOCK0                                         8
#define AVR32_PM_ISR_LOCK0LOST                                    16
#define AVR32_PM_ISR_LOCK0LOST_MASK                       0x00010000
#define AVR32_PM_ISR_LOCK0LOST_OFFSET                             16
#define AVR32_PM_ISR_LOCK0LOST_SIZE                                1
#define AVR32_PM_ISR_LOCK0_MASK                           0x00000100
#define AVR32_PM_ISR_LOCK0_OFFSET                                  8
#define AVR32_PM_ISR_LOCK0_SIZE                                    1
#define AVR32_PM_ISR_LOCK1                                         9
#define AVR32_PM_ISR_LOCK1LOST                                    17
#define AVR32_PM_ISR_LOCK1LOST_MASK                       0x00020000
#define AVR32_PM_ISR_LOCK1LOST_OFFSET                             17
#define AVR32_PM_ISR_LOCK1LOST_SIZE                                1
#define AVR32_PM_ISR_LOCK1_MASK                           0x00000200
#define AVR32_PM_ISR_LOCK1_OFFSET                                  9
#define AVR32_PM_ISR_LOCK1_SIZE                                    1
#define AVR32_PM_ISR_LOCK2                                        10
#define AVR32_PM_ISR_LOCK2LOST                                    18
#define AVR32_PM_ISR_LOCK2LOST_MASK                       0x00040000
#define AVR32_PM_ISR_LOCK2LOST_OFFSET                             18
#define AVR32_PM_ISR_LOCK2LOST_SIZE                                1
#define AVR32_PM_ISR_LOCK2_MASK                           0x00000400
#define AVR32_PM_ISR_LOCK2_OFFSET                                 10
#define AVR32_PM_ISR_LOCK2_SIZE                                    1
#define AVR32_PM_ISR_MASK                                 0x1f070787
#define AVR32_PM_ISR_MSKRDY                                       25
#define AVR32_PM_ISR_MSKRDY_MASK                          0x02000000
#define AVR32_PM_ISR_MSKRDY_OFFSET                                25
#define AVR32_PM_ISR_MSKRDY_SIZE                                   1
#define AVR32_PM_ISR_OSC0RDY                                       0
#define AVR32_PM_ISR_OSC0RDY_MASK                         0x00000001
#define AVR32_PM_ISR_OSC0RDY_OFFSET                                0
#define AVR32_PM_ISR_OSC0RDY_SIZE                                  1
#define AVR32_PM_ISR_OSC1RDY                                       1
#define AVR32_PM_ISR_OSC1RDY_MASK                         0x00000002
#define AVR32_PM_ISR_OSC1RDY_OFFSET                                1
#define AVR32_PM_ISR_OSC1RDY_SIZE                                  1
#define AVR32_PM_ISR_OSC2RDY                                       2
#define AVR32_PM_ISR_OSC2RDY_MASK                         0x00000004
#define AVR32_PM_ISR_OSC2RDY_OFFSET                                2
#define AVR32_PM_ISR_OSC2RDY_SIZE                                  1
#define AVR32_PM_ISR_OSC32RDY                                      7
#define AVR32_PM_ISR_OSC32RDY_MASK                        0x00000080
#define AVR32_PM_ISR_OSC32RDY_OFFSET                               7
#define AVR32_PM_ISR_OSC32RDY_SIZE                                 1
#define AVR32_PM_ISR_PERRDY                                       28
#define AVR32_PM_ISR_PERRDY_MASK                          0x10000000
#define AVR32_PM_ISR_PERRDY_OFFSET                                28
#define AVR32_PM_ISR_PERRDY_SIZE                                   1
#define AVR32_PM_ISR_RESETVALUE                           0x00000000
#define AVR32_PM_ISR_WAKE                                         26
#define AVR32_PM_ISR_WAKE_MASK                            0x04000000
#define AVR32_PM_ISR_WAKE_OFFSET                                  26
#define AVR32_PM_ISR_WAKE_SIZE                                     1
#define AVR32_PM_JTAG                                              4
#define AVR32_PM_JTAGHARD                                          9
#define AVR32_PM_JTAGHARD_MASK                            0x00000200
#define AVR32_PM_JTAGHARD_OFFSET                                   9
#define AVR32_PM_JTAGHARD_SIZE                                     1
#define AVR32_PM_JTAG_MASK                                0x00000010
#define AVR32_PM_JTAG_OFFSET                                       4
#define AVR32_PM_JTAG_SIZE                                         1
#define AVR32_PM_KEY                                              24
#define AVR32_PM_KEY_MASK                                 0xff000000
#define AVR32_PM_KEY_OFFSET                                       24
#define AVR32_PM_KEY_SIZE                                          8
#define AVR32_PM_LEVEL                                             0
#define AVR32_PM_LEVEL_MASK                               0x0000003f
#define AVR32_PM_LEVEL_OFFSET                                      0
#define AVR32_PM_LEVEL_SIZE                                        6
#define AVR32_PM_LOCK0                                             8
#define AVR32_PM_LOCK0LOST                                        16
#define AVR32_PM_LOCK0LOST_MASK                           0x00010000
#define AVR32_PM_LOCK0LOST_OFFSET                                 16
#define AVR32_PM_LOCK0LOST_SIZE                                    1
#define AVR32_PM_LOCK0_MASK                               0x00000100
#define AVR32_PM_LOCK0_OFFSET                                      8
#define AVR32_PM_LOCK0_SIZE                                        1
#define AVR32_PM_LOCK1                                             9
#define AVR32_PM_LOCK1LOST                                        17
#define AVR32_PM_LOCK1LOST_MASK                           0x00020000
#define AVR32_PM_LOCK1LOST_OFFSET                                 17
#define AVR32_PM_LOCK1LOST_SIZE                                    1
#define AVR32_PM_LOCK1_MASK                               0x00000200
#define AVR32_PM_LOCK1_OFFSET                                      9
#define AVR32_PM_LOCK1_SIZE                                        1
#define AVR32_PM_LOCK2                                            10
#define AVR32_PM_LOCK2LOST                                        18
#define AVR32_PM_LOCK2LOST_MASK                           0x00040000
#define AVR32_PM_LOCK2LOST_OFFSET                                 18
#define AVR32_PM_LOCK2LOST_SIZE                                    1
#define AVR32_PM_LOCK2_MASK                               0x00000400
#define AVR32_PM_LOCK2_OFFSET                                     10
#define AVR32_PM_LOCK2_SIZE                                        1
#define AVR32_PM_MCCTRL                                   0x00000000
#define AVR32_PM_MCCTRL_CRIPEL                                    24
#define AVR32_PM_MCCTRL_CRIPEL_MASK                       0x01000000
#define AVR32_PM_MCCTRL_CRIPEL_OFFSET                             24
#define AVR32_PM_MCCTRL_CRIPEL_SIZE                                1
#define AVR32_PM_MCCTRL_MASK                              0x0100001f
#define AVR32_PM_MCCTRL_MCSEL                                      0
#define AVR32_PM_MCCTRL_MCSEL_MASK                        0x00000003
#define AVR32_PM_MCCTRL_MCSEL_OFFSET                               0
#define AVR32_PM_MCCTRL_MCSEL_OSC0                        0x00000001
#define AVR32_PM_MCCTRL_MCSEL_PLL0                        0x00000002
#define AVR32_PM_MCCTRL_MCSEL_SIZE                                 2
#define AVR32_PM_MCCTRL_MCSEL_SLOW                        0x00000000
#define AVR32_PM_MCCTRL_OSC0EN                                     2
#define AVR32_PM_MCCTRL_OSC0EN_MASK                       0x00000004
#define AVR32_PM_MCCTRL_OSC0EN_OFFSET                              2
#define AVR32_PM_MCCTRL_OSC0EN_SIZE                                1
#define AVR32_PM_MCCTRL_OSC1EN                                     3
#define AVR32_PM_MCCTRL_OSC1EN_MASK                       0x00000008
#define AVR32_PM_MCCTRL_OSC1EN_OFFSET                              3
#define AVR32_PM_MCCTRL_OSC1EN_SIZE                                1
#define AVR32_PM_MCCTRL_OSC2EN                                     4
#define AVR32_PM_MCCTRL_OSC2EN_MASK                       0x00000010
#define AVR32_PM_MCCTRL_OSC2EN_OFFSET                              4
#define AVR32_PM_MCCTRL_OSC2EN_SIZE                                1
#define AVR32_PM_MCCTRL_RESETVALUE                        0x00000000
#define AVR32_PM_MCSEL                                             0
#define AVR32_PM_MCSEL_MASK                               0x00000003
#define AVR32_PM_MCSEL_OFFSET                                      0
#define AVR32_PM_MCSEL_OSC0                               0x00000001
#define AVR32_PM_MCSEL_PLL0                               0x00000002
#define AVR32_PM_MCSEL_SIZE                                        2
#define AVR32_PM_MCSEL_SLOW                               0x00000000
#define AVR32_PM_MODE_CRYSTAL_ACG                         0x00000001
#define AVR32_PM_MODE_CRYSTAL_G0                          0x00000004
#define AVR32_PM_MODE_CRYSTAL_G1                          0x00000005
#define AVR32_PM_MODE_CRYSTAL_G2                          0x00000006
#define AVR32_PM_MODE_CRYSTAL_G3                          0x00000007
#define AVR32_PM_MODE_EXT_CLOCK                           0x00000000
#define AVR32_PM_MSKRDY                                           25
#define AVR32_PM_MSKRDY_MASK                              0x02000000
#define AVR32_PM_MSKRDY_OFFSET                                    25
#define AVR32_PM_MSKRDY_SIZE                                       1
#define AVR32_PM_NTAE                                              5
#define AVR32_PM_NTAE_MASK                                0x00000020
#define AVR32_PM_NTAE_OFFSET                                       5
#define AVR32_PM_NTAE_SIZE                                         1
#define AVR32_PM_OCDRST                                            8
#define AVR32_PM_OCDRST_MASK                              0x00000100
#define AVR32_PM_OCDRST_OFFSET                                     8
#define AVR32_PM_OCDRST_SIZE                                       1
#define AVR32_PM_OFF1                                     0x00000000
#define AVR32_PM_OFF2                                     0x00000003
#define AVR32_PM_OSC0EN                                            2
#define AVR32_PM_OSC0EN_MASK                              0x00000004
#define AVR32_PM_OSC0EN_OFFSET                                     2
#define AVR32_PM_OSC0EN_SIZE                                       1
#define AVR32_PM_OSC0RDY                                           0
#define AVR32_PM_OSC0RDY_MASK                             0x00000001
#define AVR32_PM_OSC0RDY_OFFSET                                    0
#define AVR32_PM_OSC0RDY_SIZE                                      1
#define AVR32_PM_OSC1                                     0x00000003
#define AVR32_PM_OSC1EN                                            3
#define AVR32_PM_OSC1EN_MASK                              0x00000008
#define AVR32_PM_OSC1EN_OFFSET                                     3
#define AVR32_PM_OSC1EN_SIZE                                       1
#define AVR32_PM_OSC1RDY                                           1
#define AVR32_PM_OSC1RDY_MASK                             0x00000002
#define AVR32_PM_OSC1RDY_OFFSET                                    1
#define AVR32_PM_OSC1RDY_SIZE                                      1
#define AVR32_PM_OSC2EN                                            4
#define AVR32_PM_OSC2EN_MASK                              0x00000010
#define AVR32_PM_OSC2EN_OFFSET                                     4
#define AVR32_PM_OSC2EN_SIZE                                       1
#define AVR32_PM_OSC2RDY                                           2
#define AVR32_PM_OSC2RDY_MASK                             0x00000004
#define AVR32_PM_OSC2RDY_OFFSET                                    2
#define AVR32_PM_OSC2RDY_SIZE                                      1
#define AVR32_PM_OSC32EN                                           0
#define AVR32_PM_OSC32EN_MASK                             0x00000001
#define AVR32_PM_OSC32EN_OFFSET                                    0
#define AVR32_PM_OSC32EN_SIZE                                      1
#define AVR32_PM_OSC32RDY                                          7
#define AVR32_PM_OSC32RDY_MASK                            0x00000080
#define AVR32_PM_OSC32RDY_OFFSET                                   7
#define AVR32_PM_OSC32RDY_SIZE                                     1
#define AVR32_PM_OSCCTRL0                                 0x00000080
#define AVR32_PM_OSCCTRL0_MASK                            0x0000070f
#define AVR32_PM_OSCCTRL0_MODE                                     0
#define AVR32_PM_OSCCTRL0_MODE_CRYSTAL_ACG                0x00000001
#define AVR32_PM_OSCCTRL0_MODE_CRYSTAL_G0                 0x00000004
#define AVR32_PM_OSCCTRL0_MODE_CRYSTAL_G1                 0x00000005
#define AVR32_PM_OSCCTRL0_MODE_CRYSTAL_G2                 0x00000006
#define AVR32_PM_OSCCTRL0_MODE_CRYSTAL_G3                 0x00000007
#define AVR32_PM_OSCCTRL0_MODE_EXT_CLOCK                  0x00000000
#define AVR32_PM_OSCCTRL0_MODE_MASK                       0x0000000f
#define AVR32_PM_OSCCTRL0_MODE_OFFSET                              0
#define AVR32_PM_OSCCTRL0_MODE_SIZE                                4
#define AVR32_PM_OSCCTRL0_RESETVALUE                      0x00000000
#define AVR32_PM_OSCCTRL0_STARTUP                                  8
#define AVR32_PM_OSCCTRL0_STARTUP_0_RCOSC                 0x00000000
#define AVR32_PM_OSCCTRL0_STARTUP_128_RCOSC               0x00000002
#define AVR32_PM_OSCCTRL0_STARTUP_16384_RCOSC             0x00000006
#define AVR32_PM_OSCCTRL0_STARTUP_2048_RCOSC              0x00000003
#define AVR32_PM_OSCCTRL0_STARTUP_4096_RCOSC              0x00000004
#define AVR32_PM_OSCCTRL0_STARTUP_64_RCOSC                0x00000001
#define AVR32_PM_OSCCTRL0_STARTUP_8192_RCOSC              0x00000005
#define AVR32_PM_OSCCTRL0_STARTUP_MASK                    0x00000700
#define AVR32_PM_OSCCTRL0_STARTUP_OFFSET                           8
#define AVR32_PM_OSCCTRL0_STARTUP_SIZE                             3
#define AVR32_PM_OSCCTRL1                                 0x00000084
#define AVR32_PM_OSCCTRL1_MASK                            0x0000070f
#define AVR32_PM_OSCCTRL1_MODE                                     0
#define AVR32_PM_OSCCTRL1_MODE_CRYSTAL_ACG                0x00000001
#define AVR32_PM_OSCCTRL1_MODE_CRYSTAL_G0                 0x00000004
#define AVR32_PM_OSCCTRL1_MODE_CRYSTAL_G1                 0x00000005
#define AVR32_PM_OSCCTRL1_MODE_CRYSTAL_G2                 0x00000006
#define AVR32_PM_OSCCTRL1_MODE_CRYSTAL_G3                 0x00000007
#define AVR32_PM_OSCCTRL1_MODE_EXT_CLOCK                  0x00000000
#define AVR32_PM_OSCCTRL1_MODE_MASK                       0x0000000f
#define AVR32_PM_OSCCTRL1_MODE_OFFSET                              0
#define AVR32_PM_OSCCTRL1_MODE_SIZE                                4
#define AVR32_PM_OSCCTRL1_RESETVALUE                      0x00000000
#define AVR32_PM_OSCCTRL1_STARTUP                                  8
#define AVR32_PM_OSCCTRL1_STARTUP_0_RCOSC                 0x00000000
#define AVR32_PM_OSCCTRL1_STARTUP_128_RCOSC               0x00000002
#define AVR32_PM_OSCCTRL1_STARTUP_16384_RCOSC             0x00000006
#define AVR32_PM_OSCCTRL1_STARTUP_2048_RCOSC              0x00000003
#define AVR32_PM_OSCCTRL1_STARTUP_4096_RCOSC              0x00000004
#define AVR32_PM_OSCCTRL1_STARTUP_64_RCOSC                0x00000001
#define AVR32_PM_OSCCTRL1_STARTUP_8192_RCOSC              0x00000005
#define AVR32_PM_OSCCTRL1_STARTUP_MASK                    0x00000700
#define AVR32_PM_OSCCTRL1_STARTUP_OFFSET                           8
#define AVR32_PM_OSCCTRL1_STARTUP_SIZE                             3
#define AVR32_PM_OSCCTRL2                                 0x00000088
#define AVR32_PM_OSCCTRL2_MASK                            0x0000070f
#define AVR32_PM_OSCCTRL2_MODE                                     0
#define AVR32_PM_OSCCTRL2_MODE_CRYSTAL_ACG                0x00000001
#define AVR32_PM_OSCCTRL2_MODE_CRYSTAL_G0                 0x00000004
#define AVR32_PM_OSCCTRL2_MODE_CRYSTAL_G1                 0x00000005
#define AVR32_PM_OSCCTRL2_MODE_CRYSTAL_G2                 0x00000006
#define AVR32_PM_OSCCTRL2_MODE_CRYSTAL_G3                 0x00000007
#define AVR32_PM_OSCCTRL2_MODE_EXT_CLOCK                  0x00000000
#define AVR32_PM_OSCCTRL2_MODE_MASK                       0x0000000f
#define AVR32_PM_OSCCTRL2_MODE_OFFSET                              0
#define AVR32_PM_OSCCTRL2_MODE_SIZE                                4
#define AVR32_PM_OSCCTRL2_RESETVALUE                      0x00000000
#define AVR32_PM_OSCCTRL2_STARTUP                                  8
#define AVR32_PM_OSCCTRL2_STARTUP_MASK                    0x00000700
#define AVR32_PM_OSCCTRL2_STARTUP_OFFSET                           8
#define AVR32_PM_OSCCTRL2_STARTUP_SIZE                             3
#define AVR32_PM_OSCCTRL32                                0x000000a0
#define AVR32_PM_OSCCTRL32_MASK                           0x00070701
#define AVR32_PM_OSCCTRL32_MODE                                    8
#define AVR32_PM_OSCCTRL32_MODE_MASK                      0x00000700
#define AVR32_PM_OSCCTRL32_MODE_OFFSET                             8
#define AVR32_PM_OSCCTRL32_MODE_SIZE                               3
#define AVR32_PM_OSCCTRL32_OSC32EN                                 0
#define AVR32_PM_OSCCTRL32_OSC32EN_MASK                   0x00000001
#define AVR32_PM_OSCCTRL32_OSC32EN_OFFSET                          0
#define AVR32_PM_OSCCTRL32_OSC32EN_SIZE                            1
#define AVR32_PM_OSCCTRL32_RESETVALUE                     0x00000000
#define AVR32_PM_OSCCTRL32_STARTUP                                16
#define AVR32_PM_OSCCTRL32_STARTUP_0_RCOSC                0x00000000
#define AVR32_PM_OSCCTRL32_STARTUP_128_RCOSC              0x00000001
#define AVR32_PM_OSCCTRL32_STARTUP_131072_RCOSC           0x00000005
#define AVR32_PM_OSCCTRL32_STARTUP_16384_RCOSC            0x00000003
#define AVR32_PM_OSCCTRL32_STARTUP_262144_RCOSC           0x00000006
#define AVR32_PM_OSCCTRL32_STARTUP_524288_RCOSC           0x00000007
#define AVR32_PM_OSCCTRL32_STARTUP_65536_RCOSC            0x00000004
#define AVR32_PM_OSCCTRL32_STARTUP_8192_RCOSC             0x00000002
#define AVR32_PM_OSCCTRL32_STARTUP_MASK                   0x00070000
#define AVR32_PM_OSCCTRL32_STARTUP_OFFSET                         16
#define AVR32_PM_OSCCTRL32_STARTUP_SIZE                            3
#define AVR32_PM_OSCSEL                                            8
#define AVR32_PM_OSCSEL_CLK32                             0x00000001
#define AVR32_PM_OSCSEL_MASK                              0x00000f00
#define AVR32_PM_OSCSEL_OFFSET                                     8
#define AVR32_PM_OSCSEL_OSC0                              0x00000002
#define AVR32_PM_OSCSEL_OSC1                              0x00000003
#define AVR32_PM_OSCSEL_PLL0                              0x00000004
#define AVR32_PM_OSCSEL_PLL1                              0x00000005
#define AVR32_PM_OSCSEL_SIZE                                       4
#define AVR32_PM_OSCSEL_SLOW                              0x00000000
#define AVR32_PM_PBADIV                                           23
#define AVR32_PM_PBADIVMASK                               0x00000018
#define AVR32_PM_PBADIVMASK_MASK                          0x00000000
#define AVR32_PM_PBADIVMASK_RESETVALUE                    0x0000001f
#define AVR32_PM_PBADIV_MASK                              0x00800000
#define AVR32_PM_PBADIV_OFFSET                                    23
#define AVR32_PM_PBADIV_SIZE                                       1
#define AVR32_PM_PBAMASK                                  0x00000010
#define AVR32_PM_PBAMASK_MASK                             0x00000000
#define AVR32_PM_PBAMASK_RESETVALUE                       0x00000000
#define AVR32_PM_PBASEL                                           16
#define AVR32_PM_PBASEL_MASK                              0x00070000
#define AVR32_PM_PBASEL_OFFSET                                    16
#define AVR32_PM_PBASEL_SIZE                                       3
#define AVR32_PM_PBBDIV                                           31
#define AVR32_PM_PBBDIVMASK                               0x0000001c
#define AVR32_PM_PBBDIVMASK_MASK                          0x00000000
#define AVR32_PM_PBBDIVMASK_RESETVALUE                    0x0000001f
#define AVR32_PM_PBBDIV_MASK                              0x80000000
#define AVR32_PM_PBBDIV_OFFSET                                    31
#define AVR32_PM_PBBDIV_SIZE                                       1
#define AVR32_PM_PBBMASK                                  0x00000014
#define AVR32_PM_PBBMASK_MASK                             0x00000000
#define AVR32_PM_PBBMASK_RESETVALUE                       0x00000000
#define AVR32_PM_PBBSEL                                           24
#define AVR32_PM_PBBSEL_MASK                              0x07000000
#define AVR32_PM_PBBSEL_OFFSET                                    24
#define AVR32_PM_PBBSEL_SIZE                                       3
#define AVR32_PM_PERIPH0                                           0
#define AVR32_PM_PERIPH0_MASK                             0x00000001
#define AVR32_PM_PERIPH0_OFFSET                                    0
#define AVR32_PM_PERIPH0_SIZE                                      1
#define AVR32_PM_PERIPH1                                           1
#define AVR32_PM_PERIPH1_MASK                             0x00000002
#define AVR32_PM_PERIPH1_OFFSET                                    1
#define AVR32_PM_PERIPH1_SIZE                                      1
#define AVR32_PM_PERRDY                                           28
#define AVR32_PM_PERRDY_MASK                              0x10000000
#define AVR32_PM_PERRDY_OFFSET                                    28
#define AVR32_PM_PERRDY_SIZE                                       1
#define AVR32_PM_PLL0                                     0x00000040
#define AVR32_PM_PLL0_MASK                                0xff3f3fbf
#define AVR32_PM_PLL0_PLLBPL                                       7
#define AVR32_PM_PLL0_PLLBPL_MASK                         0x00000080
#define AVR32_PM_PLL0_PLLBPL_OFFSET                                7
#define AVR32_PM_PLL0_PLLBPL_SIZE                                  1
#define AVR32_PM_PLL0_PLLCOUNT                                    24
#define AVR32_PM_PLL0_PLLCOUNT_MASK                       0x3f000000
#define AVR32_PM_PLL0_PLLCOUNT_OFFSET                             24
#define AVR32_PM_PLL0_PLLCOUNT_SIZE                                6
#define AVR32_PM_PLL0_PLLDIV                                       8
#define AVR32_PM_PLL0_PLLDIV_MASK                         0x00003f00
#define AVR32_PM_PLL0_PLLDIV_OFFSET                                8
#define AVR32_PM_PLL0_PLLDIV_SIZE                                  6
#define AVR32_PM_PLL0_PLLEN                                        0
#define AVR32_PM_PLL0_PLLEN_MASK                          0x00000001
#define AVR32_PM_PLL0_PLLEN_OFFSET                                 0
#define AVR32_PM_PLL0_PLLEN_SIZE                                   1
#define AVR32_PM_PLL0_PLLIOTESTEN                                 30
#define AVR32_PM_PLL0_PLLIOTESTEN_MASK                    0x40000000
#define AVR32_PM_PLL0_PLLIOTESTEN_OFFSET                          30
#define AVR32_PM_PLL0_PLLIOTESTEN_SIZE                             1
#define AVR32_PM_PLL0_PLLMUL                                      16
#define AVR32_PM_PLL0_PLLMUL_MASK                         0x003f0000
#define AVR32_PM_PLL0_PLLMUL_OFFSET                               16
#define AVR32_PM_PLL0_PLLMUL_SIZE                                  6
#define AVR32_PM_PLL0_PLLOPT                                       3
#define AVR32_PM_PLL0_PLLOPT_MASK                         0x00000038
#define AVR32_PM_PLL0_PLLOPT_OFFSET                                3
#define AVR32_PM_PLL0_PLLOPT_SIZE                                  3
#define AVR32_PM_PLL0_PLLOSC                                       1
#define AVR32_PM_PLL0_PLLOSC_MASK                         0x00000006
#define AVR32_PM_PLL0_PLLOSC_OFFSET                                1
#define AVR32_PM_PLL0_PLLOSC_SIZE                                  2
#define AVR32_PM_PLL0_PLLTEST                                     31
#define AVR32_PM_PLL0_PLLTEST_MASK                        0x80000000
#define AVR32_PM_PLL0_PLLTEST_OFFSET                              31
#define AVR32_PM_PLL0_PLLTEST_SIZE                                 1
#define AVR32_PM_PLL0_RESETVALUE                          0x00000000
#define AVR32_PM_PLL1                                     0x00000044
#define AVR32_PM_PLL1_MASK                                0xff3f3fbf
#define AVR32_PM_PLL1_PLLBPL                                       7
#define AVR32_PM_PLL1_PLLBPL_MASK                         0x00000080
#define AVR32_PM_PLL1_PLLBPL_OFFSET                                7
#define AVR32_PM_PLL1_PLLBPL_SIZE                                  1
#define AVR32_PM_PLL1_PLLCOUNT                                    24
#define AVR32_PM_PLL1_PLLCOUNT_MASK                       0x3f000000
#define AVR32_PM_PLL1_PLLCOUNT_OFFSET                             24
#define AVR32_PM_PLL1_PLLCOUNT_SIZE                                6
#define AVR32_PM_PLL1_PLLDIV                                       8
#define AVR32_PM_PLL1_PLLDIV_MASK                         0x00003f00
#define AVR32_PM_PLL1_PLLDIV_OFFSET                                8
#define AVR32_PM_PLL1_PLLDIV_SIZE                                  6
#define AVR32_PM_PLL1_PLLEN                                        0
#define AVR32_PM_PLL1_PLLEN_MASK                          0x00000001
#define AVR32_PM_PLL1_PLLEN_OFFSET                                 0
#define AVR32_PM_PLL1_PLLEN_SIZE                                   1
#define AVR32_PM_PLL1_PLLIOTESTEN                                 30
#define AVR32_PM_PLL1_PLLIOTESTEN_MASK                    0x40000000
#define AVR32_PM_PLL1_PLLIOTESTEN_OFFSET                          30
#define AVR32_PM_PLL1_PLLIOTESTEN_SIZE                             1
#define AVR32_PM_PLL1_PLLMUL                                      16
#define AVR32_PM_PLL1_PLLMUL_MASK                         0x003f0000
#define AVR32_PM_PLL1_PLLMUL_OFFSET                               16
#define AVR32_PM_PLL1_PLLMUL_SIZE                                  6
#define AVR32_PM_PLL1_PLLOPT                                       3
#define AVR32_PM_PLL1_PLLOPT_MASK                         0x00000038
#define AVR32_PM_PLL1_PLLOPT_OFFSET                                3
#define AVR32_PM_PLL1_PLLOPT_SIZE                                  3
#define AVR32_PM_PLL1_PLLOSC                                       1
#define AVR32_PM_PLL1_PLLOSC_MASK                         0x00000006
#define AVR32_PM_PLL1_PLLOSC_OFFSET                                1
#define AVR32_PM_PLL1_PLLOSC_SIZE                                  2
#define AVR32_PM_PLL1_PLLTEST                                     31
#define AVR32_PM_PLL1_PLLTEST_MASK                        0x80000000
#define AVR32_PM_PLL1_PLLTEST_OFFSET                              31
#define AVR32_PM_PLL1_PLLTEST_SIZE                                 1
#define AVR32_PM_PLL1_RESETVALUE                          0x00000000
#define AVR32_PM_PLL2                                     0x00000048
#define AVR32_PM_PLL2_MASK                                0xff3f3fbf
#define AVR32_PM_PLL2_PLLBPL                                       7
#define AVR32_PM_PLL2_PLLBPL_MASK                         0x00000080
#define AVR32_PM_PLL2_PLLBPL_OFFSET                                7
#define AVR32_PM_PLL2_PLLBPL_SIZE                                  1
#define AVR32_PM_PLL2_PLLCOUNT                                    24
#define AVR32_PM_PLL2_PLLCOUNT_MASK                       0x3f000000
#define AVR32_PM_PLL2_PLLCOUNT_OFFSET                             24
#define AVR32_PM_PLL2_PLLCOUNT_SIZE                                6
#define AVR32_PM_PLL2_PLLDIV                                       8
#define AVR32_PM_PLL2_PLLDIV_MASK                         0x00003f00
#define AVR32_PM_PLL2_PLLDIV_OFFSET                                8
#define AVR32_PM_PLL2_PLLDIV_SIZE                                  6
#define AVR32_PM_PLL2_PLLEN                                        0
#define AVR32_PM_PLL2_PLLEN_MASK                          0x00000001
#define AVR32_PM_PLL2_PLLEN_OFFSET                                 0
#define AVR32_PM_PLL2_PLLEN_SIZE                                   1
#define AVR32_PM_PLL2_PLLIOTESTEN                                 30
#define AVR32_PM_PLL2_PLLIOTESTEN_MASK                    0x40000000
#define AVR32_PM_PLL2_PLLIOTESTEN_OFFSET                          30
#define AVR32_PM_PLL2_PLLIOTESTEN_SIZE                             1
#define AVR32_PM_PLL2_PLLMUL                                      16
#define AVR32_PM_PLL2_PLLMUL_MASK                         0x003f0000
#define AVR32_PM_PLL2_PLLMUL_OFFSET                               16
#define AVR32_PM_PLL2_PLLMUL_SIZE                                  6
#define AVR32_PM_PLL2_PLLOPT                                       3
#define AVR32_PM_PLL2_PLLOPT_MASK                         0x00000038
#define AVR32_PM_PLL2_PLLOPT_OFFSET                                3
#define AVR32_PM_PLL2_PLLOPT_SIZE                                  3
#define AVR32_PM_PLL2_PLLOSC                                       1
#define AVR32_PM_PLL2_PLLOSC_MASK                         0x00000006
#define AVR32_PM_PLL2_PLLOSC_OFFSET                                1
#define AVR32_PM_PLL2_PLLOSC_SIZE                                  2
#define AVR32_PM_PLL2_PLLTEST                                     31
#define AVR32_PM_PLL2_PLLTEST_MASK                        0x80000000
#define AVR32_PM_PLL2_PLLTEST_OFFSET                              31
#define AVR32_PM_PLL2_PLLTEST_SIZE                                 1
#define AVR32_PM_PLL2_RESETVALUE                          0x00000000
#define AVR32_PM_PLLBPL                                            7
#define AVR32_PM_PLLBPL_MASK                              0x00000080
#define AVR32_PM_PLLBPL_OFFSET                                     7
#define AVR32_PM_PLLBPL_SIZE                                       1
#define AVR32_PM_PLLCOUNT                                         24
#define AVR32_PM_PLLCOUNT_MASK                            0x3f000000
#define AVR32_PM_PLLCOUNT_OFFSET                                  24
#define AVR32_PM_PLLCOUNT_SIZE                                     6
#define AVR32_PM_PLLDIV                                            8
#define AVR32_PM_PLLDIV_MASK                              0x00003f00
#define AVR32_PM_PLLDIV_OFFSET                                     8
#define AVR32_PM_PLLDIV_SIZE                                       6
#define AVR32_PM_PLLEN                                             0
#define AVR32_PM_PLLEN_MASK                               0x00000001
#define AVR32_PM_PLLEN_OFFSET                                      0
#define AVR32_PM_PLLEN_SIZE                                        1
#define AVR32_PM_PLLIOTESTEN                                      30
#define AVR32_PM_PLLIOTESTEN_MASK                         0x40000000
#define AVR32_PM_PLLIOTESTEN_OFFSET                               30
#define AVR32_PM_PLLIOTESTEN_SIZE                                  1
#define AVR32_PM_PLLMUL                                           16
#define AVR32_PM_PLLMUL_MASK                              0x003f0000
#define AVR32_PM_PLLMUL_OFFSET                                    16
#define AVR32_PM_PLLMUL_SIZE                                       6
#define AVR32_PM_PLLOPT                                            3
#define AVR32_PM_PLLOPT_MASK                              0x00000038
#define AVR32_PM_PLLOPT_OFFSET                                     3
#define AVR32_PM_PLLOPT_SIZE                                       3
#define AVR32_PM_PLLOSC                                            1
#define AVR32_PM_PLLOSC_MASK                              0x00000006
#define AVR32_PM_PLLOSC_OFFSET                                     1
#define AVR32_PM_PLLOSC_SIZE                                       2
#define AVR32_PM_PLLTEST                                          31
#define AVR32_PM_PLLTEST_MASK                             0x80000000
#define AVR32_PM_PLLTEST_OFFSET                                   31
#define AVR32_PM_PLLTEST_SIZE                                      1
#define AVR32_PM_POR                                               0
#define AVR32_PM_POR_MASK                                 0x00000001
#define AVR32_PM_POR_OFFSET                                        0
#define AVR32_PM_POR_SIZE                                          1
#define AVR32_PM_POSCSR                                   0x000000d4
#define AVR32_PM_POSCSR_BODDET                                    27
#define AVR32_PM_POSCSR_BODDET_MASK                       0x08000000
#define AVR32_PM_POSCSR_BODDET_OFFSET                             27
#define AVR32_PM_POSCSR_BODDET_SIZE                                1
#define AVR32_PM_POSCSR_CKRDY                                     24
#define AVR32_PM_POSCSR_CKRDY_MASK                        0x01000000
#define AVR32_PM_POSCSR_CKRDY_OFFSET                              24
#define AVR32_PM_POSCSR_CKRDY_SIZE                                 1
#define AVR32_PM_POSCSR_LOCK0                                      8
#define AVR32_PM_POSCSR_LOCK0LOST                                 16
#define AVR32_PM_POSCSR_LOCK0LOST_MASK                    0x00010000
#define AVR32_PM_POSCSR_LOCK0LOST_OFFSET                          16
#define AVR32_PM_POSCSR_LOCK0LOST_SIZE                             1
#define AVR32_PM_POSCSR_LOCK0_MASK                        0x00000100
#define AVR32_PM_POSCSR_LOCK0_OFFSET                               8
#define AVR32_PM_POSCSR_LOCK0_SIZE                                 1
#define AVR32_PM_POSCSR_LOCK1                                      9
#define AVR32_PM_POSCSR_LOCK1LOST                                 17
#define AVR32_PM_POSCSR_LOCK1LOST_MASK                    0x00020000
#define AVR32_PM_POSCSR_LOCK1LOST_OFFSET                          17
#define AVR32_PM_POSCSR_LOCK1LOST_SIZE                             1
#define AVR32_PM_POSCSR_LOCK1_MASK                        0x00000200
#define AVR32_PM_POSCSR_LOCK1_OFFSET                               9
#define AVR32_PM_POSCSR_LOCK1_SIZE                                 1
#define AVR32_PM_POSCSR_MASK                              0x1f030383
#define AVR32_PM_POSCSR_MSKRDY                                    25
#define AVR32_PM_POSCSR_MSKRDY_MASK                       0x02000000
#define AVR32_PM_POSCSR_MSKRDY_OFFSET                             25
#define AVR32_PM_POSCSR_MSKRDY_SIZE                                1
#define AVR32_PM_POSCSR_OSC0RDY                                    0
#define AVR32_PM_POSCSR_OSC0RDY_MASK                      0x00000001
#define AVR32_PM_POSCSR_OSC0RDY_OFFSET                             0
#define AVR32_PM_POSCSR_OSC0RDY_SIZE                               1
#define AVR32_PM_POSCSR_OSC1RDY                                    1
#define AVR32_PM_POSCSR_OSC1RDY_MASK                      0x00000002
#define AVR32_PM_POSCSR_OSC1RDY_OFFSET                             1
#define AVR32_PM_POSCSR_OSC1RDY_SIZE                               1
#define AVR32_PM_POSCSR_OSC32RDY                                   7
#define AVR32_PM_POSCSR_OSC32RDY_MASK                     0x00000080
#define AVR32_PM_POSCSR_OSC32RDY_OFFSET                            7
#define AVR32_PM_POSCSR_OSC32RDY_SIZE                              1
#define AVR32_PM_POSCSR_PERRDY                                    28
#define AVR32_PM_POSCSR_PERRDY_MASK                       0x10000000
#define AVR32_PM_POSCSR_PERRDY_OFFSET                             28
#define AVR32_PM_POSCSR_PERRDY_SIZE                                1
#define AVR32_PM_POSCSR_RESETVALUE                        0x00000000
#define AVR32_PM_POSCSR_WAKE                                      26
#define AVR32_PM_POSCSR_WAKE_MASK                         0x04000000
#define AVR32_PM_POSCSR_WAKE_OFFSET                               26
#define AVR32_PM_POSCSR_WAKE_SIZE                                  1
#define AVR32_PM_PPCR                                     0x00000150
#define AVR32_PM_PPCR_EBI_VOLT                                     0
#define AVR32_PM_PPCR_EBI_VOLT_MASK                       0x00000001
#define AVR32_PM_PPCR_EBI_VOLT_OFFSET                              0
#define AVR32_PM_PPCR_EBI_VOLT_SIZE                                1
#define AVR32_PM_PPCR_KEY                                         24
#define AVR32_PM_PPCR_KEY_MASK                            0xff000000
#define AVR32_PM_PPCR_KEY_OFFSET                                  24
#define AVR32_PM_PPCR_KEY_SIZE                                     8
#define AVR32_PM_PPCR_MASK                                0xff000003
#define AVR32_PM_PPCR_RESETVALUE                          0x00000000
#define AVR32_PM_PPCR_UTMI_CTRL                                    1
#define AVR32_PM_PPCR_UTMI_CTRL_MASK                      0x00000002
#define AVR32_PM_PPCR_UTMI_CTRL_OFFSET                             1
#define AVR32_PM_PPCR_UTMI_CTRL_SIZE                               1
#define AVR32_PM_RCCR                                     0x00000140
#define AVR32_PM_RCCR_CALIB                                        0
#define AVR32_PM_RCCR_CALIB_MASK                          0x000003ff
#define AVR32_PM_RCCR_CALIB_OFFSET                                 0
#define AVR32_PM_RCCR_CALIB_SIZE                                  10
#define AVR32_PM_RCCR_FCD                                         16
#define AVR32_PM_RCCR_FCD_MASK                            0x00010000
#define AVR32_PM_RCCR_FCD_OFFSET                                  16
#define AVR32_PM_RCCR_FCD_SIZE                                     1
#define AVR32_PM_RCCR_KEY                                         24
#define AVR32_PM_RCCR_KEY_MASK                            0xff000000
#define AVR32_PM_RCCR_KEY_OFFSET                                  24
#define AVR32_PM_RCCR_KEY_SIZE                                     8
#define AVR32_PM_RCCR_MASK                                0xff0103ff
#define AVR32_PM_RCCR_RESETVALUE                          0x00000000
#define AVR32_PM_RC_RCAUSE                                0x00000180
#define AVR32_PM_RC_RCAUSE_BOD                                     1
#define AVR32_PM_RC_RCAUSE_BOD_MASK                       0x00000002
#define AVR32_PM_RC_RCAUSE_BOD_OFFSET                              1
#define AVR32_PM_RC_RCAUSE_BOD_SIZE                                1
#define AVR32_PM_RC_RCAUSE_CPUERR                                  7
#define AVR32_PM_RC_RCAUSE_CPUERR_MASK                    0x00000080
#define AVR32_PM_RC_RCAUSE_CPUERR_OFFSET                           7
#define AVR32_PM_RC_RCAUSE_CPUERR_SIZE                             1
#define AVR32_PM_RC_RCAUSE_EXT                                     2
#define AVR32_PM_RC_RCAUSE_EXT_MASK                       0x00000004
#define AVR32_PM_RC_RCAUSE_EXT_OFFSET                              2
#define AVR32_PM_RC_RCAUSE_EXT_SIZE                                1
#define AVR32_PM_RC_RCAUSE_JTAG                                    4
#define AVR32_PM_RC_RCAUSE_JTAGHARD                                9
#define AVR32_PM_RC_RCAUSE_JTAGHARD_MASK                  0x00000200
#define AVR32_PM_RC_RCAUSE_JTAGHARD_OFFSET                         9
#define AVR32_PM_RC_RCAUSE_JTAGHARD_SIZE                           1
#define AVR32_PM_RC_RCAUSE_JTAG_MASK                      0x00000010
#define AVR32_PM_RC_RCAUSE_JTAG_OFFSET                             4
#define AVR32_PM_RC_RCAUSE_JTAG_SIZE                               1
#define AVR32_PM_RC_RCAUSE_MASK                           0x000003ff
#define AVR32_PM_RC_RCAUSE_NTAE                                    5
#define AVR32_PM_RC_RCAUSE_NTAE_MASK                      0x00000020
#define AVR32_PM_RC_RCAUSE_NTAE_OFFSET                             5
#define AVR32_PM_RC_RCAUSE_NTAE_SIZE                               1
#define AVR32_PM_RC_RCAUSE_OCDRST                                  8
#define AVR32_PM_RC_RCAUSE_OCDRST_MASK                    0x00000100
#define AVR32_PM_RC_RCAUSE_OCDRST_OFFSET                           8
#define AVR32_PM_RC_RCAUSE_OCDRST_SIZE                             1
#define AVR32_PM_RC_RCAUSE_POR                                     0
#define AVR32_PM_RC_RCAUSE_POR_MASK                       0x00000001
#define AVR32_PM_RC_RCAUSE_POR_OFFSET                              0
#define AVR32_PM_RC_RCAUSE_POR_SIZE                                1
#define AVR32_PM_RC_RCAUSE_RESETVALUE                     0x00000000
#define AVR32_PM_RC_RCAUSE_SLEEP                                   6
#define AVR32_PM_RC_RCAUSE_SLEEP_MASK                     0x00000040
#define AVR32_PM_RC_RCAUSE_SLEEP_OFFSET                            6
#define AVR32_PM_RC_RCAUSE_SLEEP_SIZE                              1
#define AVR32_PM_RC_RCAUSE_WDT                                     3
#define AVR32_PM_RC_RCAUSE_WDT_MASK                       0x00000008
#define AVR32_PM_RC_RCAUSE_WDT_OFFSET                              3
#define AVR32_PM_RC_RCAUSE_WDT_SIZE                                1
#define AVR32_PM_RTC                                              17
#define AVR32_PM_RTC_MASK                                 0x00020000
#define AVR32_PM_RTC_OFFSET                                       17
#define AVR32_PM_RTC_SIZE                                          1
#define AVR32_PM_SLEEP                                             6
#define AVR32_PM_SLEEP_MASK                               0x00000040
#define AVR32_PM_SLEEP_OFFSET                                      6
#define AVR32_PM_SLEEP_SIZE                                        1
#define AVR32_PM_SLOW                                     0x00000000
#define AVR32_PM_STARTUP_0_RCOSC                          0x00000000
#define AVR32_PM_STARTUP_131072_RCOSC                     0x00000005
#define AVR32_PM_STARTUP_2048_RCOSC                       0x00000003
#define AVR32_PM_STARTUP_262144_RCOSC                     0x00000006
#define AVR32_PM_STARTUP_4096_RCOSC                       0x00000004
#define AVR32_PM_STARTUP_524288_RCOSC                     0x00000007
#define AVR32_PM_STARTUP_64_RCOSC                         0x00000001
#define AVR32_PM_STARTUP_65536_RCOSC                      0x00000004
#define AVR32_PM_STARTUP_SIZE                                      3
#define AVR32_PM_SYSTIMER                                         16
#define AVR32_PM_SYSTIMER_MASK                            0x00010000
#define AVR32_PM_SYSTIMER_OFFSET                                  16
#define AVR32_PM_SYSTIMER_SIZE                                     1
#define AVR32_PM_UTMI_CTRL                                         1
#define AVR32_PM_UTMI_CTRL_MASK                           0x00000002
#define AVR32_PM_UTMI_CTRL_OFFSET                                  1
#define AVR32_PM_UTMI_CTRL_SIZE                                    1
#define AVR32_PM_VREGCR                                   0x00000148
#define AVR32_PM_VREGCR_CALIB                                      0
#define AVR32_PM_VREGCR_CALIB_MASK                        0x00000007
#define AVR32_PM_VREGCR_CALIB_OFFSET                               0
#define AVR32_PM_VREGCR_CALIB_SIZE                                 3
#define AVR32_PM_VREGCR_FCD                                       16
#define AVR32_PM_VREGCR_FCD_MASK                          0x00010000
#define AVR32_PM_VREGCR_FCD_OFFSET                                16
#define AVR32_PM_VREGCR_FCD_SIZE                                   1
#define AVR32_PM_VREGCR_KEY                                       24
#define AVR32_PM_VREGCR_KEY_MASK                          0xff000000
#define AVR32_PM_VREGCR_KEY_OFFSET                                24
#define AVR32_PM_VREGCR_KEY_SIZE                                   8
#define AVR32_PM_VREGCR_MASK                              0xff010007
#define AVR32_PM_VREGCR_RESETVALUE                        0x00000000
#define AVR32_PM_WAKE                                             26
#define AVR32_PM_WAKE_MASK                                0x04000000
#define AVR32_PM_WAKE_OFFSET                                      26
#define AVR32_PM_WAKE_SIZE                                         1
#define AVR32_PM_WCAUSE                                   0x00000184
#define AVR32_PM_WCAUSE_EIC                                       16
#define AVR32_PM_WCAUSE_EIC_MASK                          0x00010000
#define AVR32_PM_WCAUSE_EIC_OFFSET                                16
#define AVR32_PM_WCAUSE_EIC_SIZE                                   1
#define AVR32_PM_WCAUSE_MASK                              0x00030003
#define AVR32_PM_WCAUSE_PERIPH0                                    0
#define AVR32_PM_WCAUSE_PERIPH0_MASK                      0x00000001
#define AVR32_PM_WCAUSE_PERIPH0_OFFSET                             0
#define AVR32_PM_WCAUSE_PERIPH0_SIZE                               1
#define AVR32_PM_WCAUSE_PERIPH1                                    1
#define AVR32_PM_WCAUSE_PERIPH1_MASK                      0x00000002
#define AVR32_PM_WCAUSE_PERIPH1_OFFSET                             1
#define AVR32_PM_WCAUSE_PERIPH1_SIZE                               1
#define AVR32_PM_WCAUSE_RESETVALUE                        0x00000000
#define AVR32_PM_WCAUSE_RTC                                       17
#define AVR32_PM_WCAUSE_RTC_MASK                          0x00020000
#define AVR32_PM_WCAUSE_RTC_OFFSET                                17
#define AVR32_PM_WCAUSE_RTC_SIZE                                   1
#define AVR32_PM_WDT                                               3
#define AVR32_PM_WDT_MASK                                 0x00000008
#define AVR32_PM_WDT_OFFSET                                        3
#define AVR32_PM_WDT_SIZE                                          1

#define AVR32_BGCR_KEY                                 0x00000055
#define AVR32_BOD_KEY                                  0x00000055
#define AVR32_BOD_OFF                                  0x00000000
#define AVR32_BOD_ON                                   0x00000001
#define AVR32_BOD_ON_NORESET                           0x00000002
#define AVR32_GC_DIV_CLOCK                             0x00000001
#define AVR32_GC_NO_DIV_CLOCK                          0x00000000
#define AVR32_PLL_USES_OSC0                            0x00000000
#define AVR32_PLL_USES_OSC1                            0x00000001
#define AVR32_PLL_USES_OSC2                            0x00000002
#define AVR32_PM_SMODE_DEEPSTOP                        0x00000004
#define AVR32_PM_SMODE_FROZEN                          0x00000001
#define AVR32_PM_SMODE_IDLE                            0x00000000
#define AVR32_PM_SMODE_SHUTDOWN                        0x00000006
#define AVR32_PM_SMODE_STANDBY                         0x00000002
#define AVR32_PM_SMODE_STATIC                          0x00000005
#define AVR32_PM_SMODE_STOP                            0x00000003
#define AVR32_PPCR_KEY                                 0x00000055
#define AVR32_RCCR_KEY                                 0x00000055
#define AVR32_VREGCR_KEY                               0x00000055



#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_pm_mcctrl_t {
    unsigned int                 : 7;
    unsigned int cripel          : 1;
    unsigned int                 :19;
    unsigned int osc2en          : 1;
    unsigned int osc1en          : 1;
    unsigned int osc0en          : 1;
    unsigned int mcsel           : 2;
} avr32_pm_mcctrl_t;



typedef struct avr32_pm_cksel_t {
    unsigned int pbbdiv          : 1;
    unsigned int                 : 4;
    unsigned int pbbsel          : 3;
    unsigned int pbadiv          : 1;
    unsigned int                 : 4;
    unsigned int pbasel          : 3;
    unsigned int hsbdiv          : 1;
    unsigned int                 : 4;
    unsigned int hsbsel          : 3;
    unsigned int cpudiv          : 1;
    unsigned int                 : 4;
    unsigned int cpusel          : 3;
} avr32_pm_cksel_t;



typedef struct avr32_pm_cpumask_t {
    unsigned int                 :15;
    unsigned int systimer        : 1;
    unsigned int                 :16;
} avr32_pm_cpumask_t;



typedef struct avr32_pm_pll_t {
    unsigned int plltest         : 1;
    unsigned int plliotesten     : 1;
    unsigned int pllcount        : 6;
    unsigned int                 : 2;
    unsigned int pllmul          : 6;
    unsigned int                 : 2;
    unsigned int plldiv          : 6;
    unsigned int pllbpl          : 1;
    unsigned int                 : 1;
    unsigned int pllopt          : 3;
    unsigned int pllosc          : 2;
    unsigned int pllen           : 1;
} avr32_pm_pll_t;



typedef struct avr32_pm_oscctrl_t {
    unsigned int                 :21;
    unsigned int startup         : 3;
    unsigned int                 : 4;
    unsigned int mode            : 4;
} avr32_pm_oscctrl_t;



typedef struct avr32_pm_oscctrl32_t {
    unsigned int                 :13;
    unsigned int startup         : 3;
    unsigned int                 : 5;
    unsigned int mode            : 3;
    unsigned int                 : 7;
    unsigned int osc32en         : 1;
} avr32_pm_oscctrl32_t;



typedef struct avr32_pm_ier_t {
    unsigned int                 : 3;
    unsigned int perrdy          : 1;
    unsigned int boddet          : 1;
    unsigned int wake            : 1;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 5;
    unsigned int lock2lost       : 1;
    unsigned int lock1lost       : 1;
    unsigned int lock0lost       : 1;
    unsigned int                 : 5;
    unsigned int lock2           : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
    unsigned int osc32rdy        : 1;
    unsigned int                 : 4;
    unsigned int osc2rdy         : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_pm_ier_t;



typedef struct avr32_pm_idr_t {
    unsigned int                 : 3;
    unsigned int perrdy          : 1;
    unsigned int boddet          : 1;
    unsigned int wake            : 1;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 5;
    unsigned int lock2lost       : 1;
    unsigned int lock1lost       : 1;
    unsigned int lock0lost       : 1;
    unsigned int                 : 5;
    unsigned int lock2           : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
    unsigned int osc32rdy        : 1;
    unsigned int                 : 4;
    unsigned int osc2rdy         : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_pm_idr_t;



typedef struct avr32_pm_imr_t {
    unsigned int                 : 3;
    unsigned int perrdy          : 1;
    unsigned int boddet          : 1;
    unsigned int wake            : 1;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 5;
    unsigned int lock2lost       : 1;
    unsigned int lock1lost       : 1;
    unsigned int lock0lost       : 1;
    unsigned int                 : 5;
    unsigned int lock2           : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
    unsigned int osc32rdy        : 1;
    unsigned int                 : 4;
    unsigned int osc2rdy         : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_pm_imr_t;



typedef struct avr32_pm_isr_t {
    unsigned int                 : 3;
    unsigned int perrdy          : 1;
    unsigned int boddet          : 1;
    unsigned int wake            : 1;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 5;
    unsigned int lock2lost       : 1;
    unsigned int lock1lost       : 1;
    unsigned int lock0lost       : 1;
    unsigned int                 : 5;
    unsigned int lock2           : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
    unsigned int osc32rdy        : 1;
    unsigned int                 : 4;
    unsigned int osc2rdy         : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_pm_isr_t;



typedef struct avr32_pm_icr_t {
    unsigned int                 : 3;
    unsigned int perrdy          : 1;
    unsigned int boddet          : 1;
    unsigned int wake            : 1;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 5;
    unsigned int lock2lost       : 1;
    unsigned int lock1lost       : 1;
    unsigned int lock0lost       : 1;
    unsigned int                 : 5;
    unsigned int lock2           : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
    unsigned int osc32rdy        : 1;
    unsigned int                 : 4;
    unsigned int osc2rdy         : 1;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_pm_icr_t;



typedef struct avr32_pm_poscsr_t {
    unsigned int                 : 3;
    unsigned int perrdy          : 1;
    unsigned int boddet          : 1;
    unsigned int wake            : 1;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 6;
    unsigned int lock1lost       : 1;
    unsigned int lock0lost       : 1;
    unsigned int                 : 6;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
    unsigned int osc32rdy        : 1;
    unsigned int                 : 5;
    unsigned int osc1rdy         : 1;
    unsigned int osc0rdy         : 1;
} avr32_pm_poscsr_t;



typedef struct avr32_pm_gcctrl_t {
    unsigned int                 : 8;
    unsigned int div             : 8;
    unsigned int                 : 4;
    unsigned int oscsel          : 4;
    unsigned int                 : 6;
    unsigned int diven           : 1;
    unsigned int cen             : 1;
} avr32_pm_gcctrl_t;



typedef struct avr32_pm_rccr_t {
    unsigned int key             : 8;
    unsigned int                 : 7;
    unsigned int fcd             : 1;
    unsigned int                 : 6;
    unsigned int calib           :10;
} avr32_pm_rccr_t;



typedef struct avr32_pm_bgcr_t {
    unsigned int key             : 8;
    unsigned int                 : 7;
    unsigned int fcd             : 1;
    unsigned int                 :13;
    unsigned int calib           : 3;
} avr32_pm_bgcr_t;



typedef struct avr32_pm_vregcr_t {
    unsigned int key             : 8;
    unsigned int                 : 7;
    unsigned int fcd             : 1;
    unsigned int                 :13;
    unsigned int calib           : 3;
} avr32_pm_vregcr_t;



typedef struct avr32_pm_bod_t {
    unsigned int key             : 8;
    unsigned int                 : 7;
    unsigned int fcd             : 1;
    unsigned int                 : 6;
    unsigned int ctrl            : 2;
    unsigned int                 : 1;
    unsigned int hyst            : 1;
    unsigned int level           : 6;
} avr32_pm_bod_t;



typedef struct avr32_pm_ppcr_t {
    unsigned int key             : 8;
    unsigned int                 :22;
    unsigned int utmi_ctrl       : 1;
    unsigned int ebi_volt        : 1;
} avr32_pm_ppcr_t;



typedef struct avr32_pm_rc_rcause_t {
    unsigned int                 :22;
    unsigned int jtaghard        : 1;
    unsigned int ocdrst          : 1;
    unsigned int cpuerr          : 1;
    unsigned int sleep           : 1;
    unsigned int ntae            : 1;
    unsigned int jtag            : 1;
    unsigned int wdt             : 1;
    unsigned int ext             : 1;
    unsigned int bod             : 1;
    unsigned int por             : 1;
} avr32_pm_rc_rcause_t;



typedef struct avr32_pm_wcause_t {
    unsigned int                 :14;
    unsigned int rtc             : 1;
    unsigned int eic             : 1;
    unsigned int                 :14;
    unsigned int periph1         : 1;
    unsigned int periph0         : 1;
} avr32_pm_wcause_t;



typedef struct avr32_pm_t {
  union {
          unsigned long                  mcctrl    ;//0x0000
          avr32_pm_mcctrl_t              MCCTRL    ;
  };
  union {
          unsigned long                  cksel     ;//0x0004
          avr32_pm_cksel_t               CKSEL     ;
  };
  union {
          unsigned long                  cpumask   ;//0x0008
          avr32_pm_cpumask_t             CPUMASK   ;
  };
          unsigned long                  hsbmask   ;//0x000c
          unsigned long                  pbamask   ;//0x0010
          unsigned long                  pbbmask   ;//0x0014
          unsigned long                  pbadivmask;//0x0018
          unsigned long                  pbbdivmask;//0x001c
          unsigned int                   :32       ;//0x0020
          unsigned int                   :32       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
  union {
          unsigned long                  pll       [AVR32_PM_PLL_NUM];//0x0040
          avr32_pm_pll_t                 PLL       [AVR32_PM_PLL_NUM];
  };
    unsigned long                        pll_reserved[8-AVR32_PM_PLL_NUM]; //Padding
          unsigned int                   :32       ;//0x0060
          unsigned int                   :32       ;//0x0064
          unsigned int                   :32       ;//0x0068
          unsigned int                   :32       ;//0x006c
          unsigned int                   :32       ;//0x0070
          unsigned int                   :32       ;//0x0074
          unsigned int                   :32       ;//0x0078
          unsigned int                   :32       ;//0x007c
  union {
          unsigned long                  oscctrl   [AVR32_PM_OSC_NUM];//0x0080
          avr32_pm_oscctrl_t             OSCCTRL   [AVR32_PM_OSC_NUM];
  };
    unsigned long                        oscctrl_reserved[8-AVR32_PM_OSC_NUM]; //Padding
  union {
          unsigned long                  oscctrl32 ;//0x00a0
          avr32_pm_oscctrl32_t           OSCCTRL32 ;
  };
          unsigned int                   :32       ;//0x00a4
          unsigned int                   :32       ;//0x00a8
          unsigned int                   :32       ;//0x00ac
          unsigned int                   :32       ;//0x00b0
          unsigned int                   :32       ;//0x00b4
          unsigned int                   :32       ;//0x00b8
          unsigned int                   :32       ;//0x00bc
  union {
          unsigned long                  ier       ;//0x00c0
          avr32_pm_ier_t                 IER       ;
  };
  union {
          unsigned long                  idr       ;//0x00c4
          avr32_pm_idr_t                 IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x00c8
    const avr32_pm_imr_t                 IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x00cc
    const avr32_pm_isr_t                 ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x00d0
          avr32_pm_icr_t                 ICR       ;
  };
  union {
          unsigned long                  poscsr    ;//0x00d4
          avr32_pm_poscsr_t              POSCSR    ;
  };
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
  union {
          unsigned long                  gcctrl    [AVR32_PM_GCLK_NUM];//0x0100
          avr32_pm_gcctrl_t              GCCTRL    [AVR32_PM_GCLK_NUM];
  };
    unsigned long                        gcctrl_reserved[8-AVR32_PM_GCLK_NUM]; //Padding
          unsigned int                   :32       ;//0x0120
          unsigned int                   :32       ;//0x0124
          unsigned int                   :32       ;//0x0128
          unsigned int                   :32       ;//0x012c
          unsigned int                   :32       ;//0x0130
          unsigned int                   :32       ;//0x0134
          unsigned int                   :32       ;//0x0138
          unsigned int                   :32       ;//0x013c
  union {
          unsigned long                  rccr      ;//0x0140
          avr32_pm_rccr_t                RCCR      ;
  };
  union {
          unsigned long                  bgcr      ;//0x0144
          avr32_pm_bgcr_t                BGCR      ;
  };
  union {
          unsigned long                  vregcr    ;//0x0148
          avr32_pm_vregcr_t              VREGCR    ;
  };
  union {
          unsigned long                  bod       ;//0x014c
          avr32_pm_bod_t                 BOD       ;
  };
  union {
          unsigned long                  ppcr      ;//0x0150
          avr32_pm_ppcr_t                PPCR      ;
  };
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
  union {
    const unsigned long                  rc_rcause ;//0x0180
    const avr32_pm_rc_rcause_t           RC_RCAUSE ;
  };
  union {
          unsigned long                  wcause    ;//0x0184
          avr32_pm_wcause_t              WCAUSE    ;
  };
          unsigned long                  awen      ;//0x0188
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
          unsigned long                  gplp      [8];//0x01c0
} avr32_pm_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_PM_300_H_INCLUDED*/
#endif

