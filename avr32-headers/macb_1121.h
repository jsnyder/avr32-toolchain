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
#ifndef AVR32_MACB_1121_H_INCLUDED
#define AVR32_MACB_1121_H_INCLUDED

#define AVR32_MACB_H_VERSION 1121

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_MACB_<register>
 - Bitfield mask:   AVR32_MACB_<register>_<bitfield>
 - Bitfield offset: AVR32_MACB_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MACB_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_MACB_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_MACB_<bitfield>
 - Bitfield offset: AVR32_MACB_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MACB_<bitfield>_SIZE
 - Bitfield values: AVR32_MACB_<bitfield>_<value name>
 - Bitfield values: AVR32_MACB_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_MACB_ADDR                                              0
#define AVR32_MACB_ADDR_OFFSET                                       0
#define AVR32_MACB_ALE                                      0x00000054
#define AVR32_MACB_ALE_ALE                                           0
#define AVR32_MACB_ALE_ALE_MASK                             0x000000ff
#define AVR32_MACB_ALE_ALE_OFFSET                                    0
#define AVR32_MACB_ALE_ALE_SIZE                                      8
#define AVR32_MACB_ALE_MASK                                 0x000000ff
#define AVR32_MACB_ALE_OFFSET                                        0
#define AVR32_MACB_ALE_SIZE                                          8
#define AVR32_MACB_ARP                                              17
#define AVR32_MACB_ARP_MASK                                 0x00020000
#define AVR32_MACB_ARP_OFFSET                                       17
#define AVR32_MACB_ARP_SIZE                                          1
#define AVR32_MACB_BEX                                               4
#define AVR32_MACB_BEX_MASK                                 0x00000010
#define AVR32_MACB_BEX_OFFSET                                        4
#define AVR32_MACB_BEX_SIZE                                          1
#define AVR32_MACB_BIG                                               8
#define AVR32_MACB_BIG_MASK                                 0x00000100
#define AVR32_MACB_BIG_OFFSET                                        8
#define AVR32_MACB_BIG_SIZE                                          1
#define AVR32_MACB_BIT_RATE                                          2
#define AVR32_MACB_BIT_RATE_MASK                            0x00000004
#define AVR32_MACB_BIT_RATE_OFFSET                                   2
#define AVR32_MACB_BIT_RATE_SIZE                                     1
#define AVR32_MACB_BNA                                               0
#define AVR32_MACB_BNA_MASK                                 0x00000001
#define AVR32_MACB_BNA_OFFSET                                        0
#define AVR32_MACB_BNA_SIZE                                          1
#define AVR32_MACB_BP                                                8
#define AVR32_MACB_BP_MASK                                  0x00000100
#define AVR32_MACB_BP_OFFSET                                         8
#define AVR32_MACB_BP_SIZE                                           1
#define AVR32_MACB_CAF                                               4
#define AVR32_MACB_CAF_MASK                                 0x00000010
#define AVR32_MACB_CAF_OFFSET                                        4
#define AVR32_MACB_CAF_SIZE                                          1
#define AVR32_MACB_CLK                                              10
#define AVR32_MACB_CLK_DIV16                                0x00000001
#define AVR32_MACB_CLK_DIV32                                0x00000002
#define AVR32_MACB_CLK_DIV64                                0x00000003
#define AVR32_MACB_CLK_DIV8                                 0x00000000
#define AVR32_MACB_CLK_MASK                                 0x00000c00
#define AVR32_MACB_CLK_OFFSET                                       10
#define AVR32_MACB_CLK_SIZE                                          2
#define AVR32_MACB_CLRSTAT                                           5
#define AVR32_MACB_CLRSTAT_MASK                             0x00000020
#define AVR32_MACB_CLRSTAT_OFFSET                                    5
#define AVR32_MACB_CLRSTAT_SIZE                                      1
#define AVR32_MACB_CODE                                             16
#define AVR32_MACB_CODE_MASK                                0x00030000
#define AVR32_MACB_CODE_OFFSET                                      16
#define AVR32_MACB_CODE_SIZE                                         2
#define AVR32_MACB_COL                                               1
#define AVR32_MACB_COL_MASK                                 0x00000002
#define AVR32_MACB_COL_OFFSET                                        1
#define AVR32_MACB_COL_SIZE                                          1
#define AVR32_MACB_COMP                                              5
#define AVR32_MACB_COMP_MASK                                0x00000020
#define AVR32_MACB_COMP_OFFSET                                       5
#define AVR32_MACB_COMP_SIZE                                         1
#define AVR32_MACB_CSE                                      0x00000068
#define AVR32_MACB_CSE_CSE                                           0
#define AVR32_MACB_CSE_CSE_MASK                             0x000000ff
#define AVR32_MACB_CSE_CSE_OFFSET                                    0
#define AVR32_MACB_CSE_CSE_SIZE                                      8
#define AVR32_MACB_CSE_MASK                                 0x000000ff
#define AVR32_MACB_CSE_OFFSET                                        0
#define AVR32_MACB_CSE_SIZE                                          8
#define AVR32_MACB_DATA                                              0
#define AVR32_MACB_DATA_MASK                                0x0000ffff
#define AVR32_MACB_DATA_OFFSET                                       0
#define AVR32_MACB_DATA_SIZE                                        16
#define AVR32_MACB_DIV16                                    0x00000001
#define AVR32_MACB_DIV32                                    0x00000002
#define AVR32_MACB_DIV64                                    0x00000003
#define AVR32_MACB_DIV8                                     0x00000000
#define AVR32_MACB_DRFCS                                            17
#define AVR32_MACB_DRFCS_MASK                               0x00020000
#define AVR32_MACB_DRFCS_OFFSET                                     17
#define AVR32_MACB_DRFCS_SIZE                                        1
#define AVR32_MACB_DTF                                      0x00000058
#define AVR32_MACB_DTF_DTF                                           0
#define AVR32_MACB_DTF_DTF_MASK                             0x0000ffff
#define AVR32_MACB_DTF_DTF_OFFSET                                    0
#define AVR32_MACB_DTF_DTF_SIZE                                     16
#define AVR32_MACB_DTF_MASK                                 0x0000ffff
#define AVR32_MACB_DTF_OFFSET                                        0
#define AVR32_MACB_DTF_SIZE                                         16
#define AVR32_MACB_EAE                                               9
#define AVR32_MACB_EAE_MASK                                 0x00000200
#define AVR32_MACB_EAE_OFFSET                                        9
#define AVR32_MACB_EAE_SIZE                                          1
#define AVR32_MACB_EAM                                               1
#define AVR32_MACB_EAM_MASK                                 0x00000002
#define AVR32_MACB_EAM_OFFSET                                        1
#define AVR32_MACB_EAM_SIZE                                          1
#define AVR32_MACB_EFRHD                                            18
#define AVR32_MACB_EFRHD_MASK                               0x00040000
#define AVR32_MACB_EFRHD_OFFSET                                     18
#define AVR32_MACB_EFRHD_SIZE                                        1
#define AVR32_MACB_ELE                                      0x00000078
#define AVR32_MACB_ELE_EXL                                           0
#define AVR32_MACB_ELE_EXL_MASK                             0x000000ff
#define AVR32_MACB_ELE_EXL_OFFSET                                    0
#define AVR32_MACB_ELE_EXL_SIZE                                      8
#define AVR32_MACB_EXCOL                                    0x00000060
#define AVR32_MACB_EXCOL_EXCOL                                       0
#define AVR32_MACB_EXCOL_EXCOL_MASK                         0x000000ff
#define AVR32_MACB_EXCOL_EXCOL_OFFSET                                0
#define AVR32_MACB_EXCOL_EXCOL_SIZE                                  8
#define AVR32_MACB_EXCOL_MASK                               0x000000ff
#define AVR32_MACB_EXCOL_OFFSET                                      0
#define AVR32_MACB_EXCOL_SIZE                                        8
#define AVR32_MACB_EXL                                               0
#define AVR32_MACB_EXL_MASK                                 0x000000ff
#define AVR32_MACB_EXL_OFFSET                                        0
#define AVR32_MACB_EXL_SIZE                                          8
#define AVR32_MACB_FCSE                                     0x00000050
#define AVR32_MACB_FCSE_FCSE                                         0
#define AVR32_MACB_FCSE_FCSE_MASK                           0x000000ff
#define AVR32_MACB_FCSE_FCSE_OFFSET                                  0
#define AVR32_MACB_FCSE_FCSE_SIZE                                    8
#define AVR32_MACB_FCSE_MASK                                0x000000ff
#define AVR32_MACB_FCSE_OFFSET                                       0
#define AVR32_MACB_FCSE_SIZE                                         8
#define AVR32_MACB_FD                                                1
#define AVR32_MACB_FD_MASK                                  0x00000002
#define AVR32_MACB_FD_OFFSET                                         1
#define AVR32_MACB_FD_SIZE                                           1
#define AVR32_MACB_FRO                                      0x0000004c
#define AVR32_MACB_FROK                                              0
#define AVR32_MACB_FROK_OFFSET                                       0
#define AVR32_MACB_FRO_FROK                                          0
#define AVR32_MACB_FRO_FROK_MASK                            0x00ffffff
#define AVR32_MACB_FRO_FROK_OFFSET                                   0
#define AVR32_MACB_FRO_FROK_SIZE                                    24
#define AVR32_MACB_FTO                                      0x00000040
#define AVR32_MACB_FTOK                                              0
#define AVR32_MACB_FTOK_MASK                                0x00ffffff
#define AVR32_MACB_FTOK_OFFSET                                       0
#define AVR32_MACB_FTOK_SIZE                                        24
#define AVR32_MACB_FTO_FTOK                                          0
#define AVR32_MACB_FTO_FTOK_MASK                            0x00ffffff
#define AVR32_MACB_FTO_FTOK_OFFSET                                   0
#define AVR32_MACB_FTO_FTOK_SIZE                                    24
#define AVR32_MACB_HRB                                      0x00000090
#define AVR32_MACB_HRB_ADDR                                          0
#define AVR32_MACB_HRB_ADDR_MASK                            0xffffffff
#define AVR32_MACB_HRB_ADDR_OFFSET                                   0
#define AVR32_MACB_HRB_ADDR_SIZE                                    32
#define AVR32_MACB_HRESP                                            11
#define AVR32_MACB_HRESP_MASK                               0x00000800
#define AVR32_MACB_HRESP_OFFSET                                     11
#define AVR32_MACB_HRESP_SIZE                                        1
#define AVR32_MACB_HRT                                      0x00000094
#define AVR32_MACB_HRT_ADDR                                          0
#define AVR32_MACB_HRT_ADDR_MASK                            0xffffffff
#define AVR32_MACB_HRT_ADDR_OFFSET                                   0
#define AVR32_MACB_HRT_ADDR_SIZE                                    32
#define AVR32_MACB_IDLE                                              2
#define AVR32_MACB_IDLE_MASK                                0x00000004
#define AVR32_MACB_IDLE_OFFSET                                       2
#define AVR32_MACB_IDLE_SIZE                                         1
#define AVR32_MACB_IDR                                      0x0000002c
#define AVR32_MACB_IDR_HRESP                                        11
#define AVR32_MACB_IDR_HRESP_MASK                           0x00000800
#define AVR32_MACB_IDR_HRESP_OFFSET                                 11
#define AVR32_MACB_IDR_HRESP_SIZE                                    1
#define AVR32_MACB_IDR_MFD                                           0
#define AVR32_MACB_IDR_MFD_MASK                             0x00000001
#define AVR32_MACB_IDR_MFD_OFFSET                                    0
#define AVR32_MACB_IDR_MFD_SIZE                                      1
#define AVR32_MACB_IDR_PFR                                          12
#define AVR32_MACB_IDR_PFR_MASK                             0x00001000
#define AVR32_MACB_IDR_PFR_OFFSET                                   12
#define AVR32_MACB_IDR_PFR_SIZE                                      1
#define AVR32_MACB_IDR_PTZ                                          13
#define AVR32_MACB_IDR_PTZ_MASK                             0x00002000
#define AVR32_MACB_IDR_PTZ_OFFSET                                   13
#define AVR32_MACB_IDR_PTZ_SIZE                                      1
#define AVR32_MACB_IDR_RCOMP                                         1
#define AVR32_MACB_IDR_RCOMP_MASK                           0x00000002
#define AVR32_MACB_IDR_RCOMP_OFFSET                                  1
#define AVR32_MACB_IDR_RCOMP_SIZE                                    1
#define AVR32_MACB_IDR_RLE                                           5
#define AVR32_MACB_IDR_RLE_MASK                             0x00000020
#define AVR32_MACB_IDR_RLE_OFFSET                                    5
#define AVR32_MACB_IDR_RLE_SIZE                                      1
#define AVR32_MACB_IDR_ROVR                                         10
#define AVR32_MACB_IDR_ROVR_MASK                            0x00000400
#define AVR32_MACB_IDR_ROVR_OFFSET                                  10
#define AVR32_MACB_IDR_ROVR_SIZE                                     1
#define AVR32_MACB_IDR_RXUBR                                         2
#define AVR32_MACB_IDR_RXUBR_MASK                           0x00000004
#define AVR32_MACB_IDR_RXUBR_OFFSET                                  2
#define AVR32_MACB_IDR_RXUBR_SIZE                                    1
#define AVR32_MACB_IDR_TCOMP                                         7
#define AVR32_MACB_IDR_TCOMP_MASK                           0x00000080
#define AVR32_MACB_IDR_TCOMP_OFFSET                                  7
#define AVR32_MACB_IDR_TCOMP_SIZE                                    1
#define AVR32_MACB_IDR_TUND                                          4
#define AVR32_MACB_IDR_TUND_MASK                            0x00000010
#define AVR32_MACB_IDR_TUND_OFFSET                                   4
#define AVR32_MACB_IDR_TUND_SIZE                                     1
#define AVR32_MACB_IDR_TXERR                                         6
#define AVR32_MACB_IDR_TXERR_MASK                           0x00000040
#define AVR32_MACB_IDR_TXERR_OFFSET                                  6
#define AVR32_MACB_IDR_TXERR_SIZE                                    1
#define AVR32_MACB_IDR_TXUBR                                         3
#define AVR32_MACB_IDR_TXUBR_MASK                           0x00000008
#define AVR32_MACB_IDR_TXUBR_OFFSET                                  3
#define AVR32_MACB_IDR_TXUBR_SIZE                                    1
#define AVR32_MACB_IER                                      0x00000028
#define AVR32_MACB_IER_HRESP                                        11
#define AVR32_MACB_IER_HRESP_MASK                           0x00000800
#define AVR32_MACB_IER_HRESP_OFFSET                                 11
#define AVR32_MACB_IER_HRESP_SIZE                                    1
#define AVR32_MACB_IER_MFD                                           0
#define AVR32_MACB_IER_MFD_MASK                             0x00000001
#define AVR32_MACB_IER_MFD_OFFSET                                    0
#define AVR32_MACB_IER_MFD_SIZE                                      1
#define AVR32_MACB_IER_PFR                                          12
#define AVR32_MACB_IER_PFR_MASK                             0x00001000
#define AVR32_MACB_IER_PFR_OFFSET                                   12
#define AVR32_MACB_IER_PFR_SIZE                                      1
#define AVR32_MACB_IER_PTZ                                          13
#define AVR32_MACB_IER_PTZ_MASK                             0x00002000
#define AVR32_MACB_IER_PTZ_OFFSET                                   13
#define AVR32_MACB_IER_PTZ_SIZE                                      1
#define AVR32_MACB_IER_RCOMP                                         1
#define AVR32_MACB_IER_RCOMP_MASK                           0x00000002
#define AVR32_MACB_IER_RCOMP_OFFSET                                  1
#define AVR32_MACB_IER_RCOMP_SIZE                                    1
#define AVR32_MACB_IER_RLE                                           5
#define AVR32_MACB_IER_RLE_MASK                             0x00000020
#define AVR32_MACB_IER_RLE_OFFSET                                    5
#define AVR32_MACB_IER_RLE_SIZE                                      1
#define AVR32_MACB_IER_ROVR                                         10
#define AVR32_MACB_IER_ROVR_MASK                            0x00000400
#define AVR32_MACB_IER_ROVR_OFFSET                                  10
#define AVR32_MACB_IER_ROVR_SIZE                                     1
#define AVR32_MACB_IER_RXUBR                                         2
#define AVR32_MACB_IER_RXUBR_MASK                           0x00000004
#define AVR32_MACB_IER_RXUBR_OFFSET                                  2
#define AVR32_MACB_IER_RXUBR_SIZE                                    1
#define AVR32_MACB_IER_TCOMP                                         7
#define AVR32_MACB_IER_TCOMP_MASK                           0x00000080
#define AVR32_MACB_IER_TCOMP_OFFSET                                  7
#define AVR32_MACB_IER_TCOMP_SIZE                                    1
#define AVR32_MACB_IER_TUND                                          4
#define AVR32_MACB_IER_TUND_MASK                            0x00000010
#define AVR32_MACB_IER_TUND_OFFSET                                   4
#define AVR32_MACB_IER_TUND_SIZE                                     1
#define AVR32_MACB_IER_TXERR                                         6
#define AVR32_MACB_IER_TXERR_MASK                           0x00000040
#define AVR32_MACB_IER_TXERR_OFFSET                                  6
#define AVR32_MACB_IER_TXERR_SIZE                                    1
#define AVR32_MACB_IER_TXUBR                                         3
#define AVR32_MACB_IER_TXUBR_MASK                           0x00000008
#define AVR32_MACB_IER_TXUBR_OFFSET                                  3
#define AVR32_MACB_IER_TXUBR_SIZE                                    1
#define AVR32_MACB_IMR                                      0x00000030
#define AVR32_MACB_IMR_HRESP                                        11
#define AVR32_MACB_IMR_HRESP_MASK                           0x00000800
#define AVR32_MACB_IMR_HRESP_OFFSET                                 11
#define AVR32_MACB_IMR_HRESP_SIZE                                    1
#define AVR32_MACB_IMR_MFD                                           0
#define AVR32_MACB_IMR_MFD_MASK                             0x00000001
#define AVR32_MACB_IMR_MFD_OFFSET                                    0
#define AVR32_MACB_IMR_MFD_SIZE                                      1
#define AVR32_MACB_IMR_PFR                                          12
#define AVR32_MACB_IMR_PFR_MASK                             0x00001000
#define AVR32_MACB_IMR_PFR_OFFSET                                   12
#define AVR32_MACB_IMR_PFR_SIZE                                      1
#define AVR32_MACB_IMR_PTZ                                          13
#define AVR32_MACB_IMR_PTZ_MASK                             0x00002000
#define AVR32_MACB_IMR_PTZ_OFFSET                                   13
#define AVR32_MACB_IMR_PTZ_SIZE                                      1
#define AVR32_MACB_IMR_RCOMP                                         1
#define AVR32_MACB_IMR_RCOMP_MASK                           0x00000002
#define AVR32_MACB_IMR_RCOMP_OFFSET                                  1
#define AVR32_MACB_IMR_RCOMP_SIZE                                    1
#define AVR32_MACB_IMR_RLE                                           5
#define AVR32_MACB_IMR_RLE_MASK                             0x00000020
#define AVR32_MACB_IMR_RLE_OFFSET                                    5
#define AVR32_MACB_IMR_RLE_SIZE                                      1
#define AVR32_MACB_IMR_ROVR                                         10
#define AVR32_MACB_IMR_ROVR_MASK                            0x00000400
#define AVR32_MACB_IMR_ROVR_OFFSET                                  10
#define AVR32_MACB_IMR_ROVR_SIZE                                     1
#define AVR32_MACB_IMR_RXUBR                                         2
#define AVR32_MACB_IMR_RXUBR_MASK                           0x00000004
#define AVR32_MACB_IMR_RXUBR_OFFSET                                  2
#define AVR32_MACB_IMR_RXUBR_SIZE                                    1
#define AVR32_MACB_IMR_TCOMP                                         7
#define AVR32_MACB_IMR_TCOMP_MASK                           0x00000080
#define AVR32_MACB_IMR_TCOMP_OFFSET                                  7
#define AVR32_MACB_IMR_TCOMP_SIZE                                    1
#define AVR32_MACB_IMR_TUND                                          4
#define AVR32_MACB_IMR_TUND_MASK                            0x00000010
#define AVR32_MACB_IMR_TUND_OFFSET                                   4
#define AVR32_MACB_IMR_TUND_SIZE                                     1
#define AVR32_MACB_IMR_TXERR                                         6
#define AVR32_MACB_IMR_TXERR_MASK                           0x00000040
#define AVR32_MACB_IMR_TXERR_OFFSET                                  6
#define AVR32_MACB_IMR_TXERR_SIZE                                    1
#define AVR32_MACB_IMR_TXUBR                                         3
#define AVR32_MACB_IMR_TXUBR_MASK                           0x00000008
#define AVR32_MACB_IMR_TXUBR_OFFSET                                  3
#define AVR32_MACB_IMR_TXUBR_SIZE                                    1
#define AVR32_MACB_INCSTAT                                           6
#define AVR32_MACB_INCSTAT_MASK                             0x00000040
#define AVR32_MACB_INCSTAT_OFFSET                                    6
#define AVR32_MACB_INCSTAT_SIZE                                      1
#define AVR32_MACB_IP                                                0
#define AVR32_MACB_IP_MASK                                  0x0000ffff
#define AVR32_MACB_IP_OFFSET                                         0
#define AVR32_MACB_IP_SIZE                                          16
#define AVR32_MACB_IRXFCS                                           19
#define AVR32_MACB_IRXFCS_MASK                              0x00080000
#define AVR32_MACB_IRXFCS_OFFSET                                    19
#define AVR32_MACB_IRXFCS_SIZE                                       1
#define AVR32_MACB_ISR                                      0x00000024
#define AVR32_MACB_ISR_HRESP                                        11
#define AVR32_MACB_ISR_HRESP_MASK                           0x00000800
#define AVR32_MACB_ISR_HRESP_OFFSET                                 11
#define AVR32_MACB_ISR_HRESP_SIZE                                    1
#define AVR32_MACB_ISR_MFD                                           0
#define AVR32_MACB_ISR_MFD_MASK                             0x00000001
#define AVR32_MACB_ISR_MFD_OFFSET                                    0
#define AVR32_MACB_ISR_MFD_SIZE                                      1
#define AVR32_MACB_ISR_PFR                                          12
#define AVR32_MACB_ISR_PFR_MASK                             0x00001000
#define AVR32_MACB_ISR_PFR_OFFSET                                   12
#define AVR32_MACB_ISR_PFR_SIZE                                      1
#define AVR32_MACB_ISR_PTZ                                          13
#define AVR32_MACB_ISR_PTZ_MASK                             0x00002000
#define AVR32_MACB_ISR_PTZ_OFFSET                                   13
#define AVR32_MACB_ISR_PTZ_SIZE                                      1
#define AVR32_MACB_ISR_RCOMP                                         1
#define AVR32_MACB_ISR_RCOMP_MASK                           0x00000002
#define AVR32_MACB_ISR_RCOMP_OFFSET                                  1
#define AVR32_MACB_ISR_RCOMP_SIZE                                    1
#define AVR32_MACB_ISR_RLE                                           5
#define AVR32_MACB_ISR_RLE_MASK                             0x00000020
#define AVR32_MACB_ISR_RLE_OFFSET                                    5
#define AVR32_MACB_ISR_RLE_SIZE                                      1
#define AVR32_MACB_ISR_ROVR                                         10
#define AVR32_MACB_ISR_ROVR_MASK                            0x00000400
#define AVR32_MACB_ISR_ROVR_OFFSET                                  10
#define AVR32_MACB_ISR_ROVR_SIZE                                     1
#define AVR32_MACB_ISR_RXUBR                                         2
#define AVR32_MACB_ISR_RXUBR_MASK                           0x00000004
#define AVR32_MACB_ISR_RXUBR_OFFSET                                  2
#define AVR32_MACB_ISR_RXUBR_SIZE                                    1
#define AVR32_MACB_ISR_TCOMP                                         7
#define AVR32_MACB_ISR_TCOMP_MASK                           0x00000080
#define AVR32_MACB_ISR_TCOMP_OFFSET                                  7
#define AVR32_MACB_ISR_TCOMP_SIZE                                    1
#define AVR32_MACB_ISR_TUND                                          4
#define AVR32_MACB_ISR_TUND_MASK                            0x00000010
#define AVR32_MACB_ISR_TUND_OFFSET                                   4
#define AVR32_MACB_ISR_TUND_SIZE                                     1
#define AVR32_MACB_ISR_TXERR                                         6
#define AVR32_MACB_ISR_TXERR_MASK                           0x00000040
#define AVR32_MACB_ISR_TXERR_OFFSET                                  6
#define AVR32_MACB_ISR_TXERR_SIZE                                    1
#define AVR32_MACB_ISR_TXUBR                                         3
#define AVR32_MACB_ISR_TXUBR_MASK                           0x00000008
#define AVR32_MACB_ISR_TXUBR_OFFSET                                  3
#define AVR32_MACB_ISR_TXUBR_SIZE                                    1
#define AVR32_MACB_JFRAME                                            3
#define AVR32_MACB_JFRAME_MASK                              0x00000008
#define AVR32_MACB_JFRAME_OFFSET                                     3
#define AVR32_MACB_JFRAME_SIZE                                       1
#define AVR32_MACB_LB                                                0
#define AVR32_MACB_LB_MASK                                  0x00000001
#define AVR32_MACB_LB_OFFSET                                         0
#define AVR32_MACB_LB_SIZE                                           1
#define AVR32_MACB_LCOL                                     0x0000005c
#define AVR32_MACB_LCOL_LCOL                                         0
#define AVR32_MACB_LCOL_LCOL_MASK                           0x000000ff
#define AVR32_MACB_LCOL_LCOL_OFFSET                                  0
#define AVR32_MACB_LCOL_LCOL_SIZE                                    8
#define AVR32_MACB_LCOL_MASK                                0x000000ff
#define AVR32_MACB_LCOL_OFFSET                                       0
#define AVR32_MACB_LCOL_SIZE                                         8
#define AVR32_MACB_LLB                                               1
#define AVR32_MACB_LLB_MASK                                 0x00000002
#define AVR32_MACB_LLB_OFFSET                                        1
#define AVR32_MACB_LLB_SIZE                                          1
#define AVR32_MACB_MAG                                              16
#define AVR32_MACB_MAG_MASK                                 0x00010000
#define AVR32_MACB_MAG_OFFSET                                       16
#define AVR32_MACB_MAG_SIZE                                          1
#define AVR32_MACB_MAN                                      0x00000034
#define AVR32_MACB_MAN_CODE                                         16
#define AVR32_MACB_MAN_CODE_MASK                            0x00030000
#define AVR32_MACB_MAN_CODE_OFFSET                                  16
#define AVR32_MACB_MAN_CODE_SIZE                                     2
#define AVR32_MACB_MAN_DATA                                          0
#define AVR32_MACB_MAN_DATA_MASK                            0x0000ffff
#define AVR32_MACB_MAN_DATA_OFFSET                                   0
#define AVR32_MACB_MAN_DATA_SIZE                                    16
#define AVR32_MACB_MAN_PHYA                                         23
#define AVR32_MACB_MAN_PHYA_MASK                            0x0f800000
#define AVR32_MACB_MAN_PHYA_OFFSET                                  23
#define AVR32_MACB_MAN_PHYA_SIZE                                     5
#define AVR32_MACB_MAN_REGA                                         18
#define AVR32_MACB_MAN_REGA_MASK                            0x007c0000
#define AVR32_MACB_MAN_REGA_OFFSET                                  18
#define AVR32_MACB_MAN_REGA_SIZE                                     5
#define AVR32_MACB_MAN_RW                                           28
#define AVR32_MACB_MAN_RW_MASK                              0x30000000
#define AVR32_MACB_MAN_RW_OFFSET                                    28
#define AVR32_MACB_MAN_RW_SIZE                                       2
#define AVR32_MACB_MAN_SOF                                          30
#define AVR32_MACB_MAN_SOF_MASK                             0xc0000000
#define AVR32_MACB_MAN_SOF_OFFSET                                   30
#define AVR32_MACB_MAN_SOF_SIZE                                      2
#define AVR32_MACB_MCF                                      0x00000048
#define AVR32_MACB_MCF_MASK                                 0x0000ffff
#define AVR32_MACB_MCF_MCF                                           0
#define AVR32_MACB_MCF_MCF_MASK                             0x0000ffff
#define AVR32_MACB_MCF_MCF_OFFSET                                    0
#define AVR32_MACB_MCF_MCF_SIZE                                     16
#define AVR32_MACB_MCF_OFFSET                                        0
#define AVR32_MACB_MCF_SIZE                                         16
#define AVR32_MACB_MDIO                                              1
#define AVR32_MACB_MDIO_MASK                                0x00000002
#define AVR32_MACB_MDIO_OFFSET                                       1
#define AVR32_MACB_MDIO_SIZE                                         1
#define AVR32_MACB_MFD                                               0
#define AVR32_MACB_MFD_MASK                                 0x00000001
#define AVR32_MACB_MFD_OFFSET                                        0
#define AVR32_MACB_MFD_SIZE                                          1
#define AVR32_MACB_MPE                                               4
#define AVR32_MACB_MPE_MASK                                 0x00000010
#define AVR32_MACB_MPE_OFFSET                                        4
#define AVR32_MACB_MPE_SIZE                                          1
#define AVR32_MACB_MTI_SIZE                                          1
#define AVR32_MACB_NBC                                               5
#define AVR32_MACB_NBC_MASK                                 0x00000020
#define AVR32_MACB_NBC_OFFSET                                        5
#define AVR32_MACB_NBC_SIZE                                          1
#define AVR32_MACB_NCFGR                                    0x00000004
#define AVR32_MACB_NCFGR_BIG                                         8
#define AVR32_MACB_NCFGR_BIG_MASK                           0x00000100
#define AVR32_MACB_NCFGR_BIG_OFFSET                                  8
#define AVR32_MACB_NCFGR_BIG_SIZE                                    1
#define AVR32_MACB_NCFGR_BIT_RATE                                    2
#define AVR32_MACB_NCFGR_BIT_RATE_MASK                      0x00000004
#define AVR32_MACB_NCFGR_BIT_RATE_OFFSET                             2
#define AVR32_MACB_NCFGR_BIT_RATE_SIZE                               1
#define AVR32_MACB_NCFGR_CAF                                         4
#define AVR32_MACB_NCFGR_CAF_MASK                           0x00000010
#define AVR32_MACB_NCFGR_CAF_OFFSET                                  4
#define AVR32_MACB_NCFGR_CAF_SIZE                                    1
#define AVR32_MACB_NCFGR_CLK                                        10
#define AVR32_MACB_NCFGR_CLK_DIV16                          0x00000001
#define AVR32_MACB_NCFGR_CLK_DIV32                          0x00000002
#define AVR32_MACB_NCFGR_CLK_DIV64                          0x00000003
#define AVR32_MACB_NCFGR_CLK_DIV8                           0x00000000
#define AVR32_MACB_NCFGR_CLK_MASK                           0x00000c00
#define AVR32_MACB_NCFGR_CLK_OFFSET                                 10
#define AVR32_MACB_NCFGR_CLK_SIZE                                    2
#define AVR32_MACB_NCFGR_DRFCS                                      17
#define AVR32_MACB_NCFGR_DRFCS_MASK                         0x00020000
#define AVR32_MACB_NCFGR_DRFCS_OFFSET                               17
#define AVR32_MACB_NCFGR_DRFCS_SIZE                                  1
#define AVR32_MACB_NCFGR_EAE                                         9
#define AVR32_MACB_NCFGR_EAE_MASK                           0x00000200
#define AVR32_MACB_NCFGR_EAE_OFFSET                                  9
#define AVR32_MACB_NCFGR_EAE_SIZE                                    1
#define AVR32_MACB_NCFGR_EFRHD                                      18
#define AVR32_MACB_NCFGR_EFRHD_MASK                         0x00040000
#define AVR32_MACB_NCFGR_EFRHD_OFFSET                               18
#define AVR32_MACB_NCFGR_EFRHD_SIZE                                  1
#define AVR32_MACB_NCFGR_FD                                          1
#define AVR32_MACB_NCFGR_FD_MASK                            0x00000002
#define AVR32_MACB_NCFGR_FD_OFFSET                                   1
#define AVR32_MACB_NCFGR_FD_SIZE                                     1
#define AVR32_MACB_NCFGR_IRXFCS                                     19
#define AVR32_MACB_NCFGR_IRXFCS_MASK                        0x00080000
#define AVR32_MACB_NCFGR_IRXFCS_OFFSET                              19
#define AVR32_MACB_NCFGR_IRXFCS_SIZE                                 1
#define AVR32_MACB_NCFGR_JFRAME                                      3
#define AVR32_MACB_NCFGR_JFRAME_MASK                        0x00000008
#define AVR32_MACB_NCFGR_JFRAME_OFFSET                               3
#define AVR32_MACB_NCFGR_JFRAME_SIZE                                 1
#define AVR32_MACB_NCFGR_MTI                                         6
#define AVR32_MACB_NCFGR_MTI_MASK                           0x00000040
#define AVR32_MACB_NCFGR_MTI_OFFSET                                  6
#define AVR32_MACB_NCFGR_MTI_SIZE                                    1
#define AVR32_MACB_NCFGR_NBC                                         5
#define AVR32_MACB_NCFGR_NBC_MASK                           0x00000020
#define AVR32_MACB_NCFGR_NBC_OFFSET                                  5
#define AVR32_MACB_NCFGR_NBC_SIZE                                    1
#define AVR32_MACB_NCFGR_PAE                                        13
#define AVR32_MACB_NCFGR_PAE_MASK                           0x00002000
#define AVR32_MACB_NCFGR_PAE_OFFSET                                 13
#define AVR32_MACB_NCFGR_PAE_SIZE                                    1
#define AVR32_MACB_NCFGR_RBOF                                       14
#define AVR32_MACB_NCFGR_RBOF_MASK                          0x0000c000
#define AVR32_MACB_NCFGR_RBOF_OFFSET                                14
#define AVR32_MACB_NCFGR_RBOF_SIZE                                   2
#define AVR32_MACB_NCFGR_RLCE                                       16
#define AVR32_MACB_NCFGR_RLCE_MASK                          0x00010000
#define AVR32_MACB_NCFGR_RLCE_OFFSET                                16
#define AVR32_MACB_NCFGR_RLCE_SIZE                                   1
#define AVR32_MACB_NCFGR_RTY                                        12
#define AVR32_MACB_NCFGR_RTY_MASK                           0x00001000
#define AVR32_MACB_NCFGR_RTY_OFFSET                                 12
#define AVR32_MACB_NCFGR_RTY_SIZE                                    1
#define AVR32_MACB_NCFGR_SPD                                         0
#define AVR32_MACB_NCFGR_SPD_MASK                           0x00000001
#define AVR32_MACB_NCFGR_SPD_OFFSET                                  0
#define AVR32_MACB_NCFGR_SPD_SIZE                                    1
#define AVR32_MACB_NCFGR_UNI                                         7
#define AVR32_MACB_NCFGR_UNI_MASK                           0x00000080
#define AVR32_MACB_NCFGR_UNI_OFFSET                                  7
#define AVR32_MACB_NCFGR_UNI_SIZE                                    1
#define AVR32_MACB_NCR                                      0x00000000
#define AVR32_MACB_NCR_BP                                            8
#define AVR32_MACB_NCR_BP_MASK                              0x00000100
#define AVR32_MACB_NCR_BP_OFFSET                                     8
#define AVR32_MACB_NCR_BP_SIZE                                       1
#define AVR32_MACB_NCR_CLRSTAT                                       5
#define AVR32_MACB_NCR_CLRSTAT_MASK                         0x00000020
#define AVR32_MACB_NCR_CLRSTAT_OFFSET                                5
#define AVR32_MACB_NCR_CLRSTAT_SIZE                                  1
#define AVR32_MACB_NCR_INCSTAT                                       6
#define AVR32_MACB_NCR_INCSTAT_MASK                         0x00000040
#define AVR32_MACB_NCR_INCSTAT_OFFSET                                6
#define AVR32_MACB_NCR_INCSTAT_SIZE                                  1
#define AVR32_MACB_NCR_LB                                            0
#define AVR32_MACB_NCR_LB_MASK                              0x00000001
#define AVR32_MACB_NCR_LB_OFFSET                                     0
#define AVR32_MACB_NCR_LB_SIZE                                       1
#define AVR32_MACB_NCR_LLB                                           1
#define AVR32_MACB_NCR_LLB_MASK                             0x00000002
#define AVR32_MACB_NCR_LLB_OFFSET                                    1
#define AVR32_MACB_NCR_LLB_SIZE                                      1
#define AVR32_MACB_NCR_MPE                                           4
#define AVR32_MACB_NCR_MPE_MASK                             0x00000010
#define AVR32_MACB_NCR_MPE_OFFSET                                    4
#define AVR32_MACB_NCR_MPE_SIZE                                      1
#define AVR32_MACB_NCR_RE                                            2
#define AVR32_MACB_NCR_RE_MASK                              0x00000004
#define AVR32_MACB_NCR_RE_OFFSET                                     2
#define AVR32_MACB_NCR_RE_SIZE                                       1
#define AVR32_MACB_NCR_TE                                            3
#define AVR32_MACB_NCR_TE_MASK                              0x00000008
#define AVR32_MACB_NCR_TE_OFFSET                                     3
#define AVR32_MACB_NCR_TE_SIZE                                       1
#define AVR32_MACB_NCR_THALT                                        10
#define AVR32_MACB_NCR_THALT_MASK                           0x00000400
#define AVR32_MACB_NCR_THALT_OFFSET                                 10
#define AVR32_MACB_NCR_THALT_SIZE                                    1
#define AVR32_MACB_NCR_TPF                                          11
#define AVR32_MACB_NCR_TPF_MASK                             0x00000800
#define AVR32_MACB_NCR_TPF_OFFSET                                   11
#define AVR32_MACB_NCR_TPF_SIZE                                      1
#define AVR32_MACB_NCR_TSTART                                        9
#define AVR32_MACB_NCR_TSTART_MASK                          0x00000200
#define AVR32_MACB_NCR_TSTART_OFFSET                                 9
#define AVR32_MACB_NCR_TSTART_SIZE                                   1
#define AVR32_MACB_NCR_TZQ                                          12
#define AVR32_MACB_NCR_TZQ_MASK                             0x00001000
#define AVR32_MACB_NCR_TZQ_OFFSET                                   12
#define AVR32_MACB_NCR_TZQ_SIZE                                      1
#define AVR32_MACB_NCR_WESTAT                                        7
#define AVR32_MACB_NCR_WESTAT_MASK                          0x00000080
#define AVR32_MACB_NCR_WESTAT_OFFSET                                 7
#define AVR32_MACB_NCR_WESTAT_SIZE                                   1
#define AVR32_MACB_NSR                                      0x00000008
#define AVR32_MACB_NSR_IDLE                                          2
#define AVR32_MACB_NSR_IDLE_MASK                            0x00000004
#define AVR32_MACB_NSR_IDLE_OFFSET                                   2
#define AVR32_MACB_NSR_IDLE_SIZE                                     1
#define AVR32_MACB_NSR_MDIO                                          1
#define AVR32_MACB_NSR_MDIO_MASK                            0x00000002
#define AVR32_MACB_NSR_MDIO_OFFSET                                   1
#define AVR32_MACB_NSR_MDIO_SIZE                                     1
#define AVR32_MACB_OVR                                               2
#define AVR32_MACB_OVR_MASK                                 0x00000004
#define AVR32_MACB_OVR_OFFSET                                        2
#define AVR32_MACB_OVR_SIZE                                          1
#define AVR32_MACB_PAE                                              13
#define AVR32_MACB_PAE_MASK                                 0x00002000
#define AVR32_MACB_PAE_OFFSET                                       13
#define AVR32_MACB_PAE_SIZE                                          1
#define AVR32_MACB_PART_REFERENCE                                   16
#define AVR32_MACB_PART_REFERENCE_MASK                      0xffff0000
#define AVR32_MACB_PART_REFERENCE_OFFSET                            16
#define AVR32_MACB_PART_REFERENCE_SIZE                              16
#define AVR32_MACB_PFR                                      0x0000003c
#define AVR32_MACB_PFR_FROK                                          0
#define AVR32_MACB_PFR_FROK_MASK                            0x0000ffff
#define AVR32_MACB_PFR_FROK_OFFSET                                   0
#define AVR32_MACB_PFR_FROK_SIZE                                    16
#define AVR32_MACB_PFR_MASK                                 0x00001000
#define AVR32_MACB_PFR_OFFSET                                       12
#define AVR32_MACB_PFR_SIZE                                          1
#define AVR32_MACB_PHYA                                             23
#define AVR32_MACB_PHYA_MASK                                0x0f800000
#define AVR32_MACB_PHYA_OFFSET                                      23
#define AVR32_MACB_PHYA_SIZE                                         5
#define AVR32_MACB_PTIME                                             0
#define AVR32_MACB_PTIME_MASK                               0x0000ffff
#define AVR32_MACB_PTIME_OFFSET                                      0
#define AVR32_MACB_PTIME_SIZE                                       16
#define AVR32_MACB_PTR                                      0x00000038
#define AVR32_MACB_PTR_PTIME                                         0
#define AVR32_MACB_PTR_PTIME_MASK                           0x0000ffff
#define AVR32_MACB_PTR_PTIME_OFFSET                                  0
#define AVR32_MACB_PTR_PTIME_SIZE                                   16
#define AVR32_MACB_PTZ                                              13
#define AVR32_MACB_PTZ_MASK                                 0x00002000
#define AVR32_MACB_PTZ_OFFSET                                       13
#define AVR32_MACB_PTZ_SIZE                                          1
#define AVR32_MACB_RBOF                                             14
#define AVR32_MACB_RBOF_MASK                                0x0000c000
#define AVR32_MACB_RBOF_OFFSET                                      14
#define AVR32_MACB_RBOF_SIZE                                         2
#define AVR32_MACB_RBQP                                     0x00000018
#define AVR32_MACB_RCOMP                                             1
#define AVR32_MACB_RCOMP_MASK                               0x00000002
#define AVR32_MACB_RCOMP_OFFSET                                      1
#define AVR32_MACB_RCOMP_SIZE                                        1
#define AVR32_MACB_RE                                                2
#define AVR32_MACB_REC                                               1
#define AVR32_MACB_REC_MASK                                 0x00000002
#define AVR32_MACB_REC_OFFSET                                        1
#define AVR32_MACB_REC_SIZE                                          1
#define AVR32_MACB_REGA                                             18
#define AVR32_MACB_REGA_MASK                                0x007c0000
#define AVR32_MACB_REGA_OFFSET                                      18
#define AVR32_MACB_REGA_SIZE                                         5
#define AVR32_MACB_REVISION_REFERENCE                                0
#define AVR32_MACB_REVISION_REFERENCE_MASK                  0x0000ffff
#define AVR32_MACB_REVISION_REFERENCE_OFFSET                         0
#define AVR32_MACB_REVISION_REFERENCE_SIZE                          16
#define AVR32_MACB_RE_MASK                                  0x00000004
#define AVR32_MACB_RE_OFFSET                                         2
#define AVR32_MACB_RE_SIZE                                           1
#define AVR32_MACB_RJA                                      0x0000007c
#define AVR32_MACB_RJA_RJB                                           0
#define AVR32_MACB_RJA_RJB_MASK                             0x000000ff
#define AVR32_MACB_RJA_RJB_OFFSET                                    0
#define AVR32_MACB_RJA_RJB_SIZE                                      8
#define AVR32_MACB_RJB                                               0
#define AVR32_MACB_RJB_MASK                                 0x000000ff
#define AVR32_MACB_RJB_OFFSET                                        0
#define AVR32_MACB_RJB_SIZE                                          8
#define AVR32_MACB_RLCE                                             16
#define AVR32_MACB_RLCE_MASK                                0x00010000
#define AVR32_MACB_RLCE_OFFSET                                      16
#define AVR32_MACB_RLCE_SIZE                                         1
#define AVR32_MACB_RLE                                      0x00000088
#define AVR32_MACB_RLE_RLFM                                          0
#define AVR32_MACB_RLE_RLFM_MASK                            0x000000ff
#define AVR32_MACB_RLE_RLFM_OFFSET                                   0
#define AVR32_MACB_RLE_RLFM_SIZE                                     8
#define AVR32_MACB_RLE_SIZE                                          1
#define AVR32_MACB_RLFM                                              0
#define AVR32_MACB_RLFM_MASK                                0x000000ff
#define AVR32_MACB_RLFM_OFFSET                                       0
#define AVR32_MACB_RLFM_SIZE                                         8
#define AVR32_MACB_RMII                                              0
#define AVR32_MACB_RMII_MASK                                0x00000001
#define AVR32_MACB_RMII_OFFSET                                       0
#define AVR32_MACB_RMII_SIZE                                         1
#define AVR32_MACB_ROVR                                     0x00000070
#define AVR32_MACB_ROVR_ROVR                                         0
#define AVR32_MACB_ROVR_ROVR_MASK                           0x000000ff
#define AVR32_MACB_ROVR_ROVR_OFFSET                                  0
#define AVR32_MACB_ROVR_ROVR_SIZE                                    8
#define AVR32_MACB_RRE                                      0x0000006c
#define AVR32_MACB_RRE_MASK                                 0x0000ffff
#define AVR32_MACB_RRE_OFFSET                                        0
#define AVR32_MACB_RRE_RRE                                           0
#define AVR32_MACB_RRE_RRE_MASK                             0x0000ffff
#define AVR32_MACB_RRE_RRE_OFFSET                                    0
#define AVR32_MACB_RRE_RRE_SIZE                                     16
#define AVR32_MACB_RRE_SIZE                                         16
#define AVR32_MACB_RSE                                      0x00000074
#define AVR32_MACB_RSE_MASK                                 0x000000ff
#define AVR32_MACB_RSE_OFFSET                                        0
#define AVR32_MACB_RSE_RSE                                           0
#define AVR32_MACB_RSE_RSE_MASK                             0x000000ff
#define AVR32_MACB_RSE_RSE_OFFSET                                    0
#define AVR32_MACB_RSE_RSE_SIZE                                      8
#define AVR32_MACB_RSE_SIZE                                          8
#define AVR32_MACB_RSR                                      0x00000020
#define AVR32_MACB_RSR_BNA                                           0
#define AVR32_MACB_RSR_BNA_MASK                             0x00000001
#define AVR32_MACB_RSR_BNA_OFFSET                                    0
#define AVR32_MACB_RSR_BNA_SIZE                                      1
#define AVR32_MACB_RSR_OVR                                           2
#define AVR32_MACB_RSR_OVR_MASK                             0x00000004
#define AVR32_MACB_RSR_OVR_OFFSET                                    2
#define AVR32_MACB_RSR_OVR_SIZE                                      1
#define AVR32_MACB_RSR_REC                                           1
#define AVR32_MACB_RSR_REC_MASK                             0x00000002
#define AVR32_MACB_RSR_REC_OFFSET                                    1
#define AVR32_MACB_RSR_REC_SIZE                                      1
#define AVR32_MACB_RTY                                              12
#define AVR32_MACB_RTY_MASK                                 0x00001000
#define AVR32_MACB_RTY_OFFSET                                       12
#define AVR32_MACB_RTY_SIZE                                          1
#define AVR32_MACB_RW                                               28
#define AVR32_MACB_RW_MASK                                  0x30000000
#define AVR32_MACB_RW_OFFSET                                        28
#define AVR32_MACB_RW_SIZE                                           2
#define AVR32_MACB_RXUBR                                             2
#define AVR32_MACB_RXUBR_MASK                               0x00000004
#define AVR32_MACB_RXUBR_OFFSET                                      2
#define AVR32_MACB_RXUBR_SIZE                                        1
#define AVR32_MACB_SA1                                              18
#define AVR32_MACB_SA1B                                     0x00000098
#define AVR32_MACB_SA1B_ADDR                                         0
#define AVR32_MACB_SA1B_ADDR_MASK                           0xffffffff
#define AVR32_MACB_SA1B_ADDR_OFFSET                                  0
#define AVR32_MACB_SA1B_ADDR_SIZE                                   32
#define AVR32_MACB_SA1T                                     0x0000009c
#define AVR32_MACB_SA1T_ADDR                                         0
#define AVR32_MACB_SA1T_ADDR_MASK                           0x0000ffff
#define AVR32_MACB_SA1T_ADDR_OFFSET                                  0
#define AVR32_MACB_SA1T_ADDR_SIZE                                   16
#define AVR32_MACB_SA1_MASK                                 0x00040000
#define AVR32_MACB_SA1_OFFSET                                       18
#define AVR32_MACB_SA1_SIZE                                          1
#define AVR32_MACB_SA2B                                     0x000000a0
#define AVR32_MACB_SA2B_ADDR                                         0
#define AVR32_MACB_SA2B_ADDR_MASK                           0xffffffff
#define AVR32_MACB_SA2B_ADDR_OFFSET                                  0
#define AVR32_MACB_SA2B_ADDR_SIZE                                   32
#define AVR32_MACB_SA2T                                     0x000000a4
#define AVR32_MACB_SA2T_ADDR                                         0
#define AVR32_MACB_SA2T_ADDR_MASK                           0x0000ffff
#define AVR32_MACB_SA2T_ADDR_OFFSET                                  0
#define AVR32_MACB_SA2T_ADDR_SIZE                                   16
#define AVR32_MACB_SA3B                                     0x000000a8
#define AVR32_MACB_SA3B_ADDR                                         0
#define AVR32_MACB_SA3B_ADDR_MASK                           0xffffffff
#define AVR32_MACB_SA3B_ADDR_OFFSET                                  0
#define AVR32_MACB_SA3B_ADDR_SIZE                                   32
#define AVR32_MACB_SA3T                                     0x000000ac
#define AVR32_MACB_SA3T_ADDR                                         0
#define AVR32_MACB_SA3T_ADDR_MASK                           0x0000ffff
#define AVR32_MACB_SA3T_ADDR_OFFSET                                  0
#define AVR32_MACB_SA3T_ADDR_SIZE                                   16
#define AVR32_MACB_SA4B                                     0x000000b0
#define AVR32_MACB_SA4B_ADDR                                         0
#define AVR32_MACB_SA4B_ADDR_MASK                           0xffffffff
#define AVR32_MACB_SA4B_ADDR_OFFSET                                  0
#define AVR32_MACB_SA4B_ADDR_SIZE                                   32
#define AVR32_MACB_SA4T                                     0x000000b4
#define AVR32_MACB_SA4T_ADDR                                         0
#define AVR32_MACB_SA4T_ADDR_MASK                           0x0000ffff
#define AVR32_MACB_SA4T_ADDR_OFFSET                                  0
#define AVR32_MACB_SA4T_ADDR_SIZE                                   16
#define AVR32_MACB_SCF                                      0x00000044
#define AVR32_MACB_SCF_MASK                                 0x0000ffff
#define AVR32_MACB_SCF_OFFSET                                        0
#define AVR32_MACB_SCF_SCF                                           0
#define AVR32_MACB_SCF_SCF_MASK                             0x0000ffff
#define AVR32_MACB_SCF_SCF_OFFSET                                    0
#define AVR32_MACB_SCF_SCF_SIZE                                     16
#define AVR32_MACB_SCF_SIZE                                         16
#define AVR32_MACB_SOF                                              30
#define AVR32_MACB_SOF_MASK                                 0xc0000000
#define AVR32_MACB_SOF_OFFSET                                       30
#define AVR32_MACB_SOF_SIZE                                          2
#define AVR32_MACB_SPD                                               0
#define AVR32_MACB_SPD_MASK                                 0x00000001
#define AVR32_MACB_SPD_OFFSET                                        0
#define AVR32_MACB_SPD_SIZE                                          1
#define AVR32_MACB_SQER                                              0
#define AVR32_MACB_SQER_MASK                                0x000000ff
#define AVR32_MACB_SQER_OFFSET                                       0
#define AVR32_MACB_SQER_SIZE                                         8
#define AVR32_MACB_STE                                      0x00000084
#define AVR32_MACB_STE_SQER                                          0
#define AVR32_MACB_STE_SQER_MASK                            0x000000ff
#define AVR32_MACB_STE_SQER_OFFSET                                   0
#define AVR32_MACB_STE_SQER_SIZE                                     8
#define AVR32_MACB_TBQP                                     0x0000001c
#define AVR32_MACB_TCOMP                                             7
#define AVR32_MACB_TCOMP_MASK                               0x00000080
#define AVR32_MACB_TCOMP_OFFSET                                      7
#define AVR32_MACB_TCOMP_SIZE                                        1
#define AVR32_MACB_TE                                                3
#define AVR32_MACB_TE_MASK                                  0x00000008
#define AVR32_MACB_TE_OFFSET                                         3
#define AVR32_MACB_TE_SIZE                                           1
#define AVR32_MACB_TGO                                               3
#define AVR32_MACB_TGO_MASK                                 0x00000008
#define AVR32_MACB_TGO_OFFSET                                        3
#define AVR32_MACB_TGO_SIZE                                          1
#define AVR32_MACB_THALT                                            10
#define AVR32_MACB_THALT_MASK                               0x00000400
#define AVR32_MACB_THALT_OFFSET                                     10
#define AVR32_MACB_THALT_SIZE                                        1
#define AVR32_MACB_TID                                      0x000000b8
#define AVR32_MACB_TID_MASK                                 0x0000ffff
#define AVR32_MACB_TID_OFFSET                                        0
#define AVR32_MACB_TID_SIZE                                         16
#define AVR32_MACB_TID_TID                                           0
#define AVR32_MACB_TID_TID_MASK                             0x0000ffff
#define AVR32_MACB_TID_TID_OFFSET                                    0
#define AVR32_MACB_TID_TID_SIZE                                     16
#define AVR32_MACB_TPF                                      0x0000008c
#define AVR32_MACB_TPF_TPF                                           0
#define AVR32_MACB_TPF_TPF_MASK                             0x0000ffff
#define AVR32_MACB_TPF_TPF_OFFSET                                    0
#define AVR32_MACB_TPF_TPF_SIZE                                     16
#define AVR32_MACB_TPQ                                      0x000000bc
#define AVR32_MACB_TPQ_MASK                                 0x0000ffff
#define AVR32_MACB_TPQ_OFFSET                                        0
#define AVR32_MACB_TPQ_SIZE                                         16
#define AVR32_MACB_TPQ_TPQ                                           0
#define AVR32_MACB_TPQ_TPQ_MASK                             0x0000ffff
#define AVR32_MACB_TPQ_TPQ_OFFSET                                    0
#define AVR32_MACB_TPQ_TPQ_SIZE                                     16
#define AVR32_MACB_TSR                                      0x00000014
#define AVR32_MACB_TSR_BEX                                           4
#define AVR32_MACB_TSR_BEX_MASK                             0x00000010
#define AVR32_MACB_TSR_BEX_OFFSET                                    4
#define AVR32_MACB_TSR_BEX_SIZE                                      1
#define AVR32_MACB_TSR_COL                                           1
#define AVR32_MACB_TSR_COL_MASK                             0x00000002
#define AVR32_MACB_TSR_COL_OFFSET                                    1
#define AVR32_MACB_TSR_COL_SIZE                                      1
#define AVR32_MACB_TSR_COMP                                          5
#define AVR32_MACB_TSR_COMP_MASK                            0x00000020
#define AVR32_MACB_TSR_COMP_OFFSET                                   5
#define AVR32_MACB_TSR_COMP_SIZE                                     1
#define AVR32_MACB_TSR_RLE                                           2
#define AVR32_MACB_TSR_RLE_MASK                             0x00000004
#define AVR32_MACB_TSR_RLE_OFFSET                                    2
#define AVR32_MACB_TSR_RLE_SIZE                                      1
#define AVR32_MACB_TSR_TGO                                           3
#define AVR32_MACB_TSR_TGO_MASK                             0x00000008
#define AVR32_MACB_TSR_TGO_OFFSET                                    3
#define AVR32_MACB_TSR_TGO_SIZE                                      1
#define AVR32_MACB_TSR_UBR                                           0
#define AVR32_MACB_TSR_UBR_MASK                             0x00000001
#define AVR32_MACB_TSR_UBR_OFFSET                                    0
#define AVR32_MACB_TSR_UBR_SIZE                                      1
#define AVR32_MACB_TSR_UND                                           6
#define AVR32_MACB_TSR_UND_MASK                             0x00000040
#define AVR32_MACB_TSR_UND_OFFSET                                    6
#define AVR32_MACB_TSR_UND_SIZE                                      1
#define AVR32_MACB_TSTART                                            9
#define AVR32_MACB_TSTART_MASK                              0x00000200
#define AVR32_MACB_TSTART_OFFSET                                     9
#define AVR32_MACB_TSTART_SIZE                                       1
#define AVR32_MACB_TUND                                     0x00000064
#define AVR32_MACB_TUND_TUND                                         0
#define AVR32_MACB_TUND_TUND_MASK                           0x000000ff
#define AVR32_MACB_TUND_TUND_OFFSET                                  0
#define AVR32_MACB_TUND_TUND_SIZE                                    8
#define AVR32_MACB_TXERR                                             6
#define AVR32_MACB_TXERR_MASK                               0x00000040
#define AVR32_MACB_TXERR_OFFSET                                      6
#define AVR32_MACB_TXERR_SIZE                                        1
#define AVR32_MACB_TXUBR                                             3
#define AVR32_MACB_TXUBR_MASK                               0x00000008
#define AVR32_MACB_TXUBR_OFFSET                                      3
#define AVR32_MACB_TXUBR_SIZE                                        1
#define AVR32_MACB_TX_PAUSE                                          2
#define AVR32_MACB_TX_PAUSE_MASK                            0x00000004
#define AVR32_MACB_TX_PAUSE_OFFSET                                   2
#define AVR32_MACB_TX_PAUSE_SIZE                                     1
#define AVR32_MACB_TX_PAUSE_ZERO                                     3
#define AVR32_MACB_TX_PAUSE_ZERO_MASK                       0x00000008
#define AVR32_MACB_TX_PAUSE_ZERO_OFFSET                              3
#define AVR32_MACB_TX_PAUSE_ZERO_SIZE                                1
#define AVR32_MACB_TZQ                                              12
#define AVR32_MACB_TZQ_MASK                                 0x00001000
#define AVR32_MACB_TZQ_OFFSET                                       12
#define AVR32_MACB_TZQ_SIZE                                          1
#define AVR32_MACB_UBR                                               0
#define AVR32_MACB_UBR_MASK                                 0x00000001
#define AVR32_MACB_UBR_OFFSET                                        0
#define AVR32_MACB_UBR_SIZE                                          1
#define AVR32_MACB_UND                                               6
#define AVR32_MACB_UND_MASK                                 0x00000040
#define AVR32_MACB_UND_OFFSET                                        6
#define AVR32_MACB_UND_SIZE                                          1
#define AVR32_MACB_UNI                                               7
#define AVR32_MACB_UNI_MASK                                 0x00000080
#define AVR32_MACB_UNI_OFFSET                                        7
#define AVR32_MACB_UNI_SIZE                                          1
#define AVR32_MACB_USF                                      0x00000080
#define AVR32_MACB_USF_MASK                                 0x000000ff
#define AVR32_MACB_USF_OFFSET                                        0
#define AVR32_MACB_USF_SIZE                                          8
#define AVR32_MACB_USF_USF                                           0
#define AVR32_MACB_USF_USF_MASK                             0x000000ff
#define AVR32_MACB_USF_USF_OFFSET                                    0
#define AVR32_MACB_USF_USF_SIZE                                      8
#define AVR32_MACB_USRIO                                    0x000000c0
#define AVR32_MACB_USRIO_EAM                                         1
#define AVR32_MACB_USRIO_EAM_MASK                           0x00000002
#define AVR32_MACB_USRIO_EAM_OFFSET                                  1
#define AVR32_MACB_USRIO_EAM_SIZE                                    1
#define AVR32_MACB_USRIO_RMII                                        0
#define AVR32_MACB_USRIO_RMII_MASK                          0x00000001
#define AVR32_MACB_USRIO_RMII_OFFSET                                 0
#define AVR32_MACB_USRIO_RMII_SIZE                                   1
#define AVR32_MACB_USRIO_TX_PAUSE                                    2
#define AVR32_MACB_USRIO_TX_PAUSE_MASK                      0x00000004
#define AVR32_MACB_USRIO_TX_PAUSE_OFFSET                             2
#define AVR32_MACB_USRIO_TX_PAUSE_SIZE                               1
#define AVR32_MACB_USRIO_TX_PAUSE_ZERO                               3
#define AVR32_MACB_USRIO_TX_PAUSE_ZERO_MASK                 0x00000008
#define AVR32_MACB_USRIO_TX_PAUSE_ZERO_OFFSET                        3
#define AVR32_MACB_USRIO_TX_PAUSE_ZERO_SIZE                          1
#define AVR32_MACB_VERSION                                  0x000000fc
#define AVR32_MACB_VERSION_PART_REFERENCE                           16
#define AVR32_MACB_VERSION_PART_REFERENCE_MASK              0xffff0000
#define AVR32_MACB_VERSION_PART_REFERENCE_OFFSET                    16
#define AVR32_MACB_VERSION_PART_REFERENCE_SIZE                      16
#define AVR32_MACB_VERSION_REVISION_REFERENCE                        0
#define AVR32_MACB_VERSION_REVISION_REFERENCE_MASK          0x0000ffff
#define AVR32_MACB_VERSION_REVISION_REFERENCE_OFFSET                 0
#define AVR32_MACB_VERSION_REVISION_REFERENCE_SIZE                  16
#define AVR32_MACB_WESTAT                                            7
#define AVR32_MACB_WESTAT_MASK                              0x00000080
#define AVR32_MACB_WESTAT_OFFSET                                     7
#define AVR32_MACB_WESTAT_SIZE                                       1
#define AVR32_MACB_WOL                                      0x000000c4
#define AVR32_MACB_WOL_ARP                                          17
#define AVR32_MACB_WOL_ARP_MASK                             0x00020000
#define AVR32_MACB_WOL_ARP_OFFSET                                   17
#define AVR32_MACB_WOL_ARP_SIZE                                      1
#define AVR32_MACB_WOL_IP                                            0
#define AVR32_MACB_WOL_IP_MASK                              0x0000ffff
#define AVR32_MACB_WOL_IP_OFFSET                                     0
#define AVR32_MACB_WOL_IP_SIZE                                      16
#define AVR32_MACB_WOL_MAG                                          16
#define AVR32_MACB_WOL_MAG_MASK                             0x00010000
#define AVR32_MACB_WOL_MAG_OFFSET                                   16
#define AVR32_MACB_WOL_MAG_SIZE                                      1
#define AVR32_MACB_WOL_MTI                                          19
#define AVR32_MACB_WOL_MTI_MASK                             0x00080000
#define AVR32_MACB_WOL_MTI_OFFSET                                   19
#define AVR32_MACB_WOL_MTI_SIZE                                      1
#define AVR32_MACB_WOL_SA1                                          18
#define AVR32_MACB_WOL_SA1_MASK                             0x00040000
#define AVR32_MACB_WOL_SA1_OFFSET                                   18
#define AVR32_MACB_WOL_SA1_SIZE                                      1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_macb_ncr_t {
    unsigned int                 :19;
    unsigned int tzq             : 1;
    unsigned int tpf             : 1;
    unsigned int thalt           : 1;
    unsigned int tstart          : 1;
    unsigned int bp              : 1;
    unsigned int westat          : 1;
    unsigned int incstat         : 1;
    unsigned int clrstat         : 1;
    unsigned int mpe             : 1;
    unsigned int te              : 1;
    unsigned int re              : 1;
    unsigned int llb             : 1;
    unsigned int lb              : 1;
} avr32_macb_ncr_t;



