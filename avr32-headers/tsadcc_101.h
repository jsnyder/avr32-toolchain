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
#ifndef AVR32_TSADCC_101_H_INCLUDED
#define AVR32_TSADCC_101_H_INCLUDED

#define AVR32_TSADCC_H_VERSION 101

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_TSADCC_<register>
 - Bitfield mask:   AVR32_TSADCC_<register>_<bitfield>
 - Bitfield offset: AVR32_TSADCC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_TSADCC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_TSADCC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_TSADCC_<bitfield>
 - Bitfield offset: AVR32_TSADCC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_TSADCC_<bitfield>_SIZE
 - Bitfield values: AVR32_TSADCC_<bitfield>_<value name>
 - Bitfield values: AVR32_TSADCC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_TSADCC_10BIT                                    0x00000000
#define AVR32_TSADCC_8BIT                                     0x00000001
#define AVR32_TSADCC_ADC                                      0x00000000
#define AVR32_TSADCC_CDR0                                     0x00000030
#define AVR32_TSADCC_CDR0_DATA                                         0
#define AVR32_TSADCC_CDR0_DATA_MASK                           0x000003ff
#define AVR32_TSADCC_CDR0_DATA_OFFSET                                  0
#define AVR32_TSADCC_CDR0_DATA_SIZE                                   10
#define AVR32_TSADCC_CDR1                                     0x00000034
#define AVR32_TSADCC_CDR1_DATA                                         0
#define AVR32_TSADCC_CDR1_DATA_MASK                           0x000003ff
#define AVR32_TSADCC_CDR1_DATA_OFFSET                                  0
#define AVR32_TSADCC_CDR1_DATA_SIZE                                   10
#define AVR32_TSADCC_CDR2                                     0x00000038
#define AVR32_TSADCC_CDR2_DATA                                         0
#define AVR32_TSADCC_CDR2_DATA_MASK                           0x000003ff
#define AVR32_TSADCC_CDR2_DATA_OFFSET                                  0
#define AVR32_TSADCC_CDR2_DATA_SIZE                                   10
#define AVR32_TSADCC_CDR3                                     0x0000003c
#define AVR32_TSADCC_CDR3_DATA                                         0
#define AVR32_TSADCC_CDR3_DATA_MASK                           0x000003ff
#define AVR32_TSADCC_CDR3_DATA_OFFSET                                  0
#define AVR32_TSADCC_CDR3_DATA_SIZE                                   10
#define AVR32_TSADCC_CDR4                                     0x00000040
#define AVR32_TSADCC_CDR4_DATA                                         0
#define AVR32_TSADCC_CDR4_DATA_MASK                           0x000003ff
#define AVR32_TSADCC_CDR4_DATA_OFFSET                                  0
#define AVR32_TSADCC_CDR4_DATA_SIZE                                   10
#define AVR32_TSADCC_CDR5                                     0x00000044
#define AVR32_TSADCC_CDR5_DATA                                         0
#define AVR32_TSADCC_CDR5_DATA_MASK                           0x000003ff
#define AVR32_TSADCC_CDR5_DATA_OFFSET                                  0
#define AVR32_TSADCC_CDR5_DATA_SIZE                                   10
#define AVR32_TSADCC_CH0                                               0
#define AVR32_TSADCC_CH0_MASK                                 0x00000001
#define AVR32_TSADCC_CH0_OFFSET                                        0
#define AVR32_TSADCC_CH0_SIZE                                          1
#define AVR32_TSADCC_CH1                                               1
#define AVR32_TSADCC_CH1_MASK                                 0x00000002
#define AVR32_TSADCC_CH1_OFFSET                                        1
#define AVR32_TSADCC_CH1_SIZE                                          1
#define AVR32_TSADCC_CH2                                               2
#define AVR32_TSADCC_CH2_MASK                                 0x00000004
#define AVR32_TSADCC_CH2_OFFSET                                        2
#define AVR32_TSADCC_CH2_SIZE                                          1
#define AVR32_TSADCC_CH3                                               3
#define AVR32_TSADCC_CH3_MASK                                 0x00000008
#define AVR32_TSADCC_CH3_OFFSET                                        3
#define AVR32_TSADCC_CH3_SIZE                                          1
#define AVR32_TSADCC_CH4                                               4
#define AVR32_TSADCC_CH4_MASK                                 0x00000010
#define AVR32_TSADCC_CH4_OFFSET                                        4
#define AVR32_TSADCC_CH4_SIZE                                          1
#define AVR32_TSADCC_CH5                                               5
#define AVR32_TSADCC_CH5_MASK                                 0x00000020
#define AVR32_TSADCC_CH5_OFFSET                                        5
#define AVR32_TSADCC_CH5_SIZE                                          1
#define AVR32_TSADCC_CHDR                                     0x00000014
#define AVR32_TSADCC_CHDR_CH0                                          0
#define AVR32_TSADCC_CHDR_CH0_MASK                            0x00000001
#define AVR32_TSADCC_CHDR_CH0_OFFSET                                   0
#define AVR32_TSADCC_CHDR_CH0_SIZE                                     1
#define AVR32_TSADCC_CHDR_CH1                                          1
#define AVR32_TSADCC_CHDR_CH1_MASK                            0x00000002
#define AVR32_TSADCC_CHDR_CH1_OFFSET                                   1
#define AVR32_TSADCC_CHDR_CH1_SIZE                                     1
#define AVR32_TSADCC_CHDR_CH2                                          2
#define AVR32_TSADCC_CHDR_CH2_MASK                            0x00000004
#define AVR32_TSADCC_CHDR_CH2_OFFSET                                   2
#define AVR32_TSADCC_CHDR_CH2_SIZE                                     1
#define AVR32_TSADCC_CHDR_CH3                                          3
#define AVR32_TSADCC_CHDR_CH3_MASK                            0x00000008
#define AVR32_TSADCC_CHDR_CH3_OFFSET                                   3
#define AVR32_TSADCC_CHDR_CH3_SIZE                                     1
#define AVR32_TSADCC_CHDR_CH4                                          4
#define AVR32_TSADCC_CHDR_CH4_MASK                            0x00000010
#define AVR32_TSADCC_CHDR_CH4_OFFSET                                   4
#define AVR32_TSADCC_CHDR_CH4_SIZE                                     1
#define AVR32_TSADCC_CHDR_CH5                                          5
#define AVR32_TSADCC_CHDR_CH5_MASK                            0x00000020
#define AVR32_TSADCC_CHDR_CH5_OFFSET                                   5
#define AVR32_TSADCC_CHDR_CH5_SIZE                                     1
#define AVR32_TSADCC_CHER                                     0x00000010
#define AVR32_TSADCC_CHER_CH0                                          0
#define AVR32_TSADCC_CHER_CH0_MASK                            0x00000001
#define AVR32_TSADCC_CHER_CH0_OFFSET                                   0
#define AVR32_TSADCC_CHER_CH0_SIZE                                     1
#define AVR32_TSADCC_CHER_CH1                                          1
#define AVR32_TSADCC_CHER_CH1_MASK                            0x00000002
#define AVR32_TSADCC_CHER_CH1_OFFSET                                   1
#define AVR32_TSADCC_CHER_CH1_SIZE                                     1
#define AVR32_TSADCC_CHER_CH2                                          2
#define AVR32_TSADCC_CHER_CH2_MASK                            0x00000004
#define AVR32_TSADCC_CHER_CH2_OFFSET                                   2
#define AVR32_TSADCC_CHER_CH2_SIZE                                     1
#define AVR32_TSADCC_CHER_CH3                                          3
#define AVR32_TSADCC_CHER_CH3_MASK                            0x00000008
#define AVR32_TSADCC_CHER_CH3_OFFSET                                   3
#define AVR32_TSADCC_CHER_CH3_SIZE                                     1
#define AVR32_TSADCC_CHER_CH4                                          4
#define AVR32_TSADCC_CHER_CH4_MASK                            0x00000010
#define AVR32_TSADCC_CHER_CH4_OFFSET                                   4
#define AVR32_TSADCC_CHER_CH4_SIZE                                     1
#define AVR32_TSADCC_CHER_CH5                                          5
#define AVR32_TSADCC_CHER_CH5_MASK                            0x00000020
#define AVR32_TSADCC_CHER_CH5_OFFSET                                   5
#define AVR32_TSADCC_CHER_CH5_SIZE                                     1
#define AVR32_TSADCC_CHSR                                     0x00000018
#define AVR32_TSADCC_CHSR_CH0                                          0
#define AVR32_TSADCC_CHSR_CH0_MASK                            0x00000001
#define AVR32_TSADCC_CHSR_CH0_OFFSET                                   0
#define AVR32_TSADCC_CHSR_CH0_SIZE                                     1
#define AVR32_TSADCC_CHSR_CH1                                          1
#define AVR32_TSADCC_CHSR_CH1_MASK                            0x00000002
#define AVR32_TSADCC_CHSR_CH1_OFFSET                                   1
#define AVR32_TSADCC_CHSR_CH1_SIZE                                     1
#define AVR32_TSADCC_CHSR_CH2                                          2
#define AVR32_TSADCC_CHSR_CH2_MASK                            0x00000004
#define AVR32_TSADCC_CHSR_CH2_OFFSET                                   2
#define AVR32_TSADCC_CHSR_CH2_SIZE                                     1
#define AVR32_TSADCC_CHSR_CH3                                          3
#define AVR32_TSADCC_CHSR_CH3_MASK                            0x00000008
#define AVR32_TSADCC_CHSR_CH3_OFFSET                                   3
#define AVR32_TSADCC_CHSR_CH3_SIZE                                     1
#define AVR32_TSADCC_CHSR_CH4                                          4
#define AVR32_TSADCC_CHSR_CH4_MASK                            0x00000010
#define AVR32_TSADCC_CHSR_CH4_OFFSET                                   4
#define AVR32_TSADCC_CHSR_CH4_SIZE                                     1
#define AVR32_TSADCC_CHSR_CH5                                          5
#define AVR32_TSADCC_CHSR_CH5_MASK                            0x00000020
#define AVR32_TSADCC_CHSR_CH5_OFFSET                                   5
#define AVR32_TSADCC_CHSR_CH5_SIZE                                     1
#define AVR32_TSADCC_CM                                       0x00000006
#define AVR32_TSADCC_CR                                       0x00000000
#define AVR32_TSADCC_CR_START                                          1
#define AVR32_TSADCC_CR_START_MASK                            0x00000002
#define AVR32_TSADCC_CR_START_OFFSET                                   1
#define AVR32_TSADCC_CR_START_SIZE                                     1
#define AVR32_TSADCC_CR_SWRST                                          0
#define AVR32_TSADCC_CR_SWRST_MASK                            0x00000001
#define AVR32_TSADCC_CR_SWRST_OFFSET                                   0
#define AVR32_TSADCC_CR_SWRST_SIZE                                     1
#define AVR32_TSADCC_DATA                                              0
#define AVR32_TSADCC_DATA_MASK                                0x000003ff
#define AVR32_TSADCC_DATA_OFFSET                                       0
#define AVR32_TSADCC_DATA_SIZE                                        10
#define AVR32_TSADCC_DRDY                                             16
#define AVR32_TSADCC_DRDY_MASK                                0x00010000
#define AVR32_TSADCC_DRDY_OFFSET                                      16
#define AVR32_TSADCC_DRDY_SIZE                                         1
#define AVR32_TSADCC_ENDRX                                            18
#define AVR32_TSADCC_ENDRX_MASK                               0x00040000
#define AVR32_TSADCC_ENDRX_OFFSET                                     18
#define AVR32_TSADCC_ENDRX_SIZE                                        1
#define AVR32_TSADCC_EOC0                                              0
#define AVR32_TSADCC_EOC0_MASK                                0x00000001
#define AVR32_TSADCC_EOC0_OFFSET                                       0
#define AVR32_TSADCC_EOC0_SIZE                                         1
#define AVR32_TSADCC_EOC1                                              1
#define AVR32_TSADCC_EOC1_MASK                                0x00000002
#define AVR32_TSADCC_EOC1_OFFSET                                       1
#define AVR32_TSADCC_EOC1_SIZE                                         1
#define AVR32_TSADCC_EOC2                                              2
#define AVR32_TSADCC_EOC2_MASK                                0x00000004
#define AVR32_TSADCC_EOC2_OFFSET                                       2
#define AVR32_TSADCC_EOC2_SIZE                                         1
#define AVR32_TSADCC_EOC3                                              3
#define AVR32_TSADCC_EOC3_MASK                                0x00000008
#define AVR32_TSADCC_EOC3_OFFSET                                       3
#define AVR32_TSADCC_EOC3_SIZE                                         1
#define AVR32_TSADCC_EOC4                                              4
#define AVR32_TSADCC_EOC4_MASK                                0x00000010
#define AVR32_TSADCC_EOC4_OFFSET                                       4
#define AVR32_TSADCC_EOC4_SIZE                                         1
#define AVR32_TSADCC_EOC5                                              5
#define AVR32_TSADCC_EOC5_MASK                                0x00000020
#define AVR32_TSADCC_EOC5_OFFSET                                       5
#define AVR32_TSADCC_EOC5_SIZE                                         1
#define AVR32_TSADCC_ETAE                                     0x00000003
#define AVR32_TSADCC_ETFE                                     0x00000002
#define AVR32_TSADCC_ETRE                                     0x00000001
#define AVR32_TSADCC_GOVRE                                            17
#define AVR32_TSADCC_GOVRE_MASK                               0x00020000
#define AVR32_TSADCC_GOVRE_OFFSET                                     17
#define AVR32_TSADCC_GOVRE_SIZE                                        1
#define AVR32_TSADCC_IDR                                      0x00000028
#define AVR32_TSADCC_IDR_DRDY                                         16
#define AVR32_TSADCC_IDR_DRDY_MASK                            0x00010000
#define AVR32_TSADCC_IDR_DRDY_OFFSET                                  16
#define AVR32_TSADCC_IDR_DRDY_SIZE                                     1
#define AVR32_TSADCC_IDR_ENDRX                                        18
#define AVR32_TSADCC_IDR_ENDRX_MASK                           0x00040000
#define AVR32_TSADCC_IDR_ENDRX_OFFSET                                 18
#define AVR32_TSADCC_IDR_ENDRX_SIZE                                    1
#define AVR32_TSADCC_IDR_EOC0                                          0
#define AVR32_TSADCC_IDR_EOC0_MASK                            0x00000001
#define AVR32_TSADCC_IDR_EOC0_OFFSET                                   0
#define AVR32_TSADCC_IDR_EOC0_SIZE                                     1
#define AVR32_TSADCC_IDR_EOC1                                          1
#define AVR32_TSADCC_IDR_EOC1_MASK                            0x00000002
#define AVR32_TSADCC_IDR_EOC1_OFFSET                                   1
#define AVR32_TSADCC_IDR_EOC1_SIZE                                     1
#define AVR32_TSADCC_IDR_EOC2                                          2
#define AVR32_TSADCC_IDR_EOC2_MASK                            0x00000004
#define AVR32_TSADCC_IDR_EOC2_OFFSET                                   2
#define AVR32_TSADCC_IDR_EOC2_SIZE                                     1
#define AVR32_TSADCC_IDR_EOC3                                          3
#define AVR32_TSADCC_IDR_EOC3_MASK                            0x00000008
#define AVR32_TSADCC_IDR_EOC3_OFFSET                                   3
#define AVR32_TSADCC_IDR_EOC3_SIZE                                     1
#define AVR32_TSADCC_IDR_EOC4                                          4
#define AVR32_TSADCC_IDR_EOC4_MASK                            0x00000010
#define AVR32_TSADCC_IDR_EOC4_OFFSET                                   4
#define AVR32_TSADCC_IDR_EOC4_SIZE                                     1
#define AVR32_TSADCC_IDR_EOC5                                          5
#define AVR32_TSADCC_IDR_EOC5_MASK                            0x00000020
#define AVR32_TSADCC_IDR_EOC5_OFFSET                                   5
#define AVR32_TSADCC_IDR_EOC5_SIZE                                     1
#define AVR32_TSADCC_IDR_GOVRE                                        17
#define AVR32_TSADCC_IDR_GOVRE_MASK                           0x00020000
#define AVR32_TSADCC_IDR_GOVRE_OFFSET                                 17
#define AVR32_TSADCC_IDR_GOVRE_SIZE                                    1
#define AVR32_TSADCC_IDR_NOCNT                                        21
#define AVR32_TSADCC_IDR_NOCNT_MASK                           0x00200000
#define AVR32_TSADCC_IDR_NOCNT_OFFSET                                 21
#define AVR32_TSADCC_IDR_NOCNT_SIZE                                    1
#define AVR32_TSADCC_IDR_OVRE0                                         8
#define AVR32_TSADCC_IDR_OVRE0_MASK                           0x00000100
#define AVR32_TSADCC_IDR_OVRE0_OFFSET                                  8
#define AVR32_TSADCC_IDR_OVRE0_SIZE                                    1
#define AVR32_TSADCC_IDR_OVRE1                                         9
#define AVR32_TSADCC_IDR_OVRE1_MASK                           0x00000200
#define AVR32_TSADCC_IDR_OVRE1_OFFSET                                  9
#define AVR32_TSADCC_IDR_OVRE1_SIZE                                    1
#define AVR32_TSADCC_IDR_OVRE2                                        10
#define AVR32_TSADCC_IDR_OVRE2_MASK                           0x00000400
#define AVR32_TSADCC_IDR_OVRE2_OFFSET                                 10
#define AVR32_TSADCC_IDR_OVRE2_SIZE                                    1
#define AVR32_TSADCC_IDR_OVRE3                                        11
#define AVR32_TSADCC_IDR_OVRE3_MASK                           0x00000800
#define AVR32_TSADCC_IDR_OVRE3_OFFSET                                 11
#define AVR32_TSADCC_IDR_OVRE3_SIZE                                    1
#define AVR32_TSADCC_IDR_OVRE4                                        12
#define AVR32_TSADCC_IDR_OVRE4_MASK                           0x00001000
#define AVR32_TSADCC_IDR_OVRE4_OFFSET                                 12
#define AVR32_TSADCC_IDR_OVRE4_SIZE                                    1
#define AVR32_TSADCC_IDR_OVRE5                                        13
#define AVR32_TSADCC_IDR_OVRE5_MASK                           0x00002000
#define AVR32_TSADCC_IDR_OVRE5_OFFSET                                 13
#define AVR32_TSADCC_IDR_OVRE5_SIZE                                    1
#define AVR32_TSADCC_IDR_PENCNT                                       20
#define AVR32_TSADCC_IDR_PENCNT_MASK                          0x00100000
#define AVR32_TSADCC_IDR_PENCNT_OFFSET                                20
#define AVR32_TSADCC_IDR_PENCNT_SIZE                                   1
#define AVR32_TSADCC_IDR_RXBUFF                                       19
#define AVR32_TSADCC_IDR_RXBUFF_MASK                          0x00080000
#define AVR32_TSADCC_IDR_RXBUFF_OFFSET                                19
#define AVR32_TSADCC_IDR_RXBUFF_SIZE                                   1
#define AVR32_TSADCC_IER                                      0x00000024
#define AVR32_TSADCC_IER_DRDY                                         16
#define AVR32_TSADCC_IER_DRDY_MASK                            0x00010000
#define AVR32_TSADCC_IER_DRDY_OFFSET                                  16
#define AVR32_TSADCC_IER_DRDY_SIZE                                     1
#define AVR32_TSADCC_IER_ENDRX                                        18
#define AVR32_TSADCC_IER_ENDRX_MASK                           0x00040000
#define AVR32_TSADCC_IER_ENDRX_OFFSET                                 18
#define AVR32_TSADCC_IER_ENDRX_SIZE                                    1
#define AVR32_TSADCC_IER_EOC0                                          0
#define AVR32_TSADCC_IER_EOC0_MASK                            0x00000001
#define AVR32_TSADCC_IER_EOC0_OFFSET                                   0
#define AVR32_TSADCC_IER_EOC0_SIZE                                     1
#define AVR32_TSADCC_IER_EOC1                                          1
#define AVR32_TSADCC_IER_EOC1_MASK                            0x00000002
#define AVR32_TSADCC_IER_EOC1_OFFSET                                   1
#define AVR32_TSADCC_IER_EOC1_SIZE                                     1
#define AVR32_TSADCC_IER_EOC2                                          2
#define AVR32_TSADCC_IER_EOC2_MASK                            0x00000004
#define AVR32_TSADCC_IER_EOC2_OFFSET                                   2
#define AVR32_TSADCC_IER_EOC2_SIZE                                     1
#define AVR32_TSADCC_IER_EOC3                                          3
#define AVR32_TSADCC_IER_EOC3_MASK                            0x00000008
#define AVR32_TSADCC_IER_EOC3_OFFSET                                   3
#define AVR32_TSADCC_IER_EOC3_SIZE                                     1
#define AVR32_TSADCC_IER_EOC4                                          4
#define AVR32_TSADCC_IER_EOC4_MASK                            0x00000010
#define AVR32_TSADCC_IER_EOC4_OFFSET                                   4
#define AVR32_TSADCC_IER_EOC4_SIZE                                     1
#define AVR32_TSADCC_IER_EOC5                                          5
#define AVR32_TSADCC_IER_EOC5_MASK                            0x00000020
#define AVR32_TSADCC_IER_EOC5_OFFSET                                   5
#define AVR32_TSADCC_IER_EOC5_SIZE                                     1
#define AVR32_TSADCC_IER_GOVRE                                        17
#define AVR32_TSADCC_IER_GOVRE_MASK                           0x00020000
#define AVR32_TSADCC_IER_GOVRE_OFFSET                                 17
#define AVR32_TSADCC_IER_GOVRE_SIZE                                    1
#define AVR32_TSADCC_IER_NOCNT                                        21
#define AVR32_TSADCC_IER_NOCNT_MASK                           0x00200000
#define AVR32_TSADCC_IER_NOCNT_OFFSET                                 21
#define AVR32_TSADCC_IER_NOCNT_SIZE                                    1
#define AVR32_TSADCC_IER_OVRE0                                         8
#define AVR32_TSADCC_IER_OVRE0_MASK                           0x00000100
#define AVR32_TSADCC_IER_OVRE0_OFFSET                                  8
#define AVR32_TSADCC_IER_OVRE0_SIZE                                    1
#define AVR32_TSADCC_IER_OVRE1                                         9
#define AVR32_TSADCC_IER_OVRE1_MASK                           0x00000200
#define AVR32_TSADCC_IER_OVRE1_OFFSET                                  9
#define AVR32_TSADCC_IER_OVRE1_SIZE                                    1
#define AVR32_TSADCC_IER_OVRE2                                        10
#define AVR32_TSADCC_IER_OVRE2_MASK                           0x00000400
#define AVR32_TSADCC_IER_OVRE2_OFFSET                                 10
#define AVR32_TSADCC_IER_OVRE2_SIZE                                    1
#define AVR32_TSADCC_IER_OVRE3                                        11
#define AVR32_TSADCC_IER_OVRE3_MASK                           0x00000800
#define AVR32_TSADCC_IER_OVRE3_OFFSET                                 11
#define AVR32_TSADCC_IER_OVRE3_SIZE                                    1
#define AVR32_TSADCC_IER_OVRE4                                        12
#define AVR32_TSADCC_IER_OVRE4_MASK                           0x00001000
#define AVR32_TSADCC_IER_OVRE4_OFFSET                                 12
#define AVR32_TSADCC_IER_OVRE4_SIZE                                    1
#define AVR32_TSADCC_IER_OVRE5                                        13
#define AVR32_TSADCC_IER_OVRE5_MASK                           0x00002000
#define AVR32_TSADCC_IER_OVRE5_OFFSET                                 13
#define AVR32_TSADCC_IER_OVRE5_SIZE                                    1
#define AVR32_TSADCC_IER_PENCNT                                       20
#define AVR32_TSADCC_IER_PENCNT_MASK                          0x00100000
#define AVR32_TSADCC_IER_PENCNT_OFFSET                                20
#define AVR32_TSADCC_IER_PENCNT_SIZE                                   1
#define AVR32_TSADCC_IER_RXBUFF                                       19
#define AVR32_TSADCC_IER_RXBUFF_MASK                          0x00080000
#define AVR32_TSADCC_IER_RXBUFF_OFFSET                                19
#define AVR32_TSADCC_IER_RXBUFF_SIZE                                   1
#define AVR32_TSADCC_IMR                                      0x0000002c
#define AVR32_TSADCC_IMR_DRDY                                         16
#define AVR32_TSADCC_IMR_DRDY_MASK                            0x00010000
#define AVR32_TSADCC_IMR_DRDY_OFFSET                                  16
#define AVR32_TSADCC_IMR_DRDY_SIZE                                     1
#define AVR32_TSADCC_IMR_ENDRX                                        18
#define AVR32_TSADCC_IMR_ENDRX_MASK                           0x00040000
#define AVR32_TSADCC_IMR_ENDRX_OFFSET                                 18
#define AVR32_TSADCC_IMR_ENDRX_SIZE                                    1
#define AVR32_TSADCC_IMR_EOC0                                          0
#define AVR32_TSADCC_IMR_EOC0_MASK                            0x00000001
#define AVR32_TSADCC_IMR_EOC0_OFFSET                                   0
#define AVR32_TSADCC_IMR_EOC0_SIZE                                     1
#define AVR32_TSADCC_IMR_EOC1                                          1
#define AVR32_TSADCC_IMR_EOC1_MASK                            0x00000002
#define AVR32_TSADCC_IMR_EOC1_OFFSET                                   1
#define AVR32_TSADCC_IMR_EOC1_SIZE                                     1
#define AVR32_TSADCC_IMR_EOC2                                          2
#define AVR32_TSADCC_IMR_EOC2_MASK                            0x00000004
#define AVR32_TSADCC_IMR_EOC2_OFFSET                                   2
#define AVR32_TSADCC_IMR_EOC2_SIZE                                     1
#define AVR32_TSADCC_IMR_EOC3                                          3
#define AVR32_TSADCC_IMR_EOC3_MASK                            0x00000008
#define AVR32_TSADCC_IMR_EOC3_OFFSET                                   3
#define AVR32_TSADCC_IMR_EOC3_SIZE                                     1
#define AVR32_TSADCC_IMR_EOC4                                          4
#define AVR32_TSADCC_IMR_EOC4_MASK                            0x00000010
#define AVR32_TSADCC_IMR_EOC4_OFFSET                                   4
#define AVR32_TSADCC_IMR_EOC4_SIZE                                     1
#define AVR32_TSADCC_IMR_EOC5                                          5
#define AVR32_TSADCC_IMR_EOC5_MASK                            0x00000020
#define AVR32_TSADCC_IMR_EOC5_OFFSET                                   5
#define AVR32_TSADCC_IMR_EOC5_SIZE                                     1
#define AVR32_TSADCC_IMR_GOVRE                                        17
#define AVR32_TSADCC_IMR_GOVRE_MASK                           0x00020000
#define AVR32_TSADCC_IMR_GOVRE_OFFSET                                 17
#define AVR32_TSADCC_IMR_GOVRE_SIZE                                    1
#define AVR32_TSADCC_IMR_NOCNT                                        21
#define AVR32_TSADCC_IMR_NOCNT_MASK                           0x00200000
#define AVR32_TSADCC_IMR_NOCNT_OFFSET                                 21
#define AVR32_TSADCC_IMR_NOCNT_SIZE                                    1
#define AVR32_TSADCC_IMR_OVRE0                                         8
#define AVR32_TSADCC_IMR_OVRE0_MASK                           0x00000100
#define AVR32_TSADCC_IMR_OVRE0_OFFSET                                  8
#define AVR32_TSADCC_IMR_OVRE0_SIZE                                    1
#define AVR32_TSADCC_IMR_OVRE1                                         9
#define AVR32_TSADCC_IMR_OVRE1_MASK                           0x00000200
#define AVR32_TSADCC_IMR_OVRE1_OFFSET                                  9
#define AVR32_TSADCC_IMR_OVRE1_SIZE                                    1
#define AVR32_TSADCC_IMR_OVRE2                                        10
#define AVR32_TSADCC_IMR_OVRE2_MASK                           0x00000400
#define AVR32_TSADCC_IMR_OVRE2_OFFSET                                 10
#define AVR32_TSADCC_IMR_OVRE2_SIZE                                    1
#define AVR32_TSADCC_IMR_OVRE3                                        11
#define AVR32_TSADCC_IMR_OVRE3_MASK                           0x00000800
#define AVR32_TSADCC_IMR_OVRE3_OFFSET                                 11
#define AVR32_TSADCC_IMR_OVRE3_SIZE                                    1
#define AVR32_TSADCC_IMR_OVRE4                                        12
#define AVR32_TSADCC_IMR_OVRE4_MASK                           0x00001000
#define AVR32_TSADCC_IMR_OVRE4_OFFSET                                 12
#define AVR32_TSADCC_IMR_OVRE4_SIZE                                    1
#define AVR32_TSADCC_IMR_OVRE5                                        13
#define AVR32_TSADCC_IMR_OVRE5_MASK                           0x00002000
#define AVR32_TSADCC_IMR_OVRE5_OFFSET                                 13
#define AVR32_TSADCC_IMR_OVRE5_SIZE                                    1
#define AVR32_TSADCC_IMR_PENCNT                                       20
#define AVR32_TSADCC_IMR_PENCNT_MASK                          0x00100000
#define AVR32_TSADCC_IMR_PENCNT_OFFSET                                20
#define AVR32_TSADCC_IMR_PENCNT_SIZE                                   1
#define AVR32_TSADCC_IMR_RXBUFF                                       19
#define AVR32_TSADCC_IMR_RXBUFF_MASK                          0x00080000
#define AVR32_TSADCC_IMR_RXBUFF_OFFSET                                19
#define AVR32_TSADCC_IMR_RXBUFF_SIZE                                   1
#define AVR32_TSADCC_LCDR                                     0x00000020
#define AVR32_TSADCC_LCDR_LDATA                                        0
#define AVR32_TSADCC_LCDR_LDATA_MASK                          0x000003ff
#define AVR32_TSADCC_LCDR_LDATA_OFFSET                                 0
#define AVR32_TSADCC_LCDR_LDATA_SIZE                                  10
#define AVR32_TSADCC_LDATA                                             0
#define AVR32_TSADCC_LDATA_MASK                               0x000003ff
#define AVR32_TSADCC_LDATA_OFFSET                                      0
#define AVR32_TSADCC_LDATA_SIZE                                       10
#define AVR32_TSADCC_LOWRES                                            4
#define AVR32_TSADCC_LOWRES_10BIT                             0x00000000
#define AVR32_TSADCC_LOWRES_8BIT                              0x00000001
#define AVR32_TSADCC_LOWRES_MASK                              0x00000010
#define AVR32_TSADCC_LOWRES_OFFSET                                     4
#define AVR32_TSADCC_LOWRES_SIZE                                       1
#define AVR32_TSADCC_MR                                       0x00000004
#define AVR32_TSADCC_MR_LOWRES                                         4
#define AVR32_TSADCC_MR_LOWRES_10BIT                          0x00000000
#define AVR32_TSADCC_MR_LOWRES_8BIT                           0x00000001
#define AVR32_TSADCC_MR_LOWRES_MASK                           0x00000010
#define AVR32_TSADCC_MR_LOWRES_OFFSET                                  4
#define AVR32_TSADCC_MR_LOWRES_SIZE                                    1
#define AVR32_TSADCC_MR_PENDBC                                        28
#define AVR32_TSADCC_MR_PENDBC_MASK                           0xf0000000
#define AVR32_TSADCC_MR_PENDBC_OFFSET                                 28
#define AVR32_TSADCC_MR_PENDBC_SIZE                                    4
#define AVR32_TSADCC_MR_PENDET                                         6
#define AVR32_TSADCC_MR_PENDET_MASK                           0x00000040
#define AVR32_TSADCC_MR_PENDET_OFFSET                                  6
#define AVR32_TSADCC_MR_PENDET_SIZE                                    1
#define AVR32_TSADCC_MR_PRESCAL                                        8
#define AVR32_TSADCC_MR_PRESCAL_MASK                          0x00003f00
#define AVR32_TSADCC_MR_PRESCAL_OFFSET                                 8
#define AVR32_TSADCC_MR_PRESCAL_SIZE                                   6
#define AVR32_TSADCC_MR_SHTIM                                         24
#define AVR32_TSADCC_MR_SHTIM_MASK                            0x0f000000
#define AVR32_TSADCC_MR_SHTIM_OFFSET                                  24
#define AVR32_TSADCC_MR_SHTIM_SIZE                                     4
#define AVR32_TSADCC_MR_SLEEP                                          5
#define AVR32_TSADCC_MR_SLEEP_MASK                            0x00000020
#define AVR32_TSADCC_MR_SLEEP_NORM                            0x00000000
#define AVR32_TSADCC_MR_SLEEP_OFFSET                                   5
#define AVR32_TSADCC_MR_SLEEP_SIZE                                     1
#define AVR32_TSADCC_MR_SLEEP_SLEEP                           0x00000001
#define AVR32_TSADCC_MR_STARTUP                                       16
#define AVR32_TSADCC_MR_STARTUP_MASK                          0x007f0000
#define AVR32_TSADCC_MR_STARTUP_OFFSET                                16
#define AVR32_TSADCC_MR_STARTUP_SIZE                                   7
#define AVR32_TSADCC_MR_TSAMOD                                         0
#define AVR32_TSADCC_MR_TSAMOD_ADC                            0x00000000
#define AVR32_TSADCC_MR_TSAMOD_MASK                           0x00000003
#define AVR32_TSADCC_MR_TSAMOD_OFFSET                                  0
#define AVR32_TSADCC_MR_TSAMOD_SIZE                                    2
#define AVR32_TSADCC_MR_TSAMOD_TSOM                           0x00000001
#define AVR32_TSADCC_NOCNT                                            21
#define AVR32_TSADCC_NOCNT_MASK                               0x00200000
#define AVR32_TSADCC_NOCNT_OFFSET                                     21
#define AVR32_TSADCC_NOCNT_SIZE                                        1
#define AVR32_TSADCC_NORM                                     0x00000000
#define AVR32_TSADCC_NT                                       0x00000000
#define AVR32_TSADCC_OVRE0                                             8
#define AVR32_TSADCC_OVRE0_MASK                               0x00000100
#define AVR32_TSADCC_OVRE0_OFFSET                                      8
#define AVR32_TSADCC_OVRE0_SIZE                                        1
#define AVR32_TSADCC_OVRE1                                             9
#define AVR32_TSADCC_OVRE1_MASK                               0x00000200
#define AVR32_TSADCC_OVRE1_OFFSET                                      9
#define AVR32_TSADCC_OVRE1_SIZE                                        1
#define AVR32_TSADCC_OVRE2                                            10
#define AVR32_TSADCC_OVRE2_MASK                               0x00000400
#define AVR32_TSADCC_OVRE2_OFFSET                                     10
#define AVR32_TSADCC_OVRE2_SIZE                                        1
#define AVR32_TSADCC_OVRE3                                            11
#define AVR32_TSADCC_OVRE3_MASK                               0x00000800
#define AVR32_TSADCC_OVRE3_OFFSET                                     11
#define AVR32_TSADCC_OVRE3_SIZE                                        1
#define AVR32_TSADCC_OVRE4                                            12
#define AVR32_TSADCC_OVRE4_MASK                               0x00001000
#define AVR32_TSADCC_OVRE4_OFFSET                                     12
#define AVR32_TSADCC_OVRE4_SIZE                                        1
#define AVR32_TSADCC_OVRE5                                            13
#define AVR32_TSADCC_OVRE5_MASK                               0x00002000
#define AVR32_TSADCC_OVRE5_OFFSET                                     13
#define AVR32_TSADCC_OVRE5_SIZE                                        1
#define AVR32_TSADCC_PDT                                      0x00000004
#define AVR32_TSADCC_PENCNT                                           20
#define AVR32_TSADCC_PENCNT_MASK                              0x00100000
#define AVR32_TSADCC_PENCNT_OFFSET                                    20
#define AVR32_TSADCC_PENCNT_SIZE                                       1
#define AVR32_TSADCC_PENDBC                                           28
#define AVR32_TSADCC_PENDBC_MASK                              0xf0000000
#define AVR32_TSADCC_PENDBC_OFFSET                                    28
#define AVR32_TSADCC_PENDBC_SIZE                                       4
#define AVR32_TSADCC_PENDET                                            6
#define AVR32_TSADCC_PENDET_MASK                              0x00000040
#define AVR32_TSADCC_PENDET_OFFSET                                     6
#define AVR32_TSADCC_PENDET_SIZE                                       1
#define AVR32_TSADCC_PRESCAL                                           8
#define AVR32_TSADCC_PRESCAL_MASK                             0x00003f00
#define AVR32_TSADCC_PRESCAL_OFFSET                                    8
#define AVR32_TSADCC_PRESCAL_SIZE                                      6
#define AVR32_TSADCC_PT                                       0x00000005
#define AVR32_TSADCC_RXBUFF                                           19
#define AVR32_TSADCC_RXBUFF_MASK                              0x00080000
#define AVR32_TSADCC_RXBUFF_OFFSET                                    19
#define AVR32_TSADCC_RXBUFF_SIZE                                       1
#define AVR32_TSADCC_SHTIM                                            24
#define AVR32_TSADCC_SHTIM_MASK                               0x0f000000
#define AVR32_TSADCC_SHTIM_OFFSET                                     24
#define AVR32_TSADCC_SHTIM_SIZE                                        4
#define AVR32_TSADCC_SLEEP_MASK                               0x00000020
#define AVR32_TSADCC_SLEEP_NORM                               0x00000000
#define AVR32_TSADCC_SLEEP_OFFSET                                      5
#define AVR32_TSADCC_SLEEP_SIZE                                        1
#define AVR32_TSADCC_SLEEP_SLEEP                              0x00000001
#define AVR32_TSADCC_SR                                       0x0000001c
#define AVR32_TSADCC_SR_DRDY                                          16
#define AVR32_TSADCC_SR_DRDY_MASK                             0x00010000
#define AVR32_TSADCC_SR_DRDY_OFFSET                                   16
#define AVR32_TSADCC_SR_DRDY_SIZE                                      1
#define AVR32_TSADCC_SR_ENDRX                                         18
#define AVR32_TSADCC_SR_ENDRX_MASK                            0x00040000
#define AVR32_TSADCC_SR_ENDRX_OFFSET                                  18
#define AVR32_TSADCC_SR_ENDRX_SIZE                                     1
#define AVR32_TSADCC_SR_EOC0                                           0
#define AVR32_TSADCC_SR_EOC0_MASK                             0x00000001
#define AVR32_TSADCC_SR_EOC0_OFFSET                                    0
#define AVR32_TSADCC_SR_EOC0_SIZE                                      1
#define AVR32_TSADCC_SR_EOC1                                           1
#define AVR32_TSADCC_SR_EOC1_MASK                             0x00000002
#define AVR32_TSADCC_SR_EOC1_OFFSET                                    1
#define AVR32_TSADCC_SR_EOC1_SIZE                                      1
#define AVR32_TSADCC_SR_EOC2                                           2
#define AVR32_TSADCC_SR_EOC2_MASK                             0x00000004
#define AVR32_TSADCC_SR_EOC2_OFFSET                                    2
#define AVR32_TSADCC_SR_EOC2_SIZE                                      1
#define AVR32_TSADCC_SR_EOC3                                           3
#define AVR32_TSADCC_SR_EOC3_MASK                             0x00000008
#define AVR32_TSADCC_SR_EOC3_OFFSET                                    3
#define AVR32_TSADCC_SR_EOC3_SIZE                                      1
#define AVR32_TSADCC_SR_EOC4                                           4
#define AVR32_TSADCC_SR_EOC4_MASK                             0x00000010
#define AVR32_TSADCC_SR_EOC4_OFFSET                                    4
#define AVR32_TSADCC_SR_EOC4_SIZE                                      1
#define AVR32_TSADCC_SR_EOC5                                           5
#define AVR32_TSADCC_SR_EOC5_MASK                             0x00000020
#define AVR32_TSADCC_SR_EOC5_OFFSET                                    5
#define AVR32_TSADCC_SR_EOC5_SIZE                                      1
#define AVR32_TSADCC_SR_GOVRE                                         17
#define AVR32_TSADCC_SR_GOVRE_MASK                            0x00020000
#define AVR32_TSADCC_SR_GOVRE_OFFSET                                  17
#define AVR32_TSADCC_SR_GOVRE_SIZE                                     1
#define AVR32_TSADCC_SR_NOCNT                                         21
#define AVR32_TSADCC_SR_NOCNT_MASK                            0x00200000
#define AVR32_TSADCC_SR_NOCNT_OFFSET                                  21
#define AVR32_TSADCC_SR_NOCNT_SIZE                                     1
#define AVR32_TSADCC_SR_OVRE0                                          8
#define AVR32_TSADCC_SR_OVRE0_MASK                            0x00000100
#define AVR32_TSADCC_SR_OVRE0_OFFSET                                   8
#define AVR32_TSADCC_SR_OVRE0_SIZE                                     1
#define AVR32_TSADCC_SR_OVRE1                                          9
#define AVR32_TSADCC_SR_OVRE1_MASK                            0x00000200
#define AVR32_TSADCC_SR_OVRE1_OFFSET                                   9
#define AVR32_TSADCC_SR_OVRE1_SIZE                                     1
#define AVR32_TSADCC_SR_OVRE2                                         10
#define AVR32_TSADCC_SR_OVRE2_MASK                            0x00000400
#define AVR32_TSADCC_SR_OVRE2_OFFSET                                  10
#define AVR32_TSADCC_SR_OVRE2_SIZE                                     1
#define AVR32_TSADCC_SR_OVRE3                                         11
#define AVR32_TSADCC_SR_OVRE3_MASK                            0x00000800
#define AVR32_TSADCC_SR_OVRE3_OFFSET                                  11
#define AVR32_TSADCC_SR_OVRE3_SIZE                                     1
#define AVR32_TSADCC_SR_OVRE4                                         12
#define AVR32_TSADCC_SR_OVRE4_MASK                            0x00001000
#define AVR32_TSADCC_SR_OVRE4_OFFSET                                  12
#define AVR32_TSADCC_SR_OVRE4_SIZE                                     1
#define AVR32_TSADCC_SR_OVRE5                                         13
#define AVR32_TSADCC_SR_OVRE5_MASK                            0x00002000
#define AVR32_TSADCC_SR_OVRE5_OFFSET                                  13
#define AVR32_TSADCC_SR_OVRE5_SIZE                                     1
#define AVR32_TSADCC_SR_PENCNT                                        20
#define AVR32_TSADCC_SR_PENCNT_MASK                           0x00100000
#define AVR32_TSADCC_SR_PENCNT_OFFSET                                 20
#define AVR32_TSADCC_SR_PENCNT_SIZE                                    1
#define AVR32_TSADCC_SR_RXBUFF                                        19
#define AVR32_TSADCC_SR_RXBUFF_MASK                           0x00080000
#define AVR32_TSADCC_SR_RXBUFF_OFFSET                                 19
#define AVR32_TSADCC_SR_RXBUFF_SIZE                                    1
#define AVR32_TSADCC_START                                             1
#define AVR32_TSADCC_STARTUP                                          16
#define AVR32_TSADCC_STARTUP_MASK                             0x007f0000
#define AVR32_TSADCC_STARTUP_OFFSET                                   16
#define AVR32_TSADCC_STARTUP_SIZE                                      7
#define AVR32_TSADCC_START_MASK                               0x00000002
#define AVR32_TSADCC_START_OFFSET                                      1
#define AVR32_TSADCC_START_SIZE                                        1
#define AVR32_TSADCC_SWRST                                             0
#define AVR32_TSADCC_SWRST_MASK                               0x00000001
#define AVR32_TSADCC_SWRST_OFFSET                                      0
#define AVR32_TSADCC_SWRST_SIZE                                        1
#define AVR32_TSADCC_TRGMOD                                            0
#define AVR32_TSADCC_TRGMOD_CM                                0x00000006
#define AVR32_TSADCC_TRGMOD_ETAE                              0x00000003
#define AVR32_TSADCC_TRGMOD_ETFE                              0x00000002
#define AVR32_TSADCC_TRGMOD_ETRE                              0x00000001
#define AVR32_TSADCC_TRGMOD_MASK                              0x00000007
#define AVR32_TSADCC_TRGMOD_NT                                0x00000000
#define AVR32_TSADCC_TRGMOD_OFFSET                                     0
#define AVR32_TSADCC_TRGMOD_PDT                               0x00000004
#define AVR32_TSADCC_TRGMOD_PT                                0x00000005
#define AVR32_TSADCC_TRGMOD_SIZE                                       3
#define AVR32_TSADCC_TRGPER                                           16
#define AVR32_TSADCC_TRGPER_MASK                              0xffff0000
#define AVR32_TSADCC_TRGPER_OFFSET                                    16
#define AVR32_TSADCC_TRGPER_SIZE                                      16
#define AVR32_TSADCC_TRGR                                     0x00000008
#define AVR32_TSADCC_TRGR_TRGMOD                                       0
#define AVR32_TSADCC_TRGR_TRGMOD_CM                           0x00000006
#define AVR32_TSADCC_TRGR_TRGMOD_ETAE                         0x00000003
#define AVR32_TSADCC_TRGR_TRGMOD_ETFE                         0x00000002
#define AVR32_TSADCC_TRGR_TRGMOD_ETRE                         0x00000001
#define AVR32_TSADCC_TRGR_TRGMOD_MASK                         0x00000007
#define AVR32_TSADCC_TRGR_TRGMOD_NT                           0x00000000
#define AVR32_TSADCC_TRGR_TRGMOD_OFFSET                                0
#define AVR32_TSADCC_TRGR_TRGMOD_PDT                          0x00000004
#define AVR32_TSADCC_TRGR_TRGMOD_PT                           0x00000005
#define AVR32_TSADCC_TRGR_TRGMOD_SIZE                                  3
#define AVR32_TSADCC_TRGR_TRGPER                                      16
#define AVR32_TSADCC_TRGR_TRGPER_MASK                         0xffff0000
#define AVR32_TSADCC_TRGR_TRGPER_OFFSET                               16
#define AVR32_TSADCC_TRGR_TRGPER_SIZE                                 16
#define AVR32_TSADCC_TSAMOD                                            0
#define AVR32_TSADCC_TSAMOD_ADC                               0x00000000
#define AVR32_TSADCC_TSAMOD_MASK                              0x00000003
#define AVR32_TSADCC_TSAMOD_OFFSET                                     0
#define AVR32_TSADCC_TSAMOD_SIZE                                       2
#define AVR32_TSADCC_TSAMOD_TSOM                              0x00000001
#define AVR32_TSADCC_TSFREQ                                            0
#define AVR32_TSADCC_TSFREQ_MASK                              0x0000000f
#define AVR32_TSADCC_TSFREQ_OFFSET                                     0
#define AVR32_TSADCC_TSFREQ_SIZE                                       4
#define AVR32_TSADCC_TSOM                                     0x00000001
#define AVR32_TSADCC_TSR                                      0x0000000c
#define AVR32_TSADCC_TSR_TSFREQ                                        0
#define AVR32_TSADCC_TSR_TSFREQ_MASK                          0x0000000f
#define AVR32_TSADCC_TSR_TSFREQ_OFFSET                                 0
#define AVR32_TSADCC_TSR_TSFREQ_SIZE                                   4
#define AVR32_TSADCC_TSR_TSSHTIM                                      24
#define AVR32_TSADCC_TSR_TSSHTIM_MASK                         0x0f000000
#define AVR32_TSADCC_TSR_TSSHTIM_OFFSET                               24
#define AVR32_TSADCC_TSR_TSSHTIM_SIZE                                  4
#define AVR32_TSADCC_TSSHTIM                                          24
#define AVR32_TSADCC_TSSHTIM_MASK                             0x0f000000
#define AVR32_TSADCC_TSSHTIM_OFFSET                                   24
#define AVR32_TSADCC_TSSHTIM_SIZE                                      4
#define AVR32_TSADCC_VARIANT                                          16
#define AVR32_TSADCC_VARIANT_MASK                             0x00070000
#define AVR32_TSADCC_VARIANT_OFFSET                                   16
#define AVR32_TSADCC_VARIANT_SIZE                                      3
#define AVR32_TSADCC_VERSION                                  0x000000fc
#define AVR32_TSADCC_VERSION_MASK                             0x00000fff
#define AVR32_TSADCC_VERSION_OFFSET                                    0
#define AVR32_TSADCC_VERSION_SIZE                                     12
#define AVR32_TSADCC_VERSION_VARIANT                                  16
#define AVR32_TSADCC_VERSION_VARIANT_MASK                     0x00070000
#define AVR32_TSADCC_VERSION_VARIANT_OFFSET                           16
#define AVR32_TSADCC_VERSION_VARIANT_SIZE                              3
#define AVR32_TSADCC_VERSION_VERSION                                   0
#define AVR32_TSADCC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_TSADCC_VERSION_VERSION_OFFSET                            0
#define AVR32_TSADCC_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_tsadcc_cr_t {
    unsigned int                 :30;
    unsigned int start           : 1;
    unsigned int swrst           : 1;
} avr32_tsadcc_cr_t;



