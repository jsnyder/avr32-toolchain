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
#ifndef AVR32_LCDC_172_H_INCLUDED
#define AVR32_LCDC_172_H_INCLUDED

#define AVR32_LCDC_H_VERSION 172

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_LCDC_<register>
 - Bitfield mask:   AVR32_LCDC_<register>_<bitfield>
 - Bitfield offset: AVR32_LCDC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_LCDC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_LCDC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_LCDC_<bitfield>
 - Bitfield offset: AVR32_LCDC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_LCDC_<bitfield>_SIZE
 - Bitfield values: AVR32_LCDC_<bitfield>_<value name>
 - Bitfield values: AVR32_LCDC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_LCDC_16_BPP                                   0x00000004
#define AVR32_LCDC_1_BPP                                    0x00000000
#define AVR32_LCDC_24_BPP                                   0x00000005
#define AVR32_LCDC_2_BPP                                    0x00000001
#define AVR32_LCDC_4_BPP                                    0x00000002
#define AVR32_LCDC_8_BPP                                    0x00000003
#define AVR32_LCDC_ADDRINC                                           0
#define AVR32_LCDC_ADDRINC_MASK                             0x0000ffff
#define AVR32_LCDC_ADDRINC_OFFSET                                    0
#define AVR32_LCDC_ADDRINC_SIZE                                     16
#define AVR32_LCDC_B                                                10
#define AVR32_LCDC_BADDR_L                                           0
#define AVR32_LCDC_BADDR_L_MASK                             0xffffffff
#define AVR32_LCDC_BADDR_L_OFFSET                                    0
#define AVR32_LCDC_BADDR_L_SIZE                                     32
#define AVR32_LCDC_BADDR_U                                           0
#define AVR32_LCDC_BADDR_U_MASK                             0xffffffff
#define AVR32_LCDC_BADDR_U_OFFSET                                    0
#define AVR32_LCDC_BADDR_U_SIZE                                     32
#define AVR32_LCDC_BIG_ENDIAN                               0x00000000
#define AVR32_LCDC_BRSTLEN                                          24
#define AVR32_LCDC_BRSTLEN_MASK                             0x0f000000
#define AVR32_LCDC_BRSTLEN_OFFSET                                   24
#define AVR32_LCDC_BRSTLEN_SIZE                                      4
#define AVR32_LCDC_BUSY                                             31
#define AVR32_LCDC_BUSY_MASK                                0x80000000
#define AVR32_LCDC_BUSY_OFFSET                                      31
#define AVR32_LCDC_BUSY_SIZE                                         1
#define AVR32_LCDC_BYPASS                                            0
#define AVR32_LCDC_BYPASS_MASK                              0x00000001
#define AVR32_LCDC_BYPASS_OFFSET                                     0
#define AVR32_LCDC_BYPASS_SIZE                                       1
#define AVR32_LCDC_B_MASK                                   0x00007c00
#define AVR32_LCDC_B_OFFSET                                         10
#define AVR32_LCDC_B_SIZE                                            5
#define AVR32_LCDC_CLKMOD                                           15
#define AVR32_LCDC_CLKMOD_MASK                              0x00008000
#define AVR32_LCDC_CLKMOD_OFFSET                                    15
#define AVR32_LCDC_CLKMOD_SIZE                                       1
#define AVR32_LCDC_CLKVAL                                           12
#define AVR32_LCDC_CLKVAL_MASK                              0x001ff000
#define AVR32_LCDC_CLKVAL_OFFSET                                    12
#define AVR32_LCDC_CLKVAL_SIZE                                       9
#define AVR32_LCDC_CONTRAST_CTR                             0x00000840
#define AVR32_LCDC_CONTRAST_CTR_ENA                                  3
#define AVR32_LCDC_CONTRAST_CTR_ENA_MASK                    0x00000008
#define AVR32_LCDC_CONTRAST_CTR_ENA_OFFSET                           3
#define AVR32_LCDC_CONTRAST_CTR_ENA_SIZE                             1
#define AVR32_LCDC_CONTRAST_CTR_POL                                  2
#define AVR32_LCDC_CONTRAST_CTR_POL_MASK                    0x00000004
#define AVR32_LCDC_CONTRAST_CTR_POL_OFFSET                           2
#define AVR32_LCDC_CONTRAST_CTR_POL_SIZE                             1
#define AVR32_LCDC_CONTRAST_CTR_PS                                   0
#define AVR32_LCDC_CONTRAST_CTR_PS_MASK                     0x00000003
#define AVR32_LCDC_CONTRAST_CTR_PS_OFFSET                            0
#define AVR32_LCDC_CONTRAST_CTR_PS_SCALE_1                  0x00000000
#define AVR32_LCDC_CONTRAST_CTR_PS_SCALE_2                  0x00000001
#define AVR32_LCDC_CONTRAST_CTR_PS_SCALE_4                  0x00000002
#define AVR32_LCDC_CONTRAST_CTR_PS_SCALE_8                  0x00000003
#define AVR32_LCDC_CONTRAST_CTR_PS_SIZE                              2
#define AVR32_LCDC_CONTRAST_VAL                             0x00000844
#define AVR32_LCDC_CONTRAST_VAL_CVAL                                 0
#define AVR32_LCDC_CONTRAST_VAL_CVAL_MASK                   0x000000ff
#define AVR32_LCDC_CONTRAST_VAL_CVAL_OFFSET                          0
#define AVR32_LCDC_CONTRAST_VAL_CVAL_SIZE                            8
#define AVR32_LCDC_CVAL                                              0
#define AVR32_LCDC_CVAL_MASK                                0x000000ff
#define AVR32_LCDC_CVAL_OFFSET                                       0
#define AVR32_LCDC_CVAL_SIZE                                         8
#define AVR32_LCDC_DISTYPE                                           0
#define AVR32_LCDC_DISTYPE_MASK                             0x00000003
#define AVR32_LCDC_DISTYPE_OFFSET                                    0
#define AVR32_LCDC_DISTYPE_SIZE                                      2
#define AVR32_LCDC_DISTYPE_STN_COLOR                        0x00000001
#define AVR32_LCDC_DISTYPE_STN_MONO                         0x00000000
#define AVR32_LCDC_DISTYPE_TFT                              0x00000002
#define AVR32_LCDC_DMA2DCFG                                 0x00000020
#define AVR32_LCDC_DMA2DCFG_ADDRINC                                  0
#define AVR32_LCDC_DMA2DCFG_ADDRINC_MASK                    0x0000ffff
#define AVR32_LCDC_DMA2DCFG_ADDRINC_OFFSET                           0
#define AVR32_LCDC_DMA2DCFG_ADDRINC_SIZE                            16
#define AVR32_LCDC_DMA2DCFG_PIXELOFF                                24
#define AVR32_LCDC_DMA2DCFG_PIXELOFF_MASK                   0x1f000000
#define AVR32_LCDC_DMA2DCFG_PIXELOFF_OFFSET                         24
#define AVR32_LCDC_DMA2DCFG_PIXELOFF_SIZE                            5
#define AVR32_LCDC_DMA2DEN                                           4
#define AVR32_LCDC_DMA2DEN_MASK                             0x00000010
#define AVR32_LCDC_DMA2DEN_OFFSET                                    4
#define AVR32_LCDC_DMA2DEN_SIZE                                      1
#define AVR32_LCDC_DMABADDR1                                0x00000000
#define AVR32_LCDC_DMABADDR1_BADDR_U                                 0
#define AVR32_LCDC_DMABADDR1_BADDR_U_MASK                   0xffffffff
#define AVR32_LCDC_DMABADDR1_BADDR_U_OFFSET                          0
#define AVR32_LCDC_DMABADDR1_BADDR_U_SIZE                           32
#define AVR32_LCDC_DMABADDR2                                0x00000004
#define AVR32_LCDC_DMABADDR2_BADDR_L                                 0
#define AVR32_LCDC_DMABADDR2_BADDR_L_MASK                   0xffffffff
#define AVR32_LCDC_DMABADDR2_BADDR_L_OFFSET                          0
#define AVR32_LCDC_DMABADDR2_BADDR_L_SIZE                           32
#define AVR32_LCDC_DMABUSY                                           2
#define AVR32_LCDC_DMABUSY_MASK                             0x00000004
#define AVR32_LCDC_DMABUSY_OFFSET                                    2
#define AVR32_LCDC_DMABUSY_SIZE                                      1
#define AVR32_LCDC_DMACON                                   0x0000001c
#define AVR32_LCDC_DMACON_DMA2DEN                                    4
#define AVR32_LCDC_DMACON_DMA2DEN_MASK                      0x00000010
#define AVR32_LCDC_DMACON_DMA2DEN_OFFSET                             4
#define AVR32_LCDC_DMACON_DMA2DEN_SIZE                               1
#define AVR32_LCDC_DMACON_DMABUSY                                    2
#define AVR32_LCDC_DMACON_DMABUSY_MASK                      0x00000004
#define AVR32_LCDC_DMACON_DMABUSY_OFFSET                             2
#define AVR32_LCDC_DMACON_DMABUSY_SIZE                               1
#define AVR32_LCDC_DMACON_DMAEN                                      0
#define AVR32_LCDC_DMACON_DMAEN_MASK                        0x00000001
#define AVR32_LCDC_DMACON_DMAEN_OFFSET                               0
#define AVR32_LCDC_DMACON_DMAEN_SIZE                                 1
#define AVR32_LCDC_DMACON_DMARST                                     1
#define AVR32_LCDC_DMACON_DMARST_MASK                       0x00000002
#define AVR32_LCDC_DMACON_DMARST_OFFSET                              1
#define AVR32_LCDC_DMACON_DMARST_SIZE                                1
#define AVR32_LCDC_DMACON_DMAUPDT                                    3
#define AVR32_LCDC_DMACON_DMAUPDT_MASK                      0x00000008
#define AVR32_LCDC_DMACON_DMAUPDT_OFFSET                             3
#define AVR32_LCDC_DMACON_DMAUPDT_SIZE                               1
#define AVR32_LCDC_DMAEN                                             0
#define AVR32_LCDC_DMAEN_MASK                               0x00000001
#define AVR32_LCDC_DMAEN_OFFSET                                      0
#define AVR32_LCDC_DMAEN_SIZE                                        1
#define AVR32_LCDC_DMAFRMADD1                               0x00000010
#define AVR32_LCDC_DMAFRMADD1_FRMADD_U                               0
#define AVR32_LCDC_DMAFRMADD1_FRMADD_U_MASK                 0xffffffff
#define AVR32_LCDC_DMAFRMADD1_FRMADD_U_OFFSET                        0
#define AVR32_LCDC_DMAFRMADD1_FRMADD_U_SIZE                         32
#define AVR32_LCDC_DMAFRMADD2                               0x00000014
#define AVR32_LCDC_DMAFRMADD2_FRMADD_L                               0
#define AVR32_LCDC_DMAFRMADD2_FRMADD_L_MASK                 0xffffffff
#define AVR32_LCDC_DMAFRMADD2_FRMADD_L_OFFSET                        0
#define AVR32_LCDC_DMAFRMADD2_FRMADD_L_SIZE                         32
#define AVR32_LCDC_DMAFRMCFG                                0x00000018
#define AVR32_LCDC_DMAFRMCFG_BRSTLEN                                24
#define AVR32_LCDC_DMAFRMCFG_BRSTLEN_MASK                   0x0f000000
#define AVR32_LCDC_DMAFRMCFG_BRSTLEN_OFFSET                         24
#define AVR32_LCDC_DMAFRMCFG_BRSTLEN_SIZE                            4
#define AVR32_LCDC_DMAFRMCFG_FRMSIZE                                 0
#define AVR32_LCDC_DMAFRMCFG_FRMSIZE_MASK                   0x007fffff
#define AVR32_LCDC_DMAFRMCFG_FRMSIZE_OFFSET                          0
#define AVR32_LCDC_DMAFRMCFG_FRMSIZE_SIZE                           23
#define AVR32_LCDC_DMAFRMPT1                                0x00000008
#define AVR32_LCDC_DMAFRMPT1_FRMPT_U                                 0
#define AVR32_LCDC_DMAFRMPT1_FRMPT_U_MASK                   0x007fffff
#define AVR32_LCDC_DMAFRMPT1_FRMPT_U_OFFSET                          0
#define AVR32_LCDC_DMAFRMPT1_FRMPT_U_SIZE                           23
#define AVR32_LCDC_DMAFRMPT2                                0x0000000c
#define AVR32_LCDC_DMAFRMPT2_FRMPT_L                                 0
#define AVR32_LCDC_DMAFRMPT2_FRMPT_L_MASK                   0x003fffff
#define AVR32_LCDC_DMAFRMPT2_FRMPT_L_OFFSET                          0
#define AVR32_LCDC_DMAFRMPT2_FRMPT_L_SIZE                           22
#define AVR32_LCDC_DMARST                                            1
#define AVR32_LCDC_DMARST_MASK                              0x00000002
#define AVR32_LCDC_DMARST_OFFSET                                     1
#define AVR32_LCDC_DMARST_SIZE                                       1
#define AVR32_LCDC_DMAUPDT                                           3
#define AVR32_LCDC_DMAUPDT_MASK                             0x00000008
#define AVR32_LCDC_DMAUPDT_OFFSET                                    3
#define AVR32_LCDC_DMAUPDT_SIZE                                      1
#define AVR32_LCDC_DP1_2                                    0x0000081c
#define AVR32_LCDC_DP1_2_DP1_2                                       0
#define AVR32_LCDC_DP1_2_DP1_2_MASK                         0x000000ff
#define AVR32_LCDC_DP1_2_DP1_2_OFFSET                                0
#define AVR32_LCDC_DP1_2_DP1_2_SIZE                                  8
#define AVR32_LCDC_DP1_2_MASK                               0x000000ff
#define AVR32_LCDC_DP1_2_OFFSET                                      0
#define AVR32_LCDC_DP1_2_SIZE                                        8
#define AVR32_LCDC_DP2_3                                    0x00000828
#define AVR32_LCDC_DP2_3_DP2_3                                       0
#define AVR32_LCDC_DP2_3_DP2_3_MASK                         0x00000fff
#define AVR32_LCDC_DP2_3_DP2_3_OFFSET                                0
#define AVR32_LCDC_DP2_3_DP2_3_SIZE                                 12
#define AVR32_LCDC_DP2_3_MASK                               0x00000fff
#define AVR32_LCDC_DP2_3_OFFSET                                      0
#define AVR32_LCDC_DP2_3_SIZE                                       12
#define AVR32_LCDC_DP3_4                                    0x00000830
#define AVR32_LCDC_DP3_4_DP3_4                                       0
#define AVR32_LCDC_DP3_4_DP3_4_MASK                         0x0000ffff
#define AVR32_LCDC_DP3_4_DP3_4_OFFSET                                0
#define AVR32_LCDC_DP3_4_DP3_4_SIZE                                 16
#define AVR32_LCDC_DP3_4_MASK                               0x0000ffff
#define AVR32_LCDC_DP3_4_OFFSET                                      0
#define AVR32_LCDC_DP3_4_SIZE                                       16
#define AVR32_LCDC_DP3_5                                    0x00000824
#define AVR32_LCDC_DP3_5_DP3_5                                       0
#define AVR32_LCDC_DP3_5_DP3_5_MASK                         0x000fffff
#define AVR32_LCDC_DP3_5_DP3_5_OFFSET                                0
#define AVR32_LCDC_DP3_5_DP3_5_SIZE                                 20
#define AVR32_LCDC_DP3_5_MASK                               0x000fffff
#define AVR32_LCDC_DP3_5_OFFSET                                      0
#define AVR32_LCDC_DP3_5_SIZE                                       20
#define AVR32_LCDC_DP4_5                                    0x00000834
#define AVR32_LCDC_DP4_5_DP4_5                                       0
#define AVR32_LCDC_DP4_5_DP4_5_MASK                         0x000fffff
#define AVR32_LCDC_DP4_5_DP4_5_OFFSET                                0
#define AVR32_LCDC_DP4_5_DP4_5_SIZE                                 20
#define AVR32_LCDC_DP4_5_MASK                               0x000fffff
#define AVR32_LCDC_DP4_5_OFFSET                                      0
#define AVR32_LCDC_DP4_5_SIZE                                       20
#define AVR32_LCDC_DP4_7                                    0x00000820
#define AVR32_LCDC_DP4_7_DP4_7                                       0
#define AVR32_LCDC_DP4_7_DP4_7_MASK                         0x0fffffff
#define AVR32_LCDC_DP4_7_DP4_7_OFFSET                                0
#define AVR32_LCDC_DP4_7_DP4_7_SIZE                                 28
#define AVR32_LCDC_DP4_7_MASK                               0x0fffffff
#define AVR32_LCDC_DP4_7_OFFSET                                      0
#define AVR32_LCDC_DP4_7_SIZE                                       28
#define AVR32_LCDC_DP5_7                                    0x0000082c
#define AVR32_LCDC_DP5_7_DP5_7                                       0
#define AVR32_LCDC_DP5_7_DP5_7_MASK                         0x0fffffff
#define AVR32_LCDC_DP5_7_DP5_7_OFFSET                                0
#define AVR32_LCDC_DP5_7_DP5_7_SIZE                                 28
#define AVR32_LCDC_DP5_7_MASK                               0x0fffffff
#define AVR32_LCDC_DP5_7_OFFSET                                      0
#define AVR32_LCDC_DP5_7_SIZE                                       28
#define AVR32_LCDC_DP6_7                                    0x00000838
#define AVR32_LCDC_DP6_7_DP6_7                                       0
#define AVR32_LCDC_DP6_7_DP6_7_MASK                         0x0fffffff
#define AVR32_LCDC_DP6_7_DP6_7_OFFSET                                0
#define AVR32_LCDC_DP6_7_DP6_7_SIZE                                 28
#define AVR32_LCDC_DP6_7_MASK                               0x0fffffff
#define AVR32_LCDC_DP6_7_OFFSET                                      0
#define AVR32_LCDC_DP6_7_SIZE                                       28
#define AVR32_LCDC_EIGHT_BITS                               0x00000001
#define AVR32_LCDC_ENA                                               3
#define AVR32_LCDC_ENA_MASK                                 0x00000008
#define AVR32_LCDC_ENA_OFFSET                                        3
#define AVR32_LCDC_ENA_SIZE                                          1
#define AVR32_LCDC_EOFIC                                             2
#define AVR32_LCDC_EOFIC_MASK                               0x00000004
#define AVR32_LCDC_EOFIC_OFFSET                                      2
#define AVR32_LCDC_EOFIC_SIZE                                        1
#define AVR32_LCDC_EOFID                                             2
#define AVR32_LCDC_EOFID_MASK                               0x00000004
#define AVR32_LCDC_EOFID_OFFSET                                      2
#define AVR32_LCDC_EOFID_SIZE                                        1
#define AVR32_LCDC_EOFIE                                             2
#define AVR32_LCDC_EOFIE_MASK                               0x00000004
#define AVR32_LCDC_EOFIE_OFFSET                                      2
#define AVR32_LCDC_EOFIE_SIZE                                        1
#define AVR32_LCDC_EOFIM                                             2
#define AVR32_LCDC_EOFIM_MASK                               0x00000004
#define AVR32_LCDC_EOFIM_OFFSET                                      2
#define AVR32_LCDC_EOFIM_SIZE                                        1
#define AVR32_LCDC_EOFIR                                             2
#define AVR32_LCDC_EOFIR_MASK                               0x00000004
#define AVR32_LCDC_EOFIR_OFFSET                                      2
#define AVR32_LCDC_EOFIR_SIZE                                        1
#define AVR32_LCDC_EOFIS                                             2
#define AVR32_LCDC_EOFIS_MASK                               0x00000004
#define AVR32_LCDC_EOFIS_OFFSET                                      2
#define AVR32_LCDC_EOFIS_SIZE                                        1
#define AVR32_LCDC_EOFIT                                             2
#define AVR32_LCDC_EOFIT_MASK                               0x00000004
#define AVR32_LCDC_EOFIT_OFFSET                                      2
#define AVR32_LCDC_EOFIT_SIZE                                        1
#define AVR32_LCDC_FIFOTH                                            0
#define AVR32_LCDC_FIFOTH_MASK                              0x0000ffff
#define AVR32_LCDC_FIFOTH_OFFSET                                     0
#define AVR32_LCDC_FIFOTH_SIZE                                      16
#define AVR32_LCDC_FOUR_BITS                                0x00000000
#define AVR32_LCDC_FRMADD_L                                          0
#define AVR32_LCDC_FRMADD_L_MASK                            0xffffffff
#define AVR32_LCDC_FRMADD_L_OFFSET                                   0
#define AVR32_LCDC_FRMADD_L_SIZE                                    32
#define AVR32_LCDC_FRMADD_U                                          0
#define AVR32_LCDC_FRMADD_U_MASK                            0xffffffff
#define AVR32_LCDC_FRMADD_U_OFFSET                                   0
#define AVR32_LCDC_FRMADD_U_SIZE                                    32
#define AVR32_LCDC_FRMPT_L                                           0
#define AVR32_LCDC_FRMPT_L_MASK                             0x003fffff
#define AVR32_LCDC_FRMPT_L_OFFSET                                    0
#define AVR32_LCDC_FRMPT_L_SIZE                                     22
#define AVR32_LCDC_FRMPT_U                                           0
#define AVR32_LCDC_FRMPT_U_MASK                             0x007fffff
#define AVR32_LCDC_FRMPT_U_OFFSET                                    0
#define AVR32_LCDC_FRMPT_U_SIZE                                     23
#define AVR32_LCDC_FRMSIZE                                           0
#define AVR32_LCDC_FRMSIZE_MASK                             0x007fffff
#define AVR32_LCDC_FRMSIZE_OFFSET                                    0
#define AVR32_LCDC_FRMSIZE_SIZE                                     23
#define AVR32_LCDC_G                                                 5
#define AVR32_LCDC_GPR                                      0x0000085c
#define AVR32_LCDC_GPRB0                                             0
#define AVR32_LCDC_GPRB0_MASK                               0x00000001
#define AVR32_LCDC_GPRB0_OFFSET                                      0
#define AVR32_LCDC_GPRB0_SIZE                                        1
#define AVR32_LCDC_GPRB1                                             1
#define AVR32_LCDC_GPRB1_MASK                               0x00000002
#define AVR32_LCDC_GPRB1_OFFSET                                      1
#define AVR32_LCDC_GPRB1_SIZE                                        1
#define AVR32_LCDC_GPRB2                                             2
#define AVR32_LCDC_GPRB2_MASK                               0x00000004
#define AVR32_LCDC_GPRB2_OFFSET                                      2
#define AVR32_LCDC_GPRB2_SIZE                                        1
#define AVR32_LCDC_GPRB3                                             3
#define AVR32_LCDC_GPRB3_MASK                               0x00000008
#define AVR32_LCDC_GPRB3_OFFSET                                      3
#define AVR32_LCDC_GPRB3_SIZE                                        1
#define AVR32_LCDC_GPRB4                                             4
#define AVR32_LCDC_GPRB4_MASK                               0x00000010
#define AVR32_LCDC_GPRB4_OFFSET                                      4
#define AVR32_LCDC_GPRB4_SIZE                                        1
#define AVR32_LCDC_GPRB5                                             5
#define AVR32_LCDC_GPRB5_MASK                               0x00000020
#define AVR32_LCDC_GPRB5_OFFSET                                      5
#define AVR32_LCDC_GPRB5_SIZE                                        1
#define AVR32_LCDC_GPRB6                                             6
#define AVR32_LCDC_GPRB6_MASK                               0x00000040
#define AVR32_LCDC_GPRB6_OFFSET                                      6
#define AVR32_LCDC_GPRB6_SIZE                                        1
#define AVR32_LCDC_GPRB7                                             7
#define AVR32_LCDC_GPRB7_MASK                               0x00000080
#define AVR32_LCDC_GPRB7_OFFSET                                      7
#define AVR32_LCDC_GPRB7_SIZE                                        1
#define AVR32_LCDC_GPR_GPRB0                                         0
#define AVR32_LCDC_GPR_GPRB0_MASK                           0x00000001
#define AVR32_LCDC_GPR_GPRB0_OFFSET                                  0
#define AVR32_LCDC_GPR_GPRB0_SIZE                                    1
#define AVR32_LCDC_GPR_GPRB1                                         1
#define AVR32_LCDC_GPR_GPRB1_MASK                           0x00000002
#define AVR32_LCDC_GPR_GPRB1_OFFSET                                  1
#define AVR32_LCDC_GPR_GPRB1_SIZE                                    1
#define AVR32_LCDC_GPR_GPRB2                                         2
#define AVR32_LCDC_GPR_GPRB2_MASK                           0x00000004
#define AVR32_LCDC_GPR_GPRB2_OFFSET                                  2
#define AVR32_LCDC_GPR_GPRB2_SIZE                                    1
#define AVR32_LCDC_GPR_GPRB3                                         3
#define AVR32_LCDC_GPR_GPRB3_MASK                           0x00000008
#define AVR32_LCDC_GPR_GPRB3_OFFSET                                  3
#define AVR32_LCDC_GPR_GPRB3_SIZE                                    1
#define AVR32_LCDC_GPR_GPRB4                                         4
#define AVR32_LCDC_GPR_GPRB4_MASK                           0x00000010
#define AVR32_LCDC_GPR_GPRB4_OFFSET                                  4
#define AVR32_LCDC_GPR_GPRB4_SIZE                                    1
#define AVR32_LCDC_GPR_GPRB5                                         5
#define AVR32_LCDC_GPR_GPRB5_MASK                           0x00000020
#define AVR32_LCDC_GPR_GPRB5_OFFSET                                  5
#define AVR32_LCDC_GPR_GPRB5_SIZE                                    1
#define AVR32_LCDC_GPR_GPRB6                                         6
#define AVR32_LCDC_GPR_GPRB6_MASK                           0x00000040
#define AVR32_LCDC_GPR_GPRB6_OFFSET                                  6
#define AVR32_LCDC_GPR_GPRB6_SIZE                                    1
#define AVR32_LCDC_GPR_GPRB7                                         7
#define AVR32_LCDC_GPR_GPRB7_MASK                           0x00000080
#define AVR32_LCDC_GPR_GPRB7_OFFSET                                  7
#define AVR32_LCDC_GPR_GPRB7_SIZE                                    1
#define AVR32_LCDC_GUARD_TIME                                        1
#define AVR32_LCDC_GUARD_TIME_MASK                          0x000000fe
#define AVR32_LCDC_GUARD_TIME_OFFSET                                 1
#define AVR32_LCDC_GUARD_TIME_SIZE                                   7
#define AVR32_LCDC_G_MASK                                   0x000003e0
#define AVR32_LCDC_G_OFFSET                                          5
#define AVR32_LCDC_G_SIZE                                            5
#define AVR32_LCDC_HBP                                               0
#define AVR32_LCDC_HBP_MASK                                 0x000000ff
#define AVR32_LCDC_HBP_OFFSET                                        0
#define AVR32_LCDC_HBP_SIZE                                          8
#define AVR32_LCDC_HFP                                              21
#define AVR32_LCDC_HFP_MASK                                 0xffe00000
#define AVR32_LCDC_HFP_OFFSET                                       21
#define AVR32_LCDC_HFP_SIZE                                         11
#define AVR32_LCDC_HOZVAL                                           21
#define AVR32_LCDC_HOZVAL_MASK                              0xffe00000
#define AVR32_LCDC_HOZVAL_OFFSET                                    21
#define AVR32_LCDC_HOZVAL_SIZE                                      11
#define AVR32_LCDC_HPW                                               8
#define AVR32_LCDC_HPW_MASK                                 0x00003f00
#define AVR32_LCDC_HPW_OFFSET                                        8
#define AVR32_LCDC_HPW_SIZE                                          6
#define AVR32_LCDC_I                                                15
#define AVR32_LCDC_ICR                                      0x00000858
#define AVR32_LCDC_ICR_EOFIC                                         2
#define AVR32_LCDC_ICR_EOFIC_MASK                           0x00000004
#define AVR32_LCDC_ICR_EOFIC_OFFSET                                  2
#define AVR32_LCDC_ICR_EOFIC_SIZE                                    1
#define AVR32_LCDC_ICR_LNIC                                          0
#define AVR32_LCDC_ICR_LNIC_MASK                            0x00000001
#define AVR32_LCDC_ICR_LNIC_OFFSET                                   0
#define AVR32_LCDC_ICR_LNIC_SIZE                                     1
#define AVR32_LCDC_ICR_LSTLNIC                                       1
#define AVR32_LCDC_ICR_LSTLNIC_MASK                         0x00000002
#define AVR32_LCDC_ICR_LSTLNIC_OFFSET                                1
#define AVR32_LCDC_ICR_LSTLNIC_SIZE                                  1
#define AVR32_LCDC_ICR_MERIC                                         6
#define AVR32_LCDC_ICR_MERIC_MASK                           0x00000040
#define AVR32_LCDC_ICR_MERIC_OFFSET                                  6
#define AVR32_LCDC_ICR_MERIC_SIZE                                    1
#define AVR32_LCDC_ICR_OWRIC                                         5
#define AVR32_LCDC_ICR_OWRIC_MASK                           0x00000020
#define AVR32_LCDC_ICR_OWRIC_OFFSET                                  5
#define AVR32_LCDC_ICR_OWRIC_SIZE                                    1
#define AVR32_LCDC_ICR_UFLWIC                                        4
#define AVR32_LCDC_ICR_UFLWIC_MASK                          0x00000010
#define AVR32_LCDC_ICR_UFLWIC_OFFSET                                 4
#define AVR32_LCDC_ICR_UFLWIC_SIZE                                   1
#define AVR32_LCDC_IDR                                      0x0000084c
#define AVR32_LCDC_IDR_EOFID                                         2
#define AVR32_LCDC_IDR_EOFID_MASK                           0x00000004
#define AVR32_LCDC_IDR_EOFID_OFFSET                                  2
#define AVR32_LCDC_IDR_EOFID_SIZE                                    1
#define AVR32_LCDC_IDR_LNID                                          0
#define AVR32_LCDC_IDR_LNID_MASK                            0x00000001
#define AVR32_LCDC_IDR_LNID_OFFSET                                   0
#define AVR32_LCDC_IDR_LNID_SIZE                                     1
#define AVR32_LCDC_IDR_LSTLNID                                       1
#define AVR32_LCDC_IDR_LSTLNID_MASK                         0x00000002
#define AVR32_LCDC_IDR_LSTLNID_OFFSET                                1
#define AVR32_LCDC_IDR_LSTLNID_SIZE                                  1
#define AVR32_LCDC_IDR_MERID                                         6
#define AVR32_LCDC_IDR_MERID_MASK                           0x00000040
#define AVR32_LCDC_IDR_MERID_OFFSET                                  6
#define AVR32_LCDC_IDR_MERID_SIZE                                    1
#define AVR32_LCDC_IDR_OWRID                                         5
#define AVR32_LCDC_IDR_OWRID_MASK                           0x00000020
#define AVR32_LCDC_IDR_OWRID_OFFSET                                  5
#define AVR32_LCDC_IDR_OWRID_SIZE                                    1
#define AVR32_LCDC_IDR_UFLWID                                        4
#define AVR32_LCDC_IDR_UFLWID_MASK                          0x00000010
#define AVR32_LCDC_IDR_UFLWID_OFFSET                                 4
#define AVR32_LCDC_IDR_UFLWID_SIZE                                   1
#define AVR32_LCDC_IER                                      0x00000848
#define AVR32_LCDC_IER_EOFIE                                         2
#define AVR32_LCDC_IER_EOFIE_MASK                           0x00000004
#define AVR32_LCDC_IER_EOFIE_OFFSET                                  2
#define AVR32_LCDC_IER_EOFIE_SIZE                                    1
#define AVR32_LCDC_IER_LNIE                                          0
#define AVR32_LCDC_IER_LNIE_MASK                            0x00000001
#define AVR32_LCDC_IER_LNIE_OFFSET                                   0
#define AVR32_LCDC_IER_LNIE_SIZE                                     1
#define AVR32_LCDC_IER_LSTLNIE                                       1
#define AVR32_LCDC_IER_LSTLNIE_MASK                         0x00000002
#define AVR32_LCDC_IER_LSTLNIE_OFFSET                                1
#define AVR32_LCDC_IER_LSTLNIE_SIZE                                  1
#define AVR32_LCDC_IER_MERIE                                         6
#define AVR32_LCDC_IER_MERIE_MASK                           0x00000040
#define AVR32_LCDC_IER_MERIE_OFFSET                                  6
#define AVR32_LCDC_IER_MERIE_SIZE                                    1
#define AVR32_LCDC_IER_OWRIE                                         5
#define AVR32_LCDC_IER_OWRIE_MASK                           0x00000020
#define AVR32_LCDC_IER_OWRIE_OFFSET                                  5
#define AVR32_LCDC_IER_OWRIE_SIZE                                    1
#define AVR32_LCDC_IER_UFLWIE                                        4
#define AVR32_LCDC_IER_UFLWIE_MASK                          0x00000010
#define AVR32_LCDC_IER_UFLWIE_OFFSET                                 4
#define AVR32_LCDC_IER_UFLWIE_SIZE                                   1
#define AVR32_LCDC_IFWIDTH                                           3
#define AVR32_LCDC_IFWIDTH_EIGHT_BITS                       0x00000001
#define AVR32_LCDC_IFWIDTH_FOUR_BITS                        0x00000000
#define AVR32_LCDC_IFWIDTH_MASK                             0x00000018
#define AVR32_LCDC_IFWIDTH_OFFSET                                    3
#define AVR32_LCDC_IFWIDTH_SIXTEEN_BITS                     0x00000002
#define AVR32_LCDC_IFWIDTH_SIZE                                      2
#define AVR32_LCDC_IMR                                      0x00000850
#define AVR32_LCDC_IMR_EOFIM                                         2
#define AVR32_LCDC_IMR_EOFIM_MASK                           0x00000004
#define AVR32_LCDC_IMR_EOFIM_OFFSET                                  2
#define AVR32_LCDC_IMR_EOFIM_SIZE                                    1
#define AVR32_LCDC_IMR_LNIM                                          0
#define AVR32_LCDC_IMR_LNIM_MASK                            0x00000001
#define AVR32_LCDC_IMR_LNIM_OFFSET                                   0
#define AVR32_LCDC_IMR_LNIM_SIZE                                     1
#define AVR32_LCDC_IMR_LSTLNIM                                       1
#define AVR32_LCDC_IMR_LSTLNIM_MASK                         0x00000002
#define AVR32_LCDC_IMR_LSTLNIM_OFFSET                                1
#define AVR32_LCDC_IMR_LSTLNIM_SIZE                                  1
#define AVR32_LCDC_IMR_MERIM                                         6
#define AVR32_LCDC_IMR_MERIM_MASK                           0x00000040
#define AVR32_LCDC_IMR_MERIM_OFFSET                                  6
#define AVR32_LCDC_IMR_MERIM_SIZE                                    1
#define AVR32_LCDC_IMR_OWRIM                                         5
#define AVR32_LCDC_IMR_OWRIM_MASK                           0x00000020
#define AVR32_LCDC_IMR_OWRIM_OFFSET                                  5
#define AVR32_LCDC_IMR_OWRIM_SIZE                                    1
#define AVR32_LCDC_IMR_UFLWIM                                        4
#define AVR32_LCDC_IMR_UFLWIM_MASK                          0x00000010
#define AVR32_LCDC_IMR_UFLWIM_OFFSET                                 4
#define AVR32_LCDC_IMR_UFLWIM_SIZE                                   1
#define AVR32_LCDC_INVCLK                                           11
#define AVR32_LCDC_INVCLK_MASK                              0x00000800
#define AVR32_LCDC_INVCLK_OFFSET                                    11
#define AVR32_LCDC_INVCLK_SIZE                                       1
#define AVR32_LCDC_INVDVAL                                          12
#define AVR32_LCDC_INVDVAL_MASK                             0x00001000
#define AVR32_LCDC_INVDVAL_OFFSET                                   12
#define AVR32_LCDC_INVDVAL_SIZE                                      1
#define AVR32_LCDC_INVFRAME                                          9
#define AVR32_LCDC_INVFRAME_MASK                            0x00000200
#define AVR32_LCDC_INVFRAME_OFFSET                                   9
#define AVR32_LCDC_INVFRAME_SIZE                                     1
#define AVR32_LCDC_INVLINE                                          10
#define AVR32_LCDC_INVLINE_MASK                             0x00000400
#define AVR32_LCDC_INVLINE_OFFSET                                   10
#define AVR32_LCDC_INVLINE_SIZE                                      1
#define AVR32_LCDC_INVVD                                             8
#define AVR32_LCDC_INVVD_MASK                               0x00000100
#define AVR32_LCDC_INVVD_OFFSET                                      8
#define AVR32_LCDC_INVVD_SIZE                                        1
#define AVR32_LCDC_IRR                                      0x00000864
#define AVR32_LCDC_IRR_EOFIR                                         2
#define AVR32_LCDC_IRR_EOFIR_MASK                           0x00000004
#define AVR32_LCDC_IRR_EOFIR_OFFSET                                  2
#define AVR32_LCDC_IRR_EOFIR_SIZE                                    1
#define AVR32_LCDC_IRR_LNIR                                          0
#define AVR32_LCDC_IRR_LNIR_MASK                            0x00000001
#define AVR32_LCDC_IRR_LNIR_OFFSET                                   0
#define AVR32_LCDC_IRR_LNIR_SIZE                                     1
#define AVR32_LCDC_IRR_LSTLNIR                                       1
#define AVR32_LCDC_IRR_LSTLNIR_MASK                         0x00000002
#define AVR32_LCDC_IRR_LSTLNIR_OFFSET                                1
#define AVR32_LCDC_IRR_LSTLNIR_SIZE                                  1
#define AVR32_LCDC_IRR_MERIR                                         6
#define AVR32_LCDC_IRR_MERIR_MASK                           0x00000040
#define AVR32_LCDC_IRR_MERIR_OFFSET                                  6
#define AVR32_LCDC_IRR_MERIR_SIZE                                    1
#define AVR32_LCDC_IRR_OWRIR                                         5
#define AVR32_LCDC_IRR_OWRIR_MASK                           0x00000020
#define AVR32_LCDC_IRR_OWRIR_OFFSET                                  5
#define AVR32_LCDC_IRR_OWRIR_SIZE                                    1
#define AVR32_LCDC_IRR_UFLWIR                                        4
#define AVR32_LCDC_IRR_UFLWIR_MASK                          0x00000010
#define AVR32_LCDC_IRR_UFLWIR_OFFSET                                 4
#define AVR32_LCDC_IRR_UFLWIR_SIZE                                   1
#define AVR32_LCDC_ISR                                      0x00000854
#define AVR32_LCDC_ISR_EOFIS                                         2
#define AVR32_LCDC_ISR_EOFIS_MASK                           0x00000004
#define AVR32_LCDC_ISR_EOFIS_OFFSET                                  2
#define AVR32_LCDC_ISR_EOFIS_SIZE                                    1
#define AVR32_LCDC_ISR_LNIS                                          0
#define AVR32_LCDC_ISR_LNIS_MASK                            0x00000001
#define AVR32_LCDC_ISR_LNIS_OFFSET                                   0
#define AVR32_LCDC_ISR_LNIS_SIZE                                     1
#define AVR32_LCDC_ISR_LSTLNIS                                       1
#define AVR32_LCDC_ISR_LSTLNIS_MASK                         0x00000002
#define AVR32_LCDC_ISR_LSTLNIS_OFFSET                                1
#define AVR32_LCDC_ISR_LSTLNIS_SIZE                                  1
#define AVR32_LCDC_ISR_MERIS                                         6
#define AVR32_LCDC_ISR_MERIS_MASK                           0x00000040
#define AVR32_LCDC_ISR_MERIS_OFFSET                                  6
#define AVR32_LCDC_ISR_MERIS_SIZE                                    1
#define AVR32_LCDC_ISR_OWRIS                                         5
#define AVR32_LCDC_ISR_OWRIS_MASK                           0x00000020
#define AVR32_LCDC_ISR_OWRIS_OFFSET                                  5
#define AVR32_LCDC_ISR_OWRIS_SIZE                                    1
#define AVR32_LCDC_ISR_UFLWIS                                        4
#define AVR32_LCDC_ISR_UFLWIS_MASK                          0x00000010
#define AVR32_LCDC_ISR_UFLWIS_OFFSET                                 4
#define AVR32_LCDC_ISR_UFLWIS_SIZE                                   1
#define AVR32_LCDC_ITR                                      0x00000860
#define AVR32_LCDC_ITR_EOFIT                                         2
#define AVR32_LCDC_ITR_EOFIT_MASK                           0x00000004
#define AVR32_LCDC_ITR_EOFIT_OFFSET                                  2
#define AVR32_LCDC_ITR_EOFIT_SIZE                                    1
#define AVR32_LCDC_ITR_LNIT                                          0
#define AVR32_LCDC_ITR_LNIT_MASK                            0x00000001
#define AVR32_LCDC_ITR_LNIT_OFFSET                                   0
#define AVR32_LCDC_ITR_LNIT_SIZE                                     1
#define AVR32_LCDC_ITR_LSTLNIT                                       1
#define AVR32_LCDC_ITR_LSTLNIT_MASK                         0x00000002
#define AVR32_LCDC_ITR_LSTLNIT_OFFSET                                1
#define AVR32_LCDC_ITR_LSTLNIT_SIZE                                  1
#define AVR32_LCDC_ITR_MERIT                                         6
#define AVR32_LCDC_ITR_MERIT_MASK                           0x00000040
#define AVR32_LCDC_ITR_MERIT_OFFSET                                  6
#define AVR32_LCDC_ITR_MERIT_SIZE                                    1
#define AVR32_LCDC_ITR_OWRIT                                         5
#define AVR32_LCDC_ITR_OWRIT_MASK                           0x00000020
#define AVR32_LCDC_ITR_OWRIT_OFFSET                                  5
#define AVR32_LCDC_ITR_OWRIT_SIZE                                    1
#define AVR32_LCDC_ITR_UFLWIT                                        4
#define AVR32_LCDC_ITR_UFLWIT_MASK                          0x00000010
#define AVR32_LCDC_ITR_UFLWIT_OFFSET                                 4
#define AVR32_LCDC_ITR_UFLWIT_SIZE                                   1
#define AVR32_LCDC_I_MASK                                   0x00008000
#define AVR32_LCDC_I_OFFSET                                         15
#define AVR32_LCDC_I_SIZE                                            1
#define AVR32_LCDC_LCDCON1                                  0x00000800
#define AVR32_LCDC_LCDCON1_BYPASS                                    0
#define AVR32_LCDC_LCDCON1_BYPASS_MASK                      0x00000001
#define AVR32_LCDC_LCDCON1_BYPASS_OFFSET                             0
#define AVR32_LCDC_LCDCON1_BYPASS_SIZE                               1
#define AVR32_LCDC_LCDCON1_CLKVAL                                   12
#define AVR32_LCDC_LCDCON1_CLKVAL_MASK                      0x001ff000
#define AVR32_LCDC_LCDCON1_CLKVAL_OFFSET                            12
#define AVR32_LCDC_LCDCON1_CLKVAL_SIZE                               9
#define AVR32_LCDC_LCDCON1_LINECNT                                  21
#define AVR32_LCDC_LCDCON1_LINECNT_MASK                     0xffe00000
#define AVR32_LCDC_LCDCON1_LINECNT_OFFSET                           21
#define AVR32_LCDC_LCDCON1_LINECNT_SIZE                             11
#define AVR32_LCDC_LCDCON2                                  0x00000804
#define AVR32_LCDC_LCDCON2_CLKMOD                                   15
#define AVR32_LCDC_LCDCON2_CLKMOD_MASK                      0x00008000
#define AVR32_LCDC_LCDCON2_CLKMOD_OFFSET                            15
#define AVR32_LCDC_LCDCON2_CLKMOD_SIZE                               1
#define AVR32_LCDC_LCDCON2_DISTYPE                                   0
#define AVR32_LCDC_LCDCON2_DISTYPE_MASK                     0x00000003
#define AVR32_LCDC_LCDCON2_DISTYPE_OFFSET                            0
#define AVR32_LCDC_LCDCON2_DISTYPE_SIZE                              2
#define AVR32_LCDC_LCDCON2_DISTYPE_STN_COLOR                0x00000001
#define AVR32_LCDC_LCDCON2_DISTYPE_STN_MONO                 0x00000000
#define AVR32_LCDC_LCDCON2_DISTYPE_TFT                      0x00000002
#define AVR32_LCDC_LCDCON2_IFWIDTH                                   3
#define AVR32_LCDC_LCDCON2_IFWIDTH_EIGHT_BITS               0x00000001
#define AVR32_LCDC_LCDCON2_IFWIDTH_FOUR_BITS                0x00000000
#define AVR32_LCDC_LCDCON2_IFWIDTH_MASK                     0x00000018
#define AVR32_LCDC_LCDCON2_IFWIDTH_OFFSET                            3
#define AVR32_LCDC_LCDCON2_IFWIDTH_SIXTEEN_BITS             0x00000002
#define AVR32_LCDC_LCDCON2_IFWIDTH_SIZE                              2
#define AVR32_LCDC_LCDCON2_INVCLK                                   11
#define AVR32_LCDC_LCDCON2_INVCLK_MASK                      0x00000800
#define AVR32_LCDC_LCDCON2_INVCLK_OFFSET                            11
#define AVR32_LCDC_LCDCON2_INVCLK_SIZE                               1
#define AVR32_LCDC_LCDCON2_INVDVAL                                  12
#define AVR32_LCDC_LCDCON2_INVDVAL_MASK                     0x00001000
#define AVR32_LCDC_LCDCON2_INVDVAL_OFFSET                           12
#define AVR32_LCDC_LCDCON2_INVDVAL_SIZE                              1
#define AVR32_LCDC_LCDCON2_INVFRAME                                  9
#define AVR32_LCDC_LCDCON2_INVFRAME_MASK                    0x00000200
#define AVR32_LCDC_LCDCON2_INVFRAME_OFFSET                           9
#define AVR32_LCDC_LCDCON2_INVFRAME_SIZE                             1
#define AVR32_LCDC_LCDCON2_INVLINE                                  10
#define AVR32_LCDC_LCDCON2_INVLINE_MASK                     0x00000400
#define AVR32_LCDC_LCDCON2_INVLINE_OFFSET                           10
#define AVR32_LCDC_LCDCON2_INVLINE_SIZE                              1
#define AVR32_LCDC_LCDCON2_INVVD                                     8
#define AVR32_LCDC_LCDCON2_INVVD_MASK                       0x00000100
#define AVR32_LCDC_LCDCON2_INVVD_OFFSET                              8
#define AVR32_LCDC_LCDCON2_INVVD_SIZE                                1
#define AVR32_LCDC_LCDCON2_MEMOR                                    30
#define AVR32_LCDC_LCDCON2_MEMOR_BIG_ENDIAN                 0x00000000
#define AVR32_LCDC_LCDCON2_MEMOR_LITTLE_ENDIAN              0x00000002
#define AVR32_LCDC_LCDCON2_MEMOR_MASK                       0xc0000000
#define AVR32_LCDC_LCDCON2_MEMOR_OFFSET                             30
#define AVR32_LCDC_LCDCON2_MEMOR_SIZE                                2
#define AVR32_LCDC_LCDCON2_MEMOR_WINCE                      0x00000003
#define AVR32_LCDC_LCDCON2_PIXELSIZE                                 5
#define AVR32_LCDC_LCDCON2_PIXELSIZE_16_BPP                 0x00000004
#define AVR32_LCDC_LCDCON2_PIXELSIZE_1_BPP                  0x00000000
#define AVR32_LCDC_LCDCON2_PIXELSIZE_24_BPP                 0x00000005
#define AVR32_LCDC_LCDCON2_PIXELSIZE_2_BPP                  0x00000001
#define AVR32_LCDC_LCDCON2_PIXELSIZE_4_BPP                  0x00000002
#define AVR32_LCDC_LCDCON2_PIXELSIZE_8_BPP                  0x00000003
#define AVR32_LCDC_LCDCON2_PIXELSIZE_MASK                   0x000000e0
#define AVR32_LCDC_LCDCON2_PIXELSIZE_OFFSET                          5
#define AVR32_LCDC_LCDCON2_PIXELSIZE_SIZE                            3
#define AVR32_LCDC_LCDCON2_SCANMOD                                   2
#define AVR32_LCDC_LCDCON2_SCANMOD_MASK                     0x00000004
#define AVR32_LCDC_LCDCON2_SCANMOD_OFFSET                            2
#define AVR32_LCDC_LCDCON2_SCANMOD_SIZE                              1
#define AVR32_LCDC_LCDFIFO                                  0x00000814
#define AVR32_LCDC_LCDFIFO_FIFOTH                                    0
#define AVR32_LCDC_LCDFIFO_FIFOTH_MASK                      0x0000ffff
#define AVR32_LCDC_LCDFIFO_FIFOTH_OFFSET                             0
#define AVR32_LCDC_LCDFIFO_FIFOTH_SIZE                              16
#define AVR32_LCDC_LCDFRMCFG                                0x00000810
#define AVR32_LCDC_LCDFRMCFG_HOZVAL                                 21
#define AVR32_LCDC_LCDFRMCFG_HOZVAL_MASK                    0xffe00000
#define AVR32_LCDC_LCDFRMCFG_HOZVAL_OFFSET                          21
#define AVR32_LCDC_LCDFRMCFG_HOZVAL_SIZE                            11
#define AVR32_LCDC_LCDFRMCFG_LINEVAL                                 0
#define AVR32_LCDC_LCDFRMCFG_LINEVAL_MASK                   0x000007ff
#define AVR32_LCDC_LCDFRMCFG_LINEVAL_OFFSET                          0
#define AVR32_LCDC_LCDFRMCFG_LINEVAL_SIZE                           11
#define AVR32_LCDC_LCDMVAL                                  0x00000818
#define AVR32_LCDC_LCDMVAL_MMODE                                    31
#define AVR32_LCDC_LCDMVAL_MMODE_MASK                       0x80000000
#define AVR32_LCDC_LCDMVAL_MMODE_OFFSET                             31
#define AVR32_LCDC_LCDMVAL_MMODE_SIZE                                1
#define AVR32_LCDC_LCDMVAL_MVAL                                      0
#define AVR32_LCDC_LCDMVAL_MVAL_MASK                        0x000000ff
#define AVR32_LCDC_LCDMVAL_MVAL_OFFSET                               0
#define AVR32_LCDC_LCDMVAL_MVAL_SIZE                                 8
#define AVR32_LCDC_LCDTIM1                                  0x00000808
#define AVR32_LCDC_LCDTIM1_VBP                                       8
#define AVR32_LCDC_LCDTIM1_VBP_MASK                         0x0000ff00
#define AVR32_LCDC_LCDTIM1_VBP_OFFSET                                8
#define AVR32_LCDC_LCDTIM1_VBP_SIZE                                  8
#define AVR32_LCDC_LCDTIM1_VFP                                       0
#define AVR32_LCDC_LCDTIM1_VFP_MASK                         0x000000ff
#define AVR32_LCDC_LCDTIM1_VFP_OFFSET                                0
#define AVR32_LCDC_LCDTIM1_VFP_SIZE                                  8
#define AVR32_LCDC_LCDTIM1_VHDLY                                    24
#define AVR32_LCDC_LCDTIM1_VHDLY_MASK                       0x0f000000
#define AVR32_LCDC_LCDTIM1_VHDLY_OFFSET                             24
#define AVR32_LCDC_LCDTIM1_VHDLY_SIZE                                4
#define AVR32_LCDC_LCDTIM1_VPW                                      16
#define AVR32_LCDC_LCDTIM1_VPW_MASK                         0x003f0000
#define AVR32_LCDC_LCDTIM1_VPW_OFFSET                               16
#define AVR32_LCDC_LCDTIM1_VPW_SIZE                                  6
#define AVR32_LCDC_LCDTIM2                                  0x0000080c
#define AVR32_LCDC_LCDTIM2_HBP                                       0
#define AVR32_LCDC_LCDTIM2_HBP_MASK                         0x000000ff
#define AVR32_LCDC_LCDTIM2_HBP_OFFSET                                0
#define AVR32_LCDC_LCDTIM2_HBP_SIZE                                  8
#define AVR32_LCDC_LCDTIM2_HFP                                      21
#define AVR32_LCDC_LCDTIM2_HFP_MASK                         0xffe00000
#define AVR32_LCDC_LCDTIM2_HFP_OFFSET                               21
#define AVR32_LCDC_LCDTIM2_HFP_SIZE                                 11
#define AVR32_LCDC_LCDTIM2_HPW                                       8
#define AVR32_LCDC_LCDTIM2_HPW_MASK                         0x00003f00
#define AVR32_LCDC_LCDTIM2_HPW_OFFSET                                8
#define AVR32_LCDC_LCDTIM2_HPW_SIZE                                  6
#define AVR32_LCDC_LINECNT                                          21
#define AVR32_LCDC_LINECNT_MASK                             0xffe00000
#define AVR32_LCDC_LINECNT_OFFSET                                   21
#define AVR32_LCDC_LINECNT_SIZE                                     11
#define AVR32_LCDC_LINEVAL                                           0
#define AVR32_LCDC_LINEVAL_MASK                             0x000007ff
#define AVR32_LCDC_LINEVAL_OFFSET                                    0
#define AVR32_LCDC_LINEVAL_SIZE                                     11
#define AVR32_LCDC_LITTLE_ENDIAN                            0x00000002
#define AVR32_LCDC_LNIC                                              0
#define AVR32_LCDC_LNIC_MASK                                0x00000001
#define AVR32_LCDC_LNIC_OFFSET                                       0
#define AVR32_LCDC_LNIC_SIZE                                         1
#define AVR32_LCDC_LNID                                              0
#define AVR32_LCDC_LNID_MASK                                0x00000001
#define AVR32_LCDC_LNID_OFFSET                                       0
#define AVR32_LCDC_LNID_SIZE                                         1
#define AVR32_LCDC_LNIE                                              0
#define AVR32_LCDC_LNIE_MASK                                0x00000001
#define AVR32_LCDC_LNIE_OFFSET                                       0
#define AVR32_LCDC_LNIE_SIZE                                         1
#define AVR32_LCDC_LNIM                                              0
#define AVR32_LCDC_LNIM_MASK                                0x00000001
#define AVR32_LCDC_LNIM_OFFSET                                       0
#define AVR32_LCDC_LNIM_SIZE                                         1
#define AVR32_LCDC_LNIR                                              0
#define AVR32_LCDC_LNIR_MASK                                0x00000001
#define AVR32_LCDC_LNIR_OFFSET                                       0
#define AVR32_LCDC_LNIR_SIZE                                         1
#define AVR32_LCDC_LNIS                                              0
#define AVR32_LCDC_LNIS_MASK                                0x00000001
#define AVR32_LCDC_LNIS_OFFSET                                       0
#define AVR32_LCDC_LNIS_SIZE                                         1
#define AVR32_LCDC_LNIT                                              0
#define AVR32_LCDC_LNIT_MASK                                0x00000001
#define AVR32_LCDC_LNIT_OFFSET                                       0
#define AVR32_LCDC_LNIT_SIZE                                         1
#define AVR32_LCDC_LSTLNIC                                           1
#define AVR32_LCDC_LSTLNIC_MASK                             0x00000002
#define AVR32_LCDC_LSTLNIC_OFFSET                                    1
#define AVR32_LCDC_LSTLNIC_SIZE                                      1
#define AVR32_LCDC_LSTLNID                                           1
#define AVR32_LCDC_LSTLNID_MASK                             0x00000002
#define AVR32_LCDC_LSTLNID_OFFSET                                    1
#define AVR32_LCDC_LSTLNID_SIZE                                      1
#define AVR32_LCDC_LSTLNIE                                           1
#define AVR32_LCDC_LSTLNIE_MASK                             0x00000002
#define AVR32_LCDC_LSTLNIE_OFFSET                                    1
#define AVR32_LCDC_LSTLNIE_SIZE                                      1
#define AVR32_LCDC_LSTLNIM                                           1
#define AVR32_LCDC_LSTLNIM_MASK                             0x00000002
#define AVR32_LCDC_LSTLNIM_OFFSET                                    1
#define AVR32_LCDC_LSTLNIM_SIZE                                      1
#define AVR32_LCDC_LSTLNIR                                           1
#define AVR32_LCDC_LSTLNIR_MASK                             0x00000002
#define AVR32_LCDC_LSTLNIR_OFFSET                                    1
#define AVR32_LCDC_LSTLNIR_SIZE                                      1
#define AVR32_LCDC_LSTLNIS                                           1
#define AVR32_LCDC_LSTLNIS_MASK                             0x00000002
#define AVR32_LCDC_LSTLNIS_OFFSET                                    1
#define AVR32_LCDC_LSTLNIS_SIZE                                      1
#define AVR32_LCDC_LSTLNIT                                           1
#define AVR32_LCDC_LSTLNIT_MASK                             0x00000002
#define AVR32_LCDC_LSTLNIT_OFFSET                                    1
#define AVR32_LCDC_LSTLNIT_SIZE                                      1
#define AVR32_LCDC_LUT_ENTRY                                0x00000c00
#define AVR32_LCDC_LUT_ENTRY_B                                      10
#define AVR32_LCDC_LUT_ENTRY_B_MASK                         0x00007c00
#define AVR32_LCDC_LUT_ENTRY_B_OFFSET                               10
#define AVR32_LCDC_LUT_ENTRY_B_SIZE                                  5
#define AVR32_LCDC_LUT_ENTRY_G                                       5
#define AVR32_LCDC_LUT_ENTRY_G_MASK                         0x000003e0
#define AVR32_LCDC_LUT_ENTRY_G_OFFSET                                5
#define AVR32_LCDC_LUT_ENTRY_G_SIZE                                  5
#define AVR32_LCDC_LUT_ENTRY_I                                      15
#define AVR32_LCDC_LUT_ENTRY_I_MASK                         0x00008000
#define AVR32_LCDC_LUT_ENTRY_I_OFFSET                               15
#define AVR32_LCDC_LUT_ENTRY_I_SIZE                                  1
#define AVR32_LCDC_LUT_ENTRY_R                                       0
#define AVR32_LCDC_LUT_ENTRY_R_MASK                         0x0000001f
#define AVR32_LCDC_LUT_ENTRY_R_OFFSET                                0
#define AVR32_LCDC_LUT_ENTRY_R_SIZE                                  5
#define AVR32_LCDC_MEMOR                                            30
#define AVR32_LCDC_MEMOR_BIG_ENDIAN                         0x00000000
#define AVR32_LCDC_MEMOR_LITTLE_ENDIAN                      0x00000002
#define AVR32_LCDC_MEMOR_MASK                               0xc0000000
#define AVR32_LCDC_MEMOR_OFFSET                                     30
#define AVR32_LCDC_MEMOR_SIZE                                        2
#define AVR32_LCDC_MEMOR_WINCE                              0x00000003
#define AVR32_LCDC_MERIC                                             6
#define AVR32_LCDC_MERIC_MASK                               0x00000040
#define AVR32_LCDC_MERIC_OFFSET                                      6
#define AVR32_LCDC_MERIC_SIZE                                        1
#define AVR32_LCDC_MERID                                             6
#define AVR32_LCDC_MERID_MASK                               0x00000040
#define AVR32_LCDC_MERID_OFFSET                                      6
#define AVR32_LCDC_MERID_SIZE                                        1
#define AVR32_LCDC_MERIE                                             6
#define AVR32_LCDC_MERIE_MASK                               0x00000040
#define AVR32_LCDC_MERIE_OFFSET                                      6
#define AVR32_LCDC_MERIE_SIZE                                        1
#define AVR32_LCDC_MERIM                                             6
#define AVR32_LCDC_MERIM_MASK                               0x00000040
#define AVR32_LCDC_MERIM_OFFSET                                      6
#define AVR32_LCDC_MERIM_SIZE                                        1
#define AVR32_LCDC_MERIR                                             6
#define AVR32_LCDC_MERIR_MASK                               0x00000040
#define AVR32_LCDC_MERIR_OFFSET                                      6
#define AVR32_LCDC_MERIR_SIZE                                        1
#define AVR32_LCDC_MERIS                                             6
#define AVR32_LCDC_MERIS_MASK                               0x00000040
#define AVR32_LCDC_MERIS_OFFSET                                      6
#define AVR32_LCDC_MERIS_SIZE                                        1
#define AVR32_LCDC_MERIT                                             6
#define AVR32_LCDC_MERIT_MASK                               0x00000040
#define AVR32_LCDC_MERIT_OFFSET                                      6
#define AVR32_LCDC_MERIT_SIZE                                        1
#define AVR32_LCDC_MMODE                                            31
#define AVR32_LCDC_MMODE_MASK                               0x80000000
#define AVR32_LCDC_MMODE_OFFSET                                     31
#define AVR32_LCDC_MMODE_SIZE                                        1
#define AVR32_LCDC_MVAL                                              0
#define AVR32_LCDC_MVAL_MASK                                0x000000ff
#define AVR32_LCDC_MVAL_OFFSET                                       0
#define AVR32_LCDC_MVAL_SIZE                                         8
#define AVR32_LCDC_OWRIC                                             5
#define AVR32_LCDC_OWRIC_MASK                               0x00000020
#define AVR32_LCDC_OWRIC_OFFSET                                      5
#define AVR32_LCDC_OWRIC_SIZE                                        1
#define AVR32_LCDC_OWRID                                             5
#define AVR32_LCDC_OWRID_MASK                               0x00000020
#define AVR32_LCDC_OWRID_OFFSET                                      5
#define AVR32_LCDC_OWRID_SIZE                                        1
#define AVR32_LCDC_OWRIE                                             5
#define AVR32_LCDC_OWRIE_MASK                               0x00000020
#define AVR32_LCDC_OWRIE_OFFSET                                      5
#define AVR32_LCDC_OWRIE_SIZE                                        1
#define AVR32_LCDC_OWRIM                                             5
#define AVR32_LCDC_OWRIM_MASK                               0x00000020
#define AVR32_LCDC_OWRIM_OFFSET                                      5
#define AVR32_LCDC_OWRIM_SIZE                                        1
#define AVR32_LCDC_OWRIR                                             5
#define AVR32_LCDC_OWRIR_MASK                               0x00000020
#define AVR32_LCDC_OWRIR_OFFSET                                      5
#define AVR32_LCDC_OWRIR_SIZE                                        1
#define AVR32_LCDC_OWRIS                                             5
#define AVR32_LCDC_OWRIS_MASK                               0x00000020
#define AVR32_LCDC_OWRIS_OFFSET                                      5
#define AVR32_LCDC_OWRIS_SIZE                                        1
#define AVR32_LCDC_OWRIT                                             5
#define AVR32_LCDC_OWRIT_MASK                               0x00000020
#define AVR32_LCDC_OWRIT_OFFSET                                      5
#define AVR32_LCDC_OWRIT_SIZE                                        1
#define AVR32_LCDC_PIXELOFF                                         24
#define AVR32_LCDC_PIXELOFF_MASK                            0x1f000000
#define AVR32_LCDC_PIXELOFF_OFFSET                                  24
#define AVR32_LCDC_PIXELOFF_SIZE                                     5
#define AVR32_LCDC_PIXELSIZE                                         5
#define AVR32_LCDC_PIXELSIZE_16_BPP                         0x00000004
#define AVR32_LCDC_PIXELSIZE_1_BPP                          0x00000000
#define AVR32_LCDC_PIXELSIZE_24_BPP                         0x00000005
#define AVR32_LCDC_PIXELSIZE_2_BPP                          0x00000001
#define AVR32_LCDC_PIXELSIZE_4_BPP                          0x00000002
#define AVR32_LCDC_PIXELSIZE_8_BPP                          0x00000003
#define AVR32_LCDC_PIXELSIZE_MASK                           0x000000e0
#define AVR32_LCDC_PIXELSIZE_OFFSET                                  5
#define AVR32_LCDC_PIXELSIZE_SIZE                                    3
#define AVR32_LCDC_POL                                               2
#define AVR32_LCDC_POL_MASK                                 0x00000004
#define AVR32_LCDC_POL_OFFSET                                        2
#define AVR32_LCDC_POL_SIZE                                          1
#define AVR32_LCDC_PS                                                0
#define AVR32_LCDC_PS_MASK                                  0x00000003
#define AVR32_LCDC_PS_OFFSET                                         0
#define AVR32_LCDC_PS_SCALE_1                               0x00000000
#define AVR32_LCDC_PS_SCALE_2                               0x00000001
#define AVR32_LCDC_PS_SCALE_4                               0x00000002
#define AVR32_LCDC_PS_SCALE_8                               0x00000003
#define AVR32_LCDC_PS_SIZE                                           2
#define AVR32_LCDC_PWR                                               0
#define AVR32_LCDC_PWRCON                                   0x0000083c
#define AVR32_LCDC_PWRCON_BUSY                                      31
#define AVR32_LCDC_PWRCON_BUSY_MASK                         0x80000000
#define AVR32_LCDC_PWRCON_BUSY_OFFSET                               31
#define AVR32_LCDC_PWRCON_BUSY_SIZE                                  1
#define AVR32_LCDC_PWRCON_GUARD_TIME                                 1
#define AVR32_LCDC_PWRCON_GUARD_TIME_MASK                   0x000000fe
#define AVR32_LCDC_PWRCON_GUARD_TIME_OFFSET                          1
#define AVR32_LCDC_PWRCON_GUARD_TIME_SIZE                            7
#define AVR32_LCDC_PWRCON_PWR                                        0
#define AVR32_LCDC_PWRCON_PWR_MASK                          0x00000001
#define AVR32_LCDC_PWRCON_PWR_OFFSET                                 0
#define AVR32_LCDC_PWRCON_PWR_SIZE                                   1
#define AVR32_LCDC_PWR_MASK                                 0x00000001
#define AVR32_LCDC_PWR_OFFSET                                        0
#define AVR32_LCDC_PWR_SIZE                                          1
#define AVR32_LCDC_R                                                 0
#define AVR32_LCDC_R_MASK                                   0x0000001f
#define AVR32_LCDC_R_OFFSET                                          0
#define AVR32_LCDC_R_SIZE                                            5
#define AVR32_LCDC_SCALE_1                                  0x00000000
#define AVR32_LCDC_SCALE_2                                  0x00000001
#define AVR32_LCDC_SCALE_4                                  0x00000002
#define AVR32_LCDC_SCALE_8                                  0x00000003
#define AVR32_LCDC_SCANMOD                                           2
#define AVR32_LCDC_SCANMOD_MASK                             0x00000004
#define AVR32_LCDC_SCANMOD_OFFSET                                    2
#define AVR32_LCDC_SCANMOD_SIZE                                      1
#define AVR32_LCDC_SIXTEEN_BITS                             0x00000002
#define AVR32_LCDC_STN_COLOR                                0x00000001
#define AVR32_LCDC_STN_MONO                                 0x00000000
#define AVR32_LCDC_TFT                                      0x00000002
#define AVR32_LCDC_UFLWIC                                            4
#define AVR32_LCDC_UFLWIC_MASK                              0x00000010
#define AVR32_LCDC_UFLWIC_OFFSET                                     4
#define AVR32_LCDC_UFLWIC_SIZE                                       1
#define AVR32_LCDC_UFLWID                                            4
#define AVR32_LCDC_UFLWID_MASK                              0x00000010
#define AVR32_LCDC_UFLWID_OFFSET                                     4
#define AVR32_LCDC_UFLWID_SIZE                                       1
#define AVR32_LCDC_UFLWIE                                            4
#define AVR32_LCDC_UFLWIE_MASK                              0x00000010
#define AVR32_LCDC_UFLWIE_OFFSET                                     4
#define AVR32_LCDC_UFLWIE_SIZE                                       1
#define AVR32_LCDC_UFLWIM                                            4
#define AVR32_LCDC_UFLWIM_MASK                              0x00000010
#define AVR32_LCDC_UFLWIM_OFFSET                                     4
#define AVR32_LCDC_UFLWIM_SIZE                                       1
#define AVR32_LCDC_UFLWIR                                            4
#define AVR32_LCDC_UFLWIR_MASK                              0x00000010
#define AVR32_LCDC_UFLWIR_OFFSET                                     4
#define AVR32_LCDC_UFLWIR_SIZE                                       1
#define AVR32_LCDC_UFLWIS                                            4
#define AVR32_LCDC_UFLWIS_MASK                              0x00000010
#define AVR32_LCDC_UFLWIS_OFFSET                                     4
#define AVR32_LCDC_UFLWIS_SIZE                                       1
#define AVR32_LCDC_UFLWIT                                            4
#define AVR32_LCDC_UFLWIT_MASK                              0x00000010
#define AVR32_LCDC_UFLWIT_OFFSET                                     4
#define AVR32_LCDC_UFLWIT_SIZE                                       1
#define AVR32_LCDC_VBP                                               8
#define AVR32_LCDC_VBP_MASK                                 0x0000ff00
#define AVR32_LCDC_VBP_OFFSET                                        8
#define AVR32_LCDC_VBP_SIZE                                          8
#define AVR32_LCDC_VFP                                               0
#define AVR32_LCDC_VFP_MASK                                 0x000000ff
#define AVR32_LCDC_VFP_OFFSET                                        0
#define AVR32_LCDC_VFP_SIZE                                          8
#define AVR32_LCDC_VHDLY                                            24
#define AVR32_LCDC_VHDLY_MASK                               0x0f000000
#define AVR32_LCDC_VHDLY_OFFSET                                     24
#define AVR32_LCDC_VHDLY_SIZE                                        4
#define AVR32_LCDC_VPW                                              16
#define AVR32_LCDC_VPW_MASK                                 0x003f0000
#define AVR32_LCDC_VPW_OFFSET                                       16
#define AVR32_LCDC_VPW_SIZE                                          6
#define AVR32_LCDC_WINCE                                    0x00000003




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_lcdc_dmafrmpt1_t {
    unsigned int                 : 9;
    unsigned int frmpt_u         :23;
} avr32_lcdc_dmafrmpt1_t;