typedef struct avr32_macb_ncfgr_t {
    unsigned int                 :12;
    unsigned int irxfcs          : 1;
    unsigned int efrhd           : 1;
    unsigned int drfcs           : 1;
    unsigned int rlce            : 1;
    unsigned int rbof            : 2;
    unsigned int pae             : 1;
    unsigned int rty             : 1;
    unsigned int clk             : 2;
    unsigned int eae             : 1;
    unsigned int big             : 1;
    unsigned int uni             : 1;
    unsigned int mti             : 1;
    unsigned int nbc             : 1;
    unsigned int caf             : 1;
    unsigned int jframe          : 1;
    unsigned int bit_rate        : 1;
    unsigned int fd              : 1;
    unsigned int spd             : 1;
} avr32_macb_ncfgr_t;



typedef struct avr32_macb_nsr_t {
    unsigned int                 :29;
    unsigned int idle            : 1;
    unsigned int mdio            : 1;
    unsigned int                 : 1;
} avr32_macb_nsr_t;



typedef struct avr32_macb_tsr_t {
    unsigned int                 :25;
    unsigned int und             : 1;
    unsigned int comp            : 1;
    unsigned int bex             : 1;
    unsigned int tgo             : 1;
    unsigned int rle             : 1;
    unsigned int col             : 1;
    unsigned int ubr             : 1;
} avr32_macb_tsr_t;



