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
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_TWIS_120_H_INCLUDED
#define AVR32_TWIS_120_H_INCLUDED

#define AVR32_TWIS_H_VERSION 120

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_TWIS_<register>
 - Bitfield mask:   AVR32_TWIS_<register>_<bitfield>
 - Bitfield offset: AVR32_TWIS_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_TWIS_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_TWIS_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_TWIS_<bitfield>
 - Bitfield offset: AVR32_TWIS_<bitfield>_OFFSET
 - Bitfield size:   AVR32_TWIS_<bitfield>_SIZE
 - Bitfield values: AVR32_TWIS_<bitfield>_<value name>
 - Bitfield values: AVR32_TWIS_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_TWIS_ACK                                              12
#define AVR32_TWIS_ACK_MASK                                 0x00001000
#define AVR32_TWIS_ACK_OFFSET                                       12
#define AVR32_TWIS_ACK_SIZE                                          1
#define AVR32_TWIS_ADR                                              16
#define AVR32_TWIS_ADR_MASK                                 0x03ff0000
#define AVR32_TWIS_ADR_OFFSET                                       16
#define AVR32_TWIS_ADR_SIZE                                         10
#define AVR32_TWIS_BTF                                              23
#define AVR32_TWIS_BTF_MASK                                 0x00800000
#define AVR32_TWIS_BTF_OFFSET                                       23
#define AVR32_TWIS_BTF_SIZE                                          1
#define AVR32_TWIS_BUSERR                                           14
#define AVR32_TWIS_BUSERR_MASK                              0x00004000
#define AVR32_TWIS_BUSERR_OFFSET                                    14
#define AVR32_TWIS_BUSERR_SIZE                                       1
#define AVR32_TWIS_CR                                       0x00000000
#define AVR32_TWIS_CR_ACK                                           12
#define AVR32_TWIS_CR_ACK_MASK                              0x00001000
#define AVR32_TWIS_CR_ACK_OFFSET                                    12
#define AVR32_TWIS_CR_ACK_SIZE                                       1
#define AVR32_TWIS_CR_ADR                                           16
#define AVR32_TWIS_CR_ADR_MASK                              0x03ff0000
#define AVR32_TWIS_CR_ADR_OFFSET                                    16
#define AVR32_TWIS_CR_ADR_SIZE                                      10
#define AVR32_TWIS_CR_CUP                                           13
#define AVR32_TWIS_CR_CUP_MASK                              0x00002000
#define AVR32_TWIS_CR_CUP_OFFSET                                    13
#define AVR32_TWIS_CR_CUP_SIZE                                       1
#define AVR32_TWIS_CR_GCMATCH                                        3
#define AVR32_TWIS_CR_GCMATCH_MASK                          0x00000008
#define AVR32_TWIS_CR_GCMATCH_OFFSET                                 3
#define AVR32_TWIS_CR_GCMATCH_SIZE                                   1
#define AVR32_TWIS_CR_MASK                                  0x07ffff9f
#define AVR32_TWIS_CR_PECEN                                         11
#define AVR32_TWIS_CR_PECEN_MASK                            0x00000800
#define AVR32_TWIS_CR_PECEN_OFFSET                                  11
#define AVR32_TWIS_CR_PECEN_SIZE                                     1
#define AVR32_TWIS_CR_RESETVALUE                            0x00000000
#define AVR32_TWIS_CR_SEN                                            0
#define AVR32_TWIS_CR_SEN_MASK                              0x00000001
#define AVR32_TWIS_CR_SEN_OFFSET                                     0
#define AVR32_TWIS_CR_SEN_SIZE                                       1
#define AVR32_TWIS_CR_SMATCH                                         2
#define AVR32_TWIS_CR_SMATCH_MASK                           0x00000004
#define AVR32_TWIS_CR_SMATCH_OFFSET                                  2
#define AVR32_TWIS_CR_SMATCH_SIZE                                    1
#define AVR32_TWIS_CR_SMBALERT                                       8
#define AVR32_TWIS_CR_SMBALERT_MASK                         0x00000100
#define AVR32_TWIS_CR_SMBALERT_OFFSET                                8
#define AVR32_TWIS_CR_SMBALERT_SIZE                                  1
#define AVR32_TWIS_CR_SMDA                                           9
#define AVR32_TWIS_CR_SMDA_MASK                             0x00000200
#define AVR32_TWIS_CR_SMDA_OFFSET                                    9
#define AVR32_TWIS_CR_SMDA_SIZE                                      1
#define AVR32_TWIS_CR_SMEN                                           1
#define AVR32_TWIS_CR_SMEN_MASK                             0x00000002
#define AVR32_TWIS_CR_SMEN_OFFSET                                    1
#define AVR32_TWIS_CR_SMEN_SIZE                                      1
#define AVR32_TWIS_CR_SMHH                                          10
#define AVR32_TWIS_CR_SMHH_MASK                             0x00000400
#define AVR32_TWIS_CR_SMHH_OFFSET                                   10
#define AVR32_TWIS_CR_SMHH_SIZE                                      1
#define AVR32_TWIS_CR_SOAM                                          14
#define AVR32_TWIS_CR_SOAM_MASK                             0x00004000
#define AVR32_TWIS_CR_SOAM_OFFSET                                   14
#define AVR32_TWIS_CR_SOAM_SIZE                                      1
#define AVR32_TWIS_CR_SODR                                          15
#define AVR32_TWIS_CR_SODR_MASK                             0x00008000
#define AVR32_TWIS_CR_SODR_OFFSET                                   15
#define AVR32_TWIS_CR_SODR_SIZE                                      1
#define AVR32_TWIS_CR_STREN                                          4
#define AVR32_TWIS_CR_STREN_MASK                            0x00000010
#define AVR32_TWIS_CR_STREN_OFFSET                                   4
#define AVR32_TWIS_CR_STREN_SIZE                                     1
#define AVR32_TWIS_CR_SWRST                                          7
#define AVR32_TWIS_CR_SWRST_MASK                            0x00000080
#define AVR32_TWIS_CR_SWRST_OFFSET                                   7
#define AVR32_TWIS_CR_SWRST_SIZE                                     1
#define AVR32_TWIS_CR_TENBIT                                        26
#define AVR32_TWIS_CR_TENBIT_MASK                           0x04000000
#define AVR32_TWIS_CR_TENBIT_OFFSET                                 26
#define AVR32_TWIS_CR_TENBIT_SIZE                                    1
#define AVR32_TWIS_CUP                                              13
#define AVR32_TWIS_CUP_MASK                                 0x00002000
#define AVR32_TWIS_CUP_OFFSET                                       13
#define AVR32_TWIS_CUP_SIZE                                          1
#define AVR32_TWIS_EXP                                              28
#define AVR32_TWIS_EXP_MASK                                 0xf0000000
#define AVR32_TWIS_EXP_OFFSET                                       28
#define AVR32_TWIS_EXP_SIZE                                          4
#define AVR32_TWIS_GCM                                              17
#define AVR32_TWIS_GCMATCH                                           3
#define AVR32_TWIS_GCMATCH_MASK                             0x00000008
#define AVR32_TWIS_GCMATCH_OFFSET                                    3
#define AVR32_TWIS_GCMATCH_SIZE                                      1
#define AVR32_TWIS_GCM_MASK                                 0x00020000
#define AVR32_TWIS_GCM_OFFSET                                       17
#define AVR32_TWIS_GCM_SIZE                                          1
#define AVR32_TWIS_IDR                                      0x00000020
#define AVR32_TWIS_IDR_BTF                                          23
#define AVR32_TWIS_IDR_BTF_MASK                             0x00800000
#define AVR32_TWIS_IDR_BTF_OFFSET                                   23
#define AVR32_TWIS_IDR_BTF_SIZE                                      1
#define AVR32_TWIS_IDR_BUSERR                                       14
#define AVR32_TWIS_IDR_BUSERR_MASK                          0x00004000
#define AVR32_TWIS_IDR_BUSERR_OFFSET                                14
#define AVR32_TWIS_IDR_BUSERR_SIZE                                   1
#define AVR32_TWIS_IDR_GCM                                          17
#define AVR32_TWIS_IDR_GCM_MASK                             0x00020000
#define AVR32_TWIS_IDR_GCM_OFFSET                                   17
#define AVR32_TWIS_IDR_GCM_SIZE                                      1
#define AVR32_TWIS_IDR_MASK                                 0x00ff71cb
#define AVR32_TWIS_IDR_NAK                                           8
#define AVR32_TWIS_IDR_NAK_MASK                             0x00000100
#define AVR32_TWIS_IDR_NAK_OFFSET                                    8
#define AVR32_TWIS_IDR_NAK_SIZE                                      1
#define AVR32_TWIS_IDR_ORUN                                          7
#define AVR32_TWIS_IDR_ORUN_MASK                            0x00000080
#define AVR32_TWIS_IDR_ORUN_OFFSET                                   7
#define AVR32_TWIS_IDR_ORUN_SIZE                                     1
#define AVR32_TWIS_IDR_REP                                          22
#define AVR32_TWIS_IDR_REP_MASK                             0x00400000
#define AVR32_TWIS_IDR_REP_OFFSET                                   22
#define AVR32_TWIS_IDR_REP_SIZE                                      1
#define AVR32_TWIS_IDR_RESETVALUE                           0x00000000
#define AVR32_TWIS_IDR_RXRDY                                         0
#define AVR32_TWIS_IDR_RXRDY_MASK                           0x00000001
#define AVR32_TWIS_IDR_RXRDY_OFFSET                                  0
#define AVR32_TWIS_IDR_RXRDY_SIZE                                    1
#define AVR32_TWIS_IDR_SAM                                          16
#define AVR32_TWIS_IDR_SAM_MASK                             0x00010000
#define AVR32_TWIS_IDR_SAM_OFFSET                                   16
#define AVR32_TWIS_IDR_SAM_SIZE                                      1
#define AVR32_TWIS_IDR_SMBALERTM                                    18
#define AVR32_TWIS_IDR_SMBALERTM_MASK                       0x00040000
#define AVR32_TWIS_IDR_SMBALERTM_OFFSET                             18
#define AVR32_TWIS_IDR_SMBALERTM_SIZE                                1
#define AVR32_TWIS_IDR_SMBDAM                                       20
#define AVR32_TWIS_IDR_SMBDAM_MASK                          0x00100000
#define AVR32_TWIS_IDR_SMBDAM_OFFSET                                20
#define AVR32_TWIS_IDR_SMBDAM_SIZE                                   1
#define AVR32_TWIS_IDR_SMBHHM                                       19
#define AVR32_TWIS_IDR_SMBHHM_MASK                          0x00080000
#define AVR32_TWIS_IDR_SMBHHM_OFFSET                                19
#define AVR32_TWIS_IDR_SMBHHM_SIZE                                   1
#define AVR32_TWIS_IDR_SMBPECERR                                    13
#define AVR32_TWIS_IDR_SMBPECERR_MASK                       0x00002000
#define AVR32_TWIS_IDR_SMBPECERR_OFFSET                             13
#define AVR32_TWIS_IDR_SMBPECERR_SIZE                                1
#define AVR32_TWIS_IDR_SMBTOUT                                      12
#define AVR32_TWIS_IDR_SMBTOUT_MASK                         0x00001000
#define AVR32_TWIS_IDR_SMBTOUT_OFFSET                               12
#define AVR32_TWIS_IDR_SMBTOUT_SIZE                                  1
#define AVR32_TWIS_IDR_STO                                          21
#define AVR32_TWIS_IDR_STO_MASK                             0x00200000
#define AVR32_TWIS_IDR_STO_OFFSET                                   21
#define AVR32_TWIS_IDR_STO_SIZE                                      1
#define AVR32_TWIS_IDR_TCOMP                                         3
#define AVR32_TWIS_IDR_TCOMP_MASK                           0x00000008
#define AVR32_TWIS_IDR_TCOMP_OFFSET                                  3
#define AVR32_TWIS_IDR_TCOMP_SIZE                                    1
#define AVR32_TWIS_IDR_TXRDY                                         1
#define AVR32_TWIS_IDR_TXRDY_MASK                           0x00000002
#define AVR32_TWIS_IDR_TXRDY_OFFSET                                  1
#define AVR32_TWIS_IDR_TXRDY_SIZE                                    1
#define AVR32_TWIS_IDR_URUN                                          6
#define AVR32_TWIS_IDR_URUN_MASK                            0x00000040
#define AVR32_TWIS_IDR_URUN_OFFSET                                   6
#define AVR32_TWIS_IDR_URUN_SIZE                                     1
#define AVR32_TWIS_IER                                      0x0000001c
#define AVR32_TWIS_IER_BTF                                          23
#define AVR32_TWIS_IER_BTF_MASK                             0x00800000
#define AVR32_TWIS_IER_BTF_OFFSET                                   23
#define AVR32_TWIS_IER_BTF_SIZE                                      1
#define AVR32_TWIS_IER_BUSERR                                       14
#define AVR32_TWIS_IER_BUSERR_MASK                          0x00004000
#define AVR32_TWIS_IER_BUSERR_OFFSET                                14
#define AVR32_TWIS_IER_BUSERR_SIZE                                   1
#define AVR32_TWIS_IER_GCM                                          17
#define AVR32_TWIS_IER_GCM_MASK                             0x00020000
#define AVR32_TWIS_IER_GCM_OFFSET                                   17
#define AVR32_TWIS_IER_GCM_SIZE                                      1
#define AVR32_TWIS_IER_MASK                                 0x00ff71cb
#define AVR32_TWIS_IER_NAK                                           8
#define AVR32_TWIS_IER_NAK_MASK                             0x00000100
#define AVR32_TWIS_IER_NAK_OFFSET                                    8
#define AVR32_TWIS_IER_NAK_SIZE                                      1
#define AVR32_TWIS_IER_ORUN                                          7
#define AVR32_TWIS_IER_ORUN_MASK                            0x00000080
#define AVR32_TWIS_IER_ORUN_OFFSET                                   7
#define AVR32_TWIS_IER_ORUN_SIZE                                     1
#define AVR32_TWIS_IER_REP                                          22
#define AVR32_TWIS_IER_REP_MASK                             0x00400000
#define AVR32_TWIS_IER_REP_OFFSET                                   22
#define AVR32_TWIS_IER_REP_SIZE                                      1
#define AVR32_TWIS_IER_RESETVALUE                           0x00000000
#define AVR32_TWIS_IER_RXRDY                                         0
#define AVR32_TWIS_IER_RXRDY_MASK                           0x00000001
#define AVR32_TWIS_IER_RXRDY_OFFSET                                  0
#define AVR32_TWIS_IER_RXRDY_SIZE                                    1
#define AVR32_TWIS_IER_SAM                                          16
#define AVR32_TWIS_IER_SAM_MASK                             0x00010000
#define AVR32_TWIS_IER_SAM_OFFSET                                   16
#define AVR32_TWIS_IER_SAM_SIZE                                      1
#define AVR32_TWIS_IER_SMBALERTM                                    18
#define AVR32_TWIS_IER_SMBALERTM_MASK                       0x00040000
#define AVR32_TWIS_IER_SMBALERTM_OFFSET                             18
#define AVR32_TWIS_IER_SMBALERTM_SIZE                                1
#define AVR32_TWIS_IER_SMBDAM                                       20
#define AVR32_TWIS_IER_SMBDAM_MASK                          0x00100000
#define AVR32_TWIS_IER_SMBDAM_OFFSET                                20
#define AVR32_TWIS_IER_SMBDAM_SIZE                                   1
#define AVR32_TWIS_IER_SMBHHM                                       19
#define AVR32_TWIS_IER_SMBHHM_MASK                          0x00080000
#define AVR32_TWIS_IER_SMBHHM_OFFSET                                19
#define AVR32_TWIS_IER_SMBHHM_SIZE                                   1
#define AVR32_TWIS_IER_SMBPECERR                                    13
#define AVR32_TWIS_IER_SMBPECERR_MASK                       0x00002000
#define AVR32_TWIS_IER_SMBPECERR_OFFSET                             13
#define AVR32_TWIS_IER_SMBPECERR_SIZE                                1
#define AVR32_TWIS_IER_SMBTOUT                                      12
#define AVR32_TWIS_IER_SMBTOUT_MASK                         0x00001000
#define AVR32_TWIS_IER_SMBTOUT_OFFSET                               12
#define AVR32_TWIS_IER_SMBTOUT_SIZE                                  1
#define AVR32_TWIS_IER_STO                                          21
#define AVR32_TWIS_IER_STO_MASK                             0x00200000
#define AVR32_TWIS_IER_STO_OFFSET                                   21
#define AVR32_TWIS_IER_STO_SIZE                                      1
#define AVR32_TWIS_IER_TCOMP                                         3
#define AVR32_TWIS_IER_TCOMP_MASK                           0x00000008
#define AVR32_TWIS_IER_TCOMP_OFFSET                                  3
#define AVR32_TWIS_IER_TCOMP_SIZE                                    1
#define AVR32_TWIS_IER_TXRDY                                         1
#define AVR32_TWIS_IER_TXRDY_MASK                           0x00000002
#define AVR32_TWIS_IER_TXRDY_OFFSET                                  1
#define AVR32_TWIS_IER_TXRDY_SIZE                                    1
#define AVR32_TWIS_IER_URUN                                          6
#define AVR32_TWIS_IER_URUN_MASK                            0x00000040
#define AVR32_TWIS_IER_URUN_OFFSET                                   6
#define AVR32_TWIS_IER_URUN_SIZE                                     1
#define AVR32_TWIS_IMR                                      0x00000024
#define AVR32_TWIS_IMR_BTF                                          23
#define AVR32_TWIS_IMR_BTF_MASK                             0x00800000
#define AVR32_TWIS_IMR_BTF_OFFSET                                   23
#define AVR32_TWIS_IMR_BTF_SIZE                                      1
#define AVR32_TWIS_IMR_BUSERR                                       14
#define AVR32_TWIS_IMR_BUSERR_MASK                          0x00004000
#define AVR32_TWIS_IMR_BUSERR_OFFSET                                14
#define AVR32_TWIS_IMR_BUSERR_SIZE                                   1
#define AVR32_TWIS_IMR_GCM                                          17
#define AVR32_TWIS_IMR_GCM_MASK                             0x00020000
#define AVR32_TWIS_IMR_GCM_OFFSET                                   17
#define AVR32_TWIS_IMR_GCM_SIZE                                      1
#define AVR32_TWIS_IMR_MASK                                 0x00ff71cb
#define AVR32_TWIS_IMR_NAK                                           8
#define AVR32_TWIS_IMR_NAK_MASK                             0x00000100
#define AVR32_TWIS_IMR_NAK_OFFSET                                    8
#define AVR32_TWIS_IMR_NAK_SIZE                                      1
#define AVR32_TWIS_IMR_ORUN                                          7
#define AVR32_TWIS_IMR_ORUN_MASK                            0x00000080
#define AVR32_TWIS_IMR_ORUN_OFFSET                                   7
#define AVR32_TWIS_IMR_ORUN_SIZE                                     1
#define AVR32_TWIS_IMR_REP                                          22
#define AVR32_TWIS_IMR_REP_MASK                             0x00400000
#define AVR32_TWIS_IMR_REP_OFFSET                                   22
#define AVR32_TWIS_IMR_REP_SIZE                                      1
#define AVR32_TWIS_IMR_RESETVALUE                           0x00000000
#define AVR32_TWIS_IMR_RXRDY                                         0
#define AVR32_TWIS_IMR_RXRDY_MASK                           0x00000001
#define AVR32_TWIS_IMR_RXRDY_OFFSET                                  0
#define AVR32_TWIS_IMR_RXRDY_SIZE                                    1
#define AVR32_TWIS_IMR_SAM                                          16
#define AVR32_TWIS_IMR_SAM_MASK                             0x00010000
#define AVR32_TWIS_IMR_SAM_OFFSET                                   16
#define AVR32_TWIS_IMR_SAM_SIZE                                      1
#define AVR32_TWIS_IMR_SMBALERTM                                    18
#define AVR32_TWIS_IMR_SMBALERTM_MASK                       0x00040000
#define AVR32_TWIS_IMR_SMBALERTM_OFFSET                             18
#define AVR32_TWIS_IMR_SMBALERTM_SIZE                                1
#define AVR32_TWIS_IMR_SMBDAM                                       20
#define AVR32_TWIS_IMR_SMBDAM_MASK                          0x00100000
#define AVR32_TWIS_IMR_SMBDAM_OFFSET                                20
#define AVR32_TWIS_IMR_SMBDAM_SIZE                                   1
#define AVR32_TWIS_IMR_SMBHHM                                       19
#define AVR32_TWIS_IMR_SMBHHM_MASK                          0x00080000
#define AVR32_TWIS_IMR_SMBHHM_OFFSET                                19
#define AVR32_TWIS_IMR_SMBHHM_SIZE                                   1
#define AVR32_TWIS_IMR_SMBPECERR                                    13
#define AVR32_TWIS_IMR_SMBPECERR_MASK                       0x00002000
#define AVR32_TWIS_IMR_SMBPECERR_OFFSET                             13
#define AVR32_TWIS_IMR_SMBPECERR_SIZE                                1
#define AVR32_TWIS_IMR_SMBTOUT                                      12
#define AVR32_TWIS_IMR_SMBTOUT_MASK                         0x00001000
#define AVR32_TWIS_IMR_SMBTOUT_OFFSET                               12
#define AVR32_TWIS_IMR_SMBTOUT_SIZE                                  1
#define AVR32_TWIS_IMR_STO                                          21
#define AVR32_TWIS_IMR_STO_MASK                             0x00200000
#define AVR32_TWIS_IMR_STO_OFFSET                                   21
#define AVR32_TWIS_IMR_STO_SIZE                                      1
#define AVR32_TWIS_IMR_TCOMP                                         3
#define AVR32_TWIS_IMR_TCOMP_MASK                           0x00000008
#define AVR32_TWIS_IMR_TCOMP_OFFSET                                  3
#define AVR32_TWIS_IMR_TCOMP_SIZE                                    1
#define AVR32_TWIS_IMR_TXRDY                                         1
#define AVR32_TWIS_IMR_TXRDY_MASK                           0x00000002
#define AVR32_TWIS_IMR_TXRDY_OFFSET                                  1
#define AVR32_TWIS_IMR_TXRDY_SIZE                                    1
#define AVR32_TWIS_IMR_URUN                                          6
#define AVR32_TWIS_IMR_URUN_MASK                            0x00000040
#define AVR32_TWIS_IMR_URUN_OFFSET                                   6
#define AVR32_TWIS_IMR_URUN_SIZE                                     1
#define AVR32_TWIS_NAK                                               8
#define AVR32_TWIS_NAK_MASK                                 0x00000100
#define AVR32_TWIS_NAK_OFFSET                                        8
#define AVR32_TWIS_NAK_SIZE                                          1
#define AVR32_TWIS_NBYTES                                   0x00000004
#define AVR32_TWIS_NBYTES_MASK                              0x000000ff
#define AVR32_TWIS_NBYTES_NBYTES                                     0
#define AVR32_TWIS_NBYTES_NBYTES_MASK                       0x000000ff
#define AVR32_TWIS_NBYTES_NBYTES_OFFSET                              0
#define AVR32_TWIS_NBYTES_NBYTES_SIZE                                8
#define AVR32_TWIS_NBYTES_OFFSET                                     0
#define AVR32_TWIS_NBYTES_RESETVALUE                        0x00000000
#define AVR32_TWIS_NBYTES_SIZE                                       8
#define AVR32_TWIS_ORUN                                              7
#define AVR32_TWIS_ORUN_MASK                                0x00000080
#define AVR32_TWIS_ORUN_OFFSET                                       7
#define AVR32_TWIS_ORUN_SIZE                                         1
#define AVR32_TWIS_PEC                                               0
#define AVR32_TWIS_PECEN                                            11
#define AVR32_TWIS_PECEN_MASK                               0x00000800
#define AVR32_TWIS_PECEN_OFFSET                                     11
#define AVR32_TWIS_PECEN_SIZE                                        1
#define AVR32_TWIS_PECR                                     0x00000014
#define AVR32_TWIS_PECR_MASK                                0x000000ff
#define AVR32_TWIS_PECR_PEC                                          0
#define AVR32_TWIS_PECR_PEC_MASK                            0x000000ff
#define AVR32_TWIS_PECR_PEC_OFFSET                                   0
#define AVR32_TWIS_PECR_PEC_SIZE                                     8
#define AVR32_TWIS_PECR_RESETVALUE                          0x00000000
#define AVR32_TWIS_PEC_MASK                                 0x000000ff
#define AVR32_TWIS_PEC_OFFSET                                        0
#define AVR32_TWIS_PEC_SIZE                                          8
#define AVR32_TWIS_PR                                       0x0000002c
#define AVR32_TWIS_PR_MASK                                  0x00000000
#define AVR32_TWIS_PR_RESETVALUE                            0x00000000
#define AVR32_TWIS_REP                                              22
#define AVR32_TWIS_REP_MASK                                 0x00400000
#define AVR32_TWIS_REP_OFFSET                                       22
#define AVR32_TWIS_REP_SIZE                                          1
#define AVR32_TWIS_RHR                                      0x0000000c
#define AVR32_TWIS_RHR_MASK                                 0x000000ff
#define AVR32_TWIS_RHR_RESETVALUE                           0x00000000
#define AVR32_TWIS_RHR_RXDATA                                        0
#define AVR32_TWIS_RHR_RXDATA_MASK                          0x000000ff
#define AVR32_TWIS_RHR_RXDATA_OFFSET                                 0
#define AVR32_TWIS_RHR_RXDATA_SIZE                                   8
#define AVR32_TWIS_RXDATA                                            0
#define AVR32_TWIS_RXDATA_MASK                              0x000000ff
#define AVR32_TWIS_RXDATA_OFFSET                                     0
#define AVR32_TWIS_RXDATA_SIZE                                       8
#define AVR32_TWIS_RXRDY                                             0
#define AVR32_TWIS_RXRDY_MASK                               0x00000001
#define AVR32_TWIS_RXRDY_OFFSET                                      0
#define AVR32_TWIS_RXRDY_SIZE                                        1
#define AVR32_TWIS_SAM                                              16
#define AVR32_TWIS_SAM_MASK                                 0x00010000
#define AVR32_TWIS_SAM_OFFSET                                       16
#define AVR32_TWIS_SAM_SIZE                                          1
#define AVR32_TWIS_SCR                                      0x00000028
#define AVR32_TWIS_SCR_BTF                                          23
#define AVR32_TWIS_SCR_BTF_MASK                             0x00800000
#define AVR32_TWIS_SCR_BTF_OFFSET                                   23
#define AVR32_TWIS_SCR_BTF_SIZE                                      1
#define AVR32_TWIS_SCR_BUSERR                                       14
#define AVR32_TWIS_SCR_BUSERR_MASK                          0x00004000
#define AVR32_TWIS_SCR_BUSERR_OFFSET                                14
#define AVR32_TWIS_SCR_BUSERR_SIZE                                   1
#define AVR32_TWIS_SCR_GCM                                          17
#define AVR32_TWIS_SCR_GCM_MASK                             0x00020000
#define AVR32_TWIS_SCR_GCM_OFFSET                                   17
#define AVR32_TWIS_SCR_GCM_SIZE                                      1
#define AVR32_TWIS_SCR_MASK                                 0x00ff71c8
#define AVR32_TWIS_SCR_NAK                                           8
#define AVR32_TWIS_SCR_NAK_MASK                             0x00000100
#define AVR32_TWIS_SCR_NAK_OFFSET                                    8
#define AVR32_TWIS_SCR_NAK_SIZE                                      1
#define AVR32_TWIS_SCR_ORUN                                          7
#define AVR32_TWIS_SCR_ORUN_MASK                            0x00000080
#define AVR32_TWIS_SCR_ORUN_OFFSET                                   7
#define AVR32_TWIS_SCR_ORUN_SIZE                                     1
#define AVR32_TWIS_SCR_REP                                          22
#define AVR32_TWIS_SCR_REP_MASK                             0x00400000
#define AVR32_TWIS_SCR_REP_OFFSET                                   22
#define AVR32_TWIS_SCR_REP_SIZE                                      1
#define AVR32_TWIS_SCR_RESETVALUE                           0x00000000
#define AVR32_TWIS_SCR_SAM                                          16
#define AVR32_TWIS_SCR_SAM_MASK                             0x00010000
#define AVR32_TWIS_SCR_SAM_OFFSET                                   16
#define AVR32_TWIS_SCR_SAM_SIZE                                      1
#define AVR32_TWIS_SCR_SMBALERTM                                    18
#define AVR32_TWIS_SCR_SMBALERTM_MASK                       0x00040000
#define AVR32_TWIS_SCR_SMBALERTM_OFFSET                             18
#define AVR32_TWIS_SCR_SMBALERTM_SIZE                                1
#define AVR32_TWIS_SCR_SMBDAM                                       20
#define AVR32_TWIS_SCR_SMBDAM_MASK                          0x00100000
#define AVR32_TWIS_SCR_SMBDAM_OFFSET                                20
#define AVR32_TWIS_SCR_SMBDAM_SIZE                                   1
#define AVR32_TWIS_SCR_SMBHHM                                       19
#define AVR32_TWIS_SCR_SMBHHM_MASK                          0x00080000
#define AVR32_TWIS_SCR_SMBHHM_OFFSET                                19
#define AVR32_TWIS_SCR_SMBHHM_SIZE                                   1
#define AVR32_TWIS_SCR_SMBPECERR                                    13
#define AVR32_TWIS_SCR_SMBPECERR_MASK                       0x00002000
#define AVR32_TWIS_SCR_SMBPECERR_OFFSET                             13
#define AVR32_TWIS_SCR_SMBPECERR_SIZE                                1
#define AVR32_TWIS_SCR_SMBTOUT                                      12
#define AVR32_TWIS_SCR_SMBTOUT_MASK                         0x00001000
#define AVR32_TWIS_SCR_SMBTOUT_OFFSET                               12
#define AVR32_TWIS_SCR_SMBTOUT_SIZE                                  1
#define AVR32_TWIS_SCR_STO                                          21
#define AVR32_TWIS_SCR_STO_MASK                             0x00200000
#define AVR32_TWIS_SCR_STO_OFFSET                                   21
#define AVR32_TWIS_SCR_STO_SIZE                                      1
#define AVR32_TWIS_SCR_TCOMP                                         3
#define AVR32_TWIS_SCR_TCOMP_MASK                           0x00000008
#define AVR32_TWIS_SCR_TCOMP_OFFSET                                  3
#define AVR32_TWIS_SCR_TCOMP_SIZE                                    1
#define AVR32_TWIS_SCR_URUN                                          6
#define AVR32_TWIS_SCR_URUN_MASK                            0x00000040
#define AVR32_TWIS_SCR_URUN_OFFSET                                   6
#define AVR32_TWIS_SCR_URUN_SIZE                                     1
#define AVR32_TWIS_SEN_SIZE                                          1
#define AVR32_TWIS_SMATCH                                            2
#define AVR32_TWIS_SMATCH_MASK                              0x00000004
#define AVR32_TWIS_SMATCH_OFFSET                                     2
#define AVR32_TWIS_SMATCH_SIZE                                       1
#define AVR32_TWIS_SMBALERT                                          8
#define AVR32_TWIS_SMBALERTM                                        18
#define AVR32_TWIS_SMBALERTM_MASK                           0x00040000
#define AVR32_TWIS_SMBALERTM_OFFSET                                 18
#define AVR32_TWIS_SMBALERTM_SIZE                                    1
#define AVR32_TWIS_SMBALERT_MASK                            0x00000100
#define AVR32_TWIS_SMBALERT_OFFSET                                   8
#define AVR32_TWIS_SMBALERT_SIZE                                     1
#define AVR32_TWIS_SMBDAM                                           20
#define AVR32_TWIS_SMBDAM_MASK                              0x00100000
#define AVR32_TWIS_SMBDAM_OFFSET                                    20
#define AVR32_TWIS_SMBDAM_SIZE                                       1
#define AVR32_TWIS_SMBHHM                                           19
#define AVR32_TWIS_SMBHHM_MASK                              0x00080000
#define AVR32_TWIS_SMBHHM_OFFSET                                    19
#define AVR32_TWIS_SMBHHM_SIZE                                       1
#define AVR32_TWIS_SMBPECERR                                        13
#define AVR32_TWIS_SMBPECERR_MASK                           0x00002000
#define AVR32_TWIS_SMBPECERR_OFFSET                                 13
#define AVR32_TWIS_SMBPECERR_SIZE                                    1
#define AVR32_TWIS_SMBTOUT                                          12
#define AVR32_TWIS_SMBTOUT_MASK                             0x00001000
#define AVR32_TWIS_SMBTOUT_OFFSET                                   12
#define AVR32_TWIS_SMBTOUT_SIZE                                      1
#define AVR32_TWIS_SMDA                                              9
#define AVR32_TWIS_SMDA_MASK                                0x00000200
#define AVR32_TWIS_SMDA_OFFSET                                       9
#define AVR32_TWIS_SMDA_SIZE                                         1
#define AVR32_TWIS_SMEN                                              1
#define AVR32_TWIS_SMEN_MASK                                0x00000002
#define AVR32_TWIS_SMEN_OFFSET                                       1
#define AVR32_TWIS_SMEN_SIZE                                         1
#define AVR32_TWIS_SMHH                                             10
#define AVR32_TWIS_SMHH_MASK                                0x00000400
#define AVR32_TWIS_SMHH_OFFSET                                      10
#define AVR32_TWIS_SMHH_SIZE                                         1
#define AVR32_TWIS_SOAM                                             14
#define AVR32_TWIS_SOAM_MASK                                0x00004000
#define AVR32_TWIS_SOAM_OFFSET                                      14
#define AVR32_TWIS_SOAM_SIZE                                         1
#define AVR32_TWIS_SODR                                             15
#define AVR32_TWIS_SODR_MASK                                0x00008000
#define AVR32_TWIS_SODR_OFFSET                                      15
#define AVR32_TWIS_SODR_SIZE                                         1
#define AVR32_TWIS_SR                                       0x00000018
#define AVR32_TWIS_SR_BTF                                           23
#define AVR32_TWIS_SR_BTF_MASK                              0x00800000
#define AVR32_TWIS_SR_BTF_OFFSET                                    23
#define AVR32_TWIS_SR_BTF_SIZE                                       1
#define AVR32_TWIS_SR_BUSERR                                        14
#define AVR32_TWIS_SR_BUSERR_MASK                           0x00004000
#define AVR32_TWIS_SR_BUSERR_OFFSET                                 14
#define AVR32_TWIS_SR_BUSERR_SIZE                                    1
#define AVR32_TWIS_SR_GCM                                           17
#define AVR32_TWIS_SR_GCM_MASK                              0x00020000
#define AVR32_TWIS_SR_GCM_OFFSET                                    17
#define AVR32_TWIS_SR_GCM_SIZE                                       1
#define AVR32_TWIS_SR_MASK                                  0x00ff71ef
#define AVR32_TWIS_SR_NAK                                            8
#define AVR32_TWIS_SR_NAK_MASK                              0x00000100
#define AVR32_TWIS_SR_NAK_OFFSET                                     8
#define AVR32_TWIS_SR_NAK_SIZE                                       1
#define AVR32_TWIS_SR_ORUN                                           7
#define AVR32_TWIS_SR_ORUN_MASK                             0x00000080
#define AVR32_TWIS_SR_ORUN_OFFSET                                    7
#define AVR32_TWIS_SR_ORUN_SIZE                                      1
#define AVR32_TWIS_SR_REP                                           22
#define AVR32_TWIS_SR_REP_MASK                              0x00400000
#define AVR32_TWIS_SR_REP_OFFSET                                    22
#define AVR32_TWIS_SR_REP_SIZE                                       1
#define AVR32_TWIS_SR_RESETVALUE                            0x00000000
#define AVR32_TWIS_SR_RXRDY                                          0
#define AVR32_TWIS_SR_RXRDY_MASK                            0x00000001
#define AVR32_TWIS_SR_RXRDY_OFFSET                                   0
#define AVR32_TWIS_SR_RXRDY_SIZE                                     1
#define AVR32_TWIS_SR_SAM                                           16
#define AVR32_TWIS_SR_SAM_MASK                              0x00010000
#define AVR32_TWIS_SR_SAM_OFFSET                                    16
#define AVR32_TWIS_SR_SAM_SIZE                                       1
#define AVR32_TWIS_SR_SEN                                            2
#define AVR32_TWIS_SR_SEN_MASK                              0x00000004
#define AVR32_TWIS_SR_SEN_OFFSET                                     2
#define AVR32_TWIS_SR_SEN_SIZE                                       1
#define AVR32_TWIS_SR_SMBALERTM                                     18
#define AVR32_TWIS_SR_SMBALERTM_MASK                        0x00040000
#define AVR32_TWIS_SR_SMBALERTM_OFFSET                              18
#define AVR32_TWIS_SR_SMBALERTM_SIZE                                 1
#define AVR32_TWIS_SR_SMBDAM                                        20
#define AVR32_TWIS_SR_SMBDAM_MASK                           0x00100000
#define AVR32_TWIS_SR_SMBDAM_OFFSET                                 20
#define AVR32_TWIS_SR_SMBDAM_SIZE                                    1
#define AVR32_TWIS_SR_SMBHHM                                        19
#define AVR32_TWIS_SR_SMBHHM_MASK                           0x00080000
#define AVR32_TWIS_SR_SMBHHM_OFFSET                                 19
#define AVR32_TWIS_SR_SMBHHM_SIZE                                    1
#define AVR32_TWIS_SR_SMBPECERR                                     13
#define AVR32_TWIS_SR_SMBPECERR_MASK                        0x00002000
#define AVR32_TWIS_SR_SMBPECERR_OFFSET                              13
#define AVR32_TWIS_SR_SMBPECERR_SIZE                                 1
#define AVR32_TWIS_SR_SMBTOUT                                       12
#define AVR32_TWIS_SR_SMBTOUT_MASK                          0x00001000
#define AVR32_TWIS_SR_SMBTOUT_OFFSET                                12
#define AVR32_TWIS_SR_SMBTOUT_SIZE                                   1
#define AVR32_TWIS_SR_STO                                           21
#define AVR32_TWIS_SR_STO_MASK                              0x00200000
#define AVR32_TWIS_SR_STO_OFFSET                                    21
#define AVR32_TWIS_SR_STO_SIZE                                       1
#define AVR32_TWIS_SR_TCOMP                                          3
#define AVR32_TWIS_SR_TCOMP_MASK                            0x00000008
#define AVR32_TWIS_SR_TCOMP_OFFSET                                   3
#define AVR32_TWIS_SR_TCOMP_SIZE                                     1
#define AVR32_TWIS_SR_TRA                                            5
#define AVR32_TWIS_SR_TRA_MASK                              0x00000020
#define AVR32_TWIS_SR_TRA_OFFSET                                     5
#define AVR32_TWIS_SR_TRA_SIZE                                       1
#define AVR32_TWIS_SR_TXRDY                                          1
#define AVR32_TWIS_SR_TXRDY_MASK                            0x00000002
#define AVR32_TWIS_SR_TXRDY_OFFSET                                   1
#define AVR32_TWIS_SR_TXRDY_SIZE                                     1
#define AVR32_TWIS_SR_URUN                                           6
#define AVR32_TWIS_SR_URUN_MASK                             0x00000040
#define AVR32_TWIS_SR_URUN_OFFSET                                    6
#define AVR32_TWIS_SR_URUN_SIZE                                      1
#define AVR32_TWIS_STO                                              21
#define AVR32_TWIS_STO_MASK                                 0x00200000
#define AVR32_TWIS_STO_OFFSET                                       21
#define AVR32_TWIS_STO_SIZE                                          1
#define AVR32_TWIS_STREN                                             4
#define AVR32_TWIS_STREN_MASK                               0x00000010
#define AVR32_TWIS_STREN_OFFSET                                      4
#define AVR32_TWIS_STREN_SIZE                                        1
#define AVR32_TWIS_SUDAT                                            16
#define AVR32_TWIS_SUDAT_MASK                               0x00ff0000
#define AVR32_TWIS_SUDAT_OFFSET                                     16
#define AVR32_TWIS_SUDAT_SIZE                                        8
#define AVR32_TWIS_SWRST                                             7
#define AVR32_TWIS_SWRST_MASK                               0x00000080
#define AVR32_TWIS_SWRST_OFFSET                                      7
#define AVR32_TWIS_SWRST_SIZE                                        1
#define AVR32_TWIS_TCOMP                                             3
#define AVR32_TWIS_TCOMP_MASK                               0x00000008
#define AVR32_TWIS_TCOMP_OFFSET                                      3
#define AVR32_TWIS_TCOMP_SIZE                                        1
#define AVR32_TWIS_TENBIT                                           26
#define AVR32_TWIS_TENBIT_MASK                              0x04000000
#define AVR32_TWIS_TENBIT_OFFSET                                    26
#define AVR32_TWIS_TENBIT_SIZE                                       1
#define AVR32_TWIS_THR                                      0x00000010
#define AVR32_TWIS_THR_MASK                                 0x000000ff
#define AVR32_TWIS_THR_RESETVALUE                           0x00000000
#define AVR32_TWIS_THR_TXDATA                                        0
#define AVR32_TWIS_THR_TXDATA_MASK                          0x000000ff
#define AVR32_TWIS_THR_TXDATA_OFFSET                                 0
#define AVR32_TWIS_THR_TXDATA_SIZE                                   8
#define AVR32_TWIS_TLOWS                                             0
#define AVR32_TWIS_TLOWS_MASK                               0x000000ff
#define AVR32_TWIS_TLOWS_OFFSET                                      0
#define AVR32_TWIS_TLOWS_SIZE                                        8
#define AVR32_TWIS_TR                                       0x00000008
#define AVR32_TWIS_TRA                                               5
#define AVR32_TWIS_TRA_MASK                                 0x00000020
#define AVR32_TWIS_TRA_OFFSET                                        5
#define AVR32_TWIS_TRA_SIZE                                          1
#define AVR32_TWIS_TR_EXP                                           28
#define AVR32_TWIS_TR_EXP_MASK                              0xf0000000
#define AVR32_TWIS_TR_EXP_OFFSET                                    28
#define AVR32_TWIS_TR_EXP_SIZE                                       4
#define AVR32_TWIS_TR_MASK                                  0xf0ffffff
#define AVR32_TWIS_TR_RESETVALUE                            0x00000000
#define AVR32_TWIS_TR_SUDAT                                         16
#define AVR32_TWIS_TR_SUDAT_MASK                            0x00ff0000
#define AVR32_TWIS_TR_SUDAT_OFFSET                                  16
#define AVR32_TWIS_TR_SUDAT_SIZE                                     8
#define AVR32_TWIS_TR_TLOWS                                          0
#define AVR32_TWIS_TR_TLOWS_MASK                            0x000000ff
#define AVR32_TWIS_TR_TLOWS_OFFSET                                   0
#define AVR32_TWIS_TR_TLOWS_SIZE                                     8
#define AVR32_TWIS_TR_TTOUT                                          8
#define AVR32_TWIS_TR_TTOUT_MASK                            0x0000ff00
#define AVR32_TWIS_TR_TTOUT_OFFSET                                   8
#define AVR32_TWIS_TR_TTOUT_SIZE                                     8
#define AVR32_TWIS_TTOUT                                             8
#define AVR32_TWIS_TTOUT_MASK                               0x0000ff00
#define AVR32_TWIS_TTOUT_OFFSET                                      8
#define AVR32_TWIS_TTOUT_SIZE                                        8
#define AVR32_TWIS_TXDATA                                            0
#define AVR32_TWIS_TXDATA_MASK                              0x000000ff
#define AVR32_TWIS_TXDATA_OFFSET                                     0
#define AVR32_TWIS_TXDATA_SIZE                                       8
#define AVR32_TWIS_TXRDY                                             1
#define AVR32_TWIS_TXRDY_MASK                               0x00000002
#define AVR32_TWIS_TXRDY_OFFSET                                      1
#define AVR32_TWIS_TXRDY_SIZE                                        1
#define AVR32_TWIS_URUN                                              6
#define AVR32_TWIS_URUN_MASK                                0x00000040
#define AVR32_TWIS_URUN_OFFSET                                       6
#define AVR32_TWIS_URUN_SIZE                                         1
#define AVR32_TWIS_VERSION                                           0
#define AVR32_TWIS_VERSION_MASK                             0x00000fff
#define AVR32_TWIS_VERSION_OFFSET                                    0
#define AVR32_TWIS_VERSION_SIZE                                     12
#define AVR32_TWIS_VR                                       0x00000030
#define AVR32_TWIS_VR_MASK                                  0x00000fff
#define AVR32_TWIS_VR_RESETVALUE                            0x00000120
#define AVR32_TWIS_VR_VERSION                                        0
#define AVR32_TWIS_VR_VERSION_MASK                          0x00000fff
#define AVR32_TWIS_VR_VERSION_OFFSET                                 0
#define AVR32_TWIS_VR_VERSION_SIZE                                  12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_twis_cr_t {
    unsigned int                 : 5;
    unsigned int tenbit          : 1;
    unsigned int adr             :10;
    unsigned int sodr            : 1;
    unsigned int soam            : 1;
    unsigned int cup             : 1;
    unsigned int ack             : 1;
    unsigned int pecen           : 1;
    unsigned int smhh            : 1;
    unsigned int smda            : 1;
    unsigned int smbalert        : 1;
    unsigned int swrst           : 1;
    unsigned int                 : 2;
    unsigned int stren           : 1;
    unsigned int gcmatch         : 1;
    unsigned int smatch          : 1;
    unsigned int smen            : 1;
    unsigned int sen             : 1;
} avr32_twis_cr_t;