typedef struct avr32_lcdc_dmafrmpt2_t {
    unsigned int                 :10;
    unsigned int frmpt_l         :22;
} avr32_lcdc_dmafrmpt2_t;



typedef struct avr32_lcdc_dmafrmcfg_t {
    unsigned int                 : 4;
    unsigned int brstlen         : 4;
    unsigned int                 : 1;
    unsigned int frmsize         :23;
} avr32_lcdc_dmafrmcfg_t;



typedef struct avr32_lcdc_dmacon_t {
    unsigned int                 :27;
    unsigned int dma2den         : 1;
    unsigned int dmaupdt         : 1;
    unsigned int dmabusy         : 1;
    unsigned int dmarst          : 1;
    unsigned int dmaen           : 1;
} avr32_lcdc_dmacon_t;



typedef struct avr32_lcdc_dma2dcfg_t {
    unsigned int                 : 3;
    unsigned int pixeloff        : 5;
    unsigned int                 : 8;
    unsigned int addrinc         :16;
} avr32_lcdc_dma2dcfg_t;



typedef struct avr32_lcdc_lcdcon1_t {
    unsigned int linecnt         :11;
    unsigned int clkval          : 9;
    unsigned int                 :11;
    unsigned int bypass          : 1;
} avr32_lcdc_lcdcon1_t;



