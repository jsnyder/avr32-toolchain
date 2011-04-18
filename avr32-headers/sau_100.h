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
#ifndef AVR32_SAU_100_H_INCLUDED
#define AVR32_SAU_100_H_INCLUDED

#define AVR32_SAU_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_SAU_<register>
 - Bitfield mask:   AVR32_SAU_<register>_<bitfield>
 - Bitfield offset: AVR32_SAU_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SAU_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_SAU_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_SAU_<bitfield>
 - Bitfield offset: AVR32_SAU_<bitfield>_OFFSET
 - Bitfield size:   AVR32_SAU_<bitfield>_SIZE
 - Bitfield values: AVR32_SAU_<bitfield>_<value name>
 - Bitfield values: AVR32_SAU_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_SAU_BERRDIS                                           5
#define AVR32_SAU_BERRDIS_MASK                             0x00000020
#define AVR32_SAU_BERRDIS_OFFSET                                    5
#define AVR32_SAU_BERRDIS_SIZE                                      1
#define AVR32_SAU_BERREN                                            4
#define AVR32_SAU_BERREN_MASK                              0x00000010
#define AVR32_SAU_BERREN_OFFSET                                     4
#define AVR32_SAU_BERREN_SIZE                                       1
#define AVR32_SAU_CAS                                               1
#define AVR32_SAU_CAS_MASK                                 0x00000002
#define AVR32_SAU_CAS_OFFSET                                        1
#define AVR32_SAU_CAS_SIZE                                          1
#define AVR32_SAU_CAU                                               2
#define AVR32_SAU_CAU_MASK                                 0x00000004
#define AVR32_SAU_CAU_OFFSET                                        2
#define AVR32_SAU_CAU_SIZE                                          1
#define AVR32_SAU_CERH                                     0x00000008
#define AVR32_SAU_CERH_CERH                                         0
#define AVR32_SAU_CERH_CERH_MASK                           0x7fffffff
#define AVR32_SAU_CERH_CERH_OFFSET                                  0
#define AVR32_SAU_CERH_CERH_SIZE                                   31
#define AVR32_SAU_CERH_MASK                                0x7fffffff
#define AVR32_SAU_CERH_OFFSET                                       0
#define AVR32_SAU_CERH_RESETVALUE                          0x00000000
#define AVR32_SAU_CERH_SIZE                                        31
#define AVR32_SAU_CERL                                     0x0000000c
#define AVR32_SAU_CERL_CERL                                         0
#define AVR32_SAU_CERL_CERL_MASK                           0xffffffff
#define AVR32_SAU_CERL_CERL_OFFSET                                  0
#define AVR32_SAU_CERL_CERL_SIZE                                   32
#define AVR32_SAU_CERL_MASK                                0xffffffff
#define AVR32_SAU_CERL_OFFSET                                       0
#define AVR32_SAU_CERL_RESETVALUE                          0x00000000
#define AVR32_SAU_CERL_SIZE                                        32
#define AVR32_SAU_CHANNEL                                           0
#define AVR32_SAU_CHANNELS_MASK                            0x0000003f
#define AVR32_SAU_CHANNELS_OFFSET                                   0
#define AVR32_SAU_CHANNELS_SIZE                                     6
#define AVR32_SAU_CHANNEL_MASK                             0x0000003f
#define AVR32_SAU_CHANNEL_OFFSET                                    0
#define AVR32_SAU_CHANNEL_SIZE                                      6
#define AVR32_SAU_CONFIG                                   0x00000004
#define AVR32_SAU_CONFIG_MASK                              0x0000ffff
#define AVR32_SAU_CONFIG_RESETVALUE                        0x00000000
#define AVR32_SAU_CONFIG_UCYC                                       8
#define AVR32_SAU_CONFIG_UCYC_MASK                         0x0000ff00
#define AVR32_SAU_CONFIG_UCYC_OFFSET                                8
#define AVR32_SAU_CONFIG_UCYC_SIZE                                  8
#define AVR32_SAU_CONFIG_UKEY                                       0
#define AVR32_SAU_CONFIG_UKEY_MASK                         0x000000ff
#define AVR32_SAU_CONFIG_UKEY_OFFSET                                0
#define AVR32_SAU_CONFIG_UKEY_SIZE                                  8
#define AVR32_SAU_CR                                       0x00000000
#define AVR32_SAU_CR_BERRDIS                                        5
#define AVR32_SAU_CR_BERRDIS_MASK                          0x00000020
#define AVR32_SAU_CR_BERRDIS_OFFSET                                 5
#define AVR32_SAU_CR_BERRDIS_SIZE                                   1
#define AVR32_SAU_CR_BERREN                                         4
#define AVR32_SAU_CR_BERREN_MASK                           0x00000010
#define AVR32_SAU_CR_BERREN_OFFSET                                  4
#define AVR32_SAU_CR_BERREN_SIZE                                    1
#define AVR32_SAU_CR_DIS                                            1
#define AVR32_SAU_CR_DIS_MASK                              0x00000002
#define AVR32_SAU_CR_DIS_OFFSET                                     1
#define AVR32_SAU_CR_DIS_SIZE                                       1
#define AVR32_SAU_CR_EN                                             0
#define AVR32_SAU_CR_EN_MASK                               0x00000001
#define AVR32_SAU_CR_EN_OFFSET                                      0
#define AVR32_SAU_CR_EN_SIZE                                        1
#define AVR32_SAU_CR_MASK                                  0x0000003f
#define AVR32_SAU_CR_RESETVALUE                            0x00000000
#define AVR32_SAU_CR_SDIS                                           3
#define AVR32_SAU_CR_SDIS_MASK                             0x00000008
#define AVR32_SAU_CR_SDIS_OFFSET                                    3
#define AVR32_SAU_CR_SDIS_SIZE                                      1
#define AVR32_SAU_CR_SEN                                            2
#define AVR32_SAU_CR_SEN_MASK                              0x00000004
#define AVR32_SAU_CR_SEN_OFFSET                                     2
#define AVR32_SAU_CR_SEN_SIZE                                       1
#define AVR32_SAU_DIS                                               1
#define AVR32_SAU_DIS_MASK                                 0x00000002
#define AVR32_SAU_DIS_OFFSET                                        1
#define AVR32_SAU_DIS_SIZE                                          1
#define AVR32_SAU_EN_SIZE                                           1
#define AVR32_SAU_EXP                                               0
#define AVR32_SAU_EXP_MASK                                 0x00000001
#define AVR32_SAU_EXP_OFFSET                                        0
#define AVR32_SAU_EXP_SIZE                                          1
#define AVR32_SAU_ICR                                      0x00000020
#define AVR32_SAU_ICR_CAS                                           1
#define AVR32_SAU_ICR_CAS_MASK                             0x00000002
#define AVR32_SAU_ICR_CAS_OFFSET                                    1
#define AVR32_SAU_ICR_CAS_SIZE                                      1
#define AVR32_SAU_ICR_CAU                                           2
#define AVR32_SAU_ICR_CAU_MASK                             0x00000004
#define AVR32_SAU_ICR_CAU_OFFSET                                    2
#define AVR32_SAU_ICR_CAU_SIZE                                      1
#define AVR32_SAU_ICR_EXP                                           0
#define AVR32_SAU_ICR_EXP_MASK                             0x00000001
#define AVR32_SAU_ICR_EXP_OFFSET                                    0
#define AVR32_SAU_ICR_EXP_SIZE                                      1
#define AVR32_SAU_ICR_MASK                                 0x000000ff
#define AVR32_SAU_ICR_MBERROR                                       6
#define AVR32_SAU_ICR_MBERROR_MASK                         0x00000040
#define AVR32_SAU_ICR_MBERROR_OFFSET                                6
#define AVR32_SAU_ICR_MBERROR_SIZE                                  1
#define AVR32_SAU_ICR_RESETVALUE                           0x00000000
#define AVR32_SAU_ICR_RTRADR                                        7
#define AVR32_SAU_ICR_RTRADR_MASK                          0x00000080
#define AVR32_SAU_ICR_RTRADR_OFFSET                                 7
#define AVR32_SAU_ICR_RTRADR_SIZE                                   1
#define AVR32_SAU_ICR_URES                                          5
#define AVR32_SAU_ICR_URES_MASK                            0x00000020
#define AVR32_SAU_ICR_URES_OFFSET                                   5
#define AVR32_SAU_ICR_URES_SIZE                                     1
#define AVR32_SAU_ICR_URKEY                                         4
#define AVR32_SAU_ICR_URKEY_MASK                           0x00000010
#define AVR32_SAU_ICR_URKEY_OFFSET                                  4
#define AVR32_SAU_ICR_URKEY_SIZE                                    1
#define AVR32_SAU_ICR_URREAD                                        3
#define AVR32_SAU_ICR_URREAD_MASK                          0x00000008
#define AVR32_SAU_ICR_URREAD_OFFSET                                 3
#define AVR32_SAU_ICR_URREAD_SIZE                                   1
#define AVR32_SAU_IDR                                      0x00000018
#define AVR32_SAU_IDR_CAS                                           1
#define AVR32_SAU_IDR_CAS_MASK                             0x00000002
#define AVR32_SAU_IDR_CAS_OFFSET                                    1
#define AVR32_SAU_IDR_CAS_SIZE                                      1
#define AVR32_SAU_IDR_CAU                                           2
#define AVR32_SAU_IDR_CAU_MASK                             0x00000004
#define AVR32_SAU_IDR_CAU_OFFSET                                    2
#define AVR32_SAU_IDR_CAU_SIZE                                      1
#define AVR32_SAU_IDR_EXP                                           0
#define AVR32_SAU_IDR_EXP_MASK                             0x00000001
#define AVR32_SAU_IDR_EXP_OFFSET                                    0
#define AVR32_SAU_IDR_EXP_SIZE                                      1
#define AVR32_SAU_IDR_MASK                                 0x000000ff
#define AVR32_SAU_IDR_MBERROR                                       6
#define AVR32_SAU_IDR_MBERROR_MASK                         0x00000040
#define AVR32_SAU_IDR_MBERROR_OFFSET                                6
#define AVR32_SAU_IDR_MBERROR_SIZE                                  1
#define AVR32_SAU_IDR_RESETVALUE                           0x00000000
#define AVR32_SAU_IDR_RTRADR                                        7
#define AVR32_SAU_IDR_RTRADR_MASK                          0x00000080
#define AVR32_SAU_IDR_RTRADR_OFFSET                                 7
#define AVR32_SAU_IDR_RTRADR_SIZE                                   1
#define AVR32_SAU_IDR_URES                                          5
#define AVR32_SAU_IDR_URES_MASK                            0x00000020
#define AVR32_SAU_IDR_URES_OFFSET                                   5
#define AVR32_SAU_IDR_URES_SIZE                                     1
#define AVR32_SAU_IDR_URKEY                                         4
#define AVR32_SAU_IDR_URKEY_MASK                           0x00000010
#define AVR32_SAU_IDR_URKEY_OFFSET                                  4
#define AVR32_SAU_IDR_URKEY_SIZE                                    1
#define AVR32_SAU_IDR_URREAD                                        3
#define AVR32_SAU_IDR_URREAD_MASK                          0x00000008
#define AVR32_SAU_IDR_URREAD_OFFSET                                 3
#define AVR32_SAU_IDR_URREAD_SIZE                                   1
#define AVR32_SAU_IER                                      0x00000014
#define AVR32_SAU_IER_CAS                                           1
#define AVR32_SAU_IER_CAS_MASK                             0x00000002
#define AVR32_SAU_IER_CAS_OFFSET                                    1
#define AVR32_SAU_IER_CAS_SIZE                                      1
#define AVR32_SAU_IER_CAU                                           2
#define AVR32_SAU_IER_CAU_MASK                             0x00000004
#define AVR32_SAU_IER_CAU_OFFSET                                    2
#define AVR32_SAU_IER_CAU_SIZE                                      1
#define AVR32_SAU_IER_EXP                                           0
#define AVR32_SAU_IER_EXP_MASK                             0x00000001
#define AVR32_SAU_IER_EXP_OFFSET                                    0
#define AVR32_SAU_IER_EXP_SIZE                                      1
#define AVR32_SAU_IER_MASK                                 0x000000ff
#define AVR32_SAU_IER_MBERROR                                       6
#define AVR32_SAU_IER_MBERROR_MASK                         0x00000040
#define AVR32_SAU_IER_MBERROR_OFFSET                                6
#define AVR32_SAU_IER_MBERROR_SIZE                                  1
#define AVR32_SAU_IER_RESETVALUE                           0x00000000
#define AVR32_SAU_IER_RTRADR                                        7
#define AVR32_SAU_IER_RTRADR_MASK                          0x00000080
#define AVR32_SAU_IER_RTRADR_OFFSET                                 7
#define AVR32_SAU_IER_RTRADR_SIZE                                   1
#define AVR32_SAU_IER_URES                                          5
#define AVR32_SAU_IER_URES_MASK                            0x00000020
#define AVR32_SAU_IER_URES_OFFSET                                   5
#define AVR32_SAU_IER_URES_SIZE                                     1
#define AVR32_SAU_IER_URKEY                                         4
#define AVR32_SAU_IER_URKEY_MASK                           0x00000010
#define AVR32_SAU_IER_URKEY_OFFSET                                  4
#define AVR32_SAU_IER_URKEY_SIZE                                    1
#define AVR32_SAU_IER_URREAD                                        3
#define AVR32_SAU_IER_URREAD_MASK                          0x00000008
#define AVR32_SAU_IER_URREAD_OFFSET                                 3
#define AVR32_SAU_IER_URREAD_SIZE                                   1
#define AVR32_SAU_IMR                                      0x0000001c
#define AVR32_SAU_IMR_CAS                                           1
#define AVR32_SAU_IMR_CAS_MASK                             0x00000002
#define AVR32_SAU_IMR_CAS_OFFSET                                    1
#define AVR32_SAU_IMR_CAS_SIZE                                      1
#define AVR32_SAU_IMR_CAU                                           2
#define AVR32_SAU_IMR_CAU_MASK                             0x00000004
#define AVR32_SAU_IMR_CAU_OFFSET                                    2
#define AVR32_SAU_IMR_CAU_SIZE                                      1
#define AVR32_SAU_IMR_EXP                                           0
#define AVR32_SAU_IMR_EXP_MASK                             0x00000001
#define AVR32_SAU_IMR_EXP_OFFSET                                    0
#define AVR32_SAU_IMR_EXP_SIZE                                      1
#define AVR32_SAU_IMR_MASK                                 0x000000ff
#define AVR32_SAU_IMR_MBERROR                                       6
#define AVR32_SAU_IMR_MBERROR_MASK                         0x00000040
#define AVR32_SAU_IMR_MBERROR_OFFSET                                6
#define AVR32_SAU_IMR_MBERROR_SIZE                                  1
#define AVR32_SAU_IMR_RESETVALUE                           0x00000000
#define AVR32_SAU_IMR_RTRADR                                        7
#define AVR32_SAU_IMR_RTRADR_MASK                          0x00000080
#define AVR32_SAU_IMR_RTRADR_OFFSET                                 7
#define AVR32_SAU_IMR_RTRADR_SIZE                                   1
#define AVR32_SAU_IMR_URES                                          5
#define AVR32_SAU_IMR_URES_MASK                            0x00000020
#define AVR32_SAU_IMR_URES_OFFSET                                   5
#define AVR32_SAU_IMR_URES_SIZE                                     1
#define AVR32_SAU_IMR_URKEY                                         4
#define AVR32_SAU_IMR_URKEY_MASK                           0x00000010
#define AVR32_SAU_IMR_URKEY_OFFSET                                  4
#define AVR32_SAU_IMR_URKEY_SIZE                                    1
#define AVR32_SAU_IMR_URREAD                                        3
#define AVR32_SAU_IMR_URREAD_MASK                          0x00000008
#define AVR32_SAU_IMR_URREAD_OFFSET                                 3
#define AVR32_SAU_IMR_URREAD_SIZE                                   1
#define AVR32_SAU_KEY                                               8
#define AVR32_SAU_KEY_MASK                                 0x0000ff00
#define AVR32_SAU_KEY_OFFSET                                        8
#define AVR32_SAU_KEY_SIZE                                          8
#define AVR32_SAU_MBERROR                                           6
#define AVR32_SAU_MBERROR_MASK                             0x00000040
#define AVR32_SAU_MBERROR_OFFSET                                    6
#define AVR32_SAU_MBERROR_SIZE                                      1
#define AVR32_SAU_PARAMETER                                0x00000024
#define AVR32_SAU_PARAMETER_CHANNELS                                0
#define AVR32_SAU_PARAMETER_CHANNELS_MASK                  0x0000003f
#define AVR32_SAU_PARAMETER_CHANNELS_OFFSET                         0
#define AVR32_SAU_PARAMETER_CHANNELS_SIZE                           6
#define AVR32_SAU_PARAMETER_MASK                           0x0000003f
#define AVR32_SAU_PARAMETER_RESETVALUE                     0x00000010
#define AVR32_SAU_RTR                                               0
#define AVR32_SAU_RTR0                                     0x00000000
#define AVR32_SAU_RTR0_MASK                                0xffffffff
#define AVR32_SAU_RTR0_RESETVALUE                          0x00000000
#define AVR32_SAU_RTR0_RTR                                          0
#define AVR32_SAU_RTR0_RTR_MASK                            0xffffffff
#define AVR32_SAU_RTR0_RTR_OFFSET                                   0
#define AVR32_SAU_RTR0_RTR_SIZE                                    32
#define AVR32_SAU_RTRADR                                            7
#define AVR32_SAU_RTRADR_MASK                              0x00000080
#define AVR32_SAU_RTRADR_OFFSET                                     7
#define AVR32_SAU_RTRADR_SIZE                                       1
#define AVR32_SAU_RTR_MASK                                 0xffffffff
#define AVR32_SAU_RTR_OFFSET                                        0
#define AVR32_SAU_RTR_SIZE                                         32
#define AVR32_SAU_SDIS                                              3
#define AVR32_SAU_SDIS_MASK                                0x00000008
#define AVR32_SAU_SDIS_OFFSET                                       3
#define AVR32_SAU_SDIS_SIZE                                         1
#define AVR32_SAU_SEN_SIZE                                          1
#define AVR32_SAU_SR                                       0x00000010
#define AVR32_SAU_SR_CAS                                            1
#define AVR32_SAU_SR_CAS_MASK                              0x00000002
#define AVR32_SAU_SR_CAS_OFFSET                                     1
#define AVR32_SAU_SR_CAS_SIZE                                       1
#define AVR32_SAU_SR_CAU                                            2
#define AVR32_SAU_SR_CAU_MASK                              0x00000004
#define AVR32_SAU_SR_CAU_OFFSET                                     2
#define AVR32_SAU_SR_CAU_SIZE                                       1
#define AVR32_SAU_SR_EN                                             8
#define AVR32_SAU_SR_EN_MASK                               0x00000100
#define AVR32_SAU_SR_EN_OFFSET                                      8
#define AVR32_SAU_SR_EN_SIZE                                        1
#define AVR32_SAU_SR_EXP                                            0
#define AVR32_SAU_SR_EXP_MASK                              0x00000001
#define AVR32_SAU_SR_EXP_OFFSET                                     0
#define AVR32_SAU_SR_EXP_SIZE                                       1
#define AVR32_SAU_SR_MASK                                  0x000003ff
#define AVR32_SAU_SR_MBERROR                                        6
#define AVR32_SAU_SR_MBERROR_MASK                          0x00000040
#define AVR32_SAU_SR_MBERROR_OFFSET                                 6
#define AVR32_SAU_SR_MBERROR_SIZE                                   1
#define AVR32_SAU_SR_RESETVALUE                            0x00000000
#define AVR32_SAU_SR_RTRADR                                         7
#define AVR32_SAU_SR_RTRADR_MASK                           0x00000080
#define AVR32_SAU_SR_RTRADR_OFFSET                                  7
#define AVR32_SAU_SR_RTRADR_SIZE                                    1
#define AVR32_SAU_SR_SEN                                            9
#define AVR32_SAU_SR_SEN_MASK                              0x00000200
#define AVR32_SAU_SR_SEN_OFFSET                                     9
#define AVR32_SAU_SR_SEN_SIZE                                       1
#define AVR32_SAU_SR_URES                                           5
#define AVR32_SAU_SR_URES_MASK                             0x00000020
#define AVR32_SAU_SR_URES_OFFSET                                    5
#define AVR32_SAU_SR_URES_SIZE                                      1
#define AVR32_SAU_SR_URKEY                                          4
#define AVR32_SAU_SR_URKEY_MASK                            0x00000010
#define AVR32_SAU_SR_URKEY_OFFSET                                   4
#define AVR32_SAU_SR_URKEY_SIZE                                     1
#define AVR32_SAU_SR_URREAD                                         3
#define AVR32_SAU_SR_URREAD_MASK                           0x00000008
#define AVR32_SAU_SR_URREAD_OFFSET                                  3
#define AVR32_SAU_SR_URREAD_SIZE                                    1
#define AVR32_SAU_UCYC                                              8
#define AVR32_SAU_UCYC_MASK                                0x0000ff00
#define AVR32_SAU_UCYC_OFFSET                                       8
#define AVR32_SAU_UCYC_SIZE                                         8
#define AVR32_SAU_UKEY                                              0
#define AVR32_SAU_UKEY_MASK                                0x000000ff
#define AVR32_SAU_UKEY_OFFSET                                       0
#define AVR32_SAU_UKEY_SIZE                                         8
#define AVR32_SAU_UR                                       0x000000fc
#define AVR32_SAU_URES                                              5
#define AVR32_SAU_URES_MASK                                0x00000020
#define AVR32_SAU_URES_OFFSET                                       5
#define AVR32_SAU_URES_SIZE                                         1
#define AVR32_SAU_URKEY                                             4
#define AVR32_SAU_URKEY_MASK                               0x00000010
#define AVR32_SAU_URKEY_OFFSET                                      4
#define AVR32_SAU_URKEY_SIZE                                        1
#define AVR32_SAU_URREAD                                            3
#define AVR32_SAU_URREAD_MASK                              0x00000008
#define AVR32_SAU_URREAD_OFFSET                                     3
#define AVR32_SAU_URREAD_SIZE                                       1
#define AVR32_SAU_UR_CHANNEL                                        0
#define AVR32_SAU_UR_CHANNEL_MASK                          0x0000003f
#define AVR32_SAU_UR_CHANNEL_OFFSET                                 0
#define AVR32_SAU_UR_CHANNEL_SIZE                                   6
#define AVR32_SAU_UR_KEY                                            8
#define AVR32_SAU_UR_KEY_MASK                              0x0000ff00
#define AVR32_SAU_UR_KEY_OFFSET                                     8
#define AVR32_SAU_UR_KEY_SIZE                                       8
#define AVR32_SAU_UR_MASK                                  0x0000ff3f
#define AVR32_SAU_UR_RESETVALUE                            0x00000000
#define AVR32_SAU_VARIANT                                          16
#define AVR32_SAU_VARIANT_MASK                             0x000f0000
#define AVR32_SAU_VARIANT_OFFSET                                   16
#define AVR32_SAU_VARIANT_SIZE                                      4
#define AVR32_SAU_VERSION                                  0x00000028
#define AVR32_SAU_VERSION_MASK                             0x000f0fff
#define AVR32_SAU_VERSION_OFFSET                                    0
#define AVR32_SAU_VERSION_RESETVALUE                       0x00000100
#define AVR32_SAU_VERSION_SIZE                                     12
#define AVR32_SAU_VERSION_VARIANT                                  16
#define AVR32_SAU_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_SAU_VERSION_VARIANT_OFFSET                           16
#define AVR32_SAU_VERSION_VARIANT_SIZE                              4
#define AVR32_SAU_VERSION_VERSION                                   0
#define AVR32_SAU_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_SAU_VERSION_VERSION_OFFSET                            0
#define AVR32_SAU_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_sau_cr_t {
    unsigned int                 :26;
    unsigned int berrdis         : 1;
    unsigned int berren          : 1;
    unsigned int sdis            : 1;
    unsigned int sen             : 1;
    unsigned int dis             : 1;
    unsigned int en              : 1;
} avr32_sau_cr_t;



