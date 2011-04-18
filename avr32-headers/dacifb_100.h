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
#ifndef AVR32_DACIFB_100_H_INCLUDED
#define AVR32_DACIFB_100_H_INCLUDED

#define AVR32_DACIFB_H_VERSION 100

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_DACIFB_<register>
 - Bitfield mask:   AVR32_DACIFB_<register>_<bitfield>
 - Bitfield offset: AVR32_DACIFB_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_DACIFB_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_DACIFB_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_DACIFB_<bitfield>
 - Bitfield offset: AVR32_DACIFB_<bitfield>_OFFSET
 - Bitfield size:   AVR32_DACIFB_<bitfield>_SIZE
 - Bitfield values: AVR32_DACIFB_<bitfield>_<value name>
 - Bitfield values: AVR32_DACIFB_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_DACIFB_AAE                                              16
#define AVR32_DACIFB_AAE_MASK                                 0x00010000
#define AVR32_DACIFB_AAE_OFFSET                                       16
#define AVR32_DACIFB_AAE_SIZE                                          1
#define AVR32_DACIFB_ABE                                              17
#define AVR32_DACIFB_ABE_MASK                                 0x00020000
#define AVR32_DACIFB_ABE_OFFSET                                       17
#define AVR32_DACIFB_ABE_SIZE                                          1
#define AVR32_DACIFB_AOE                                              16
#define AVR32_DACIFB_AOE_MASK                                 0x00010000
#define AVR32_DACIFB_AOE_OFFSET                                       16
#define AVR32_DACIFB_AOE_SIZE                                          1
#define AVR32_DACIFB_ARAE                                             26
#define AVR32_DACIFB_ARAE_MASK                                0x04000000
#define AVR32_DACIFB_ARAE_OFFSET                                      26
#define AVR32_DACIFB_ARAE_SIZE                                         1
#define AVR32_DACIFB_ARBE                                             27
#define AVR32_DACIFB_ARBE_MASK                                0x08000000
#define AVR32_DACIFB_ARBE_OFFSET                                      27
#define AVR32_DACIFB_ARBE_SIZE                                         1
#define AVR32_DACIFB_BOE                                              17
#define AVR32_DACIFB_BOE_MASK                                 0x00020000
#define AVR32_DACIFB_BOE_OFFSET                                       17
#define AVR32_DACIFB_BOE_SIZE                                          1
#define AVR32_DACIFB_CFR                                      0x00000004
#define AVR32_DACIFB_CFR_AAE                                          16
#define AVR32_DACIFB_CFR_AAE_MASK                             0x00010000
#define AVR32_DACIFB_CFR_AAE_OFFSET                                   16
#define AVR32_DACIFB_CFR_AAE_SIZE                                      1
#define AVR32_DACIFB_CFR_ABE                                          17
#define AVR32_DACIFB_CFR_ABE_MASK                             0x00020000
#define AVR32_DACIFB_CFR_ABE_OFFSET                                   17
#define AVR32_DACIFB_CFR_ABE_SIZE                                      1
#define AVR32_DACIFB_CFR_CHC                                          24
#define AVR32_DACIFB_CFR_CHC_MASK                             0x03000000
#define AVR32_DACIFB_CFR_CHC_OFFSET                                   24
#define AVR32_DACIFB_CFR_CHC_SIZE                                      2
#define AVR32_DACIFB_CFR_DDA                                           1
#define AVR32_DACIFB_CFR_DDA_MASK                             0x00000002
#define AVR32_DACIFB_CFR_DDA_OFFSET                                    1
#define AVR32_DACIFB_CFR_DDA_SIZE                                      1
#define AVR32_DACIFB_CFR_DSE                                           2
#define AVR32_DACIFB_CFR_DSE_MASK                             0x00000004
#define AVR32_DACIFB_CFR_DSE_OFFSET                                    2
#define AVR32_DACIFB_CFR_DSE_SIZE                                      1
#define AVR32_DACIFB_CFR_LP                                            0
#define AVR32_DACIFB_CFR_LP_MASK                              0x00000001
#define AVR32_DACIFB_CFR_LP_OFFSET                                     0
#define AVR32_DACIFB_CFR_LP_SIZE                                       1
#define AVR32_DACIFB_CFR_MASK                                 0x03030107
#define AVR32_DACIFB_CFR_REF                                           8
#define AVR32_DACIFB_CFR_REF_MASK                             0x00000100
#define AVR32_DACIFB_CFR_REF_OFFSET                                    8
#define AVR32_DACIFB_CFR_REF_SIZE                                      1
#define AVR32_DACIFB_CFR_RESETVALUE                           0x00000000
#define AVR32_DACIFB_CHC                                              24
#define AVR32_DACIFB_CHC_MASK                                 0x03000000
#define AVR32_DACIFB_CHC_OFFSET                                       24
#define AVR32_DACIFB_CHC_SIZE                                          2
#define AVR32_DACIFB_CHI                                              16
#define AVR32_DACIFB_CHI_MASK                                 0x007f0000
#define AVR32_DACIFB_CHI_OFFSET                                       16
#define AVR32_DACIFB_CHI_SIZE                                          7
#define AVR32_DACIFB_CHRA                                              0
#define AVR32_DACIFB_CHRA_MASK                                0x0000000f
#define AVR32_DACIFB_CHRA_OFFSET                                       0
#define AVR32_DACIFB_CHRA_SIZE                                         4
#define AVR32_DACIFB_CHRB                                              8
#define AVR32_DACIFB_CHRB_MASK                                0x00000f00
#define AVR32_DACIFB_CHRB_OFFSET                                       8
#define AVR32_DACIFB_CHRB_SIZE                                         4
#define AVR32_DACIFB_CR                                       0x00000000
#define AVR32_DACIFB_CR_AOE                                           16
#define AVR32_DACIFB_CR_AOE_MASK                              0x00010000
#define AVR32_DACIFB_CR_AOE_OFFSET                                    16
#define AVR32_DACIFB_CR_AOE_SIZE                                       1
#define AVR32_DACIFB_CR_ARAE                                          26
#define AVR32_DACIFB_CR_ARAE_MASK                             0x04000000
#define AVR32_DACIFB_CR_ARAE_OFFSET                                   26
#define AVR32_DACIFB_CR_ARAE_SIZE                                      1
#define AVR32_DACIFB_CR_ARBE                                          27
#define AVR32_DACIFB_CR_ARBE_MASK                             0x08000000
#define AVR32_DACIFB_CR_ARBE_OFFSET                                   27
#define AVR32_DACIFB_CR_ARBE_SIZE                                      1
#define AVR32_DACIFB_CR_BOE                                           17
#define AVR32_DACIFB_CR_BOE_MASK                              0x00020000
#define AVR32_DACIFB_CR_BOE_OFFSET                                    17
#define AVR32_DACIFB_CR_BOE_SIZE                                       1
#define AVR32_DACIFB_CR_EN                                             0
#define AVR32_DACIFB_CR_EN_MASK                               0x00000001
#define AVR32_DACIFB_CR_EN_OFFSET                                      0
#define AVR32_DACIFB_CR_EN_SIZE                                        1
#define AVR32_DACIFB_CR_MASK                                  0x0f030001
#define AVR32_DACIFB_CR_RESETVALUE                            0x00000000
#define AVR32_DACIFB_CR_TRAE                                          24
#define AVR32_DACIFB_CR_TRAE_MASK                             0x01000000
#define AVR32_DACIFB_CR_TRAE_OFFSET                                   24
#define AVR32_DACIFB_CR_TRAE_SIZE                                      1
#define AVR32_DACIFB_CR_TRBE                                          25
#define AVR32_DACIFB_CR_TRBE_MASK                             0x02000000
#define AVR32_DACIFB_CR_TRBE_OFFSET                                   25
#define AVR32_DACIFB_CR_TRBE_SIZE                                      1
#define AVR32_DACIFB_DCA                                               0
#define AVR32_DACIFB_DCA_MASK                                 0x0000ffff
#define AVR32_DACIFB_DCA_OFFSET                                        0
#define AVR32_DACIFB_DCA_SIZE                                         16
#define AVR32_DACIFB_DCB_SIZE                                         16
#define AVR32_DACIFB_DDA                                               1
#define AVR32_DACIFB_DDA_MASK                                 0x00000002
#define AVR32_DACIFB_DDA_OFFSET                                        1
#define AVR32_DACIFB_DDA_SIZE                                          1
#define AVR32_DACIFB_DEA                                              16
#define AVR32_DACIFB_DEA_MASK                                 0x00010000
#define AVR32_DACIFB_DEA_OFFSET                                       16
#define AVR32_DACIFB_DEA_SIZE                                          1
#define AVR32_DACIFB_DEB                                              17
#define AVR32_DACIFB_DEB_MASK                                 0x00020000
#define AVR32_DACIFB_DEB_OFFSET                                       17
#define AVR32_DACIFB_DEB_SIZE                                          1
#define AVR32_DACIFB_DR0                                      0x0000002c
#define AVR32_DACIFB_DR0_DCA                                           0
#define AVR32_DACIFB_DR0_DCA_MASK                             0x0000ffff
#define AVR32_DACIFB_DR0_DCA_OFFSET                                    0
#define AVR32_DACIFB_DR0_DCA_SIZE                                     16
#define AVR32_DACIFB_DR0_DCB                                          16
#define AVR32_DACIFB_DR0_DCB_MASK                             0xffff0000
#define AVR32_DACIFB_DR0_DCB_OFFSET                                   16
#define AVR32_DACIFB_DR0_DCB_SIZE                                     16
#define AVR32_DACIFB_DR0_MASK                                 0xffffffff
#define AVR32_DACIFB_DR0_RESETVALUE                           0x00000000
#define AVR32_DACIFB_DR1                                      0x00000030
#define AVR32_DACIFB_DR1_DCB                                           0
#define AVR32_DACIFB_DR1_DCB_MASK                             0x0000ffff
#define AVR32_DACIFB_DR1_DCB_OFFSET                                    0
#define AVR32_DACIFB_DR1_DCB_SIZE                                     16
#define AVR32_DACIFB_DR1_MASK                                 0x0000ffff
#define AVR32_DACIFB_DR1_RESETVALUE                           0x00000000
#define AVR32_DACIFB_DRCA                                     0x00000024
#define AVR32_DACIFB_DRCA_DRN                                          0
#define AVR32_DACIFB_DRCA_DRN_MASK                            0x00000001
#define AVR32_DACIFB_DRCA_DRN_OFFSET                                   0
#define AVR32_DACIFB_DRCA_DRN_SIZE                                     1
#define AVR32_DACIFB_DRCA_DSD                                         11
#define AVR32_DACIFB_DRCA_DSD_MASK                            0x00000800
#define AVR32_DACIFB_DRCA_DSD_OFFSET                                  11
#define AVR32_DACIFB_DRCA_DSD_SIZE                                     1
#define AVR32_DACIFB_DRCA_DSV                                          8
#define AVR32_DACIFB_DRCA_DSV_MASK                            0x00000700
#define AVR32_DACIFB_DRCA_DSV_OFFSET                                   8
#define AVR32_DACIFB_DRCA_DSV_SIZE                                     3
#define AVR32_DACIFB_DRCA_MASK                                0x00000f01
#define AVR32_DACIFB_DRCA_RESETVALUE                          0x00000000
#define AVR32_DACIFB_DRCB                                     0x00000028
#define AVR32_DACIFB_DRCB_DRN                                          0
#define AVR32_DACIFB_DRCB_DRN_MASK                            0x00000001
#define AVR32_DACIFB_DRCB_DRN_OFFSET                                   0
#define AVR32_DACIFB_DRCB_DRN_SIZE                                     1
#define AVR32_DACIFB_DRCB_DSD                                         11
#define AVR32_DACIFB_DRCB_DSD_MASK                            0x00000800
#define AVR32_DACIFB_DRCB_DSD_OFFSET                                  11
#define AVR32_DACIFB_DRCB_DSD_SIZE                                     1
#define AVR32_DACIFB_DRCB_DSV                                          8
#define AVR32_DACIFB_DRCB_DSV_MASK                            0x00000700
#define AVR32_DACIFB_DRCB_DSV_OFFSET                                   8
#define AVR32_DACIFB_DRCB_DSV_SIZE                                     3
#define AVR32_DACIFB_DRCB_MASK                                0x00000f01
#define AVR32_DACIFB_DRCB_RESETVALUE                          0x00000000
#define AVR32_DACIFB_DRN                                               0
#define AVR32_DACIFB_DRN_MASK                                 0x00000001
#define AVR32_DACIFB_DRN_OFFSET                                        0
#define AVR32_DACIFB_DRN_SIZE                                          1
#define AVR32_DACIFB_DSD                                              11
#define AVR32_DACIFB_DSD_MASK                                 0x00000800
#define AVR32_DACIFB_DSD_OFFSET                                       11
#define AVR32_DACIFB_DSD_SIZE                                          1
#define AVR32_DACIFB_DSE                                               2
#define AVR32_DACIFB_DSE_MASK                                 0x00000004
#define AVR32_DACIFB_DSE_OFFSET                                        2
#define AVR32_DACIFB_DSE_SIZE                                          1
#define AVR32_DACIFB_DSV                                               8
#define AVR32_DACIFB_DSV_MASK                                 0x00000700
#define AVR32_DACIFB_DSV_OFFSET                                        8
#define AVR32_DACIFB_DSV_SIZE                                          3
#define AVR32_DACIFB_ECR                                      0x00000008
#define AVR32_DACIFB_ECR_ESLA                                          0
#define AVR32_DACIFB_ECR_ESLA_MASK                            0x00000001
#define AVR32_DACIFB_ECR_ESLA_OFFSET                                   0
#define AVR32_DACIFB_ECR_ESLA_SIZE                                     1
#define AVR32_DACIFB_ECR_ESLB                                          8
#define AVR32_DACIFB_ECR_ESLB_MASK                            0x00000100
#define AVR32_DACIFB_ECR_ESLB_OFFSET                                   8
#define AVR32_DACIFB_ECR_ESLB_SIZE                                     1
#define AVR32_DACIFB_ECR_MASK                                 0x00000101
#define AVR32_DACIFB_ECR_RESETVALUE                           0x00010000
#define AVR32_DACIFB_EN                                                0
#define AVR32_DACIFB_EN_MASK                                  0x00000001
#define AVR32_DACIFB_EN_OFFSET                                         0
#define AVR32_DACIFB_EN_SIZE                                           1
#define AVR32_DACIFB_ESLA                                              0
#define AVR32_DACIFB_ESLA_MASK                                0x00000001
#define AVR32_DACIFB_ESLA_OFFSET                                       0
#define AVR32_DACIFB_ESLA_SIZE                                         1
#define AVR32_DACIFB_ESLB                                              8
#define AVR32_DACIFB_ESLB_MASK                                0x00000100
#define AVR32_DACIFB_ESLB_OFFSET                                       8
#define AVR32_DACIFB_ESLB_SIZE                                         1
#define AVR32_DACIFB_GCR                                               8
#define AVR32_DACIFB_GCR_MASK                                 0x00007f00
#define AVR32_DACIFB_GCR_OFFSET                                        8
#define AVR32_DACIFB_GCR_SIZE                                          7
#define AVR32_DACIFB_GOC                                      0x00000034
#define AVR32_DACIFB_GOC_GCR                                           8
#define AVR32_DACIFB_GOC_GCR_MASK                             0x00007f00
#define AVR32_DACIFB_GOC_GCR_OFFSET                                    8
#define AVR32_DACIFB_GOC_GCR_SIZE                                      7
#define AVR32_DACIFB_GOC_MASK                                 0x00007f7f
#define AVR32_DACIFB_GOC_OCR                                           0
#define AVR32_DACIFB_GOC_OCR_MASK                             0x0000007f
#define AVR32_DACIFB_GOC_OCR_OFFSET                                    0
#define AVR32_DACIFB_GOC_OCR_SIZE                                      7
#define AVR32_DACIFB_GOC_RESETVALUE                           0x00000000
#define AVR32_DACIFB_IDR                                      0x00000014
#define AVR32_DACIFB_IDR_DEA                                          16
#define AVR32_DACIFB_IDR_DEA_MASK                             0x00010000
#define AVR32_DACIFB_IDR_DEA_OFFSET                                   16
#define AVR32_DACIFB_IDR_DEA_SIZE                                      1
#define AVR32_DACIFB_IDR_DEB                                          17
#define AVR32_DACIFB_IDR_DEB_MASK                             0x00020000
#define AVR32_DACIFB_IDR_DEB_OFFSET                                   17
#define AVR32_DACIFB_IDR_DEB_SIZE                                      1
#define AVR32_DACIFB_IDR_MASK                                 0x00030303
#define AVR32_DACIFB_IDR_OA                                            0
#define AVR32_DACIFB_IDR_OA_MASK                              0x00000001
#define AVR32_DACIFB_IDR_OA_OFFSET                                     0
#define AVR32_DACIFB_IDR_OA_SIZE                                       1
#define AVR32_DACIFB_IDR_OB                                            1
#define AVR32_DACIFB_IDR_OB_MASK                              0x00000002
#define AVR32_DACIFB_IDR_OB_OFFSET                                     1
#define AVR32_DACIFB_IDR_OB_SIZE                                       1
#define AVR32_DACIFB_IDR_RESETVALUE                           0x00000000
#define AVR32_DACIFB_IDR_UA                                            8
#define AVR32_DACIFB_IDR_UA_MASK                              0x00000100
#define AVR32_DACIFB_IDR_UA_OFFSET                                     8
#define AVR32_DACIFB_IDR_UA_SIZE                                       1
#define AVR32_DACIFB_IDR_UB                                            9
#define AVR32_DACIFB_IDR_UB_MASK                              0x00000200
#define AVR32_DACIFB_IDR_UB_OFFSET                                     9
#define AVR32_DACIFB_IDR_UB_SIZE                                       1
#define AVR32_DACIFB_IER                                      0x00000010
#define AVR32_DACIFB_IER_DEA                                          16
#define AVR32_DACIFB_IER_DEA_MASK                             0x00010000
#define AVR32_DACIFB_IER_DEA_OFFSET                                   16
#define AVR32_DACIFB_IER_DEA_SIZE                                      1
#define AVR32_DACIFB_IER_DEB                                          17
#define AVR32_DACIFB_IER_DEB_MASK                             0x00020000
#define AVR32_DACIFB_IER_DEB_OFFSET                                   17
#define AVR32_DACIFB_IER_DEB_SIZE                                      1
#define AVR32_DACIFB_IER_MASK                                 0x00030303
#define AVR32_DACIFB_IER_OA                                            0
#define AVR32_DACIFB_IER_OA_MASK                              0x00000001
#define AVR32_DACIFB_IER_OA_OFFSET                                     0
#define AVR32_DACIFB_IER_OA_SIZE                                       1
#define AVR32_DACIFB_IER_OB                                            1
#define AVR32_DACIFB_IER_OB_MASK                              0x00000002
#define AVR32_DACIFB_IER_OB_OFFSET                                     1
#define AVR32_DACIFB_IER_OB_SIZE                                       1
#define AVR32_DACIFB_IER_RESETVALUE                           0x00000000
#define AVR32_DACIFB_IER_UA                                            8
#define AVR32_DACIFB_IER_UA_MASK                              0x00000100
#define AVR32_DACIFB_IER_UA_OFFSET                                     8
#define AVR32_DACIFB_IER_UA_SIZE                                       1
#define AVR32_DACIFB_IER_UB                                            9
#define AVR32_DACIFB_IER_UB_MASK                              0x00000200
#define AVR32_DACIFB_IER_UB_OFFSET                                     9
#define AVR32_DACIFB_IER_UB_SIZE                                       1
#define AVR32_DACIFB_IMR                                      0x00000018
#define AVR32_DACIFB_IMR_DEA                                          16
#define AVR32_DACIFB_IMR_DEA_MASK                             0x00010000
#define AVR32_DACIFB_IMR_DEA_OFFSET                                   16
#define AVR32_DACIFB_IMR_DEA_SIZE                                      1
#define AVR32_DACIFB_IMR_DEB                                          17
#define AVR32_DACIFB_IMR_DEB_MASK                             0x00020000
#define AVR32_DACIFB_IMR_DEB_OFFSET                                   17
#define AVR32_DACIFB_IMR_DEB_SIZE                                      1
#define AVR32_DACIFB_IMR_MASK                                 0x00030303
#define AVR32_DACIFB_IMR_OA                                            0
#define AVR32_DACIFB_IMR_OA_MASK                              0x00000001
#define AVR32_DACIFB_IMR_OA_OFFSET                                     0
#define AVR32_DACIFB_IMR_OA_SIZE                                       1
#define AVR32_DACIFB_IMR_OB                                            1
#define AVR32_DACIFB_IMR_OB_MASK                              0x00000002
#define AVR32_DACIFB_IMR_OB_OFFSET                                     1
#define AVR32_DACIFB_IMR_OB_SIZE                                       1
#define AVR32_DACIFB_IMR_RESETVALUE                           0x00000000
#define AVR32_DACIFB_IMR_UA                                            8
#define AVR32_DACIFB_IMR_UA_MASK                              0x00000100
#define AVR32_DACIFB_IMR_UA_OFFSET                                     8
#define AVR32_DACIFB_IMR_UA_SIZE                                       1
#define AVR32_DACIFB_IMR_UB                                            9
#define AVR32_DACIFB_IMR_UB_MASK                              0x00000200
#define AVR32_DACIFB_IMR_UB_OFFSET                                     9
#define AVR32_DACIFB_IMR_UB_SIZE                                       1
#define AVR32_DACIFB_LP                                                0
#define AVR32_DACIFB_LP_MASK                                  0x00000001
#define AVR32_DACIFB_LP_OFFSET                                         0
#define AVR32_DACIFB_LP_SIZE                                           1
#define AVR32_DACIFB_OA                                                0
#define AVR32_DACIFB_OA_MASK                                  0x00000001
#define AVR32_DACIFB_OA_OFFSET                                         0
#define AVR32_DACIFB_OA_SIZE                                           1
#define AVR32_DACIFB_OB                                                1
#define AVR32_DACIFB_OB_MASK                                  0x00000002
#define AVR32_DACIFB_OB_OFFSET                                         1
#define AVR32_DACIFB_OB_SIZE                                           1
#define AVR32_DACIFB_OCR                                               0
#define AVR32_DACIFB_OCR_MASK                                 0x0000007f
#define AVR32_DACIFB_OCR_OFFSET                                        0
#define AVR32_DACIFB_OCR_SIZE                                          7
#define AVR32_DACIFB_PRESC                                            24
#define AVR32_DACIFB_PRESC_MASK                               0x07000000
#define AVR32_DACIFB_PRESC_OFFSET                                     24
#define AVR32_DACIFB_PRESC_SIZE                                        3
#define AVR32_DACIFB_REF                                               8
#define AVR32_DACIFB_REF_MASK                                 0x00000100
#define AVR32_DACIFB_REF_OFFSET                                        8
#define AVR32_DACIFB_REF_SIZE                                          1
#define AVR32_DACIFB_SCR                                      0x00000020
#define AVR32_DACIFB_SCR_DEA                                          16
#define AVR32_DACIFB_SCR_DEA_MASK                             0x00010000
#define AVR32_DACIFB_SCR_DEA_OFFSET                                   16
#define AVR32_DACIFB_SCR_DEA_SIZE                                      1
#define AVR32_DACIFB_SCR_DEB                                          17
#define AVR32_DACIFB_SCR_DEB_MASK                             0x00020000
#define AVR32_DACIFB_SCR_DEB_OFFSET                                   17
#define AVR32_DACIFB_SCR_DEB_SIZE                                      1
#define AVR32_DACIFB_SCR_MASK                                 0x00030303
#define AVR32_DACIFB_SCR_OA                                            0
#define AVR32_DACIFB_SCR_OA_MASK                              0x00000001
#define AVR32_DACIFB_SCR_OA_OFFSET                                     0
#define AVR32_DACIFB_SCR_OA_SIZE                                       1
#define AVR32_DACIFB_SCR_OB                                            1
#define AVR32_DACIFB_SCR_OB_MASK                              0x00000002
#define AVR32_DACIFB_SCR_OB_OFFSET                                     1
#define AVR32_DACIFB_SCR_OB_SIZE                                       1
#define AVR32_DACIFB_SCR_RESETVALUE                           0x00000000
#define AVR32_DACIFB_SCR_UA                                            8
#define AVR32_DACIFB_SCR_UA_MASK                              0x00000100
#define AVR32_DACIFB_SCR_UA_OFFSET                                     8
#define AVR32_DACIFB_SCR_UA_SIZE                                       1
#define AVR32_DACIFB_SCR_UB                                            9
#define AVR32_DACIFB_SCR_UB_MASK                              0x00000200
#define AVR32_DACIFB_SCR_UB_OFFSET                                     9
#define AVR32_DACIFB_SCR_UB_SIZE                                       1
#define AVR32_DACIFB_SR                                       0x0000001c
#define AVR32_DACIFB_SR_DEA                                           16
#define AVR32_DACIFB_SR_DEA_MASK                              0x00010000
#define AVR32_DACIFB_SR_DEA_OFFSET                                    16
#define AVR32_DACIFB_SR_DEA_SIZE                                       1
#define AVR32_DACIFB_SR_DEB                                           17
#define AVR32_DACIFB_SR_DEB_MASK                              0x00020000
#define AVR32_DACIFB_SR_DEB_OFFSET                                    17
#define AVR32_DACIFB_SR_DEB_SIZE                                       1
#define AVR32_DACIFB_SR_MASK                                  0x00030303
#define AVR32_DACIFB_SR_OA                                             0
#define AVR32_DACIFB_SR_OA_MASK                               0x00000001
#define AVR32_DACIFB_SR_OA_OFFSET                                      0
#define AVR32_DACIFB_SR_OA_SIZE                                        1
#define AVR32_DACIFB_SR_OB                                             1
#define AVR32_DACIFB_SR_OB_MASK                               0x00000002
#define AVR32_DACIFB_SR_OB_OFFSET                                      1
#define AVR32_DACIFB_SR_OB_SIZE                                        1
#define AVR32_DACIFB_SR_RESETVALUE                            0x00000000
#define AVR32_DACIFB_SR_UA                                             8
#define AVR32_DACIFB_SR_UA_MASK                               0x00000100
#define AVR32_DACIFB_SR_UA_OFFSET                                      8
#define AVR32_DACIFB_SR_UA_SIZE                                        1
#define AVR32_DACIFB_SR_UB                                             9
#define AVR32_DACIFB_SR_UB_MASK                               0x00000200
#define AVR32_DACIFB_SR_UB_OFFSET                                      9
#define AVR32_DACIFB_SR_UB_SIZE                                        1
#define AVR32_DACIFB_TCD                                               0
#define AVR32_DACIFB_TCD_MASK                                 0x000000ff
#define AVR32_DACIFB_TCD_OFFSET                                        0
#define AVR32_DACIFB_TCD_SIZE                                          8
#define AVR32_DACIFB_TCR                                      0x0000000c
#define AVR32_DACIFB_TCR_CHI                                          16
#define AVR32_DACIFB_TCR_CHI_MASK                             0x007f0000
#define AVR32_DACIFB_TCR_CHI_OFFSET                                   16
#define AVR32_DACIFB_TCR_CHI_SIZE                                      7
#define AVR32_DACIFB_TCR_CHRA                                          0
#define AVR32_DACIFB_TCR_CHRA_MASK                            0x0000000f
#define AVR32_DACIFB_TCR_CHRA_OFFSET                                   0
#define AVR32_DACIFB_TCR_CHRA_SIZE                                     4
#define AVR32_DACIFB_TCR_CHRB                                          8
#define AVR32_DACIFB_TCR_CHRB_MASK                            0x00000f00
#define AVR32_DACIFB_TCR_CHRB_OFFSET                                   8
#define AVR32_DACIFB_TCR_CHRB_SIZE                                     4
#define AVR32_DACIFB_TCR_MASK                                 0x077f0f0f
#define AVR32_DACIFB_TCR_PRESC                                        24
#define AVR32_DACIFB_TCR_PRESC_MASK                           0x07000000
#define AVR32_DACIFB_TCR_PRESC_OFFSET                                 24
#define AVR32_DACIFB_TCR_PRESC_SIZE                                    3
#define AVR32_DACIFB_TCR_RESETVALUE                           0x00000000
#define AVR32_DACIFB_TRA                                      0x00000038
#define AVR32_DACIFB_TRAE                                             24
#define AVR32_DACIFB_TRAE_MASK                                0x01000000
#define AVR32_DACIFB_TRAE_OFFSET                                      24
#define AVR32_DACIFB_TRAE_SIZE                                         1
#define AVR32_DACIFB_TRA_MASK                                 0x800000ff
#define AVR32_DACIFB_TRA_RESETVALUE                           0x00000000
#define AVR32_DACIFB_TRA_TCD                                           0
#define AVR32_DACIFB_TRA_TCD_MASK                             0x000000ff
#define AVR32_DACIFB_TRA_TCD_OFFSET                                    0
#define AVR32_DACIFB_TRA_TCD_SIZE                                      8
#define AVR32_DACIFB_TRA_TRL                                          31
#define AVR32_DACIFB_TRA_TRL_MASK                             0x80000000
#define AVR32_DACIFB_TRA_TRL_OFFSET                                   31
#define AVR32_DACIFB_TRA_TRL_SIZE                                      1
#define AVR32_DACIFB_TRB                                      0x0000003c
#define AVR32_DACIFB_TRBE                                             25
#define AVR32_DACIFB_TRBE_MASK                                0x02000000
#define AVR32_DACIFB_TRBE_OFFSET                                      25
#define AVR32_DACIFB_TRBE_SIZE                                         1
#define AVR32_DACIFB_TRB_MASK                                 0x800000ff
#define AVR32_DACIFB_TRB_RESETVALUE                           0x00000000
#define AVR32_DACIFB_TRB_TCD                                           0
#define AVR32_DACIFB_TRB_TCD_MASK                             0x000000ff
#define AVR32_DACIFB_TRB_TCD_OFFSET                                    0
#define AVR32_DACIFB_TRB_TCD_SIZE                                      8
#define AVR32_DACIFB_TRB_TRL                                          31
#define AVR32_DACIFB_TRB_TRL_MASK                             0x80000000
#define AVR32_DACIFB_TRB_TRL_OFFSET                                   31
#define AVR32_DACIFB_TRB_TRL_SIZE                                      1
#define AVR32_DACIFB_TRL                                              31
#define AVR32_DACIFB_TRL_MASK                                 0x80000000
#define AVR32_DACIFB_TRL_OFFSET                                       31
#define AVR32_DACIFB_TRL_SIZE                                          1
#define AVR32_DACIFB_UA                                                8
#define AVR32_DACIFB_UA_MASK                                  0x00000100
#define AVR32_DACIFB_UA_OFFSET                                         8
#define AVR32_DACIFB_UA_SIZE                                           1
#define AVR32_DACIFB_UB                                                9
#define AVR32_DACIFB_UB_MASK                                  0x00000200
#define AVR32_DACIFB_UB_OFFSET                                         9
#define AVR32_DACIFB_UB_SIZE                                           1
#define AVR32_DACIFB_VER                                               0
#define AVR32_DACIFB_VERSION                                  0x00000040
#define AVR32_DACIFB_VERSION_MASK                             0x00000fff
#define AVR32_DACIFB_VERSION_RESETVALUE                       0x00000000
#define AVR32_DACIFB_VERSION_VER                                       0
#define AVR32_DACIFB_VERSION_VER_MASK                         0x00000fff
#define AVR32_DACIFB_VERSION_VER_OFFSET                                0
#define AVR32_DACIFB_VERSION_VER_SIZE                                 12
#define AVR32_DACIFB_VER_MASK                                 0x00000fff
#define AVR32_DACIFB_VER_OFFSET                                        0
#define AVR32_DACIFB_VER_SIZE                                         12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_dacifb_cr_t {
    unsigned int                 : 4;
    unsigned int arbe            : 1;
    unsigned int arae            : 1;
    unsigned int trbe            : 1;
    unsigned int trae            : 1;
    unsigned int                 : 6;
    unsigned int boe             : 1;
    unsigned int aoe             : 1;
    unsigned int                 :15;
    unsigned int en              : 1;
} avr32_dacifb_cr_t;