typedef struct avr32_lcdc_lcdcon2_t {
    unsigned int memor           : 2;
    unsigned int                 :14;
    unsigned int clkmod          : 1;
    unsigned int                 : 2;
    unsigned int invdval         : 1;
    unsigned int invclk          : 1;
    unsigned int invline         : 1;
    unsigned int invframe        : 1;
    unsigned int invvd           : 1;
    unsigned int pixelsize       : 3;
    unsigned int ifwidth         : 2;
    unsigned int scanmod         : 1;
    unsigned int distype         : 2;
} avr32_lcdc_lcdcon2_t;



typedef struct avr32_lcdc_lcdtim1_t {
    unsigned int                 : 4;
    unsigned int vhdly           : 4;
    unsigned int                 : 2;
    unsigned int vpw             : 6;
    unsigned int vbp             : 8;
    unsigned int vfp             : 8;
} avr32_lcdc_lcdtim1_t;



typedef struct avr32_lcdc_lcdtim2_t {
    unsigned int hfp             :11;
    unsigned int                 : 7;
    unsigned int hpw             : 6;
    unsigned int hbp             : 8;
} avr32_lcdc_lcdtim2_t;



typedef struct avr32_lcdc_lcdfrmcfg_t {
    unsigned int hozval          :11;
    unsigned int                 :10;
    unsigned int lineval         :11;
} avr32_lcdc_lcdfrmcfg_t;