typedef struct avr32_tsadcc_mr_t {
    unsigned int pendbc          : 4;
    unsigned int shtim           : 4;
    unsigned int                 : 1;
    unsigned int startup         : 7;
    unsigned int                 : 2;
    unsigned int prescal         : 6;
    unsigned int                 : 1;
    unsigned int pendet          : 1;
    unsigned int sleep           : 1;
    unsigned int lowres          : 1;
    unsigned int                 : 2;
    unsigned int tsamod          : 2;
} avr32_tsadcc_mr_t;



typedef struct avr32_tsadcc_trgr_t {
    unsigned int trgper          :16;
    unsigned int                 :13;
    unsigned int trgmod          : 3;
} avr32_tsadcc_trgr_t;



typedef struct avr32_tsadcc_tsr_t {
    unsigned int                 : 4;
    unsigned int tsshtim         : 4;
    unsigned int                 :20;
    unsigned int tsfreq          : 4;
} avr32_tsadcc_tsr_t;



typedef struct avr32_tsadcc_cher_t {
    unsigned int                 :26;
    unsigned int ch5             : 1;
    unsigned int ch4             : 1;
    unsigned int ch3             : 1;
    unsigned int ch2             : 1;
    unsigned int ch1             : 1;
    unsigned int ch0             : 1;
} avr32_tsadcc_cher_t;