typedef struct avr32_macb_rsr_t {
    unsigned int                 :29;
    unsigned int ovr             : 1;
    unsigned int rec             : 1;
    unsigned int bna             : 1;
} avr32_macb_rsr_t;



typedef struct avr32_macb_isr_t {
    unsigned int                 :18;
    unsigned int ptz             : 1;
    unsigned int pfr             : 1;
    unsigned int hresp           : 1;
    unsigned int rovr            : 1;
    unsigned int                 : 2;
    unsigned int tcomp           : 1;
    unsigned int txerr           : 1;
    unsigned int rle             : 1;
    unsigned int tund            : 1;
    unsigned int txubr           : 1;
    unsigned int rxubr           : 1;
    unsigned int rcomp           : 1;
    unsigned int mfd             : 1;
} avr32_macb_isr_t;



typedef struct avr32_macb_ier_t {
    unsigned int                 :18;
    unsigned int ptz             : 1;
    unsigned int pfr             : 1;
    unsigned int hresp           : 1;
    unsigned int rovr            : 1;
    unsigned int                 : 2;
    unsigned int tcomp           : 1;
    unsigned int txerr           : 1;
    unsigned int rle             : 1;
    unsigned int tund            : 1;
    unsigned int txubr           : 1;
    unsigned int rxubr           : 1;
    unsigned int rcomp           : 1;
    unsigned int mfd             : 1;
} avr32_macb_ier_t;