typedef struct avr32_lcdc_lcdfifo_t {
    unsigned int                 :16;
    unsigned int fifoth          :16;
} avr32_lcdc_lcdfifo_t;



typedef struct avr32_lcdc_lcdmval_t {
    unsigned int mmode           : 1;
    unsigned int                 :23;
    unsigned int mval            : 8;
} avr32_lcdc_lcdmval_t;



typedef struct avr32_lcdc_dp1_2_t {
    unsigned int                 :24;
    unsigned int dp1_2           : 8;
} avr32_lcdc_dp1_2_t;



typedef struct avr32_lcdc_dp4_7_t {
    unsigned int                 : 4;
    unsigned int dp4_7           :28;
} avr32_lcdc_dp4_7_t;



typedef struct avr32_lcdc_dp3_5_t {
    unsigned int                 :12;
    unsigned int dp3_5           :20;
} avr32_lcdc_dp3_5_t;



typedef struct avr32_lcdc_dp2_3_t {
    unsigned int                 :20;
    unsigned int dp2_3           :12;
} avr32_lcdc_dp2_3_t;



typedef struct avr32_lcdc_dp5_7_t {
    unsigned int                 : 4;
    unsigned int dp5_7           :28;
} avr32_lcdc_dp5_7_t;



typedef struct avr32_lcdc_dp3_4_t {
    unsigned int                 :16;
    unsigned int dp3_4           :16;
} avr32_lcdc_dp3_4_t;



