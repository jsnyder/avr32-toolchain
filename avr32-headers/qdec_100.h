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
 * Model        : UC3C0128C
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_QDEC_100_H_INCLUDED
#define AVR32_QDEC_100_H_INCLUDED

#define AVR32_QDEC_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_QDEC_<register>
 - Bitfield mask:   AVR32_QDEC_<register>_<bitfield>
 - Bitfield offset: AVR32_QDEC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_QDEC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_QDEC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_QDEC_<bitfield>
 - Bitfield offset: AVR32_QDEC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_QDEC_<bitfield>_SIZE
 - Bitfield values: AVR32_QDEC_<bitfield>_<value name>
 - Bitfield values: AVR32_QDEC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_QDEC_CAP                                      0x00000014
#define AVR32_QDEC_CAP_MASK                                 0xffffffff
#define AVR32_QDEC_CAP_OFFSET                                        2
#define AVR32_QDEC_CAP_PCCAP                                         0
#define AVR32_QDEC_CAP_PCCAP_MASK                           0x0000ffff
#define AVR32_QDEC_CAP_PCCAP_OFFSET                                  0
#define AVR32_QDEC_CAP_PCCAP_SIZE                                   16
#define AVR32_QDEC_CAP_RCCAP                                        16
#define AVR32_QDEC_CAP_RCCAP_MASK                           0xffff0000
#define AVR32_QDEC_CAP_RCCAP_OFFSET                                 16
#define AVR32_QDEC_CAP_RCCAP_SIZE                                   16
#define AVR32_QDEC_CAP_RESETVALUE                           0x00000000
#define AVR32_QDEC_CAP_SIZE                                          1
#define AVR32_QDEC_CF                                       0x00000004
#define AVR32_QDEC_CF_EVTRGE                                         4
#define AVR32_QDEC_CF_EVTRGE_MASK                           0x00000010
#define AVR32_QDEC_CF_EVTRGE_OFFSET                                  4
#define AVR32_QDEC_CF_EVTRGE_SIZE                                    1
#define AVR32_QDEC_CF_FILTEN                                        13
#define AVR32_QDEC_CF_FILTEN_MASK                           0x00002000
#define AVR32_QDEC_CF_FILTEN_OFFSET                                 13
#define AVR32_QDEC_CF_FILTEN_SIZE                                    1
#define AVR32_QDEC_CF_IDXE                                           1
#define AVR32_QDEC_CF_IDXE_MASK                             0x00000002
#define AVR32_QDEC_CF_IDXE_OFFSET                                    1
#define AVR32_QDEC_CF_IDXE_SIZE                                      1
#define AVR32_QDEC_CF_IDXINV                                        10
#define AVR32_QDEC_CF_IDXINV_MASK                           0x00000400
#define AVR32_QDEC_CF_IDXINV_OFFSET                                 10
#define AVR32_QDEC_CF_IDXINV_SIZE                                    1
#define AVR32_QDEC_CF_IDXPHS                                        11
#define AVR32_QDEC_CF_IDXPHS_MASK                           0x00001800
#define AVR32_QDEC_CF_IDXPHS_OFFSET                                 11
#define AVR32_QDEC_CF_IDXPHS_SIZE                                    2
#define AVR32_QDEC_CF_MASK                                  0x00033f1f
#define AVR32_QDEC_CF_PCCE                                           2
#define AVR32_QDEC_CF_PCCE_MASK                             0x00000004
#define AVR32_QDEC_CF_PCCE_OFFSET                                    2
#define AVR32_QDEC_CF_PCCE_SIZE                                      1
#define AVR32_QDEC_CF_PHSINVA                                        8
#define AVR32_QDEC_CF_PHSINVA_MASK                          0x00000100
#define AVR32_QDEC_CF_PHSINVA_OFFSET                                 8
#define AVR32_QDEC_CF_PHSINVA_SIZE                                   1
#define AVR32_QDEC_CF_PHSINVB                                        9
#define AVR32_QDEC_CF_PHSINVB_MASK                          0x00000200
#define AVR32_QDEC_CF_PHSINVB_OFFSET                                 9
#define AVR32_QDEC_CF_PHSINVB_SIZE                                   1
#define AVR32_QDEC_CF_QDEC                                           0
#define AVR32_QDEC_CF_QDEC_MASK                             0x00000001
#define AVR32_QDEC_CF_QDEC_OFFSET                                    0
#define AVR32_QDEC_CF_QDEC_SIZE                                      1
#define AVR32_QDEC_CF_RCCE                                           3
#define AVR32_QDEC_CF_RCCE_MASK                             0x00000008
#define AVR32_QDEC_CF_RCCE_OFFSET                                    3
#define AVR32_QDEC_CF_RCCE_SIZE                                      1
#define AVR32_QDEC_CF_RESETVALUE                            0x00000000
#define AVR32_QDEC_CF_TSDIR                                         16
#define AVR32_QDEC_CF_TSDIR_MASK                            0x00010000
#define AVR32_QDEC_CF_TSDIR_OFFSET                                  16
#define AVR32_QDEC_CF_TSDIR_SIZE                                     1
#define AVR32_QDEC_CF_UPD                                           17
#define AVR32_QDEC_CF_UPD_MASK                              0x00020000
#define AVR32_QDEC_CF_UPD_OFFSET                                    17
#define AVR32_QDEC_CF_UPD_SIZE                                       1
#define AVR32_QDEC_CLKEN_SIZE                                        1
#define AVR32_QDEC_CMP                                      0x00000010
#define AVR32_QDEC_CMP_MASK                                 0xffffffff
#define AVR32_QDEC_CMP_OFFSET                                        1
#define AVR32_QDEC_CMP_PCCMP                                         0
#define AVR32_QDEC_CMP_PCCMP_MASK                           0x0000ffff
#define AVR32_QDEC_CMP_PCCMP_OFFSET                                  0
#define AVR32_QDEC_CMP_PCCMP_SIZE                                   16
#define AVR32_QDEC_CMP_RCCMP                                        16
#define AVR32_QDEC_CMP_RCCMP_MASK                           0xffff0000
#define AVR32_QDEC_CMP_RCCMP_OFFSET                                 16
#define AVR32_QDEC_CMP_RCCMP_SIZE                                   16
#define AVR32_QDEC_CMP_RESETVALUE                           0x00000000
#define AVR32_QDEC_CMP_SIZE                                          1
#define AVR32_QDEC_CNT                                      0x00000008
#define AVR32_QDEC_CNTDIR                                           16
#define AVR32_QDEC_CNTDIR_MASK                              0x00010000
#define AVR32_QDEC_CNTDIR_OFFSET                                    16
#define AVR32_QDEC_CNTDIR_SIZE                                       1
#define AVR32_QDEC_CNT_MASK                                 0xffffffff
#define AVR32_QDEC_CNT_PC                                            0
#define AVR32_QDEC_CNT_PC_MASK                              0x0000ffff
#define AVR32_QDEC_CNT_PC_OFFSET                                     0
#define AVR32_QDEC_CNT_PC_SIZE                                      16
#define AVR32_QDEC_CNT_RC                                           16
#define AVR32_QDEC_CNT_RC_MASK                              0xffff0000
#define AVR32_QDEC_CNT_RC_OFFSET                                    16
#define AVR32_QDEC_CNT_RC_SIZE                                      16
#define AVR32_QDEC_CNT_RESETVALUE                           0x00000000
#define AVR32_QDEC_CTA                                              28
#define AVR32_QDEC_CTA_MASK                                 0x10000000
#define AVR32_QDEC_CTA_OFFSET                                       28
#define AVR32_QDEC_CTA_SIZE                                          1
#define AVR32_QDEC_CTB                                              29
#define AVR32_QDEC_CTB_MASK                                 0x20000000
#define AVR32_QDEC_CTB_OFFSET                                       29
#define AVR32_QDEC_CTB_SIZE                                          1
#define AVR32_QDEC_CTRL                                     0x00000000
#define AVR32_QDEC_CTRL_CLKEN                                        0
#define AVR32_QDEC_CTRL_CLKEN_MASK                          0x00000001
#define AVR32_QDEC_CTRL_CLKEN_OFFSET                                 0
#define AVR32_QDEC_CTRL_CLKEN_SIZE                                   1
#define AVR32_QDEC_CTRL_MASK                                0x00000003
#define AVR32_QDEC_CTRL_RESETVALUE                          0x00000000
#define AVR32_QDEC_CTRL_SWTRG                                        1
#define AVR32_QDEC_CTRL_SWTRG_MASK                          0x00000002
#define AVR32_QDEC_CTRL_SWTRG_OFFSET                                 1
#define AVR32_QDEC_CTRL_SWTRG_SIZE                                   1
#define AVR32_QDEC_DIRINV                                            6
#define AVR32_QDEC_DIRINV_MASK                              0x00000040
#define AVR32_QDEC_DIRINV_OFFSET                                     6
#define AVR32_QDEC_DIRINV_SIZE                                       1
#define AVR32_QDEC_EVTRGE                                            4
#define AVR32_QDEC_EVTRGE_MASK                              0x00000010
#define AVR32_QDEC_EVTRGE_OFFSET                                     4
#define AVR32_QDEC_EVTRGE_SIZE                                       1
#define AVR32_QDEC_FILTEN                                           13
#define AVR32_QDEC_FILTEN_MASK                              0x00002000
#define AVR32_QDEC_FILTEN_OFFSET                                    13
#define AVR32_QDEC_FILTEN_SIZE                                       1
#define AVR32_QDEC_IDR                                      0x00000028
#define AVR32_QDEC_IDR_CAP                                           2
#define AVR32_QDEC_IDR_CAP_MASK                             0x00000004
#define AVR32_QDEC_IDR_CAP_OFFSET                                    2
#define AVR32_QDEC_IDR_CAP_SIZE                                      1
#define AVR32_QDEC_IDR_CMP                                           1
#define AVR32_QDEC_IDR_CMP_MASK                             0x00000002
#define AVR32_QDEC_IDR_CMP_OFFSET                                    1
#define AVR32_QDEC_IDR_CMP_SIZE                                      1
#define AVR32_QDEC_IDR_CTA                                          28
#define AVR32_QDEC_IDR_CTA_MASK                             0x10000000
#define AVR32_QDEC_IDR_CTA_OFFSET                                   28
#define AVR32_QDEC_IDR_CTA_SIZE                                      1
#define AVR32_QDEC_IDR_CTB                                          29
#define AVR32_QDEC_IDR_CTB_MASK                             0x20000000
#define AVR32_QDEC_IDR_CTB_OFFSET                                   29
#define AVR32_QDEC_IDR_CTB_SIZE                                      1
#define AVR32_QDEC_IDR_DIRINV                                        6
#define AVR32_QDEC_IDR_DIRINV_MASK                          0x00000040
#define AVR32_QDEC_IDR_DIRINV_OFFSET                                 6
#define AVR32_QDEC_IDR_DIRINV_SIZE                                   1
#define AVR32_QDEC_IDR_IDXERR                                        5
#define AVR32_QDEC_IDR_IDXERR_MASK                          0x00000020
#define AVR32_QDEC_IDR_IDXERR_OFFSET                                 5
#define AVR32_QDEC_IDR_IDXERR_SIZE                                   1
#define AVR32_QDEC_IDR_MASK                                 0x7f0003ff
#define AVR32_QDEC_IDR_OSCA                                         24
#define AVR32_QDEC_IDR_OSCA_MASK                            0x01000000
#define AVR32_QDEC_IDR_OSCA_OFFSET                                  24
#define AVR32_QDEC_IDR_OSCA_SIZE                                     1
#define AVR32_QDEC_IDR_OSCB                                         25
#define AVR32_QDEC_IDR_OSCB_MASK                            0x02000000
#define AVR32_QDEC_IDR_OSCB_OFFSET                                  25
#define AVR32_QDEC_IDR_OSCB_SIZE                                     1
#define AVR32_QDEC_IDR_OVR                                           7
#define AVR32_QDEC_IDR_OVR_MASK                             0x00000080
#define AVR32_QDEC_IDR_OVR_OFFSET                                    7
#define AVR32_QDEC_IDR_OVR_SIZE                                      1
#define AVR32_QDEC_IDR_PCRO                                          3
#define AVR32_QDEC_IDR_PCRO_MASK                            0x00000008
#define AVR32_QDEC_IDR_PCRO_OFFSET                                   3
#define AVR32_QDEC_IDR_PCRO_SIZE                                     1
#define AVR32_QDEC_IDR_QDERR                                         8
#define AVR32_QDEC_IDR_QDERR_MASK                           0x00000100
#define AVR32_QDEC_IDR_QDERR_OFFSET                                  8
#define AVR32_QDEC_IDR_QDERR_SIZE                                    1
#define AVR32_QDEC_IDR_QEPI                                          0
#define AVR32_QDEC_IDR_QEPI_MASK                            0x00000001
#define AVR32_QDEC_IDR_QEPI_OFFSET                                   0
#define AVR32_QDEC_IDR_QEPI_SIZE                                     1
#define AVR32_QDEC_IDR_RCRO                                          4
#define AVR32_QDEC_IDR_RCRO_MASK                            0x00000010
#define AVR32_QDEC_IDR_RCRO_OFFSET                                   4
#define AVR32_QDEC_IDR_RCRO_SIZE                                     1
#define AVR32_QDEC_IDR_RESETVALUE                           0x00000000
#define AVR32_QDEC_IDR_TRIGGER                                       9
#define AVR32_QDEC_IDR_TRIGGER_MASK                         0x00000200
#define AVR32_QDEC_IDR_TRIGGER_OFFSET                                9
#define AVR32_QDEC_IDR_TRIGGER_SIZE                                  1
#define AVR32_QDEC_IDR_WP                                           30
#define AVR32_QDEC_IDR_WPHA                                         26
#define AVR32_QDEC_IDR_WPHA_MASK                            0x04000000
#define AVR32_QDEC_IDR_WPHA_OFFSET                                  26
#define AVR32_QDEC_IDR_WPHA_SIZE                                     1
#define AVR32_QDEC_IDR_WPHB                                         27
#define AVR32_QDEC_IDR_WPHB_MASK                            0x08000000
#define AVR32_QDEC_IDR_WPHB_OFFSET                                  27
#define AVR32_QDEC_IDR_WPHB_SIZE                                     1
#define AVR32_QDEC_IDR_WP_MASK                              0x40000000
#define AVR32_QDEC_IDR_WP_OFFSET                                    30
#define AVR32_QDEC_IDR_WP_SIZE                                       1
#define AVR32_QDEC_IDXE                                              1
#define AVR32_QDEC_IDXERR                                            5
#define AVR32_QDEC_IDXERR_MASK                              0x00000020
#define AVR32_QDEC_IDXERR_OFFSET                                     5
#define AVR32_QDEC_IDXERR_SIZE                                       1
#define AVR32_QDEC_IDXE_MASK                                0x00000002
#define AVR32_QDEC_IDXE_OFFSET                                       1
#define AVR32_QDEC_IDXE_SIZE                                         1
#define AVR32_QDEC_IDXINV                                           10
#define AVR32_QDEC_IDXINV_MASK                              0x00000400
#define AVR32_QDEC_IDXINV_OFFSET                                    10
#define AVR32_QDEC_IDXINV_SIZE                                       1
#define AVR32_QDEC_IDXPHS                                           11
#define AVR32_QDEC_IDXPHS_MASK                              0x00001800
#define AVR32_QDEC_IDXPHS_OFFSET                                    11
#define AVR32_QDEC_IDXPHS_SIZE                                       2
#define AVR32_QDEC_IER                                      0x00000024
#define AVR32_QDEC_IER_CAP                                           2
#define AVR32_QDEC_IER_CAP_MASK                             0x00000004
#define AVR32_QDEC_IER_CAP_OFFSET                                    2
#define AVR32_QDEC_IER_CAP_SIZE                                      1
#define AVR32_QDEC_IER_CMP                                           1
#define AVR32_QDEC_IER_CMP_MASK                             0x00000002
#define AVR32_QDEC_IER_CMP_OFFSET                                    1
#define AVR32_QDEC_IER_CMP_SIZE                                      1
#define AVR32_QDEC_IER_CTA                                          28
#define AVR32_QDEC_IER_CTA_MASK                             0x10000000
#define AVR32_QDEC_IER_CTA_OFFSET                                   28
#define AVR32_QDEC_IER_CTA_SIZE                                      1
#define AVR32_QDEC_IER_CTB                                          29
#define AVR32_QDEC_IER_CTB_MASK                             0x20000000
#define AVR32_QDEC_IER_CTB_OFFSET                                   29
#define AVR32_QDEC_IER_CTB_SIZE                                      1
#define AVR32_QDEC_IER_DIRINV                                        6
#define AVR32_QDEC_IER_DIRINV_MASK                          0x00000040
#define AVR32_QDEC_IER_DIRINV_OFFSET                                 6
#define AVR32_QDEC_IER_DIRINV_SIZE                                   1
#define AVR32_QDEC_IER_IDXERR                                        5
#define AVR32_QDEC_IER_IDXERR_MASK                          0x00000020
#define AVR32_QDEC_IER_IDXERR_OFFSET                                 5
#define AVR32_QDEC_IER_IDXERR_SIZE                                   1
#define AVR32_QDEC_IER_MASK                                 0x7f0003ff
#define AVR32_QDEC_IER_OSCA                                         24
#define AVR32_QDEC_IER_OSCA_MASK                            0x01000000
#define AVR32_QDEC_IER_OSCA_OFFSET                                  24
#define AVR32_QDEC_IER_OSCA_SIZE                                     1
#define AVR32_QDEC_IER_OSCB                                         25
#define AVR32_QDEC_IER_OSCB_MASK                            0x02000000
#define AVR32_QDEC_IER_OSCB_OFFSET                                  25
#define AVR32_QDEC_IER_OSCB_SIZE                                     1
#define AVR32_QDEC_IER_OVR                                           7
#define AVR32_QDEC_IER_OVR_MASK                             0x00000080
#define AVR32_QDEC_IER_OVR_OFFSET                                    7
#define AVR32_QDEC_IER_OVR_SIZE                                      1
#define AVR32_QDEC_IER_PCRO                                          3
#define AVR32_QDEC_IER_PCRO_MASK                            0x00000008
#define AVR32_QDEC_IER_PCRO_OFFSET                                   3
#define AVR32_QDEC_IER_PCRO_SIZE                                     1
#define AVR32_QDEC_IER_QDERR                                         8
#define AVR32_QDEC_IER_QDERR_MASK                           0x00000100
#define AVR32_QDEC_IER_QDERR_OFFSET                                  8
#define AVR32_QDEC_IER_QDERR_SIZE                                    1
#define AVR32_QDEC_IER_QEPI                                          0
#define AVR32_QDEC_IER_QEPI_MASK                            0x00000001
#define AVR32_QDEC_IER_QEPI_OFFSET                                   0
#define AVR32_QDEC_IER_QEPI_SIZE                                     1
#define AVR32_QDEC_IER_RCRO                                          4
#define AVR32_QDEC_IER_RCRO_MASK                            0x00000010
#define AVR32_QDEC_IER_RCRO_OFFSET                                   4
#define AVR32_QDEC_IER_RCRO_SIZE                                     1
#define AVR32_QDEC_IER_RESETVALUE                           0x00000000
#define AVR32_QDEC_IER_TRIGGER                                       9
#define AVR32_QDEC_IER_TRIGGER_MASK                         0x00000200
#define AVR32_QDEC_IER_TRIGGER_OFFSET                                9
#define AVR32_QDEC_IER_TRIGGER_SIZE                                  1
#define AVR32_QDEC_IER_WP                                           30
#define AVR32_QDEC_IER_WPHA                                         26
#define AVR32_QDEC_IER_WPHA_MASK                            0x04000000
#define AVR32_QDEC_IER_WPHA_OFFSET                                  26
#define AVR32_QDEC_IER_WPHA_SIZE                                     1
#define AVR32_QDEC_IER_WPHB                                         27
#define AVR32_QDEC_IER_WPHB_MASK                            0x08000000
#define AVR32_QDEC_IER_WPHB_OFFSET                                  27
#define AVR32_QDEC_IER_WPHB_SIZE                                     1
#define AVR32_QDEC_IER_WP_MASK                              0x40000000
#define AVR32_QDEC_IER_WP_OFFSET                                    30
#define AVR32_QDEC_IER_WP_SIZE                                       1
#define AVR32_QDEC_IMR                                      0x00000020
#define AVR32_QDEC_IMR_CAP                                           2
#define AVR32_QDEC_IMR_CAP_MASK                             0x00000004
#define AVR32_QDEC_IMR_CAP_OFFSET                                    2
#define AVR32_QDEC_IMR_CAP_SIZE                                      1
#define AVR32_QDEC_IMR_CMP                                           1
#define AVR32_QDEC_IMR_CMP_MASK                             0x00000002
#define AVR32_QDEC_IMR_CMP_OFFSET                                    1
#define AVR32_QDEC_IMR_CMP_SIZE                                      1
#define AVR32_QDEC_IMR_CTA                                          28
#define AVR32_QDEC_IMR_CTA_MASK                             0x10000000
#define AVR32_QDEC_IMR_CTA_OFFSET                                   28
#define AVR32_QDEC_IMR_CTA_SIZE                                      1
#define AVR32_QDEC_IMR_CTB                                          29
#define AVR32_QDEC_IMR_CTB_MASK                             0x20000000
#define AVR32_QDEC_IMR_CTB_OFFSET                                   29
#define AVR32_QDEC_IMR_CTB_SIZE                                      1
#define AVR32_QDEC_IMR_DIRINV                                        6
#define AVR32_QDEC_IMR_DIRINV_MASK                          0x00000040
#define AVR32_QDEC_IMR_DIRINV_OFFSET                                 6
#define AVR32_QDEC_IMR_DIRINV_SIZE                                   1
#define AVR32_QDEC_IMR_IDXERR                                        5
#define AVR32_QDEC_IMR_IDXERR_MASK                          0x00000020
#define AVR32_QDEC_IMR_IDXERR_OFFSET                                 5
#define AVR32_QDEC_IMR_IDXERR_SIZE                                   1
#define AVR32_QDEC_IMR_MASK                                 0x7f0003ff
#define AVR32_QDEC_IMR_OSCA                                         24
#define AVR32_QDEC_IMR_OSCA_MASK                            0x01000000
#define AVR32_QDEC_IMR_OSCA_OFFSET                                  24
#define AVR32_QDEC_IMR_OSCA_SIZE                                     1
#define AVR32_QDEC_IMR_OSCB                                         25
#define AVR32_QDEC_IMR_OSCB_MASK                            0x02000000
#define AVR32_QDEC_IMR_OSCB_OFFSET                                  25
#define AVR32_QDEC_IMR_OSCB_SIZE                                     1
#define AVR32_QDEC_IMR_OVR                                           7
#define AVR32_QDEC_IMR_OVR_MASK                             0x00000080
#define AVR32_QDEC_IMR_OVR_OFFSET                                    7
#define AVR32_QDEC_IMR_OVR_SIZE                                      1
#define AVR32_QDEC_IMR_PCRO                                          3
#define AVR32_QDEC_IMR_PCRO_MASK                            0x00000008
#define AVR32_QDEC_IMR_PCRO_OFFSET                                   3
#define AVR32_QDEC_IMR_PCRO_SIZE                                     1
#define AVR32_QDEC_IMR_QDERR                                         8
#define AVR32_QDEC_IMR_QDERR_MASK                           0x00000100
#define AVR32_QDEC_IMR_QDERR_OFFSET                                  8
#define AVR32_QDEC_IMR_QDERR_SIZE                                    1
#define AVR32_QDEC_IMR_QEPI                                          0
#define AVR32_QDEC_IMR_QEPI_MASK                            0x00000001
#define AVR32_QDEC_IMR_QEPI_OFFSET                                   0
#define AVR32_QDEC_IMR_QEPI_SIZE                                     1
#define AVR32_QDEC_IMR_RCRO                                          4
#define AVR32_QDEC_IMR_RCRO_MASK                            0x00000010
#define AVR32_QDEC_IMR_RCRO_OFFSET                                   4
#define AVR32_QDEC_IMR_RCRO_SIZE                                     1
#define AVR32_QDEC_IMR_RESETVALUE                           0x00000000
#define AVR32_QDEC_IMR_TRIGGER                                       9
#define AVR32_QDEC_IMR_TRIGGER_MASK                         0x00000200
#define AVR32_QDEC_IMR_TRIGGER_OFFSET                                9
#define AVR32_QDEC_IMR_TRIGGER_SIZE                                  1
#define AVR32_QDEC_IMR_WP                                           30
#define AVR32_QDEC_IMR_WPHA                                         26
#define AVR32_QDEC_IMR_WPHA_MASK                            0x04000000
#define AVR32_QDEC_IMR_WPHA_OFFSET                                  26
#define AVR32_QDEC_IMR_WPHA_SIZE                                     1
#define AVR32_QDEC_IMR_WPHB                                         27
#define AVR32_QDEC_IMR_WPHB_MASK                            0x08000000
#define AVR32_QDEC_IMR_WPHB_OFFSET                                  27
#define AVR32_QDEC_IMR_WPHB_SIZE                                     1
#define AVR32_QDEC_IMR_WP_MASK                              0x40000000
#define AVR32_QDEC_IMR_WP_OFFSET                                    30
#define AVR32_QDEC_IMR_WP_SIZE                                       1
#define AVR32_QDEC_OSCA                                             24
#define AVR32_QDEC_OSCA_MASK                                0x01000000
#define AVR32_QDEC_OSCA_OFFSET                                      24
#define AVR32_QDEC_OSCA_SIZE                                         1
#define AVR32_QDEC_OSCB                                             25
#define AVR32_QDEC_OSCB_MASK                                0x02000000
#define AVR32_QDEC_OSCB_OFFSET                                      25
#define AVR32_QDEC_OSCB_SIZE                                         1
#define AVR32_QDEC_OVR                                               7
#define AVR32_QDEC_OVR_MASK                                 0x00000080
#define AVR32_QDEC_OVR_OFFSET                                        7
#define AVR32_QDEC_OVR_SIZE                                          1
#define AVR32_QDEC_PARAMETER                                0x0000002c
#define AVR32_QDEC_PARAMETER_MASK                           0x000000ff
#define AVR32_QDEC_PARAMETER_PC_SIZE                                 0
#define AVR32_QDEC_PARAMETER_PC_SIZE_MASK                   0x0000000f
#define AVR32_QDEC_PARAMETER_PC_SIZE_OFFSET                          0
#define AVR32_QDEC_PARAMETER_PC_SIZE_SIZE                            4
#define AVR32_QDEC_PARAMETER_RC_SIZE                                 4
#define AVR32_QDEC_PARAMETER_RC_SIZE_MASK                   0x000000f0
#define AVR32_QDEC_PARAMETER_RC_SIZE_OFFSET                          4
#define AVR32_QDEC_PARAMETER_RC_SIZE_SIZE                            4
#define AVR32_QDEC_PARAMETER_RESETVALUE                     0x000000ff
#define AVR32_QDEC_PC                                                0
#define AVR32_QDEC_PCCAP                                             0
#define AVR32_QDEC_PCCAP_MASK                               0x0000ffff
#define AVR32_QDEC_PCCAP_OFFSET                                      0
#define AVR32_QDEC_PCCAP_SIZE                                       16
#define AVR32_QDEC_PCCE                                              2
#define AVR32_QDEC_PCCE_MASK                                0x00000004
#define AVR32_QDEC_PCCE_OFFSET                                       2
#define AVR32_QDEC_PCCE_SIZE                                         1
#define AVR32_QDEC_PCCMP                                             0
#define AVR32_QDEC_PCCMP_MASK                               0x0000ffff
#define AVR32_QDEC_PCCMP_OFFSET                                      0
#define AVR32_QDEC_PCCMP_SIZE                                       16
#define AVR32_QDEC_PCRO                                              3
#define AVR32_QDEC_PCRO_MASK                                0x00000008
#define AVR32_QDEC_PCRO_OFFSET                                       3
#define AVR32_QDEC_PCRO_SIZE                                         1
#define AVR32_QDEC_PCTOP                                             0
#define AVR32_QDEC_PCTOP_MASK                               0x0000ffff
#define AVR32_QDEC_PCTOP_OFFSET                                      0
#define AVR32_QDEC_PCTOP_SIZE                                       16
#define AVR32_QDEC_PC_MASK                                  0x0000ffff
#define AVR32_QDEC_PC_OFFSET                                         0
#define AVR32_QDEC_PC_SIZE_MASK                             0x0000000f
#define AVR32_QDEC_PC_SIZE_OFFSET                                    0
#define AVR32_QDEC_PC_SIZE_SIZE                                      4
#define AVR32_QDEC_PHSINVA                                           8
#define AVR32_QDEC_PHSINVA_MASK                             0x00000100
#define AVR32_QDEC_PHSINVA_OFFSET                                    8
#define AVR32_QDEC_PHSINVA_SIZE                                      1
#define AVR32_QDEC_PHSINVB                                           9
#define AVR32_QDEC_PHSINVB_MASK                             0x00000200
#define AVR32_QDEC_PHSINVB_OFFSET                                    9
#define AVR32_QDEC_PHSINVB_SIZE                                      1
#define AVR32_QDEC_QDEC                                              0
#define AVR32_QDEC_QDEC_MASK                                0x00000001
#define AVR32_QDEC_QDEC_OFFSET                                       0
#define AVR32_QDEC_QDEC_SIZE                                         1
#define AVR32_QDEC_QDERR                                             8
#define AVR32_QDEC_QDERR_MASK                               0x00000100
#define AVR32_QDEC_QDERR_OFFSET                                      8
#define AVR32_QDEC_QDERR_SIZE                                        1
#define AVR32_QDEC_QEPI                                              0
#define AVR32_QDEC_QEPI_MASK                                0x00000001
#define AVR32_QDEC_QEPI_OFFSET                                       0
#define AVR32_QDEC_QEPI_SIZE                                         1
#define AVR32_QDEC_RC                                               16
#define AVR32_QDEC_RCCAP                                            16
#define AVR32_QDEC_RCCAP_MASK                               0xffff0000
#define AVR32_QDEC_RCCAP_OFFSET                                     16
#define AVR32_QDEC_RCCAP_SIZE                                       16
#define AVR32_QDEC_RCCE                                              3
#define AVR32_QDEC_RCCE_MASK                                0x00000008
#define AVR32_QDEC_RCCE_OFFSET                                       3
#define AVR32_QDEC_RCCE_SIZE                                         1
#define AVR32_QDEC_RCCMP                                            16
#define AVR32_QDEC_RCCMP_MASK                               0xffff0000
#define AVR32_QDEC_RCCMP_OFFSET                                     16
#define AVR32_QDEC_RCCMP_SIZE                                       16
#define AVR32_QDEC_RCRO                                              4
#define AVR32_QDEC_RCRO_MASK                                0x00000010
#define AVR32_QDEC_RCRO_OFFSET                                       4
#define AVR32_QDEC_RCRO_SIZE                                         1
#define AVR32_QDEC_RCTOP                                            16
#define AVR32_QDEC_RCTOP_MASK                               0xffff0000
#define AVR32_QDEC_RCTOP_OFFSET                                     16
#define AVR32_QDEC_RCTOP_SIZE                                       16
#define AVR32_QDEC_RC_MASK                                  0xffff0000
#define AVR32_QDEC_RC_OFFSET                                        16
#define AVR32_QDEC_RC_SIZE_MASK                             0x000000f0
#define AVR32_QDEC_RC_SIZE_OFFSET                                    4
#define AVR32_QDEC_RC_SIZE_SIZE                                      4
#define AVR32_QDEC_SCR                                      0x0000001c
#define AVR32_QDEC_SCR_CAP                                           2
#define AVR32_QDEC_SCR_CAP_MASK                             0x00000004
#define AVR32_QDEC_SCR_CAP_OFFSET                                    2
#define AVR32_QDEC_SCR_CAP_SIZE                                      1
#define AVR32_QDEC_SCR_CMP                                           1
#define AVR32_QDEC_SCR_CMP_MASK                             0x00000002
#define AVR32_QDEC_SCR_CMP_OFFSET                                    1
#define AVR32_QDEC_SCR_CMP_SIZE                                      1
#define AVR32_QDEC_SCR_CTA                                          28
#define AVR32_QDEC_SCR_CTA_MASK                             0x10000000
#define AVR32_QDEC_SCR_CTA_OFFSET                                   28
#define AVR32_QDEC_SCR_CTA_SIZE                                      1
#define AVR32_QDEC_SCR_CTB                                          29
#define AVR32_QDEC_SCR_CTB_MASK                             0x20000000
#define AVR32_QDEC_SCR_CTB_OFFSET                                   29
#define AVR32_QDEC_SCR_CTB_SIZE                                      1
#define AVR32_QDEC_SCR_DIRINV                                        6
#define AVR32_QDEC_SCR_DIRINV_MASK                          0x00000040
#define AVR32_QDEC_SCR_DIRINV_OFFSET                                 6
#define AVR32_QDEC_SCR_DIRINV_SIZE                                   1
#define AVR32_QDEC_SCR_IDXERR                                        5
#define AVR32_QDEC_SCR_IDXERR_MASK                          0x00000020
#define AVR32_QDEC_SCR_IDXERR_OFFSET                                 5
#define AVR32_QDEC_SCR_IDXERR_SIZE                                   1
#define AVR32_QDEC_SCR_MASK                                 0x7f0003ff
#define AVR32_QDEC_SCR_OSCA                                         24
#define AVR32_QDEC_SCR_OSCA_MASK                            0x01000000
#define AVR32_QDEC_SCR_OSCA_OFFSET                                  24
#define AVR32_QDEC_SCR_OSCA_SIZE                                     1
#define AVR32_QDEC_SCR_OSCB                                         25
#define AVR32_QDEC_SCR_OSCB_MASK                            0x02000000
#define AVR32_QDEC_SCR_OSCB_OFFSET                                  25
#define AVR32_QDEC_SCR_OSCB_SIZE                                     1
#define AVR32_QDEC_SCR_OVR                                           7
#define AVR32_QDEC_SCR_OVR_MASK                             0x00000080
#define AVR32_QDEC_SCR_OVR_OFFSET                                    7
#define AVR32_QDEC_SCR_OVR_SIZE                                      1
#define AVR32_QDEC_SCR_PCRO                                          3
#define AVR32_QDEC_SCR_PCRO_MASK                            0x00000008
#define AVR32_QDEC_SCR_PCRO_OFFSET                                   3
#define AVR32_QDEC_SCR_PCRO_SIZE                                     1
#define AVR32_QDEC_SCR_QDERR                                         8
#define AVR32_QDEC_SCR_QDERR_MASK                           0x00000100
#define AVR32_QDEC_SCR_QDERR_OFFSET                                  8
#define AVR32_QDEC_SCR_QDERR_SIZE                                    1
#define AVR32_QDEC_SCR_QEPI                                          0
#define AVR32_QDEC_SCR_QEPI_MASK                            0x00000001
#define AVR32_QDEC_SCR_QEPI_OFFSET                                   0
#define AVR32_QDEC_SCR_QEPI_SIZE                                     1
#define AVR32_QDEC_SCR_RCRO                                          4
#define AVR32_QDEC_SCR_RCRO_MASK                            0x00000010
#define AVR32_QDEC_SCR_RCRO_OFFSET                                   4
#define AVR32_QDEC_SCR_RCRO_SIZE                                     1
#define AVR32_QDEC_SCR_RESETVALUE                           0x00000000
#define AVR32_QDEC_SCR_TRIGGER                                       9
#define AVR32_QDEC_SCR_TRIGGER_MASK                         0x00000200
#define AVR32_QDEC_SCR_TRIGGER_OFFSET                                9
#define AVR32_QDEC_SCR_TRIGGER_SIZE                                  1
#define AVR32_QDEC_SCR_WP                                           30
#define AVR32_QDEC_SCR_WPHA                                         26
#define AVR32_QDEC_SCR_WPHA_MASK                            0x04000000
#define AVR32_QDEC_SCR_WPHA_OFFSET                                  26
#define AVR32_QDEC_SCR_WPHA_SIZE                                     1
#define AVR32_QDEC_SCR_WPHB                                         27
#define AVR32_QDEC_SCR_WPHB_MASK                            0x08000000
#define AVR32_QDEC_SCR_WPHB_OFFSET                                  27
#define AVR32_QDEC_SCR_WPHB_SIZE                                     1
#define AVR32_QDEC_SCR_WP_MASK                              0x40000000
#define AVR32_QDEC_SCR_WP_OFFSET                                    30
#define AVR32_QDEC_SCR_WP_SIZE                                       1
#define AVR32_QDEC_SR                                       0x00000018
#define AVR32_QDEC_SR_CAP                                            2
#define AVR32_QDEC_SR_CAP_MASK                              0x00000004
#define AVR32_QDEC_SR_CAP_OFFSET                                     2
#define AVR32_QDEC_SR_CAP_SIZE                                       1
#define AVR32_QDEC_SR_CLKEN                                         17
#define AVR32_QDEC_SR_CLKEN_MASK                            0x00020000
#define AVR32_QDEC_SR_CLKEN_OFFSET                                  17
#define AVR32_QDEC_SR_CLKEN_SIZE                                     1
#define AVR32_QDEC_SR_CMP                                            1
#define AVR32_QDEC_SR_CMP_MASK                              0x00000002
#define AVR32_QDEC_SR_CMP_OFFSET                                     1
#define AVR32_QDEC_SR_CMP_SIZE                                       1
#define AVR32_QDEC_SR_CNTDIR                                        16
#define AVR32_QDEC_SR_CNTDIR_MASK                           0x00010000
#define AVR32_QDEC_SR_CNTDIR_OFFSET                                 16
#define AVR32_QDEC_SR_CNTDIR_SIZE                                    1
#define AVR32_QDEC_SR_CTA                                           28
#define AVR32_QDEC_SR_CTA_MASK                              0x10000000
#define AVR32_QDEC_SR_CTA_OFFSET                                    28
#define AVR32_QDEC_SR_CTA_SIZE                                       1
#define AVR32_QDEC_SR_CTB                                           29
#define AVR32_QDEC_SR_CTB_MASK                              0x20000000
#define AVR32_QDEC_SR_CTB_OFFSET                                    29
#define AVR32_QDEC_SR_CTB_SIZE                                       1
#define AVR32_QDEC_SR_DIRINV                                         6
#define AVR32_QDEC_SR_DIRINV_MASK                           0x00000040
#define AVR32_QDEC_SR_DIRINV_OFFSET                                  6
#define AVR32_QDEC_SR_DIRINV_SIZE                                    1
#define AVR32_QDEC_SR_IDXERR                                         5
#define AVR32_QDEC_SR_IDXERR_MASK                           0x00000020
#define AVR32_QDEC_SR_IDXERR_OFFSET                                  5
#define AVR32_QDEC_SR_IDXERR_SIZE                                    1
#define AVR32_QDEC_SR_MASK                                  0x7f0303ff
#define AVR32_QDEC_SR_OSCA                                          24
#define AVR32_QDEC_SR_OSCA_MASK                             0x01000000
#define AVR32_QDEC_SR_OSCA_OFFSET                                   24
#define AVR32_QDEC_SR_OSCA_SIZE                                      1
#define AVR32_QDEC_SR_OSCB                                          25
#define AVR32_QDEC_SR_OSCB_MASK                             0x02000000
#define AVR32_QDEC_SR_OSCB_OFFSET                                   25
#define AVR32_QDEC_SR_OSCB_SIZE                                      1
#define AVR32_QDEC_SR_OVR                                            7
#define AVR32_QDEC_SR_OVR_MASK                              0x00000080
#define AVR32_QDEC_SR_OVR_OFFSET                                     7
#define AVR32_QDEC_SR_OVR_SIZE                                       1
#define AVR32_QDEC_SR_PCRO                                           3
#define AVR32_QDEC_SR_PCRO_MASK                             0x00000008
#define AVR32_QDEC_SR_PCRO_OFFSET                                    3
#define AVR32_QDEC_SR_PCRO_SIZE                                      1
#define AVR32_QDEC_SR_QDERR                                          8
#define AVR32_QDEC_SR_QDERR_MASK                            0x00000100
#define AVR32_QDEC_SR_QDERR_OFFSET                                   8
#define AVR32_QDEC_SR_QDERR_SIZE                                     1
#define AVR32_QDEC_SR_QEPI                                           0
#define AVR32_QDEC_SR_QEPI_MASK                             0x00000001
#define AVR32_QDEC_SR_QEPI_OFFSET                                    0
#define AVR32_QDEC_SR_QEPI_SIZE                                      1
#define AVR32_QDEC_SR_RCRO                                           4
#define AVR32_QDEC_SR_RCRO_MASK                             0x00000010
#define AVR32_QDEC_SR_RCRO_OFFSET                                    4
#define AVR32_QDEC_SR_RCRO_SIZE                                      1
#define AVR32_QDEC_SR_RESETVALUE                            0x00000000
#define AVR32_QDEC_SR_TRIGGER                                        9
#define AVR32_QDEC_SR_TRIGGER_MASK                          0x00000200
#define AVR32_QDEC_SR_TRIGGER_OFFSET                                 9
#define AVR32_QDEC_SR_TRIGGER_SIZE                                   1
#define AVR32_QDEC_SR_WP                                            30
#define AVR32_QDEC_SR_WPHA                                          26
#define AVR32_QDEC_SR_WPHA_MASK                             0x04000000
#define AVR32_QDEC_SR_WPHA_OFFSET                                   26
#define AVR32_QDEC_SR_WPHA_SIZE                                      1
#define AVR32_QDEC_SR_WPHB                                          27
#define AVR32_QDEC_SR_WPHB_MASK                             0x08000000
#define AVR32_QDEC_SR_WPHB_OFFSET                                   27
#define AVR32_QDEC_SR_WPHB_SIZE                                      1
#define AVR32_QDEC_SR_WP_MASK                               0x40000000
#define AVR32_QDEC_SR_WP_OFFSET                                     30
#define AVR32_QDEC_SR_WP_SIZE                                        1
#define AVR32_QDEC_SWTRG                                             1
#define AVR32_QDEC_SWTRG_MASK                               0x00000002
#define AVR32_QDEC_SWTRG_OFFSET                                      1
#define AVR32_QDEC_SWTRG_SIZE                                        1
#define AVR32_QDEC_TOP                                      0x0000000c
#define AVR32_QDEC_TOP_MASK                                 0xffffffff
#define AVR32_QDEC_TOP_PCTOP                                         0
#define AVR32_QDEC_TOP_PCTOP_MASK                           0x0000ffff
#define AVR32_QDEC_TOP_PCTOP_OFFSET                                  0
#define AVR32_QDEC_TOP_PCTOP_SIZE                                   16
#define AVR32_QDEC_TOP_RCTOP                                        16
#define AVR32_QDEC_TOP_RCTOP_MASK                           0xffff0000
#define AVR32_QDEC_TOP_RCTOP_OFFSET                                 16
#define AVR32_QDEC_TOP_RCTOP_SIZE                                   16
#define AVR32_QDEC_TOP_RESETVALUE                           0x00000000
#define AVR32_QDEC_TRIGGER                                           9
#define AVR32_QDEC_TRIGGER_MASK                             0x00000200
#define AVR32_QDEC_TRIGGER_OFFSET                                    9
#define AVR32_QDEC_TRIGGER_SIZE                                      1
#define AVR32_QDEC_TSDIR                                            16
#define AVR32_QDEC_TSDIR_MASK                               0x00010000
#define AVR32_QDEC_TSDIR_OFFSET                                     16
#define AVR32_QDEC_TSDIR_SIZE                                        1
#define AVR32_QDEC_UPD                                              17
#define AVR32_QDEC_UPD_MASK                                 0x00020000
#define AVR32_QDEC_UPD_OFFSET                                       17
#define AVR32_QDEC_UPD_SIZE                                          1
#define AVR32_QDEC_VARIANT                                          16
#define AVR32_QDEC_VARIANT_MASK                             0x000f0000
#define AVR32_QDEC_VARIANT_OFFSET                                   16
#define AVR32_QDEC_VARIANT_SIZE                                      4
#define AVR32_QDEC_VERSION                                  0x00000030
#define AVR32_QDEC_VERSION_MASK                             0x000f0fff
#define AVR32_QDEC_VERSION_OFFSET                                    0
#define AVR32_QDEC_VERSION_RESETVALUE                       0x00000100
#define AVR32_QDEC_VERSION_SIZE                                     12
#define AVR32_QDEC_VERSION_VARIANT                                  16
#define AVR32_QDEC_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_QDEC_VERSION_VARIANT_OFFSET                           16
#define AVR32_QDEC_VERSION_VARIANT_SIZE                              4
#define AVR32_QDEC_VERSION_VERSION                                   0
#define AVR32_QDEC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_QDEC_VERSION_VERSION_OFFSET                            0
#define AVR32_QDEC_VERSION_VERSION_SIZE                             12
#define AVR32_QDEC_WP                                               30
#define AVR32_QDEC_WPHA                                             26
#define AVR32_QDEC_WPHA_MASK                                0x04000000
#define AVR32_QDEC_WPHA_OFFSET                                      26
#define AVR32_QDEC_WPHA_SIZE                                         1
#define AVR32_QDEC_WPHB                                             27
#define AVR32_QDEC_WPHB_MASK                                0x08000000
#define AVR32_QDEC_WPHB_OFFSET                                      27
#define AVR32_QDEC_WPHB_SIZE                                         1
#define AVR32_QDEC_WP_MASK                                  0x40000000
#define AVR32_QDEC_WP_OFFSET                                        30
#define AVR32_QDEC_WP_SIZE                                           1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_qdec_ctrl_t {
    unsigned int                 :30;
    unsigned int swtrg           : 1;
    unsigned int clken           : 1;
} avr32_qdec_ctrl_t;