typedef struct avr32_sau_config_t {
    unsigned int                 :16;
    unsigned int ucyc            : 8;
    unsigned int ukey            : 8;
} avr32_sau_config_t;



typedef struct avr32_sau_cerh_t {
    unsigned int                 : 1;
    unsigned int cerh            :31;
} avr32_sau_cerh_t;



typedef struct avr32_sau_sr_t {
    unsigned int                 :22;
    unsigned int sen             : 1;
    unsigned int en              : 1;
    unsigned int rtradr          : 1;
    unsigned int mberror         : 1;
    unsigned int ures            : 1;
    unsigned int urkey           : 1;
    unsigned int urread          : 1;
    unsigned int cau             : 1;
    unsigned int cas             : 1;
    unsigned int exp             : 1;
} avr32_sau_sr_t;



typedef struct avr32_sau_ier_t {
    unsigned int                 :24;
    unsigned int rtradr          : 1;
    unsigned int mberror         : 1;
    unsigned int ures            : 1;
    unsigned int urkey           : 1;
    unsigned int urread          : 1;
    unsigned int cau             : 1;
    unsigned int cas             : 1;
    unsigned int exp             : 1;
} avr32_sau_ier_t;



typedef struct avr32_sau_idr_t {
    unsigned int                 :24;
    unsigned int rtradr          : 1;
    unsigned int mberror         : 1;
    unsigned int ures            : 1;
    unsigned int urkey           : 1;
    unsigned int urread          : 1;
    unsigned int cau             : 1;
    unsigned int cas             : 1;
    unsigned int exp             : 1;
} avr32_sau_idr_t;