typedef struct avr32_lcdc_dp4_5_t {
    unsigned int                 :12;
    unsigned int dp4_5           :20;
} avr32_lcdc_dp4_5_t;



typedef struct avr32_lcdc_dp6_7_t {
    unsigned int                 : 4;
    unsigned int dp6_7           :28;
} avr32_lcdc_dp6_7_t;



typedef struct avr32_lcdc_pwrcon_t {
    unsigned int busy            : 1;
    unsigned int                 :23;
    unsigned int guard_time      : 7;
    unsigned int pwr             : 1;
} avr32_lcdc_pwrcon_t;



typedef struct avr32_lcdc_contrast_ctr_t {
    unsigned int                 :28;
    unsigned int ena             : 1;
    unsigned int pol             : 1;
    unsigned int ps              : 2;
} avr32_lcdc_contrast_ctr_t;



typedef struct avr32_lcdc_contrast_val_t {
    unsigned int                 :24;
    unsigned int cval            : 8;
} avr32_lcdc_contrast_val_t;



typedef struct avr32_lcdc_ier_t {
    unsigned int                 :25;
    unsigned int merie           : 1;
    unsigned int owrie           : 1;
    unsigned int uflwie          : 1;
    unsigned int                 : 1;
    unsigned int eofie           : 1;
    unsigned int lstlnie         : 1;
    unsigned int lnie            : 1;
} avr32_lcdc_ier_t;