typedef struct avr32_qdec_cf_t {
    unsigned int                 :14;
    unsigned int upd             : 1;
    unsigned int tsdir           : 1;
    unsigned int                 : 2;
    unsigned int filten          : 1;
    unsigned int idxphs          : 2;
    unsigned int idxinv          : 1;
    unsigned int phsinvb         : 1;
    unsigned int phsinva         : 1;
    unsigned int                 : 3;
    unsigned int evtrge          : 1;
    unsigned int rcce            : 1;
    unsigned int pcce            : 1;
    unsigned int idxe            : 1;
    unsigned int qdec            : 1;
} avr32_qdec_cf_t;



typedef struct avr32_qdec_cnt_t {
    unsigned int rc              :16;
    unsigned int pc              :16;
} avr32_qdec_cnt_t;



typedef struct avr32_qdec_top_t {
    unsigned int rctop           :16;
    unsigned int pctop           :16;
} avr32_qdec_top_t;



typedef struct avr32_qdec_cmp_t {
    unsigned int rccmp           :16;
    unsigned int pccmp           :16;
} avr32_qdec_cmp_t;



typedef struct avr32_qdec_cap_t {
    unsigned int rccap           :16;
    unsigned int pccap           :16;
} avr32_qdec_cap_t;



typedef struct avr32_qdec_sr_t {
    unsigned int                 : 1;
    unsigned int wp              : 1;
    unsigned int ctb             : 1;
    unsigned int cta             : 1;
    unsigned int wphb            : 1;
    unsigned int wpha            : 1;
    unsigned int oscb            : 1;
    unsigned int osca            : 1;
    unsigned int                 : 6;
    unsigned int clken           : 1;
    unsigned int cntdir          : 1;
    unsigned int                 : 6;
    unsigned int trigger         : 1;
    unsigned int qderr           : 1;
    unsigned int ovr             : 1;
    unsigned int dirinv          : 1;
    unsigned int idxerr          : 1;
    unsigned int rcro            : 1;
    unsigned int pcro            : 1;
    unsigned int cap             : 1;
    unsigned int cmp             : 1;
    unsigned int qepi            : 1;
} avr32_qdec_sr_t;



