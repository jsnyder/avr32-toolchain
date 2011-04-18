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
#ifndef AVR32_PM_100_H_INCLUDED
#define AVR32_PM_100_H_INCLUDED

#define AVR32_PM_H_VERSION 100

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


#define AVR32_PM_CEN                                               2
#define AVR32_PM_CEN_MASK                                 0x00000004
#define AVR32_PM_CEN_OFFSET                                        2
#define AVR32_PM_CEN_SIZE                                          1
#define AVR32_PM_CKRDY                                             5
#define AVR32_PM_CKRDY_MASK                               0x00000020
#define AVR32_PM_CKRDY_OFFSET                                      5
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
#define AVR32_PM_CLKMASK                                  0x00000008
#define AVR32_PM_CPUDIV                                            7
#define AVR32_PM_CPUDIV_MASK                              0x00000080
#define AVR32_PM_CPUDIV_OFFSET                                     7
#define AVR32_PM_CPUDIV_SIZE                                       1
#define AVR32_PM_CPUMASK                                  0x00000008
#define AVR32_PM_CPUSEL                                            0
#define AVR32_PM_CPUSEL_MASK                              0x00000007
#define AVR32_PM_CPUSEL_OFFSET                                     0
#define AVR32_PM_CPUSEL_SIZE                                       3
#define AVR32_PM_DIV                                               8
#define AVR32_PM_DIVEN                                             4
#define AVR32_PM_DIVEN_MASK                               0x00000010
#define AVR32_PM_DIVEN_OFFSET                                      4
#define AVR32_PM_DIVEN_SIZE                                        1
#define AVR32_PM_DIV_MASK                                 0x0000ff00
#define AVR32_PM_DIV_OFFSET                                        8
#define AVR32_PM_DIV_SIZE                                          8
#define AVR32_PM_EXT                                               2
#define AVR32_PM_EXT_MASK                                 0x00000004
#define AVR32_PM_EXT_OFFSET                                        2
#define AVR32_PM_EXT_SIZE                                          1
#define AVR32_PM_GCCTRL0                                  0x00000060
#define AVR32_PM_GCCTRL0_CEN                                       2
#define AVR32_PM_GCCTRL0_CEN_MASK                         0x00000004
#define AVR32_PM_GCCTRL0_CEN_OFFSET                                2
#define AVR32_PM_GCCTRL0_CEN_SIZE                                  1
#define AVR32_PM_GCCTRL0_DIV                                       8
#define AVR32_PM_GCCTRL0_DIVEN                                     4
#define AVR32_PM_GCCTRL0_DIVEN_MASK                       0x00000010
#define AVR32_PM_GCCTRL0_DIVEN_OFFSET                              4
#define AVR32_PM_GCCTRL0_DIVEN_SIZE                                1
#define AVR32_PM_GCCTRL0_DIV_MASK                         0x0000ff00
#define AVR32_PM_GCCTRL0_DIV_OFFSET                                8
#define AVR32_PM_GCCTRL0_DIV_SIZE                                  8
#define AVR32_PM_GCCTRL0_OSCSEL                                    0
#define AVR32_PM_GCCTRL0_OSCSEL_MASK                      0x00000001
#define AVR32_PM_GCCTRL0_OSCSEL_OFFSET                             0
#define AVR32_PM_GCCTRL0_OSCSEL_SIZE                               1
#define AVR32_PM_GCCTRL0_PLLSEL                                    1
#define AVR32_PM_GCCTRL0_PLLSEL_MASK                      0x00000002
#define AVR32_PM_GCCTRL0_PLLSEL_OFFSET                             1
#define AVR32_PM_GCCTRL0_PLLSEL_SIZE                               1
#define AVR32_PM_GCCTRL1                                  0x00000064
#define AVR32_PM_GCCTRL1_CEN                                       2
#define AVR32_PM_GCCTRL1_CEN_MASK                         0x00000004
#define AVR32_PM_GCCTRL1_CEN_OFFSET                                2
#define AVR32_PM_GCCTRL1_CEN_SIZE                                  1
#define AVR32_PM_GCCTRL1_DIV                                       8
#define AVR32_PM_GCCTRL1_DIVEN                                     4
#define AVR32_PM_GCCTRL1_DIVEN_MASK                       0x00000010
#define AVR32_PM_GCCTRL1_DIVEN_OFFSET                              4
#define AVR32_PM_GCCTRL1_DIVEN_SIZE                                1
#define AVR32_PM_GCCTRL1_DIV_MASK                         0x0000ff00
#define AVR32_PM_GCCTRL1_DIV_OFFSET                                8
#define AVR32_PM_GCCTRL1_DIV_SIZE                                  8
#define AVR32_PM_GCCTRL1_OSCSEL                                    0
#define AVR32_PM_GCCTRL1_OSCSEL_MASK                      0x00000001
#define AVR32_PM_GCCTRL1_OSCSEL_OFFSET                             0
#define AVR32_PM_GCCTRL1_OSCSEL_SIZE                               1
#define AVR32_PM_GCCTRL1_PLLSEL                                    1
#define AVR32_PM_GCCTRL1_PLLSEL_MASK                      0x00000002
#define AVR32_PM_GCCTRL1_PLLSEL_OFFSET                             1
#define AVR32_PM_GCCTRL1_PLLSEL_SIZE                               1
#define AVR32_PM_GCCTRL2                                  0x00000068
#define AVR32_PM_GCCTRL2_CEN                                       2
#define AVR32_PM_GCCTRL2_CEN_MASK                         0x00000004
#define AVR32_PM_GCCTRL2_CEN_OFFSET                                2
#define AVR32_PM_GCCTRL2_CEN_SIZE                                  1
#define AVR32_PM_GCCTRL2_DIV                                       8
#define AVR32_PM_GCCTRL2_DIVEN                                     4
#define AVR32_PM_GCCTRL2_DIVEN_MASK                       0x00000010
#define AVR32_PM_GCCTRL2_DIVEN_OFFSET                              4
#define AVR32_PM_GCCTRL2_DIVEN_SIZE                                1
#define AVR32_PM_GCCTRL2_DIV_MASK                         0x0000ff00
#define AVR32_PM_GCCTRL2_DIV_OFFSET                                8
#define AVR32_PM_GCCTRL2_DIV_SIZE                                  8
#define AVR32_PM_GCCTRL2_OSCSEL                                    0
#define AVR32_PM_GCCTRL2_OSCSEL_MASK                      0x00000001
#define AVR32_PM_GCCTRL2_OSCSEL_OFFSET                             0
#define AVR32_PM_GCCTRL2_OSCSEL_SIZE                               1
#define AVR32_PM_GCCTRL2_PLLSEL                                    1
#define AVR32_PM_GCCTRL2_PLLSEL_MASK                      0x00000002
#define AVR32_PM_GCCTRL2_PLLSEL_OFFSET                             1
#define AVR32_PM_GCCTRL2_PLLSEL_SIZE                               1
#define AVR32_PM_GCCTRL3                                  0x0000006c
#define AVR32_PM_GCCTRL3_CEN                                       2
#define AVR32_PM_GCCTRL3_CEN_MASK                         0x00000004
#define AVR32_PM_GCCTRL3_CEN_OFFSET                                2
#define AVR32_PM_GCCTRL3_CEN_SIZE                                  1
#define AVR32_PM_GCCTRL3_DIV                                       8
#define AVR32_PM_GCCTRL3_DIVEN                                     4
#define AVR32_PM_GCCTRL3_DIVEN_MASK                       0x00000010
#define AVR32_PM_GCCTRL3_DIVEN_OFFSET                              4
#define AVR32_PM_GCCTRL3_DIVEN_SIZE                                1
#define AVR32_PM_GCCTRL3_DIV_MASK                         0x0000ff00
#define AVR32_PM_GCCTRL3_DIV_OFFSET                                8
#define AVR32_PM_GCCTRL3_DIV_SIZE                                  8
#define AVR32_PM_GCCTRL3_OSCSEL                                    0
#define AVR32_PM_GCCTRL3_OSCSEL_MASK                      0x00000001
#define AVR32_PM_GCCTRL3_OSCSEL_OFFSET                             0
#define AVR32_PM_GCCTRL3_OSCSEL_SIZE                               1
#define AVR32_PM_GCCTRL3_PLLSEL                                    1
#define AVR32_PM_GCCTRL3_PLLSEL_MASK                      0x00000002
#define AVR32_PM_GCCTRL3_PLLSEL_OFFSET                             1
#define AVR32_PM_GCCTRL3_PLLSEL_SIZE                               1
#define AVR32_PM_GCCTRL4                                  0x00000070
#define AVR32_PM_GCCTRL4_CEN                                       2
#define AVR32_PM_GCCTRL4_CEN_MASK                         0x00000004
#define AVR32_PM_GCCTRL4_CEN_OFFSET                                2
#define AVR32_PM_GCCTRL4_CEN_SIZE                                  1
#define AVR32_PM_GCCTRL4_DIV                                       8
#define AVR32_PM_GCCTRL4_DIVEN                                     4
#define AVR32_PM_GCCTRL4_DIVEN_MASK                       0x00000010
#define AVR32_PM_GCCTRL4_DIVEN_OFFSET                              4
#define AVR32_PM_GCCTRL4_DIVEN_SIZE                                1
#define AVR32_PM_GCCTRL4_DIV_MASK                         0x0000ff00
#define AVR32_PM_GCCTRL4_DIV_OFFSET                                8
#define AVR32_PM_GCCTRL4_DIV_SIZE                                  8
#define AVR32_PM_GCCTRL4_OSCSEL                                    0
#define AVR32_PM_GCCTRL4_OSCSEL_MASK                      0x00000001
#define AVR32_PM_GCCTRL4_OSCSEL_OFFSET                             0
#define AVR32_PM_GCCTRL4_OSCSEL_SIZE                               1
#define AVR32_PM_GCCTRL4_PLLSEL                                    1
#define AVR32_PM_GCCTRL4_PLLSEL_MASK                      0x00000002
#define AVR32_PM_GCCTRL4_PLLSEL_OFFSET                             1
#define AVR32_PM_GCCTRL4_PLLSEL_SIZE                               1
#define AVR32_PM_GCCTRL5                                  0x00000074
#define AVR32_PM_GCCTRL5_CEN                                       2
#define AVR32_PM_GCCTRL5_CEN_MASK                         0x00000004
#define AVR32_PM_GCCTRL5_CEN_OFFSET                                2
#define AVR32_PM_GCCTRL5_CEN_SIZE                                  1
#define AVR32_PM_GCCTRL5_DIV                                       8
#define AVR32_PM_GCCTRL5_DIVEN                                     4
#define AVR32_PM_GCCTRL5_DIVEN_MASK                       0x00000010
#define AVR32_PM_GCCTRL5_DIVEN_OFFSET                              4
#define AVR32_PM_GCCTRL5_DIVEN_SIZE                                1
#define AVR32_PM_GCCTRL5_DIV_MASK                         0x0000ff00
#define AVR32_PM_GCCTRL5_DIV_OFFSET                                8
#define AVR32_PM_GCCTRL5_DIV_SIZE                                  8
#define AVR32_PM_GCCTRL5_OSCSEL                                    0
#define AVR32_PM_GCCTRL5_OSCSEL_MASK                      0x00000001
#define AVR32_PM_GCCTRL5_OSCSEL_OFFSET                             0
#define AVR32_PM_GCCTRL5_OSCSEL_SIZE                               1
#define AVR32_PM_GCCTRL5_PLLSEL                                    1
#define AVR32_PM_GCCTRL5_PLLSEL_MASK                      0x00000002
#define AVR32_PM_GCCTRL5_PLLSEL_OFFSET                             1
#define AVR32_PM_GCCTRL5_PLLSEL_SIZE                               1
#define AVR32_PM_GCCTRL6                                  0x00000078
#define AVR32_PM_GCCTRL6_CEN                                       2
#define AVR32_PM_GCCTRL6_CEN_MASK                         0x00000004
#define AVR32_PM_GCCTRL6_CEN_OFFSET                                2
#define AVR32_PM_GCCTRL6_CEN_SIZE                                  1
#define AVR32_PM_GCCTRL6_DIV                                       8
#define AVR32_PM_GCCTRL6_DIVEN                                     4
#define AVR32_PM_GCCTRL6_DIVEN_MASK                       0x00000010
#define AVR32_PM_GCCTRL6_DIVEN_OFFSET                              4
#define AVR32_PM_GCCTRL6_DIVEN_SIZE                                1
#define AVR32_PM_GCCTRL6_DIV_MASK                         0x0000ff00
#define AVR32_PM_GCCTRL6_DIV_OFFSET                                8
#define AVR32_PM_GCCTRL6_DIV_SIZE                                  8
#define AVR32_PM_GCCTRL6_OSCSEL                                    0
#define AVR32_PM_GCCTRL6_OSCSEL_MASK                      0x00000001
#define AVR32_PM_GCCTRL6_OSCSEL_OFFSET                             0
#define AVR32_PM_GCCTRL6_OSCSEL_SIZE                               1
#define AVR32_PM_GCCTRL6_PLLSEL                                    1
#define AVR32_PM_GCCTRL6_PLLSEL_MASK                      0x00000002
#define AVR32_PM_GCCTRL6_PLLSEL_OFFSET                             1
#define AVR32_PM_GCCTRL6_PLLSEL_SIZE                               1
#define AVR32_PM_GCCTRL7                                  0x0000007c
#define AVR32_PM_GCCTRL7_CEN                                       2
#define AVR32_PM_GCCTRL7_CEN_MASK                         0x00000004
#define AVR32_PM_GCCTRL7_CEN_OFFSET                                2
#define AVR32_PM_GCCTRL7_CEN_SIZE                                  1
#define AVR32_PM_GCCTRL7_DIV                                       8
#define AVR32_PM_GCCTRL7_DIVEN                                     4
#define AVR32_PM_GCCTRL7_DIVEN_MASK                       0x00000010
#define AVR32_PM_GCCTRL7_DIVEN_OFFSET                              4
#define AVR32_PM_GCCTRL7_DIVEN_SIZE                                1
#define AVR32_PM_GCCTRL7_DIV_MASK                         0x0000ff00
#define AVR32_PM_GCCTRL7_DIV_OFFSET                                8
#define AVR32_PM_GCCTRL7_DIV_SIZE                                  8
#define AVR32_PM_GCCTRL7_OSCSEL                                    0
#define AVR32_PM_GCCTRL7_OSCSEL_MASK                      0x00000001
#define AVR32_PM_GCCTRL7_OSCSEL_OFFSET                             0
#define AVR32_PM_GCCTRL7_OSCSEL_SIZE                               1
#define AVR32_PM_GCCTRL7_PLLSEL                                    1
#define AVR32_PM_GCCTRL7_PLLSEL_MASK                      0x00000002
#define AVR32_PM_GCCTRL7_PLLSEL_OFFSET                             1
#define AVR32_PM_GCCTRL7_PLLSEL_SIZE                               1
#define AVR32_PM_HSBDIV                                           15
#define AVR32_PM_HSBDIV_MASK                              0x00008000
#define AVR32_PM_HSBDIV_OFFSET                                    15
#define AVR32_PM_HSBDIV_SIZE                                       1
#define AVR32_PM_HSBMASK                                  0x0000000c
#define AVR32_PM_HSBSEL                                            8
#define AVR32_PM_HSBSEL_MASK                              0x00000700
#define AVR32_PM_HSBSEL_OFFSET                                     8
#define AVR32_PM_HSBSEL_SIZE                                       3
#define AVR32_PM_ICR                                      0x00000050
#define AVR32_PM_ICR_CKRDY                                         5
#define AVR32_PM_ICR_CKRDY_MASK                           0x00000020
#define AVR32_PM_ICR_CKRDY_OFFSET                                  5
#define AVR32_PM_ICR_CKRDY_SIZE                                    1
#define AVR32_PM_ICR_LOCK0                                         0
#define AVR32_PM_ICR_LOCK0_MASK                           0x00000001
#define AVR32_PM_ICR_LOCK0_OFFSET                                  0
#define AVR32_PM_ICR_LOCK0_SIZE                                    1
#define AVR32_PM_ICR_LOCK1                                         1
#define AVR32_PM_ICR_LOCK1_MASK                           0x00000002
#define AVR32_PM_ICR_LOCK1_OFFSET                                  1
#define AVR32_PM_ICR_LOCK1_SIZE                                    1
#define AVR32_PM_ICR_MSKRDY                                        6
#define AVR32_PM_ICR_MSKRDY_MASK                          0x00000040
#define AVR32_PM_ICR_MSKRDY_OFFSET                                 6
#define AVR32_PM_ICR_MSKRDY_SIZE                                   1
#define AVR32_PM_ICR_WAKE                                          2
#define AVR32_PM_ICR_WAKE_MASK                            0x00000004
#define AVR32_PM_ICR_WAKE_OFFSET                                   2
#define AVR32_PM_ICR_WAKE_SIZE                                     1
#define AVR32_PM_IDR                                      0x00000044
#define AVR32_PM_IDR_CKRDY                                         5
#define AVR32_PM_IDR_CKRDY_MASK                           0x00000020
#define AVR32_PM_IDR_CKRDY_OFFSET                                  5
#define AVR32_PM_IDR_CKRDY_SIZE                                    1
#define AVR32_PM_IDR_LOCK0                                         0
#define AVR32_PM_IDR_LOCK0_MASK                           0x00000001
#define AVR32_PM_IDR_LOCK0_OFFSET                                  0
#define AVR32_PM_IDR_LOCK0_SIZE                                    1
#define AVR32_PM_IDR_LOCK1                                         1
#define AVR32_PM_IDR_LOCK1_MASK                           0x00000002
#define AVR32_PM_IDR_LOCK1_OFFSET                                  1
#define AVR32_PM_IDR_LOCK1_SIZE                                    1
#define AVR32_PM_IDR_MSKRDY                                        6
#define AVR32_PM_IDR_MSKRDY_MASK                          0x00000040
#define AVR32_PM_IDR_MSKRDY_OFFSET                                 6
#define AVR32_PM_IDR_MSKRDY_SIZE                                   1
#define AVR32_PM_IDR_WAKE                                          2
#define AVR32_PM_IDR_WAKE_MASK                            0x00000004
#define AVR32_PM_IDR_WAKE_OFFSET                                   2
#define AVR32_PM_IDR_WAKE_SIZE                                     1
#define AVR32_PM_IER                                      0x00000040
#define AVR32_PM_IER_CKRDY                                         5
#define AVR32_PM_IER_CKRDY_MASK                           0x00000020
#define AVR32_PM_IER_CKRDY_OFFSET                                  5
#define AVR32_PM_IER_CKRDY_SIZE                                    1
#define AVR32_PM_IER_LOCK0                                         0
#define AVR32_PM_IER_LOCK0_MASK                           0x00000001
#define AVR32_PM_IER_LOCK0_OFFSET                                  0
#define AVR32_PM_IER_LOCK0_SIZE                                    1
#define AVR32_PM_IER_LOCK1                                         1
#define AVR32_PM_IER_LOCK1_MASK                           0x00000002
#define AVR32_PM_IER_LOCK1_OFFSET                                  1
#define AVR32_PM_IER_LOCK1_SIZE                                    1
#define AVR32_PM_IER_MSKRDY                                        6
#define AVR32_PM_IER_MSKRDY_MASK                          0x00000040
#define AVR32_PM_IER_MSKRDY_OFFSET                                 6
#define AVR32_PM_IER_MSKRDY_SIZE                                   1
#define AVR32_PM_IER_WAKE                                          2
#define AVR32_PM_IER_WAKE_MASK                            0x00000004
#define AVR32_PM_IER_WAKE_OFFSET                                   2
#define AVR32_PM_IER_WAKE_SIZE                                     1
#define AVR32_PM_IMR                                      0x00000048
#define AVR32_PM_IMR_CKRDY                                         5
#define AVR32_PM_IMR_CKRDY_MASK                           0x00000020
#define AVR32_PM_IMR_CKRDY_OFFSET                                  5
#define AVR32_PM_IMR_CKRDY_SIZE                                    1
#define AVR32_PM_IMR_LOCK0                                         0
#define AVR32_PM_IMR_LOCK0_MASK                           0x00000001
#define AVR32_PM_IMR_LOCK0_OFFSET                                  0
#define AVR32_PM_IMR_LOCK0_SIZE                                    1
#define AVR32_PM_IMR_LOCK1                                         1
#define AVR32_PM_IMR_LOCK1_MASK                           0x00000002
#define AVR32_PM_IMR_LOCK1_OFFSET                                  1
#define AVR32_PM_IMR_LOCK1_SIZE                                    1
#define AVR32_PM_IMR_MSKRDY                                        6
#define AVR32_PM_IMR_MSKRDY_MASK                          0x00000040
#define AVR32_PM_IMR_MSKRDY_OFFSET                                 6
#define AVR32_PM_IMR_MSKRDY_SIZE                                   1
#define AVR32_PM_IMR_WAKE                                          2
#define AVR32_PM_IMR_WAKE_MASK                            0x00000004
#define AVR32_PM_IMR_WAKE_OFFSET                                   2
#define AVR32_PM_IMR_WAKE_SIZE                                     1
#define AVR32_PM_ISR                                      0x0000004c
#define AVR32_PM_ISR_CKRDY                                         5
#define AVR32_PM_ISR_CKRDY_MASK                           0x00000020
#define AVR32_PM_ISR_CKRDY_OFFSET                                  5
#define AVR32_PM_ISR_CKRDY_SIZE                                    1
#define AVR32_PM_ISR_LOCK0                                         0
#define AVR32_PM_ISR_LOCK0_MASK                           0x00000001
#define AVR32_PM_ISR_LOCK0_OFFSET                                  0
#define AVR32_PM_ISR_LOCK0_SIZE                                    1
#define AVR32_PM_ISR_LOCK1                                         1
#define AVR32_PM_ISR_LOCK1_MASK                           0x00000002
#define AVR32_PM_ISR_LOCK1_OFFSET                                  1
#define AVR32_PM_ISR_LOCK1_SIZE                                    1
#define AVR32_PM_ISR_MSKRDY                                        6
#define AVR32_PM_ISR_MSKRDY_MASK                          0x00000040
#define AVR32_PM_ISR_MSKRDY_OFFSET                                 6
#define AVR32_PM_ISR_MSKRDY_SIZE                                   1
#define AVR32_PM_ISR_WAKE                                          2
#define AVR32_PM_ISR_WAKE_MASK                            0x00000004
#define AVR32_PM_ISR_WAKE_OFFSET                                   2
#define AVR32_PM_ISR_WAKE_SIZE                                     1
#define AVR32_PM_LOCK0                                             0
#define AVR32_PM_LOCK0_MASK                               0x00000001
#define AVR32_PM_LOCK0_OFFSET                                      0
#define AVR32_PM_LOCK0_SIZE                                        1
#define AVR32_PM_LOCK1                                             1
#define AVR32_PM_LOCK1_MASK                               0x00000002
#define AVR32_PM_LOCK1_OFFSET                                      1
#define AVR32_PM_LOCK1_SIZE                                        1
#define AVR32_PM_MCCTRL                                   0x00000000
#define AVR32_PM_MCCTRL_PLLSEL                                     1
#define AVR32_PM_MCCTRL_PLLSEL_MASK                       0x00000002
#define AVR32_PM_MCCTRL_PLLSEL_OFFSET                              1
#define AVR32_PM_MCCTRL_PLLSEL_SIZE                                1
#define AVR32_PM_MSKRDY                                            6
#define AVR32_PM_MSKRDY_MASK                              0x00000040
#define AVR32_PM_MSKRDY_OFFSET                                     6
#define AVR32_PM_MSKRDY_SIZE                                       1
#define AVR32_PM_NTAE                                              4
#define AVR32_PM_NTAE_MASK                                0x00000010
#define AVR32_PM_NTAE_OFFSET                                       4
#define AVR32_PM_NTAE_SIZE                                         1
#define AVR32_PM_OSCSEL                                            0
#define AVR32_PM_OSCSEL_MASK                              0x00000001
#define AVR32_PM_OSCSEL_OFFSET                                     0
#define AVR32_PM_OSCSEL_SIZE                                       1
#define AVR32_PM_PBADIV                                           23
#define AVR32_PM_PBADIV_MASK                              0x00800000
#define AVR32_PM_PBADIV_OFFSET                                    23
#define AVR32_PM_PBADIV_SIZE                                       1
#define AVR32_PM_PBAMASK                                  0x00000010
#define AVR32_PM_PBASEL                                           16
#define AVR32_PM_PBASEL_MASK                              0x00070000
#define AVR32_PM_PBASEL_OFFSET                                    16
#define AVR32_PM_PBASEL_SIZE                                       3
#define AVR32_PM_PBBDIV                                           31
#define AVR32_PM_PBBDIV_MASK                              0x80000000
#define AVR32_PM_PBBDIV_OFFSET                                    31
#define AVR32_PM_PBBDIV_SIZE                                       1
#define AVR32_PM_PBBMASK                                  0x00000014
#define AVR32_PM_PBBSEL                                           24
#define AVR32_PM_PBBSEL_MASK                              0x07000000
#define AVR32_PM_PBBSEL_OFFSET                                    24
#define AVR32_PM_PBBSEL_SIZE                                       3
#define AVR32_PM_PLL0                                     0x00000020
#define AVR32_PM_PLL0_PLLCOUNT                                    24
#define AVR32_PM_PLL0_PLLCOUNT_MASK                       0x3f000000
#define AVR32_PM_PLL0_PLLCOUNT_OFFSET                             24
#define AVR32_PM_PLL0_PLLCOUNT_SIZE                                6
#define AVR32_PM_PLL0_PLLDIV                                       8
#define AVR32_PM_PLL0_PLLDIV_MASK                         0x0000ff00
#define AVR32_PM_PLL0_PLLDIV_OFFSET                                8
#define AVR32_PM_PLL0_PLLDIV_SIZE                                  8
#define AVR32_PM_PLL0_PLLEN                                        0
#define AVR32_PM_PLL0_PLLEN_MASK                          0x00000001
#define AVR32_PM_PLL0_PLLEN_OFFSET                                 0
#define AVR32_PM_PLL0_PLLEN_SIZE                                   1
#define AVR32_PM_PLL0_PLLMUL                                      16
#define AVR32_PM_PLL0_PLLMUL_MASK                         0x00ff0000
#define AVR32_PM_PLL0_PLLMUL_OFFSET                               16
#define AVR32_PM_PLL0_PLLMUL_SIZE                                  8
#define AVR32_PM_PLL0_PLLOPT                                       2
#define AVR32_PM_PLL0_PLLOPT_MASK                         0x0000001c
#define AVR32_PM_PLL0_PLLOPT_OFFSET                                2
#define AVR32_PM_PLL0_PLLOPT_SIZE                                  3
#define AVR32_PM_PLL0_PLLOSC                                       1
#define AVR32_PM_PLL0_PLLOSC_MASK                         0x00000002
#define AVR32_PM_PLL0_PLLOSC_OFFSET                                1
#define AVR32_PM_PLL0_PLLOSC_SIZE                                  1
#define AVR32_PM_PLL0_PLLTEST                                     31
#define AVR32_PM_PLL0_PLLTEST_MASK                        0x80000000
#define AVR32_PM_PLL0_PLLTEST_OFFSET                              31
#define AVR32_PM_PLL0_PLLTEST_SIZE                                 1
#define AVR32_PM_PLL1                                     0x00000024
#define AVR32_PM_PLL1_PLLCOUNT                                    24
#define AVR32_PM_PLL1_PLLCOUNT_MASK                       0x3f000000
#define AVR32_PM_PLL1_PLLCOUNT_OFFSET                             24
#define AVR32_PM_PLL1_PLLCOUNT_SIZE                                6
#define AVR32_PM_PLL1_PLLDIV                                       8
#define AVR32_PM_PLL1_PLLDIV_MASK                         0x0000ff00
#define AVR32_PM_PLL1_PLLDIV_OFFSET                                8
#define AVR32_PM_PLL1_PLLDIV_SIZE                                  8
#define AVR32_PM_PLL1_PLLEN                                        0
#define AVR32_PM_PLL1_PLLEN_MASK                          0x00000001
#define AVR32_PM_PLL1_PLLEN_OFFSET                                 0
#define AVR32_PM_PLL1_PLLEN_SIZE                                   1
#define AVR32_PM_PLL1_PLLMUL                                      16
#define AVR32_PM_PLL1_PLLMUL_MASK                         0x00ff0000
#define AVR32_PM_PLL1_PLLMUL_OFFSET                               16
#define AVR32_PM_PLL1_PLLMUL_SIZE                                  8
#define AVR32_PM_PLL1_PLLOPT                                       2
#define AVR32_PM_PLL1_PLLOPT_MASK                         0x0000001c
#define AVR32_PM_PLL1_PLLOPT_OFFSET                                2
#define AVR32_PM_PLL1_PLLOPT_SIZE                                  3
#define AVR32_PM_PLL1_PLLOSC                                       1
#define AVR32_PM_PLL1_PLLOSC_MASK                         0x00000002
#define AVR32_PM_PLL1_PLLOSC_OFFSET                                1
#define AVR32_PM_PLL1_PLLOSC_SIZE                                  1
#define AVR32_PM_PLL1_PLLTEST                                     31
#define AVR32_PM_PLL1_PLLTEST_MASK                        0x80000000
#define AVR32_PM_PLL1_PLLTEST_OFFSET                              31
#define AVR32_PM_PLL1_PLLTEST_SIZE                                 1
#define AVR32_PM_PLLCOUNT                                         24
#define AVR32_PM_PLLCOUNT_MASK                            0x3f000000
#define AVR32_PM_PLLCOUNT_OFFSET                                  24
#define AVR32_PM_PLLCOUNT_SIZE                                     6
#define AVR32_PM_PLLDIV                                            8
#define AVR32_PM_PLLDIV_MASK                              0x0000ff00
#define AVR32_PM_PLLDIV_OFFSET                                     8
#define AVR32_PM_PLLDIV_SIZE                                       8
#define AVR32_PM_PLLEN                                             0
#define AVR32_PM_PLLEN_MASK                               0x00000001
#define AVR32_PM_PLLEN_OFFSET                                      0
#define AVR32_PM_PLLEN_SIZE                                        1
#define AVR32_PM_PLLMUL                                           16
#define AVR32_PM_PLLMUL_MASK                              0x00ff0000
#define AVR32_PM_PLLMUL_OFFSET                                    16
#define AVR32_PM_PLLMUL_SIZE                                       8
#define AVR32_PM_PLLOPT                                            2
#define AVR32_PM_PLLOPT_MASK                              0x0000001c
#define AVR32_PM_PLLOPT_OFFSET                                     2
#define AVR32_PM_PLLOPT_SIZE                                       3
#define AVR32_PM_PLLOSC                                            1
#define AVR32_PM_PLLOSC_MASK                              0x00000002
#define AVR32_PM_PLLOSC_OFFSET                                     1
#define AVR32_PM_PLLOSC_SIZE                                       1
#define AVR32_PM_PLLSEL                                            1
#define AVR32_PM_PLLSEL_MASK                              0x00000002
#define AVR32_PM_PLLSEL_OFFSET                                     1
#define AVR32_PM_PLLSEL_SIZE                                       1
#define AVR32_PM_PLLTEST                                          31
#define AVR32_PM_PLLTEST_MASK                             0x80000000
#define AVR32_PM_PLLTEST_OFFSET                                   31
#define AVR32_PM_PLLTEST_SIZE                                      1
#define AVR32_PM_POR                                               0
#define AVR32_PM_POR_MASK                                 0x00000001
#define AVR32_PM_POR_OFFSET                                        0
#define AVR32_PM_POR_SIZE                                          1
#define AVR32_PM_RCAUSE                                   0x000000c0
#define AVR32_PM_RCAUSE_EXT                                        2
#define AVR32_PM_RCAUSE_EXT_MASK                          0x00000004
#define AVR32_PM_RCAUSE_EXT_OFFSET                                 2
#define AVR32_PM_RCAUSE_EXT_SIZE                                   1
#define AVR32_PM_RCAUSE_NTAE                                       4
#define AVR32_PM_RCAUSE_NTAE_MASK                         0x00000010
#define AVR32_PM_RCAUSE_NTAE_OFFSET                                4
#define AVR32_PM_RCAUSE_NTAE_SIZE                                  1
#define AVR32_PM_RCAUSE_POR                                        0
#define AVR32_PM_RCAUSE_POR_MASK                          0x00000001
#define AVR32_PM_RCAUSE_POR_OFFSET                                 0
#define AVR32_PM_RCAUSE_POR_SIZE                                   1
#define AVR32_PM_RCAUSE_WDT                                        3
#define AVR32_PM_RCAUSE_WDT_MASK                          0x00000008
#define AVR32_PM_RCAUSE_WDT_OFFSET                                 3
#define AVR32_PM_RCAUSE_WDT_SIZE                                   1
#define AVR32_PM_WAKE                                              2
#define AVR32_PM_WAKE_MASK                                0x00000004
#define AVR32_PM_WAKE_OFFSET                                       2
#define AVR32_PM_WAKE_SIZE                                         1
#define AVR32_PM_WDT                                               3
#define AVR32_PM_WDT_MASK                                 0x00000008
#define AVR32_PM_WDT_OFFSET                                        3
#define AVR32_PM_WDT_SIZE                                          1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_pm_mcctrl_t {
    unsigned int                 :30;
    unsigned int pllsel          : 1;
    unsigned int                 : 1;
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