typedef struct avr32_tsadcc_chdr_t {
    unsigned int                 :26;
    unsigned int ch5             : 1;
    unsigned int ch4             : 1;
    unsigned int ch3             : 1;
    unsigned int ch2             : 1;
    unsigned int ch1             : 1;
    unsigned int ch0             : 1;
} avr32_tsadcc_chdr_t;



typedef struct avr32_tsadcc_chsr_t {
    unsigned int                 :26;
    unsigned int ch5             : 1;
    unsigned int ch4             : 1;
    unsigned int ch3             : 1;
    unsigned int ch2             : 1;
    unsigned int ch1             : 1;
    unsigned int ch0             : 1;
} avr32_tsadcc_chsr_t;



typedef struct avr32_tsadcc_sr_t {
    unsigned int                 :10;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int rxbuff          : 1;
    unsigned int endrx           : 1;
    unsigned int govre           : 1;
    unsigned int drdy            : 1;
    unsigned int                 : 2;
    unsigned int ovre5           : 1;
    unsigned int ovre4           : 1;
    unsigned int ovre3           : 1;
    unsigned int ovre2           : 1;
    unsigned int ovre1           : 1;
    unsigned int ovre0           : 1;
    unsigned int                 : 2;
    unsigned int eoc5            : 1;
    unsigned int eoc4            : 1;
    unsigned int eoc3            : 1;
    unsigned int eoc2            : 1;
    unsigned int eoc1            : 1;
    unsigned int eoc0            : 1;
} avr32_tsadcc_sr_t;