typedef struct avr32_qdec_scr_t {
    unsigned int                 : 1;
    unsigned int wp              : 1;
    unsigned int ctb             : 1;
    unsigned int cta             : 1;
    unsigned int wphb            : 1;
    unsigned int wpha            : 1;
    unsigned int oscb            : 1;
    unsigned int osca            : 1;
    unsigned int                 :14;
    unsigned int trigger         : 1;
    unsigned int qderr           : 1;
    unsigned int ovr             : 1;
    unsigned int dirinv          : 1;
    unsigned int idxerr          : 1;
    unsigned int rcro            : 1;
    unsigned int pcro            : 1;
    unsigned int cap             : 1;
    unsigned int cmp             : 1;
    unsigned int qepi            : 1;
} avr32_qdec_scr_t;



typedef struct avr32_qdec_imr_t {
    unsigned int                 : 1;
    unsigned int wp              : 1;
    unsigned int ctb             : 1;
    unsigned int cta             : 1;
    unsigned int wphb            : 1;
    unsigned int wpha            : 1;
    unsigned int oscb            : 1;
    unsigned int osca            : 1;
    unsigned int                 :14;
    unsigned int trigger         : 1;
    unsigned int qderr           : 1;
    unsigned int ovr             : 1;
    unsigned int dirinv          : 1;
    unsigned int idxerr          : 1;
    unsigned int rcro            : 1;
    unsigned int pcro            : 1;
    unsigned int cap             : 1;
    unsigned int cmp             : 1;
    unsigned int qepi            : 1;
} avr32_qdec_imr_t;