typedef struct avr32_pm_pll_t {
    unsigned int plltest         : 1;
    unsigned int                 : 1;
    unsigned int pllcount        : 6;
    unsigned int pllmul          : 8;
    unsigned int plldiv          : 8;
    unsigned int                 : 3;
    unsigned int pllopt          : 3;
    unsigned int pllosc          : 1;
    unsigned int pllen           : 1;
} avr32_pm_pll_t;

#if !defined (DEPRECATED_DISABLE)

typedef struct avr32_pm_pll0_t {
    unsigned int plltest         : 1;
    unsigned int                 : 1;
    unsigned int pllcount        : 6;
    unsigned int pllmul          : 8;
    unsigned int plldiv          : 8;
    unsigned int                 : 3;
    unsigned int pllopt          : 3;
    unsigned int pllosc          : 1;
    unsigned int pllen           : 1;
} avr32_pm_pll0_t;



typedef struct avr32_pm_pll1_t {
    unsigned int plltest         : 1;
    unsigned int                 : 1;
    unsigned int pllcount        : 6;
    unsigned int pllmul          : 8;
    unsigned int plldiv          : 8;
    unsigned int                 : 3;
    unsigned int pllopt          : 3;
    unsigned int pllosc          : 1;
    unsigned int pllen           : 1;
} avr32_pm_pll1_t;