typedef struct avr32_tsadcc_lcdr_t {
    unsigned int                 :22;
    unsigned int ldata           :10;
} avr32_tsadcc_lcdr_t;



typedef struct avr32_tsadcc_ier_t {
    unsigned int                 :10;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int rxbuff          : 1;
    unsigned int endrx           : 1;
    unsigned int govre           : 1;
    unsigned int drdy            : 1;
    unsigned int                 : 2;
    unsigned int ovre5           : 1;
    unsigned int ovre4           : 1;
    unsigned int ovre3           : 1;
    unsigned int ovre2           : 1;
    unsigned int ovre1           : 1;
    unsigned int ovre0           : 1;
    unsigned int                 : 2;
    unsigned int eoc5            : 1;
    unsigned int eoc4            : 1;
    unsigned int eoc3            : 1;
    unsigned int eoc2            : 1;
    unsigned int eoc1            : 1;
    unsigned int eoc0            : 1;
} avr32_tsadcc_ier_t;



typedef struct avr32_tsadcc_idr_t {
    unsigned int                 :10;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int rxbuff          : 1;
    unsigned int endrx           : 1;
    unsigned int govre           : 1;
    unsigned int drdy            : 1;
    unsigned int                 : 2;
    unsigned int ovre5           : 1;
    unsigned int ovre4           : 1;
    unsigned int ovre3           : 1;
    unsigned int ovre2           : 1;
    unsigned int ovre1           : 1;
    unsigned int ovre0           : 1;
    unsigned int                 : 2;
    unsigned int eoc5            : 1;
    unsigned int eoc4            : 1;
    unsigned int eoc3            : 1;
    unsigned int eoc2            : 1;
    unsigned int eoc1            : 1;
    unsigned int eoc0            : 1;
} avr32_tsadcc_idr_t;