typedef struct avr32_qdec_ier_t {
    unsigned int                 : 1;
    unsigned int wp              : 1;
    unsigned int ctb             : 1;
    unsigned int cta             : 1;
    unsigned int wphb            : 1;
    unsigned int wpha            : 1;
    unsigned int oscb            : 1;
    unsigned int osca            : 1;
    unsigned int                 :14;
    unsigned int trigger         : 1;
    unsigned int qderr           : 1;
    unsigned int ovr             : 1;
    unsigned int dirinv          : 1;
    unsigned int idxerr          : 1;
    unsigned int rcro            : 1;
    unsigned int pcro            : 1;
    unsigned int cap             : 1;
    unsigned int cmp             : 1;
    unsigned int qepi            : 1;
} avr32_qdec_ier_t;



typedef struct avr32_qdec_idr_t {
    unsigned int                 : 1;
    unsigned int wp              : 1;
    unsigned int ctb             : 1;
    unsigned int cta             : 1;
    unsigned int wphb            : 1;
    unsigned int wpha            : 1;
    unsigned int oscb            : 1;
    unsigned int osca            : 1;
    unsigned int                 :14;
    unsigned int trigger         : 1;
    unsigned int qderr           : 1;
    unsigned int ovr             : 1;
    unsigned int dirinv          : 1;
    unsigned int idxerr          : 1;
    unsigned int rcro            : 1;
    unsigned int pcro            : 1;
    unsigned int cap             : 1;
    unsigned int cmp             : 1;
    unsigned int qepi            : 1;
} avr32_qdec_idr_t;