/*#if !defined (DEPRECATED_DISABLE)*/
#endif

typedef struct avr32_pm_ier_t {
    unsigned int                 :25;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 2;
    unsigned int wake            : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
} avr32_pm_ier_t;



typedef struct avr32_pm_idr_t {
    unsigned int                 :25;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 2;
    unsigned int wake            : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
} avr32_pm_idr_t;



typedef struct avr32_pm_imr_t {
    unsigned int                 :25;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 2;
    unsigned int wake            : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
} avr32_pm_imr_t;



typedef struct avr32_pm_isr_t {
    unsigned int                 :25;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 2;
    unsigned int wake            : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
} avr32_pm_isr_t;



typedef struct avr32_pm_icr_t {
    unsigned int                 :25;
    unsigned int mskrdy          : 1;
    unsigned int ckrdy           : 1;
    unsigned int                 : 2;
    unsigned int wake            : 1;
    unsigned int lock1           : 1;
    unsigned int lock0           : 1;
} avr32_pm_icr_t;



typedef struct avr32_pm_gcctrl_t {
    unsigned int                 :16;
    unsigned int div             : 8;
    unsigned int                 : 3;
    unsigned int diven           : 1;
    unsigned int                 : 1;
    unsigned int cen             : 1;
    unsigned int pllsel          : 1;
    unsigned int oscsel          : 1;
} avr32_pm_gcctrl_t;