typedef struct avr32_macb_idr_t {
    unsigned int                 :18;
    unsigned int ptz             : 1;
    unsigned int pfr             : 1;
    unsigned int hresp           : 1;
    unsigned int rovr            : 1;
    unsigned int                 : 2;
    unsigned int tcomp           : 1;
    unsigned int txerr           : 1;
    unsigned int rle             : 1;
    unsigned int tund            : 1;
    unsigned int txubr           : 1;
    unsigned int rxubr           : 1;
    unsigned int rcomp           : 1;
    unsigned int mfd             : 1;
} avr32_macb_idr_t;



typedef struct avr32_macb_imr_t {
    unsigned int                 :18;
    unsigned int ptz             : 1;
    unsigned int pfr             : 1;
    unsigned int hresp           : 1;
    unsigned int rovr            : 1;
    unsigned int                 : 2;
    unsigned int tcomp           : 1;
    unsigned int txerr           : 1;
    unsigned int rle             : 1;
    unsigned int tund            : 1;
    unsigned int txubr           : 1;
    unsigned int rxubr           : 1;
    unsigned int rcomp           : 1;
    unsigned int mfd             : 1;
} avr32_macb_imr_t;



typedef struct avr32_macb_man_t {
    unsigned int sof             : 2;
    unsigned int rw              : 2;
    unsigned int phya            : 5;
    unsigned int rega            : 5;
    unsigned int code            : 2;
    unsigned int data            :16;
} avr32_macb_man_t;