typedef struct avr32_twis_nbytes_t {
    unsigned int                 :24;
    unsigned int nbytes          : 8;
} avr32_twis_nbytes_t;



typedef struct avr32_twis_tr_t {
    unsigned int exp             : 4;
    unsigned int                 : 4;
    unsigned int sudat           : 8;
    unsigned int ttout           : 8;
    unsigned int tlows           : 8;
} avr32_twis_tr_t;



typedef struct avr32_twis_rhr_t {
    unsigned int                 :24;
    unsigned int rxdata          : 8;
} avr32_twis_rhr_t;



typedef struct avr32_twis_thr_t {
    unsigned int                 :24;
    unsigned int txdata          : 8;
} avr32_twis_thr_t;



typedef struct avr32_twis_pecr_t {
    unsigned int                 :24;
    unsigned int pec             : 8;
} avr32_twis_pecr_t;



typedef struct avr32_twis_sr_t {
    unsigned int                 : 8;
    unsigned int btf             : 1;
    unsigned int rep             : 1;
    unsigned int sto             : 1;
    unsigned int smbdam          : 1;
    unsigned int smbhhm          : 1;
    unsigned int smbalertm       : 1;
    unsigned int gcm             : 1;
    unsigned int sam             : 1;
    unsigned int                 : 1;
    unsigned int buserr          : 1;
    unsigned int smbpecerr       : 1;
    unsigned int smbtout         : 1;
    unsigned int                 : 3;
    unsigned int nak             : 1;
    unsigned int orun            : 1;
    unsigned int urun            : 1;
    unsigned int tra             : 1;
    unsigned int                 : 1;
    unsigned int tcomp           : 1;
    unsigned int sen             : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
} avr32_twis_sr_t;