typedef struct avr32_qdec_parameter_t {
    unsigned int                 :24;
    unsigned int rc_size         : 4;
    unsigned int pc_size         : 4;
} avr32_qdec_parameter_t;



typedef struct avr32_qdec_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_qdec_version_t;



typedef struct avr32_qdec_t {
  union {
          unsigned long                  ctrl      ;//0x0000
          avr32_qdec_ctrl_t              CTRL      ;
  };
  union {
          unsigned long                  cf        ;//0x0004
          avr32_qdec_cf_t                CF        ;
  };
  union {
          unsigned long                  cnt       ;//0x0008
          avr32_qdec_cnt_t               CNT       ;
  };
  union {
          unsigned long                  top       ;//0x000c
          avr32_qdec_top_t               TOP       ;
  };
  union {
          unsigned long                  cmp       ;//0x0010
          avr32_qdec_cmp_t               CMP       ;
  };
  union {
    const unsigned long                  cap       ;//0x0014
    const avr32_qdec_cap_t               CAP       ;
  };
  union {
    const unsigned long                  sr        ;//0x0018
    const avr32_qdec_sr_t                SR        ;
  };
  union {
          unsigned long                  scr       ;//0x001c
          avr32_qdec_scr_t               SCR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0020
    const avr32_qdec_imr_t               IMR       ;
  };
  union {
          unsigned long                  ier       ;//0x0024
          avr32_qdec_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0028
          avr32_qdec_idr_t               IDR       ;
  };
  union {
    const unsigned long                  parameter ;//0x002c
    const avr32_qdec_parameter_t         PARAMETER ;
  };
  union {
    const unsigned long                  version   ;//0x0030
    const avr32_qdec_version_t           VERSION   ;
  };
} avr32_qdec_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_QDEC_100_H_INCLUDED*/
#endif