typedef struct avr32_macb_ptr_t {
    unsigned int                 :16;
    unsigned int ptime           :16;
} avr32_macb_ptr_t;



typedef struct avr32_macb_pfr_t {
    unsigned int                 :16;
    unsigned int frok            :16;
} avr32_macb_pfr_t;



typedef struct avr32_macb_fto_t {
    unsigned int                 : 8;
    unsigned int ftok            :24;
} avr32_macb_fto_t;



typedef struct avr32_macb_scf_t {
    unsigned int                 :16;
    unsigned int scf             :16;
} avr32_macb_scf_t;



typedef struct avr32_macb_mcf_t {
    unsigned int                 :16;
    unsigned int mcf             :16;
} avr32_macb_mcf_t;



typedef struct avr32_macb_fro_t {
    unsigned int                 : 8;
    unsigned int frok            :24;
} avr32_macb_fro_t;



typedef struct avr32_macb_fcse_t {
    unsigned int                 :24;
    unsigned int fcse            : 8;
} avr32_macb_fcse_t;



typedef struct avr32_macb_ale_t {
    unsigned int                 :24;
    unsigned int ale             : 8;
} avr32_macb_ale_t;



typedef struct avr32_macb_dtf_t {
    unsigned int                 :16;
    unsigned int dtf             :16;
} avr32_macb_dtf_t;