typedef struct avr32_lcdc_idr_t {
    unsigned int                 :25;
    unsigned int merid           : 1;
    unsigned int owrid           : 1;
    unsigned int uflwid          : 1;
    unsigned int                 : 1;
    unsigned int eofid           : 1;
    unsigned int lstlnid         : 1;
    unsigned int lnid            : 1;
} avr32_lcdc_idr_t;



typedef struct avr32_lcdc_imr_t {
    unsigned int                 :25;
    unsigned int merim           : 1;
    unsigned int owrim           : 1;
    unsigned int uflwim          : 1;
    unsigned int                 : 1;
    unsigned int eofim           : 1;
    unsigned int lstlnim         : 1;
    unsigned int lnim            : 1;
} avr32_lcdc_imr_t;



typedef struct avr32_lcdc_isr_t {
    unsigned int                 :25;
    unsigned int meris           : 1;
    unsigned int owris           : 1;
    unsigned int uflwis          : 1;
    unsigned int                 : 1;
    unsigned int eofis           : 1;
    unsigned int lstlnis         : 1;
    unsigned int lnis            : 1;
} avr32_lcdc_isr_t;



typedef struct avr32_lcdc_icr_t {
    unsigned int                 :25;
    unsigned int meric           : 1;
    unsigned int owric           : 1;
    unsigned int uflwic          : 1;
    unsigned int                 : 1;
    unsigned int eofic           : 1;
    unsigned int lstlnic         : 1;
    unsigned int lnic            : 1;
} avr32_lcdc_icr_t;



typedef struct avr32_lcdc_gpr_t {
    unsigned int                 :24;
    unsigned int gprb7           : 1;
    unsigned int gprb6           : 1;
    unsigned int gprb5           : 1;
    unsigned int gprb4           : 1;
    unsigned int gprb3           : 1;
    unsigned int gprb2           : 1;
    unsigned int gprb1           : 1;
    unsigned int gprb0           : 1;
} avr32_lcdc_gpr_t;



typedef struct avr32_lcdc_itr_t {
    unsigned int                 :25;
    unsigned int merit           : 1;
    unsigned int owrit           : 1;
    unsigned int uflwit          : 1;
    unsigned int                 : 1;
    unsigned int eofit           : 1;
    unsigned int lstlnit         : 1;
    unsigned int lnit            : 1;
} avr32_lcdc_itr_t;



typedef struct avr32_lcdc_irr_t {
    unsigned int                 :25;
    unsigned int merir           : 1;
    unsigned int owrir           : 1;
    unsigned int uflwir          : 1;
    unsigned int                 : 1;
    unsigned int eofir           : 1;
    unsigned int lstlnir         : 1;
    unsigned int lnir            : 1;
} avr32_lcdc_irr_t;



typedef struct avr32_lcdc_lut_t {
    unsigned int                 :16;
    unsigned int i               : 1;
    unsigned int b               : 5;
    unsigned int g               : 5;
    unsigned int r               : 5;
} avr32_lcdc_lut_t;