typedef struct avr32_sau_imr_t {
    unsigned int                 :24;
    unsigned int rtradr          : 1;
    unsigned int mberror         : 1;
    unsigned int ures            : 1;
    unsigned int urkey           : 1;
    unsigned int urread          : 1;
    unsigned int cau             : 1;
    unsigned int cas             : 1;
    unsigned int exp             : 1;
} avr32_sau_imr_t;



typedef struct avr32_sau_icr_t {
    unsigned int                 :24;
    unsigned int rtradr          : 1;
    unsigned int mberror         : 1;
    unsigned int ures            : 1;
    unsigned int urkey           : 1;
    unsigned int urread          : 1;
    unsigned int cau             : 1;
    unsigned int cas             : 1;
    unsigned int exp             : 1;
} avr32_sau_icr_t;



typedef struct avr32_sau_parameter_t {
    unsigned int                 :26;
    unsigned int channels        : 6;
} avr32_sau_parameter_t;



typedef struct avr32_sau_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_sau_version_t;



typedef struct avr32_sau_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_sau_cr_t                 CR        ;
  };
  union {
          unsigned long                  config    ;//0x0004
          avr32_sau_config_t             CONFIG    ;
  };
  union {
          unsigned long                  cerh      ;//0x0008
          avr32_sau_cerh_t               CERH      ;
  };
          unsigned long                  cerl      ;//0x000c
  union {
    const unsigned long                  sr        ;//0x0010
    const avr32_sau_sr_t                 SR        ;
  };
  union {
          unsigned long                  ier       ;//0x0014
          avr32_sau_ier_t                IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0018
          avr32_sau_idr_t                IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x001c
    const avr32_sau_imr_t                IMR       ;
  };
  union {
          unsigned long                  icr       ;//0x0020
          avr32_sau_icr_t                ICR       ;
  };
  union {
    const unsigned long                  parameter ;//0x0024
    const avr32_sau_parameter_t          PARAMETER ;
  };
  union {
    const unsigned long                  version   ;//0x0028
    const avr32_sau_version_t            VERSION   ;
  };
} avr32_sau_t;


typedef struct avr32_sau_hsb_ur_t {
    unsigned int                 :16;
    unsigned int key             : 8;
    unsigned int                 : 2;
    unsigned int channel         : 6;
} avr32_sau_hsb_ur_t;



typedef struct avr32_sau_hsb_t {
          unsigned long                  rtr       [AVR32_SAU_CHANNELS];//0x0000
#if AVR32_SAU_CHANNELS!=63  // To avoid errors in IAR
          unsigned long                        rtr_reserved[63-AVR32_SAU_CHANNELS]; //Padding
#endif
          unsigned int                   :32       ;//0x0040
          unsigned int                   :32       ;//0x0044
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
          unsigned long                  ur        ;//0x00fc
          avr32_sau_hsb_ur_t             UR        ;
  };
} avr32_sau_hsb_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_SAU_100_H_INCLUDED*/
#endif