typedef struct avr32_dacifb_cfr_t {
    unsigned int                 : 6;
    unsigned int chc             : 2;
    unsigned int                 : 6;
    unsigned int abe             : 1;
    unsigned int aae             : 1;
    unsigned int                 : 7;
    unsigned int ref             : 1;
    unsigned int                 : 5;
    unsigned int dse             : 1;
    unsigned int dda             : 1;
    unsigned int lp              : 1;
} avr32_dacifb_cfr_t;



typedef struct avr32_dacifb_ecr_t {
    unsigned int                 :23;
    unsigned int eslb            : 1;
    unsigned int                 : 7;
    unsigned int esla            : 1;
} avr32_dacifb_ecr_t;



typedef struct avr32_dacifb_tcr_t {
    unsigned int                 : 5;
    unsigned int presc           : 3;
    unsigned int                 : 1;
    unsigned int chi             : 7;
    unsigned int                 : 4;
    unsigned int chrb            : 4;
    unsigned int                 : 4;
    unsigned int chra            : 4;
} avr32_dacifb_tcr_t;



typedef struct avr32_dacifb_ier_t {
    unsigned int                 :14;
    unsigned int deb             : 1;
    unsigned int dea             : 1;
    unsigned int                 : 6;
    unsigned int ub              : 1;
    unsigned int ua              : 1;
    unsigned int                 : 6;
    unsigned int ob              : 1;
    unsigned int oa              : 1;
} avr32_dacifb_ier_t;