typedef struct avr32_lcdc_t {
          unsigned long                  dmabaddr1 ;//0x0000
          unsigned long                  dmabaddr2 ;//0x0004
  union {
    const unsigned long                  dmafrmpt1 ;//0x0008
    const avr32_lcdc_dmafrmpt1_t         DMAFRMPT1 ;
  };
  union {
    const unsigned long                  dmafrmpt2 ;//0x000c
    const avr32_lcdc_dmafrmpt2_t         DMAFRMPT2 ;
  };
    const unsigned long                  dmafrmadd1;//0x0010
    const unsigned long                  dmafrmadd2;//0x0014
  union {
          unsigned long                  dmafrmcfg ;//0x0018
          avr32_lcdc_dmafrmcfg_t         DMAFRMCFG ;
  };
  union {
          unsigned long                  dmacon    ;//0x001c
          avr32_lcdc_dmacon_t            DMACON    ;
  };
  union {
          unsigned long                  dma2dcfg  ;//0x0020
          avr32_lcdc_dma2dcfg_t          DMA2DCFG  ;
  };
          unsigned int                   :32       ;//0x0024
          unsigned int                   :32       ;//0x0028
          unsigned int                   :32       ;//0x002c
          unsigned int                   :32       ;//0x0030
          unsigned int                   :32       ;//0x0034
          unsigned int                   :32       ;//0x0038
          unsigned int                   :32       ;//0x003c
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
          unsigned int                   :32       ;//0x03fc
          unsigned int                   :32       ;//0x0400
          unsigned int                   :32       ;//0x0404
          unsigned int                   :32       ;//0x0408
          unsigned int                   :32       ;//0x040c
          unsigned int                   :32       ;//0x0410
          unsigned int                   :32       ;//0x0414
          unsigned int                   :32       ;//0x0418
          unsigned int                   :32       ;//0x041c
          unsigned int                   :32       ;//0x0420
          unsigned int                   :32       ;//0x0424
          unsigned int                   :32       ;//0x0428
          unsigned int                   :32       ;//0x042c
          unsigned int                   :32       ;//0x0430
          unsigned int                   :32       ;//0x0434
          unsigned int                   :32       ;//0x0438
          unsigned int                   :32       ;//0x043c
          unsigned int                   :32       ;//0x0440
          unsigned int                   :32       ;//0x0444
          unsigned int                   :32       ;//0x0448
          unsigned int                   :32       ;//0x044c
          unsigned int                   :32       ;//0x0450
          unsigned int                   :32       ;//0x0454
          unsigned int                   :32       ;//0x0458
          unsigned int                   :32       ;//0x045c
          unsigned int                   :32       ;//0x0460
          unsigned int                   :32       ;//0x0464
          unsigned int                   :32       ;//0x0468
          unsigned int                   :32       ;//0x046c
          unsigned int                   :32       ;//0x0470
          unsigned int                   :32       ;//0x0474
          unsigned int                   :32       ;//0x0478
          unsigned int                   :32       ;//0x047c
          unsigned int                   :32       ;//0x0480
          unsigned int                   :32       ;//0x0484
          unsigned int                   :32       ;//0x0488
          unsigned int                   :32       ;//0x048c
          unsigned int                   :32       ;//0x0490
          unsigned int                   :32       ;//0x0494
          unsigned int                   :32       ;//0x0498
          unsigned int                   :32       ;//0x049c
          unsigned int                   :32       ;//0x04a0
          unsigned int                   :32       ;//0x04a4
          unsigned int                   :32       ;//0x04a8
          unsigned int                   :32       ;//0x04ac
          unsigned int                   :32       ;//0x04b0
          unsigned int                   :32       ;//0x04b4
          unsigned int                   :32       ;//0x04b8
          unsigned int                   :32       ;//0x04bc
          unsigned int                   :32       ;//0x04c0
          unsigned int                   :32       ;//0x04c4
          unsigned int                   :32       ;//0x04c8
          unsigned int                   :32       ;//0x04cc
          unsigned int                   :32       ;//0x04d0
          unsigned int                   :32       ;//0x04d4
          unsigned int                   :32       ;//0x04d8
          unsigned int                   :32       ;//0x04dc
          unsigned int                   :32       ;//0x04e0
          unsigned int                   :32       ;//0x04e4
          unsigned int                   :32       ;//0x04e8
          unsigned int                   :32       ;//0x04ec
          unsigned int                   :32       ;//0x04f0
          unsigned int                   :32       ;//0x04f4
          unsigned int                   :32       ;//0x04f8
          unsigned int                   :32       ;//0x04fc
          unsigned int                   :32       ;//0x0500
          unsigned int                   :32       ;//0x0504
          unsigned int                   :32       ;//0x0508
          unsigned int                   :32       ;//0x050c
          unsigned int                   :32       ;//0x0510
          unsigned int                   :32       ;//0x0514
          unsigned int                   :32       ;//0x0518
          unsigned int                   :32       ;//0x051c
          unsigned int                   :32       ;//0x0520
          unsigned int                   :32       ;//0x0524
          unsigned int                   :32       ;//0x0528
          unsigned int                   :32       ;//0x052c
          unsigned int                   :32       ;//0x0530
          unsigned int                   :32       ;//0x0534
          unsigned int                   :32       ;//0x0538
          unsigned int                   :32       ;//0x053c
          unsigned int                   :32       ;//0x0540
          unsigned int                   :32       ;//0x0544
          unsigned int                   :32       ;//0x0548
          unsigned int                   :32       ;//0x054c
          unsigned int                   :32       ;//0x0550
          unsigned int                   :32       ;//0x0554
          unsigned int                   :32       ;//0x0558
          unsigned int                   :32       ;//0x055c
          unsigned int                   :32       ;//0x0560
          unsigned int                   :32       ;//0x0564
          unsigned int                   :32       ;//0x0568
          unsigned int                   :32       ;//0x056c
          unsigned int                   :32       ;//0x0570
          unsigned int                   :32       ;//0x0574
          unsigned int                   :32       ;//0x0578
          unsigned int                   :32       ;//0x057c
          unsigned int                   :32       ;//0x0580
          unsigned int                   :32       ;//0x0584
          unsigned int                   :32       ;//0x0588
          unsigned int                   :32       ;//0x058c
          unsigned int                   :32       ;//0x0590
          unsigned int                   :32       ;//0x0594
          unsigned int                   :32       ;//0x0598
          unsigned int                   :32       ;//0x059c
          unsigned int                   :32       ;//0x05a0
          unsigned int                   :32       ;//0x05a4
          unsigned int                   :32       ;//0x05a8
          unsigned int                   :32       ;//0x05ac
          unsigned int                   :32       ;//0x05b0
          unsigned int                   :32       ;//0x05b4
          unsigned int                   :32       ;//0x05b8
          unsigned int                   :32       ;//0x05bc
          unsigned int                   :32       ;//0x05c0
          unsigned int                   :32       ;//0x05c4
          unsigned int                   :32       ;//0x05c8
          unsigned int                   :32       ;//0x05cc
          unsigned int                   :32       ;//0x05d0
          unsigned int                   :32       ;//0x05d4
          unsigned int                   :32       ;//0x05d8
          unsigned int                   :32       ;//0x05dc
          unsigned int                   :32       ;//0x05e0
          unsigned int                   :32       ;//0x05e4
          unsigned int                   :32       ;//0x05e8
          unsigned int                   :32       ;//0x05ec
          unsigned int                   :32       ;//0x05f0
          unsigned int                   :32       ;//0x05f4
          unsigned int                   :32       ;//0x05f8
          unsigned int                   :32       ;//0x05fc
          unsigned int                   :32       ;//0x0600
          unsigned int                   :32       ;//0x0604
          unsigned int                   :32       ;//0x0608
          unsigned int                   :32       ;//0x060c
          unsigned int                   :32       ;//0x0610
          unsigned int                   :32       ;//0x0614
          unsigned int                   :32       ;//0x0618
          unsigned int                   :32       ;//0x061c
          unsigned int                   :32       ;//0x0620
          unsigned int                   :32       ;//0x0624
          unsigned int                   :32       ;//0x0628
          unsigned int                   :32       ;//0x062c
          unsigned int                   :32       ;//0x0630
          unsigned int                   :32       ;//0x0634
          unsigned int                   :32       ;//0x0638
          unsigned int                   :32       ;//0x063c
          unsigned int                   :32       ;//0x0640
          unsigned int                   :32       ;//0x0644
          unsigned int                   :32       ;//0x0648
          unsigned int                   :32       ;//0x064c
          unsigned int                   :32       ;//0x0650
          unsigned int                   :32       ;//0x0654
          unsigned int                   :32       ;//0x0658
          unsigned int                   :32       ;//0x065c
          unsigned int                   :32       ;//0x0660
          unsigned int                   :32       ;//0x0664
          unsigned int                   :32       ;//0x0668
          unsigned int                   :32       ;//0x066c
          unsigned int                   :32       ;//0x0670
          unsigned int                   :32       ;//0x0674
          unsigned int                   :32       ;//0x0678
          unsigned int                   :32       ;//0x067c
          unsigned int                   :32       ;//0x0680
          unsigned int                   :32       ;//0x0684
          unsigned int                   :32       ;//0x0688
          unsigned int                   :32       ;//0x068c
          unsigned int                   :32       ;//0x0690
          unsigned int                   :32       ;//0x0694
          unsigned int                   :32       ;//0x0698
          unsigned int                   :32       ;//0x069c
          unsigned int                   :32       ;//0x06a0
          unsigned int                   :32       ;//0x06a4
          unsigned int                   :32       ;//0x06a8
          unsigned int                   :32       ;//0x06ac
          unsigned int                   :32       ;//0x06b0
          unsigned int                   :32       ;//0x06b4
          unsigned int                   :32       ;//0x06b8
          unsigned int                   :32       ;//0x06bc
          unsigned int                   :32       ;//0x06c0
          unsigned int                   :32       ;//0x06c4
          unsigned int                   :32       ;//0x06c8
          unsigned int                   :32       ;//0x06cc
          unsigned int                   :32       ;//0x06d0
          unsigned int                   :32       ;//0x06d4
          unsigned int                   :32       ;//0x06d8
          unsigned int                   :32       ;//0x06dc
          unsigned int                   :32       ;//0x06e0
          unsigned int                   :32       ;//0x06e4
          unsigned int                   :32       ;//0x06e8
          unsigned int                   :32       ;//0x06ec
          unsigned int                   :32       ;//0x06f0
          unsigned int                   :32       ;//0x06f4
          unsigned int                   :32       ;//0x06f8
          unsigned int                   :32       ;//0x06fc
          unsigned int                   :32       ;//0x0700
          unsigned int                   :32       ;//0x0704
          unsigned int                   :32       ;//0x0708
          unsigned int                   :32       ;//0x070c
          unsigned int                   :32       ;//0x0710
          unsigned int                   :32       ;//0x0714
          unsigned int                   :32       ;//0x0718
          unsigned int                   :32       ;//0x071c
          unsigned int                   :32       ;//0x0720
          unsigned int                   :32       ;//0x0724
          unsigned int                   :32       ;//0x0728
          unsigned int                   :32       ;//0x072c
          unsigned int                   :32       ;//0x0730
          unsigned int                   :32       ;//0x0734
          unsigned int                   :32       ;//0x0738
          unsigned int                   :32       ;//0x073c
          unsigned int                   :32       ;//0x0740
          unsigned int                   :32       ;//0x0744
          unsigned int                   :32       ;//0x0748
          unsigned int                   :32       ;//0x074c
          unsigned int                   :32       ;//0x0750
          unsigned int                   :32       ;//0x0754
          unsigned int                   :32       ;//0x0758
          unsigned int                   :32       ;//0x075c
          unsigned int                   :32       ;//0x0760
          unsigned int                   :32       ;//0x0764
          unsigned int                   :32       ;//0x0768
          unsigned int                   :32       ;//0x076c
          unsigned int                   :32       ;//0x0770
          unsigned int                   :32       ;//0x0774
          unsigned int                   :32       ;//0x0778
          unsigned int                   :32       ;//0x077c
          unsigned int                   :32       ;//0x0780
          unsigned int                   :32       ;//0x0784
          unsigned int                   :32       ;//0x0788
          unsigned int                   :32       ;//0x078c
          unsigned int                   :32       ;//0x0790
          unsigned int                   :32       ;//0x0794
          unsigned int                   :32       ;//0x0798
          unsigned int                   :32       ;//0x079c
          unsigned int                   :32       ;//0x07a0
          unsigned int                   :32       ;//0x07a4
          unsigned int                   :32       ;//0x07a8
          unsigned int                   :32       ;//0x07ac
          unsigned int                   :32       ;//0x07b0
          unsigned int                   :32       ;//0x07b4
          unsigned int                   :32       ;//0x07b8
          unsigned int                   :32       ;//0x07bc
          unsigned int                   :32       ;//0x07c0
          unsigned int                   :32       ;//0x07c4
          unsigned int                   :32       ;//0x07c8
          unsigned int                   :32       ;//0x07cc
          unsigned int                   :32       ;//0x07d0
          unsigned int                   :32       ;//0x07d4
          unsigned int                   :32       ;//0x07d8
          unsigned int                   :32       ;//0x07dc
          unsigned int                   :32       ;//0x07e0
          unsigned int                   :32       ;//0x07e4
          unsigned int                   :32       ;//0x07e8
          unsigned int                   :32       ;//0x07ec
          unsigned int                   :32       ;//0x07f0
          unsigned int                   :32       ;//0x07f4
          unsigned int                   :32       ;//0x07f8
          unsigned int                   :32       ;//0x07fc
  union {
          unsigned long                  lcdcon1   ;//0x0800
          avr32_lcdc_lcdcon1_t           LCDCON1   ;
  };
  union {
          unsigned long                  lcdcon2   ;//0x0804
          avr32_lcdc_lcdcon2_t           LCDCON2   ;
  };
  union {
          unsigned long                  lcdtim1   ;//0x0808
          avr32_lcdc_lcdtim1_t           LCDTIM1   ;
  };
  union {
          unsigned long                  lcdtim2   ;//0x080c
          avr32_lcdc_lcdtim2_t           LCDTIM2   ;
  };
  union {
          unsigned long                  lcdfrmcfg ;//0x0810
          avr32_lcdc_lcdfrmcfg_t         LCDFRMCFG ;
  };
  union {
          unsigned long                  lcdfifo   ;//0x0814
          avr32_lcdc_lcdfifo_t           LCDFIFO   ;
  };
  union {
          unsigned long                  lcdmval   ;//0x0818
          avr32_lcdc_lcdmval_t           LCDMVAL   ;
  };
  union {
          unsigned long                  dp1_2     ;//0x081c
          avr32_lcdc_dp1_2_t             DP1_2     ;
  };
  union {
          unsigned long                  dp4_7     ;//0x0820
          avr32_lcdc_dp4_7_t             DP4_7     ;
  };
  union {
          unsigned long                  dp3_5     ;//0x0824
          avr32_lcdc_dp3_5_t             DP3_5     ;
  };
  union {
          unsigned long                  dp2_3     ;//0x0828
          avr32_lcdc_dp2_3_t             DP2_3     ;
  };
  union {
          unsigned long                  dp5_7     ;//0x082c
          avr32_lcdc_dp5_7_t             DP5_7     ;
  };
  union {
          unsigned long                  dp3_4     ;//0x0830
          avr32_lcdc_dp3_4_t             DP3_4     ;
  };
  union {
          unsigned long                  dp4_5     ;//0x0834
          avr32_lcdc_dp4_5_t             DP4_5     ;
  };
  union {
          unsigned long                  dp6_7     ;//0x0838
          avr32_lcdc_dp6_7_t             DP6_7     ;
  };
  union {
          unsigned long                  pwrcon    ;//0x083c
          avr32_lcdc_pwrcon_t            PWRCON    ;
  };
  union {
          unsigned long                  contrast_ctr;//0x0840
          avr32_lcdc_contrast_ctr_t      CONTRAST_CTR;
  };
  union {
          unsigned long                  contrast_val;//0x0844
          avr32_lcdc_contrast_val_t      CONTRAST_VAL;
  };
  union {
          unsigned long                  ier       ;//0x0848
          avr32_lcdc_ier_t               IER       ;
  };
  union {
          unsigned long                  idr       ;//0x084c
          avr32_lcdc_idr_t               IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0850
    const avr32_lcdc_imr_t               IMR       ;
  };
  union {
    const unsigned long                  isr       ;//0x0854
    const avr32_lcdc_isr_t               ISR       ;
  };
  union {
          unsigned long                  icr       ;//0x0858
          avr32_lcdc_icr_t               ICR       ;
  };
  union {
          unsigned long                  gpr       ;//0x085c
          avr32_lcdc_gpr_t               GPR       ;
  };
  union {
          unsigned long                  itr       ;//0x0860
          avr32_lcdc_itr_t               ITR       ;
  };
  union {
    const unsigned long                  irr       ;//0x0864
    const avr32_lcdc_irr_t               IRR       ;
  };
          unsigned int                   :32       ;//0x0868
          unsigned int                   :32       ;//0x086c
          unsigned int                   :32       ;//0x0870
          unsigned int                   :32       ;//0x0874
          unsigned int                   :32       ;//0x0878
          unsigned int                   :32       ;//0x087c
          unsigned int                   :32       ;//0x0880
          unsigned int                   :32       ;//0x0884
          unsigned int                   :32       ;//0x0888
          unsigned int                   :32       ;//0x088c
          unsigned int                   :32       ;//0x0890
          unsigned int                   :32       ;//0x0894
          unsigned int                   :32       ;//0x0898
          unsigned int                   :32       ;//0x089c
          unsigned int                   :32       ;//0x08a0
          unsigned int                   :32       ;//0x08a4
          unsigned int                   :32       ;//0x08a8
          unsigned int                   :32       ;//0x08ac
          unsigned int                   :32       ;//0x08b0
          unsigned int                   :32       ;//0x08b4
          unsigned int                   :32       ;//0x08b8
          unsigned int                   :32       ;//0x08bc
          unsigned int                   :32       ;//0x08c0
          unsigned int                   :32       ;//0x08c4
          unsigned int                   :32       ;//0x08c8
          unsigned int                   :32       ;//0x08cc
          unsigned int                   :32       ;//0x08d0
          unsigned int                   :32       ;//0x08d4
          unsigned int                   :32       ;//0x08d8
          unsigned int                   :32       ;//0x08dc
          unsigned int                   :32       ;//0x08e0
          unsigned int                   :32       ;//0x08e4
          unsigned int                   :32       ;//0x08e8
          unsigned int                   :32       ;//0x08ec
          unsigned int                   :32       ;//0x08f0
          unsigned int                   :32       ;//0x08f4
          unsigned int                   :32       ;//0x08f8
          unsigned int                   :32       ;//0x08fc
          unsigned int                   :32       ;//0x0900
          unsigned int                   :32       ;//0x0904
          unsigned int                   :32       ;//0x0908
          unsigned int                   :32       ;//0x090c
          unsigned int                   :32       ;//0x0910
          unsigned int                   :32       ;//0x0914
          unsigned int                   :32       ;//0x0918
          unsigned int                   :32       ;//0x091c
          unsigned int                   :32       ;//0x0920
          unsigned int                   :32       ;//0x0924
          unsigned int                   :32       ;//0x0928
          unsigned int                   :32       ;//0x092c
          unsigned int                   :32       ;//0x0930
          unsigned int                   :32       ;//0x0934
          unsigned int                   :32       ;//0x0938
          unsigned int                   :32       ;//0x093c
          unsigned int                   :32       ;//0x0940
          unsigned int                   :32       ;//0x0944
          unsigned int                   :32       ;//0x0948
          unsigned int                   :32       ;//0x094c
          unsigned int                   :32       ;//0x0950
          unsigned int                   :32       ;//0x0954
          unsigned int                   :32       ;//0x0958
          unsigned int                   :32       ;//0x095c
          unsigned int                   :32       ;//0x0960
          unsigned int                   :32       ;//0x0964
          unsigned int                   :32       ;//0x0968
          unsigned int                   :32       ;//0x096c
          unsigned int                   :32       ;//0x0970
          unsigned int                   :32       ;//0x0974
          unsigned int                   :32       ;//0x0978
          unsigned int                   :32       ;//0x097c
          unsigned int                   :32       ;//0x0980
          unsigned int                   :32       ;//0x0984
          unsigned int                   :32       ;//0x0988
          unsigned int                   :32       ;//0x098c
          unsigned int                   :32       ;//0x0990
          unsigned int                   :32       ;//0x0994
          unsigned int                   :32       ;//0x0998
          unsigned int                   :32       ;//0x099c
          unsigned int                   :32       ;//0x09a0
          unsigned int                   :32       ;//0x09a4
          unsigned int                   :32       ;//0x09a8
          unsigned int                   :32       ;//0x09ac
          unsigned int                   :32       ;//0x09b0
          unsigned int                   :32       ;//0x09b4
          unsigned int                   :32       ;//0x09b8
          unsigned int                   :32       ;//0x09bc
          unsigned int                   :32       ;//0x09c0
          unsigned int                   :32       ;//0x09c4
          unsigned int                   :32       ;//0x09c8
          unsigned int                   :32       ;//0x09cc
          unsigned int                   :32       ;//0x09d0
          unsigned int                   :32       ;//0x09d4
          unsigned int                   :32       ;//0x09d8
          unsigned int                   :32       ;//0x09dc
          unsigned int                   :32       ;//0x09e0
          unsigned int                   :32       ;//0x09e4
          unsigned int                   :32       ;//0x09e8
          unsigned int                   :32       ;//0x09ec
          unsigned int                   :32       ;//0x09f0
          unsigned int                   :32       ;//0x09f4
          unsigned int                   :32       ;//0x09f8
          unsigned int                   :32       ;//0x09fc
          unsigned int                   :32       ;//0x0a00
          unsigned int                   :32       ;//0x0a04
          unsigned int                   :32       ;//0x0a08
          unsigned int                   :32       ;//0x0a0c
          unsigned int                   :32       ;//0x0a10
          unsigned int                   :32       ;//0x0a14
          unsigned int                   :32       ;//0x0a18
          unsigned int                   :32       ;//0x0a1c
          unsigned int                   :32       ;//0x0a20
          unsigned int                   :32       ;//0x0a24
          unsigned int                   :32       ;//0x0a28
          unsigned int                   :32       ;//0x0a2c
          unsigned int                   :32       ;//0x0a30
          unsigned int                   :32       ;//0x0a34
          unsigned int                   :32       ;//0x0a38
          unsigned int                   :32       ;//0x0a3c
          unsigned int                   :32       ;//0x0a40
          unsigned int                   :32       ;//0x0a44
          unsigned int                   :32       ;//0x0a48
          unsigned int                   :32       ;//0x0a4c
          unsigned int                   :32       ;//0x0a50
          unsigned int                   :32       ;//0x0a54
          unsigned int                   :32       ;//0x0a58
          unsigned int                   :32       ;//0x0a5c
          unsigned int                   :32       ;//0x0a60
          unsigned int                   :32       ;//0x0a64
          unsigned int                   :32       ;//0x0a68
          unsigned int                   :32       ;//0x0a6c
          unsigned int                   :32       ;//0x0a70
          unsigned int                   :32       ;//0x0a74
          unsigned int                   :32       ;//0x0a78
          unsigned int                   :32       ;//0x0a7c
          unsigned int                   :32       ;//0x0a80
          unsigned int                   :32       ;//0x0a84
          unsigned int                   :32       ;//0x0a88
          unsigned int                   :32       ;//0x0a8c
          unsigned int                   :32       ;//0x0a90
          unsigned int                   :32       ;//0x0a94
          unsigned int                   :32       ;//0x0a98
          unsigned int                   :32       ;//0x0a9c
          unsigned int                   :32       ;//0x0aa0
          unsigned int                   :32       ;//0x0aa4
          unsigned int                   :32       ;//0x0aa8
          unsigned int                   :32       ;//0x0aac
          unsigned int                   :32       ;//0x0ab0
          unsigned int                   :32       ;//0x0ab4
          unsigned int                   :32       ;//0x0ab8
          unsigned int                   :32       ;//0x0abc
          unsigned int                   :32       ;//0x0ac0
          unsigned int                   :32       ;//0x0ac4
          unsigned int                   :32       ;//0x0ac8
          unsigned int                   :32       ;//0x0acc
          unsigned int                   :32       ;//0x0ad0
          unsigned int                   :32       ;//0x0ad4
          unsigned int                   :32       ;//0x0ad8
          unsigned int                   :32       ;//0x0adc
          unsigned int                   :32       ;//0x0ae0
          unsigned int                   :32       ;//0x0ae4
          unsigned int                   :32       ;//0x0ae8
          unsigned int                   :32       ;//0x0aec
          unsigned int                   :32       ;//0x0af0
          unsigned int                   :32       ;//0x0af4
          unsigned int                   :32       ;//0x0af8
          unsigned int                   :32       ;//0x0afc
          unsigned int                   :32       ;//0x0b00
          unsigned int                   :32       ;//0x0b04
          unsigned int                   :32       ;//0x0b08
          unsigned int                   :32       ;//0x0b0c
          unsigned int                   :32       ;//0x0b10
          unsigned int                   :32       ;//0x0b14
          unsigned int                   :32       ;//0x0b18
          unsigned int                   :32       ;//0x0b1c
          unsigned int                   :32       ;//0x0b20
          unsigned int                   :32       ;//0x0b24
          unsigned int                   :32       ;//0x0b28
          unsigned int                   :32       ;//0x0b2c
          unsigned int                   :32       ;//0x0b30
          unsigned int                   :32       ;//0x0b34
          unsigned int                   :32       ;//0x0b38
          unsigned int                   :32       ;//0x0b3c
          unsigned int                   :32       ;//0x0b40
          unsigned int                   :32       ;//0x0b44
          unsigned int                   :32       ;//0x0b48
          unsigned int                   :32       ;//0x0b4c
          unsigned int                   :32       ;//0x0b50
          unsigned int                   :32       ;//0x0b54
          unsigned int                   :32       ;//0x0b58
          unsigned int                   :32       ;//0x0b5c
          unsigned int                   :32       ;//0x0b60
          unsigned int                   :32       ;//0x0b64
          unsigned int                   :32       ;//0x0b68
          unsigned int                   :32       ;//0x0b6c
          unsigned int                   :32       ;//0x0b70
          unsigned int                   :32       ;//0x0b74
          unsigned int                   :32       ;//0x0b78
          unsigned int                   :32       ;//0x0b7c
          unsigned int                   :32       ;//0x0b80
          unsigned int                   :32       ;//0x0b84
          unsigned int                   :32       ;//0x0b88
          unsigned int                   :32       ;//0x0b8c
          unsigned int                   :32       ;//0x0b90
          unsigned int                   :32       ;//0x0b94
          unsigned int                   :32       ;//0x0b98
          unsigned int                   :32       ;//0x0b9c
          unsigned int                   :32       ;//0x0ba0
          unsigned int                   :32       ;//0x0ba4
          unsigned int                   :32       ;//0x0ba8
          unsigned int                   :32       ;//0x0bac
          unsigned int                   :32       ;//0x0bb0
          unsigned int                   :32       ;//0x0bb4
          unsigned int                   :32       ;//0x0bb8
          unsigned int                   :32       ;//0x0bbc
          unsigned int                   :32       ;//0x0bc0
          unsigned int                   :32       ;//0x0bc4
          unsigned int                   :32       ;//0x0bc8
          unsigned int                   :32       ;//0x0bcc
          unsigned int                   :32       ;//0x0bd0
          unsigned int                   :32       ;//0x0bd4
          unsigned int                   :32       ;//0x0bd8
          unsigned int                   :32       ;//0x0bdc
          unsigned int                   :32       ;//0x0be0
          unsigned int                   :32       ;//0x0be4
          unsigned int                   :32       ;//0x0be8
          unsigned int                   :32       ;//0x0bec
          unsigned int                   :32       ;//0x0bf0
          unsigned int                   :32       ;//0x0bf4
          unsigned int                   :32       ;//0x0bf8
          unsigned int                   :32       ;//0x0bfc
  union {
          unsigned long                  lut       [256];//0x0c00
          avr32_lcdc_lut_t               LUT       [256];
  };
} avr32_lcdc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_LCDC_172_H_INCLUDED*/
#endif