typedef struct avr32_macb_lcol_t {
    unsigned int                 :24;
    unsigned int lcol            : 8;
} avr32_macb_lcol_t;



typedef struct avr32_macb_excol_t {
    unsigned int                 :24;
    unsigned int excol           : 8;
} avr32_macb_excol_t;



typedef struct avr32_macb_tund_t {
    unsigned int                 :24;
    unsigned int tund            : 8;
} avr32_macb_tund_t;



typedef struct avr32_macb_cse_t {
    unsigned int                 :24;
    unsigned int cse             : 8;
} avr32_macb_cse_t;



typedef struct avr32_macb_rre_t {
    unsigned int                 :16;
    unsigned int rre             :16;
} avr32_macb_rre_t;



typedef struct avr32_macb_rovr_t {
    unsigned int                 :24;
    unsigned int rovr            : 8;
} avr32_macb_rovr_t;



typedef struct avr32_macb_rse_t {
    unsigned int                 :24;
    unsigned int rse             : 8;
} avr32_macb_rse_t;



typedef struct avr32_macb_ele_t {
    unsigned int                 :24;
    unsigned int exl             : 8;
} avr32_macb_ele_t;



typedef struct avr32_macb_rja_t {
    unsigned int                 :24;
    unsigned int rjb             : 8;
} avr32_macb_rja_t;