typedef struct avr32_pm_rcause_t {
    unsigned int                 :27;
    unsigned int ntae            : 1;
    unsigned int wdt             : 1;
    unsigned int ext             : 1;
    unsigned int                 : 1;
    unsigned int por             : 1;
} avr32_pm_rcause_t;



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
          unsigned long                  clkmask   ;//0x0008
    struct {
          unsigned long                  cpumask   ;//0x0008
          unsigned long                  hsbmask   ;//0x000c
          unsigned long                  pbamask   ;//0x0010
          unsigned long                  pbbmask   ;//0x0014
    };
  };
          unsigned int                   :32       ;//0x0018
          unsigned int                   :32       ;//0x001c
  union {
          unsigned long                  pll[2]    ;//0x0020
          avr32_pm_pll_t                 PLL[2]    ;

#if !defined (DEPRECATED_DISABLE)

       struct {
            union {
                unsigned long            pll0      ;//0x0020
                avr32_pm_pll0_t          PLL0      ;
            };
            union {
                unsigned long            pll1      ;//0x0024
                avr32_pm_pll1_t          PLL1      ;
            };
        };

/*#if !defined (DEPRECATED_DISABLE)*/
#endif
  };
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
  union {
          unsigned long                  ier       ;//0x0040
          avr32_pm_ier_t                 IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0044
          avr32_pm_idr_t                 IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0048
    const avr32_pm_imr_t                 IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x004c
    const avr32_pm_isr_t                 ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0050
          avr32_pm_icr_t                 ICR       ;
  };
          unsigned int                   :32       ;//0x0054
          unsigned int                   :32       ;//0x0058
          unsigned int                   :32       ;//0x005c
  union {
          unsigned long                  gcctrl    [8];//0x0060
          avr32_pm_gcctrl_t              GCCTRL    [8];
  };
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
  union {
    const unsigned long                  rcause    ;//0x00c0
    const avr32_pm_rcause_t              RCAUSE    ;
  };
} avr32_pm_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif


#if !defined (DEPRECATED_DISABLE)

#define AVR32_PM_CPU_MASK                                 0x00000008

#define AVR32_PM_HSB_MASK                                 0x0000000c

#define AVR32_PM_PBA_MASK                                 0x00000010

#define AVR32_PM_PBB_MASK                                 0x00000014

/*#if !defined (DEPRECATED_DISABLE)*/
#endif


/*#ifdef AVR32_PM_100_H_INCLUDED*/
#endif