typedef struct avr32_twis_ier_t {
    unsigned int                 : 8;
    unsigned int btf             : 1;
    unsigned int rep             : 1;
    unsigned int sto             : 1;
    unsigned int smbdam          : 1;
    unsigned int smbhhm          : 1;
    unsigned int smbalertm       : 1;
    unsigned int gcm             : 1;
    unsigned int sam             : 1;
    unsigned int                 : 1;
    unsigned int buserr          : 1;
    unsigned int smbpecerr       : 1;
    unsigned int smbtout         : 1;
    unsigned int                 : 3;
    unsigned int nak             : 1;
    unsigned int orun            : 1;
    unsigned int urun            : 1;
    unsigned int                 : 2;
    unsigned int tcomp           : 1;
    unsigned int                 : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
} avr32_twis_ier_t;



typedef struct avr32_twis_idr_t {
    unsigned int                 : 8;
    unsigned int btf             : 1;
    unsigned int rep             : 1;
    unsigned int sto             : 1;
    unsigned int smbdam          : 1;
    unsigned int smbhhm          : 1;
    unsigned int smbalertm       : 1;
    unsigned int gcm             : 1;
    unsigned int sam             : 1;
    unsigned int                 : 1;
    unsigned int buserr          : 1;
    unsigned int smbpecerr       : 1;
    unsigned int smbtout         : 1;
    unsigned int                 : 3;
    unsigned int nak             : 1;
    unsigned int orun            : 1;
    unsigned int urun            : 1;
    unsigned int                 : 2;
    unsigned int tcomp           : 1;
    unsigned int                 : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
} avr32_twis_idr_t;