typedef struct avr32_macb_usf_t {
    unsigned int                 :24;
    unsigned int usf             : 8;
} avr32_macb_usf_t;



typedef struct avr32_macb_ste_t {
    unsigned int                 :24;
    unsigned int sqer            : 8;
} avr32_macb_ste_t;



typedef struct avr32_macb_rle_t {
    unsigned int                 :24;
    unsigned int rlfm            : 8;
} avr32_macb_rle_t;



typedef struct avr32_macb_tpf_t {
    unsigned int                 :16;
    unsigned int tpf             :16;
} avr32_macb_tpf_t;



typedef struct avr32_macb_sa1t_t {
    unsigned int                 :16;
    unsigned int addr            :16;
} avr32_macb_sa1t_t;



typedef struct avr32_macb_sa2t_t {
    unsigned int                 :16;
    unsigned int addr            :16;
} avr32_macb_sa2t_t;



typedef struct avr32_macb_sa3t_t {
    unsigned int                 :16;
    unsigned int addr            :16;
} avr32_macb_sa3t_t;



typedef struct avr32_macb_sa4t_t {
    unsigned int                 :16;
    unsigned int addr            :16;
} avr32_macb_sa4t_t;



typedef struct avr32_macb_tid_t {
    unsigned int                 :16;
    unsigned int tid             :16;
} avr32_macb_tid_t;