typedef struct avr32_dacifb_idr_t {
    unsigned int                 :14;
    unsigned int deb             : 1;
    unsigned int dea             : 1;
    unsigned int                 : 6;
    unsigned int ub              : 1;
    unsigned int ua              : 1;
    unsigned int                 : 6;
    unsigned int ob              : 1;
    unsigned int oa              : 1;
} avr32_dacifb_idr_t;



typedef struct avr32_dacifb_imr_t {
    unsigned int                 :14;
    unsigned int deb             : 1;
    unsigned int dea             : 1;
    unsigned int                 : 6;
    unsigned int ub              : 1;
    unsigned int ua              : 1;
    unsigned int                 : 6;
    unsigned int ob              : 1;
    unsigned int oa              : 1;
} avr32_dacifb_imr_t;



typedef struct avr32_dacifb_sr_t {
    unsigned int                 :14;
    unsigned int deb             : 1;
    unsigned int dea             : 1;
    unsigned int                 : 6;
    unsigned int ub              : 1;
    unsigned int ua              : 1;
    unsigned int                 : 6;
    unsigned int ob              : 1;
    unsigned int oa              : 1;
} avr32_dacifb_sr_t;



typedef struct avr32_dacifb_scr_t {
    unsigned int                 :14;
    unsigned int deb             : 1;
    unsigned int dea             : 1;
    unsigned int                 : 6;
    unsigned int ub              : 1;
    unsigned int ua              : 1;
    unsigned int                 : 6;
    unsigned int ob              : 1;
    unsigned int oa              : 1;
} avr32_dacifb_scr_t;