typedef struct avr32_twis_imr_t {
    unsigned int                 : 8;
    unsigned int btf             : 1;
    unsigned int rep             : 1;
    unsigned int sto             : 1;
    unsigned int smbdam          : 1;
    unsigned int smbhhm          : 1;
    unsigned int smbalertm       : 1;
    unsigned int gcm             : 1;
    unsigned int sam             : 1;
    unsigned int                 : 1;
    unsigned int buserr          : 1;
    unsigned int smbpecerr       : 1;
    unsigned int smbtout         : 1;
    unsigned int                 : 3;
    unsigned int nak             : 1;
    unsigned int orun            : 1;
    unsigned int urun            : 1;
    unsigned int                 : 2;
    unsigned int tcomp           : 1;
    unsigned int                 : 1;
    unsigned int txrdy           : 1;
    unsigned int rxrdy           : 1;
} avr32_twis_imr_t;



typedef struct avr32_twis_scr_t {
    unsigned int                 : 8;
    unsigned int btf             : 1;
    unsigned int rep             : 1;
    unsigned int sto             : 1;
    unsigned int smbdam          : 1;
    unsigned int smbhhm          : 1;
    unsigned int smbalertm       : 1;
    unsigned int gcm             : 1;
    unsigned int sam             : 1;
    unsigned int                 : 1;
    unsigned int buserr          : 1;
    unsigned int smbpecerr       : 1;
    unsigned int smbtout         : 1;
    unsigned int                 : 3;
    unsigned int nak             : 1;
    unsigned int orun            : 1;
    unsigned int urun            : 1;
    unsigned int                 : 2;
    unsigned int tcomp           : 1;
    unsigned int                 : 3;
} avr32_twis_scr_t;