typedef struct avr32_tsadcc_imr_t {
    unsigned int                 :10;
    unsigned int nocnt           : 1;
    unsigned int pencnt          : 1;
    unsigned int rxbuff          : 1;
    unsigned int endrx           : 1;
    unsigned int govre           : 1;
    unsigned int drdy            : 1;
    unsigned int                 : 2;
    unsigned int ovre5           : 1;
    unsigned int ovre4           : 1;
    unsigned int ovre3           : 1;
    unsigned int ovre2           : 1;
    unsigned int ovre1           : 1;
    unsigned int ovre0           : 1;
    unsigned int                 : 2;
    unsigned int eoc5            : 1;
    unsigned int eoc4            : 1;
    unsigned int eoc3            : 1;
    unsigned int eoc2            : 1;
    unsigned int eoc1            : 1;
    unsigned int eoc0            : 1;
} avr32_tsadcc_imr_t;



typedef struct avr32_tsadcc_cdr0_t {
    unsigned int                 :22;
    unsigned int data            :10;
} avr32_tsadcc_cdr0_t;



typedef struct avr32_tsadcc_cdr1_t {
    unsigned int                 :22;
    unsigned int data            :10;
} avr32_tsadcc_cdr1_t;



typedef struct avr32_tsadcc_cdr2_t {
    unsigned int                 :22;
    unsigned int data            :10;
} avr32_tsadcc_cdr2_t;