typedef struct avr32_dacifb_drca_t {
    unsigned int                 :20;
    unsigned int dsd             : 1;
    unsigned int dsv             : 3;
    unsigned int                 : 7;
    unsigned int drn             : 1;
} avr32_dacifb_drca_t;



typedef struct avr32_dacifb_drcb_t {
    unsigned int                 :20;
    unsigned int dsd             : 1;
    unsigned int dsv             : 3;
    unsigned int                 : 7;
    unsigned int drn             : 1;
} avr32_dacifb_drcb_t;



typedef struct avr32_dacifb_dr0_t {
    unsigned int dcb             :16;
    unsigned int dca             :16;
} avr32_dacifb_dr0_t;



typedef struct avr32_dacifb_dr1_t {
    unsigned int                 :16;
    unsigned int dcb             :16;
} avr32_dacifb_dr1_t;



typedef struct avr32_dacifb_goc_t {
    unsigned int                 :17;
    unsigned int gcr             : 7;
    unsigned int                 : 1;
    unsigned int ocr             : 7;
} avr32_dacifb_goc_t;



typedef struct avr32_dacifb_tra_t {
    unsigned int trl             : 1;
    unsigned int                 :23;
    unsigned int tcd             : 8;
} avr32_dacifb_tra_t;



typedef struct avr32_dacifb_trb_t {
    unsigned int trl             : 1;
    unsigned int                 :23;
    unsigned int tcd             : 8;
} avr32_dacifb_trb_t;