typedef struct avr32_twis_vr_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_twis_vr_t;



typedef struct avr32_twis_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_twis_cr_t                CR        ;
  };
  union {
          unsigned long                  nbytes    ;//0x0004
          avr32_twis_nbytes_t            NBYTES    ;
  };
  union {
          unsigned long                  tr        ;//0x0008
          avr32_twis_tr_t                TR        ;
  };
  union {
    const unsigned long                  rhr       ;//0x000c
    const avr32_twis_rhr_t               RHR       ;
  };
  union {
          unsigned long                  thr       ;//0x0010
          avr32_twis_thr_t               THR       ;
  };
  union {
    const unsigned long                  pecr      ;//0x0014
    const avr32_twis_pecr_t              PECR      ;
  };
  union {
    const unsigned long                  sr        ;//0x0018
    const avr32_twis_sr_t                SR        ;
  };
  union {
          unsigned long                  ier       ;//0x001c
          avr32_twis_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0020
          avr32_twis_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0024
    const avr32_twis_imr_t               IMR       ;
  };
  union {
          unsigned long                  scr       ;//0x0028
          avr32_twis_scr_t               SCR       ;
  };
    const unsigned long                  pr        ;//0x002c
  union {
    const unsigned long                  vr        ;//0x0030
    const avr32_twis_vr_t                VR        ;
  };
} avr32_twis_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_TWIS_120_H_INCLUDED*/
#endif