typedef struct avr32_tsadcc_cdr3_t {
    unsigned int                 :22;
    unsigned int data            :10;
} avr32_tsadcc_cdr3_t;



typedef struct avr32_tsadcc_cdr4_t {
    unsigned int                 :22;
    unsigned int data            :10;
} avr32_tsadcc_cdr4_t;



typedef struct avr32_tsadcc_cdr5_t {
    unsigned int                 :22;
    unsigned int data            :10;
} avr32_tsadcc_cdr5_t;



typedef struct avr32_tsadcc_version_t {
    unsigned int                 :13;
    unsigned int variant         : 3;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_tsadcc_version_t;



typedef struct avr32_tsadcc_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_tsadcc_cr_t              CR        ;
  };
  union {
          unsigned long                  mr        ;//0x0004
          avr32_tsadcc_mr_t              MR        ;
  };
  union {
          unsigned long                  trgr      ;//0x0008
          avr32_tsadcc_trgr_t            TRGR      ;
  };
  union {
          unsigned long                  tsr       ;//0x000c
          avr32_tsadcc_tsr_t             TSR       ;
  };
  union {
          unsigned long                  cher      ;//0x0010
          avr32_tsadcc_cher_t            CHER      ;
  };
  union {
          unsigned long                  chdr      ;//0x0014
          avr32_tsadcc_chdr_t            CHDR      ;
  };
  union {
    const unsigned long                  chsr      ;//0x0018
    const avr32_tsadcc_chsr_t            CHSR      ;
  };
  union {
    const unsigned long                  sr        ;//0x001c
    const avr32_tsadcc_sr_t              SR        ;
  };
  union {
    const unsigned long                  lcdr      ;//0x0020
    const avr32_tsadcc_lcdr_t            LCDR      ;
  };
  union {
          unsigned long                  ier       ;//0x0024
          avr32_tsadcc_ier_t             IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0028
          avr32_tsadcc_idr_t             IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x002c
    const avr32_tsadcc_imr_t             IMR       ;
  };
  union {
    const unsigned long                  cdr0      ;//0x0030
    const avr32_tsadcc_cdr0_t            CDR0      ;
  };
  union {
    const unsigned long                  cdr1      ;//0x0034
    const avr32_tsadcc_cdr1_t            CDR1      ;
  };
  union {
    const unsigned long                  cdr2      ;//0x0038
    const avr32_tsadcc_cdr2_t            CDR2      ;
  };
  union {
    const unsigned long                  cdr3      ;//0x003c
    const avr32_tsadcc_cdr3_t            CDR3      ;
  };
  union {
    const unsigned long                  cdr4      ;//0x0040
    const avr32_tsadcc_cdr4_t            CDR4      ;
  };
  union {
    const unsigned long                  cdr5      ;//0x0044
    const avr32_tsadcc_cdr5_t            CDR5      ;
  };
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
  union {
    const unsigned long                  version   ;//0x00fc
    const avr32_tsadcc_version_t         VERSION   ;
  };
} avr32_tsadcc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_TSADCC_101_H_INCLUDED*/
#endif