typedef struct avr32_dacifb_version_t {
    unsigned int                 :20;
    unsigned int ver             :12;
} avr32_dacifb_version_t;



typedef struct avr32_dacifb_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_dacifb_cr_t              CR        ;
  };
  union {
          unsigned long                  cfr       ;//0x0004
          avr32_dacifb_cfr_t             CFR       ;
  };
  union {
          unsigned long                  ecr       ;//0x0008
          avr32_dacifb_ecr_t             ECR       ;
  };
  union {
          unsigned long                  tcr       ;//0x000c
          avr32_dacifb_tcr_t             TCR       ;
  };
  union {
          unsigned long                  ier       ;//0x0010
          avr32_dacifb_ier_t             IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_dacifb_idr_t             IDR       ;
  };
  union {
    const unsigned long                  imr       ;//0x0018
    const avr32_dacifb_imr_t             IMR       ;
  };
  union {
    const unsigned long                  sr        ;//0x001c
    const avr32_dacifb_sr_t              SR        ;
  };
  union {
          unsigned long                  scr       ;//0x0020
          avr32_dacifb_scr_t             SCR       ;
  };
  union {
          unsigned long                  drca      ;//0x0024
          avr32_dacifb_drca_t            DRCA      ;
  };
  union {
          unsigned long                  drcb      ;//0x0028
          avr32_dacifb_drcb_t            DRCB      ;
  };
  union {
          unsigned long                  dr0       ;//0x002c
          avr32_dacifb_dr0_t             DR0       ;
  };
  union {
          unsigned long                  dr1       ;//0x0030
          avr32_dacifb_dr1_t             DR1       ;
  };
  union {
          unsigned long                  goc       ;//0x0034
          avr32_dacifb_goc_t             GOC       ;
  };
  union {
          unsigned long                  tra       ;//0x0038
          avr32_dacifb_tra_t             TRA       ;
  };
  union {
          unsigned long                  trb       ;//0x003c
          avr32_dacifb_trb_t             TRB       ;
  };
  union {
    const unsigned long                  version   ;//0x0040
    const avr32_dacifb_version_t         VERSION   ;
  };
} avr32_dacifb_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_DACIFB_100_H_INCLUDED*/
#endif