typedef struct avr32_macb_tpq_t {
    unsigned int                 :16;
    unsigned int tpq             :16;
} avr32_macb_tpq_t;



typedef struct avr32_macb_usrio_t {
    unsigned int                 :28;
    unsigned int tx_pause_zero   : 1;
    unsigned int tx_pause        : 1;
    unsigned int eam             : 1;
    unsigned int rmii            : 1;
} avr32_macb_usrio_t;



typedef struct avr32_macb_wol_t {
    unsigned int                 :12;
    unsigned int mti             : 1;
    unsigned int sa1             : 1;
    unsigned int arp             : 1;
    unsigned int mag             : 1;
    unsigned int ip              :16;
} avr32_macb_wol_t;



typedef struct avr32_macb_version_t {
    unsigned int part_reference  :16;
    unsigned int revision_reference :16;
} avr32_macb_version_t;



typedef struct avr32_macb_t {
  union {
          unsigned long                  ncr       ;//0x0000
          avr32_macb_ncr_t               NCR       ;
  };
  union {
          unsigned long                  ncfgr     ;//0x0004
          avr32_macb_ncfgr_t             NCFGR     ;
  };
  union {
    const unsigned long                  nsr       ;//0x0008
    const avr32_macb_nsr_t               NSR       ;
  };
          unsigned int                   :32       ;//0x000c
          unsigned int                   :32       ;//0x0010
  union {
          unsigned long                  tsr       ;//0x0014
          avr32_macb_tsr_t               TSR       ;
  };
          unsigned long                  rbqp      ;//0x0018
          unsigned long                  tbqp      ;//0x001c
  union {
          unsigned long                  rsr       ;//0x0020
          avr32_macb_rsr_t               RSR       ;
  };
  union {
          unsigned long                  isr       ;//0x0024
          avr32_macb_isr_t               ISR       ;
  };
  union {
          unsigned long                  ier       ;//0x0028
          avr32_macb_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x002c
          avr32_macb_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0030
    const avr32_macb_imr_t               IMR       ;
  };
  union {
          unsigned long                  man       ;//0x0034
          avr32_macb_man_t               MAN       ;
  };
  union {
    const unsigned long                  ptr       ;//0x0038
    const avr32_macb_ptr_t               PTR       ;
  };
  union {
          unsigned long                  pfr       ;//0x003c
          avr32_macb_pfr_t               PFR       ;
  };
  union {
          unsigned long                  fto       ;//0x0040
          avr32_macb_fto_t               FTO       ;
  };
  union {
          unsigned long                  scf       ;//0x0044
          avr32_macb_scf_t               SCF       ;
  };
  union {
          unsigned long                  mcf       ;//0x0048
          avr32_macb_mcf_t               MCF       ;
  };
  union {
          unsigned long                  fro       ;//0x004c
          avr32_macb_fro_t               FRO       ;
  };
  union {
          unsigned long                  fcse      ;//0x0050
          avr32_macb_fcse_t              FCSE      ;
  };
  union {
          unsigned long                  ale       ;//0x0054
          avr32_macb_ale_t               ALE       ;
  };
  union {
          unsigned long                  dtf       ;//0x0058
          avr32_macb_dtf_t               DTF       ;
  };
  union {
          unsigned long                  lcol      ;//0x005c
          avr32_macb_lcol_t              LCOL      ;
  };
  union {
          unsigned long                  excol     ;//0x0060
          avr32_macb_excol_t             EXCOL     ;
  };
  union {
          unsigned long                  tund      ;//0x0064
          avr32_macb_tund_t              TUND      ;
  };
  union {
          unsigned long                  cse       ;//0x0068
          avr32_macb_cse_t               CSE       ;
  };
  union {
          unsigned long                  rre       ;//0x006c
          avr32_macb_rre_t               RRE       ;
  };
  union {
          unsigned long                  rovr      ;//0x0070
          avr32_macb_rovr_t              ROVR      ;
  };
  union {
          unsigned long                  rse       ;//0x0074
          avr32_macb_rse_t               RSE       ;
  };
  union {
          unsigned long                  ele       ;//0x0078
          avr32_macb_ele_t               ELE       ;
  };
  union {
          unsigned long                  rja       ;//0x007c
          avr32_macb_rja_t               RJA       ;
  };
  union {
          unsigned long                  usf       ;//0x0080
          avr32_macb_usf_t               USF       ;
  };
  union {
          unsigned long                  ste       ;//0x0084
          avr32_macb_ste_t               STE       ;
  };
  union {
          unsigned long                  rle       ;//0x0088
          avr32_macb_rle_t               RLE       ;
  };
  union {
          unsigned long                  tpf       ;//0x008c
          avr32_macb_tpf_t               TPF       ;
  };
          unsigned long                  hrb       ;//0x0090
          unsigned long                  hrt       ;//0x0094
          unsigned long                  sa1b      ;//0x0098
  union {
          unsigned long                  sa1t      ;//0x009c
          avr32_macb_sa1t_t              SA1T      ;
  };
          unsigned long                  sa2b      ;//0x00a0
  union {
          unsigned long                  sa2t      ;//0x00a4
          avr32_macb_sa2t_t              SA2T      ;
  };
          unsigned long                  sa3b      ;//0x00a8
  union {
          unsigned long                  sa3t      ;//0x00ac
          avr32_macb_sa3t_t              SA3T      ;
  };
          unsigned long                  sa4b      ;//0x00b0
  union {
          unsigned long                  sa4t      ;//0x00b4
          avr32_macb_sa4t_t              SA4T      ;
  };
  union {
          unsigned long                  tid       ;//0x00b8
          avr32_macb_tid_t               TID       ;
  };
  union {
          unsigned long                  tpq       ;//0x00bc
          avr32_macb_tpq_t               TPQ       ;
  };
  union {
          unsigned long                  usrio     ;//0x00c0
          avr32_macb_usrio_t             USRIO     ;
  };
  union {
          unsigned long                  wol       ;//0x00c4
          avr32_macb_wol_t               WOL       ;
  };
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
    const avr32_macb_version_t           VERSION   ;
  };
} avr32_macb_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_MACB_1121_H_INCLUDED*/
#endif

