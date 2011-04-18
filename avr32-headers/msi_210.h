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
 * Model        : UC3A3128
 * Revision     : $Revision: 74772 $
 * Checkin Date : $Date: 2010-05-14 06:51:12 +0200 (Fri, 14 May 2010) $ 
 *
 ****************************************************************************/
#ifndef AVR32_MSI_210_H_INCLUDED
#define AVR32_MSI_210_H_INCLUDED

#define AVR32_MSI_H_VERSION 210

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_MSI_<register>
 - Bitfield mask:   AVR32_MSI_<register>_<bitfield>
 - Bitfield offset: AVR32_MSI_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MSI_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_MSI_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_MSI_<bitfield>
 - Bitfield offset: AVR32_MSI_<bitfield>_OFFSET
 - Bitfield size:   AVR32_MSI_<bitfield>_SIZE
 - Bitfield values: AVR32_MSI_<bitfield>_<value name>
 - Bitfield values: AVR32_MSI_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_MSI_BRQ                                               1
#define AVR32_MSI_BRQ_MASK                                 0x00000002
#define AVR32_MSI_BRQ_OFFSET                                        1
#define AVR32_MSI_BRQ_SIZE                                          1
#define AVR32_MSI_BSY                                               0
#define AVR32_MSI_BSY_MASK                                 0x00000007
#define AVR32_MSI_BSY_OFFSET                                        0
#define AVR32_MSI_BSY_SIZE                                          3
#define AVR32_MSI_CD                                                5
#define AVR32_MSI_CD_MASK                                  0x00000020
#define AVR32_MSI_CD_OFFSET                                         5
#define AVR32_MSI_CD_SIZE                                           1
#define AVR32_MSI_CED                                               3
#define AVR32_MSI_CED_MASK                                 0x00000008
#define AVR32_MSI_CED_OFFSET                                        3
#define AVR32_MSI_CED_SIZE                                          1
#define AVR32_MSI_CLKDIV                                           16
#define AVR32_MSI_CLKDIV_MASK                              0x00ff0000
#define AVR32_MSI_CLKDIV_OFFSET                                    16
#define AVR32_MSI_CLKDIV_SIZE                                       8
#define AVR32_MSI_CNK                                               0
#define AVR32_MSI_CNK_MASK                                 0x00000001
#define AVR32_MSI_CNK_OFFSET                                        0
#define AVR32_MSI_CNK_SIZE                                          1
#define AVR32_MSI_CRC                                               3
#define AVR32_MSI_CRC_MASK                                 0x00000008
#define AVR32_MSI_CRC_OFFSET                                        3
#define AVR32_MSI_CRC_SIZE                                          1
#define AVR32_MSI_DATA                                              0
#define AVR32_MSI_DATA_MASK                                0xffffffff
#define AVR32_MSI_DATA_OFFSET                                       0
#define AVR32_MSI_DATA_SIZE                                        32
#define AVR32_MSI_DRQ                                               1
#define AVR32_MSI_DRQ_MASK                                 0x00000002
#define AVR32_MSI_DRQ_OFFSET                                        1
#define AVR32_MSI_DRQ_SIZE                                          1
#define AVR32_MSI_DSL                                              10
#define AVR32_MSI_DSL_FIFO                                 0x00000000
#define AVR32_MSI_DSL_MASK                                 0x00000400
#define AVR32_MSI_DSL_OFFSET                                       10
#define AVR32_MSI_DSL_SIZE                                          1
#define AVR32_MSI_DSZ                                               0
#define AVR32_MSI_DSZ_MASK                                 0x000003ff
#define AVR32_MSI_DSZ_OFFSET                                        0
#define AVR32_MSI_DSZ_SIZE                                         10
#define AVR32_MSI_EMP                                               5
#define AVR32_MSI_EMP_MASK                                 0x00000020
#define AVR32_MSI_EMP_OFFSET                                        5
#define AVR32_MSI_EMP_SIZE                                          1
#define AVR32_MSI_ERR                                               2
#define AVR32_MSI_ERR_MASK                                 0x00000004
#define AVR32_MSI_ERR_OFFSET                                        2
#define AVR32_MSI_ERR_SIZE                                          1
#define AVR32_MSI_EX_SET_CMD                               0x00000009
#define AVR32_MSI_FCLR                                              9
#define AVR32_MSI_FCLR_MASK                                0x00000200
#define AVR32_MSI_FCLR_OFFSET                                       9
#define AVR32_MSI_FCLR_SIZE                                         1
#define AVR32_MSI_FDIR                                              8
#define AVR32_MSI_FDIR_MASK                                0x00000100
#define AVR32_MSI_FDIR_OFFSET                                       8
#define AVR32_MSI_FDIR_RECEIVE                             0x00000001
#define AVR32_MSI_FDIR_SIZE                                         1
#define AVR32_MSI_FDIR_TRANSMIT                            0x00000000
#define AVR32_MSI_FIFO                                     0x00000000
#define AVR32_MSI_FUL                                               4
#define AVR32_MSI_FUL_MASK                                 0x00000010
#define AVR32_MSI_FUL_OFFSET                                        4
#define AVR32_MSI_FUL_SIZE                                          1
#define AVR32_MSI_GET_INT                                  0x00000007
#define AVR32_MSI_ISTA                                             16
#define AVR32_MSI_ISTA_MASK                                0x00010000
#define AVR32_MSI_ISTA_OFFSET                                      16
#define AVR32_MSI_ISTA_SIZE                                         1
#define AVR32_MSI_MSCMD                                    0x00000000
#define AVR32_MSI_MSCMD_DSL                                        10
#define AVR32_MSI_MSCMD_DSL_FIFO                           0x00000000
#define AVR32_MSI_MSCMD_DSL_MASK                           0x00000400
#define AVR32_MSI_MSCMD_DSL_OFFSET                                 10
#define AVR32_MSI_MSCMD_DSL_SIZE                                    1
#define AVR32_MSI_MSCMD_DSZ                                         0
#define AVR32_MSI_MSCMD_DSZ_MASK                           0x000003ff
#define AVR32_MSI_MSCMD_DSZ_OFFSET                                  0
#define AVR32_MSI_MSCMD_DSZ_SIZE                                   10
#define AVR32_MSI_MSCMD_TPC                                        12
#define AVR32_MSI_MSCMD_TPC_EX_SET_CMD                     0x00000009
#define AVR32_MSI_MSCMD_TPC_GET_INT                        0x00000007
#define AVR32_MSI_MSCMD_TPC_MASK                           0x0000f000
#define AVR32_MSI_MSCMD_TPC_OFFSET                                 12
#define AVR32_MSI_MSCMD_TPC_READ_LONG_DATA                 0x00000002
#define AVR32_MSI_MSCMD_TPC_READ_PAGE_DATA                 0x00000002
#define AVR32_MSI_MSCMD_TPC_READ_REG                       0x00000004
#define AVR32_MSI_MSCMD_TPC_READ_SHORT_DATA                0x00000003
#define AVR32_MSI_MSCMD_TPC_SET_CMD                        0x0000000e
#define AVR32_MSI_MSCMD_TPC_SET_RW_REG_ADRS                0x00000008
#define AVR32_MSI_MSCMD_TPC_SIZE                                    4
#define AVR32_MSI_MSCMD_TPC_WRITE_LONG_DATA                0x0000000d
#define AVR32_MSI_MSCMD_TPC_WRITE_PAGE_DATA                0x0000000d
#define AVR32_MSI_MSCMD_TPC_WRITE_REG                      0x0000000b
#define AVR32_MSI_MSCMD_TPC_WRITE_SHORT_DATA               0x0000000c
#define AVR32_MSI_MSDAT                                    0x00000004
#define AVR32_MSI_MSDAT_DATA                                        0
#define AVR32_MSI_MSDAT_DATA_MASK                          0xffffffff
#define AVR32_MSI_MSDAT_DATA_OFFSET                                 0
#define AVR32_MSI_MSDAT_DATA_SIZE                                  32
#define AVR32_MSI_MSIDR                                    0x0000001c
#define AVR32_MSI_MSIDR_CD                                          5
#define AVR32_MSI_MSIDR_CD_MASK                            0x00000020
#define AVR32_MSI_MSIDR_CD_OFFSET                                   5
#define AVR32_MSI_MSIDR_CD_SIZE                                     1
#define AVR32_MSI_MSIDR_CRC                                         3
#define AVR32_MSI_MSIDR_CRC_MASK                           0x00000008
#define AVR32_MSI_MSIDR_CRC_OFFSET                                  3
#define AVR32_MSI_MSIDR_CRC_SIZE                                    1
#define AVR32_MSI_MSIDR_DRQ                                         1
#define AVR32_MSI_MSIDR_DRQ_MASK                           0x00000002
#define AVR32_MSI_MSIDR_DRQ_OFFSET                                  1
#define AVR32_MSI_MSIDR_DRQ_SIZE                                    1
#define AVR32_MSI_MSIDR_MSINT                                       2
#define AVR32_MSI_MSIDR_MSINT_MASK                         0x00000004
#define AVR32_MSI_MSIDR_MSINT_OFFSET                                2
#define AVR32_MSI_MSIDR_MSINT_SIZE                                  1
#define AVR32_MSI_MSIDR_PEND                                        0
#define AVR32_MSI_MSIDR_PEND_MASK                          0x00000001
#define AVR32_MSI_MSIDR_PEND_OFFSET                                 0
#define AVR32_MSI_MSIDR_PEND_SIZE                                   1
#define AVR32_MSI_MSIDR_RBF                                        11
#define AVR32_MSI_MSIDR_RBF_MASK                           0x00000800
#define AVR32_MSI_MSIDR_RBF_OFFSET                                 11
#define AVR32_MSI_MSIDR_RBF_SIZE                                    1
#define AVR32_MSI_MSIDR_RDE                                         9
#define AVR32_MSI_MSIDR_RDE_MASK                           0x00000200
#define AVR32_MSI_MSIDR_RDE_OFFSET                                  9
#define AVR32_MSI_MSIDR_RDE_SIZE                                    1
#define AVR32_MSI_MSIDR_TBE                                        10
#define AVR32_MSI_MSIDR_TBE_MASK                           0x00000400
#define AVR32_MSI_MSIDR_TBE_OFFSET                                 10
#define AVR32_MSI_MSIDR_TBE_SIZE                                    1
#define AVR32_MSI_MSIDR_TDE                                         8
#define AVR32_MSI_MSIDR_TDE_MASK                           0x00000100
#define AVR32_MSI_MSIDR_TDE_OFFSET                                  8
#define AVR32_MSI_MSIDR_TDE_SIZE                                    1
#define AVR32_MSI_MSIDR_TOE                                         4
#define AVR32_MSI_MSIDR_TOE_MASK                           0x00000010
#define AVR32_MSI_MSIDR_TOE_OFFSET                                  4
#define AVR32_MSI_MSIDR_TOE_SIZE                                    1
#define AVR32_MSI_MSIER                                    0x00000018
#define AVR32_MSI_MSIER_CD                                          5
#define AVR32_MSI_MSIER_CD_MASK                            0x00000020
#define AVR32_MSI_MSIER_CD_OFFSET                                   5
#define AVR32_MSI_MSIER_CD_SIZE                                     1
#define AVR32_MSI_MSIER_CRC                                         3
#define AVR32_MSI_MSIER_CRC_MASK                           0x00000008
#define AVR32_MSI_MSIER_CRC_OFFSET                                  3
#define AVR32_MSI_MSIER_CRC_SIZE                                    1
#define AVR32_MSI_MSIER_DRQ                                         1
#define AVR32_MSI_MSIER_DRQ_MASK                           0x00000002
#define AVR32_MSI_MSIER_DRQ_OFFSET                                  1
#define AVR32_MSI_MSIER_DRQ_SIZE                                    1
#define AVR32_MSI_MSIER_MSINT                                       2
#define AVR32_MSI_MSIER_MSINT_MASK                         0x00000004
#define AVR32_MSI_MSIER_MSINT_OFFSET                                2
#define AVR32_MSI_MSIER_MSINT_SIZE                                  1
#define AVR32_MSI_MSIER_PEND                                        0
#define AVR32_MSI_MSIER_PEND_MASK                          0x00000001
#define AVR32_MSI_MSIER_PEND_OFFSET                                 0
#define AVR32_MSI_MSIER_PEND_SIZE                                   1
#define AVR32_MSI_MSIER_RBF                                        11
#define AVR32_MSI_MSIER_RBF_MASK                           0x00000800
#define AVR32_MSI_MSIER_RBF_OFFSET                                 11
#define AVR32_MSI_MSIER_RBF_SIZE                                    1
#define AVR32_MSI_MSIER_RDE                                         9
#define AVR32_MSI_MSIER_RDE_MASK                           0x00000200
#define AVR32_MSI_MSIER_RDE_OFFSET                                  9
#define AVR32_MSI_MSIER_RDE_SIZE                                    1
#define AVR32_MSI_MSIER_TBE                                        10
#define AVR32_MSI_MSIER_TBE_MASK                           0x00000400
#define AVR32_MSI_MSIER_TBE_OFFSET                                 10
#define AVR32_MSI_MSIER_TBE_SIZE                                    1
#define AVR32_MSI_MSIER_TDE                                         8
#define AVR32_MSI_MSIER_TDE_MASK                           0x00000100
#define AVR32_MSI_MSIER_TDE_OFFSET                                  8
#define AVR32_MSI_MSIER_TDE_SIZE                                    1
#define AVR32_MSI_MSIER_TOE                                         4
#define AVR32_MSI_MSIER_TOE_MASK                           0x00000010
#define AVR32_MSI_MSIER_TOE_OFFSET                                  4
#define AVR32_MSI_MSIER_TOE_SIZE                                    1
#define AVR32_MSI_MSIMR                                    0x00000020
#define AVR32_MSI_MSIMR_CD                                          5
#define AVR32_MSI_MSIMR_CD_MASK                            0x00000020
#define AVR32_MSI_MSIMR_CD_OFFSET                                   5
#define AVR32_MSI_MSIMR_CD_SIZE                                     1
#define AVR32_MSI_MSIMR_CRC                                         3
#define AVR32_MSI_MSIMR_CRC_MASK                           0x00000008
#define AVR32_MSI_MSIMR_CRC_OFFSET                                  3
#define AVR32_MSI_MSIMR_CRC_SIZE                                    1
#define AVR32_MSI_MSIMR_DRQ                                         1
#define AVR32_MSI_MSIMR_DRQ_MASK                           0x00000002
#define AVR32_MSI_MSIMR_DRQ_OFFSET                                  1
#define AVR32_MSI_MSIMR_DRQ_SIZE                                    1
#define AVR32_MSI_MSIMR_MSINT                                       2
#define AVR32_MSI_MSIMR_MSINT_MASK                         0x00000004
#define AVR32_MSI_MSIMR_MSINT_OFFSET                                2
#define AVR32_MSI_MSIMR_MSINT_SIZE                                  1
#define AVR32_MSI_MSIMR_PEND                                        0
#define AVR32_MSI_MSIMR_PEND_MASK                          0x00000001
#define AVR32_MSI_MSIMR_PEND_OFFSET                                 0
#define AVR32_MSI_MSIMR_PEND_SIZE                                   1
#define AVR32_MSI_MSIMR_RBF                                        11
#define AVR32_MSI_MSIMR_RBF_MASK                           0x00000800
#define AVR32_MSI_MSIMR_RBF_OFFSET                                 11
#define AVR32_MSI_MSIMR_RBF_SIZE                                    1
#define AVR32_MSI_MSIMR_RDE                                         9
#define AVR32_MSI_MSIMR_RDE_MASK                           0x00000200
#define AVR32_MSI_MSIMR_RDE_OFFSET                                  9
#define AVR32_MSI_MSIMR_RDE_SIZE                                    1
#define AVR32_MSI_MSIMR_TBE                                        10
#define AVR32_MSI_MSIMR_TBE_MASK                           0x00000400
#define AVR32_MSI_MSIMR_TBE_OFFSET                                 10
#define AVR32_MSI_MSIMR_TBE_SIZE                                    1
#define AVR32_MSI_MSIMR_TDE                                         8
#define AVR32_MSI_MSIMR_TDE_MASK                           0x00000100
#define AVR32_MSI_MSIMR_TDE_OFFSET                                  8
#define AVR32_MSI_MSIMR_TDE_SIZE                                    1
#define AVR32_MSI_MSIMR_TOE                                         4
#define AVR32_MSI_MSIMR_TOE_MASK                           0x00000010
#define AVR32_MSI_MSIMR_TOE_OFFSET                                  4
#define AVR32_MSI_MSIMR_TOE_SIZE                                    1
#define AVR32_MSI_MSINT                                             2
#define AVR32_MSI_MSINT_MASK                               0x00000004
#define AVR32_MSI_MSINT_OFFSET                                      2
#define AVR32_MSI_MSINT_SIZE                                        1
#define AVR32_MSI_MSISCR                                   0x00000014
#define AVR32_MSI_MSISCR_CD                                         5
#define AVR32_MSI_MSISCR_CD_MASK                           0x00000020
#define AVR32_MSI_MSISCR_CD_OFFSET                                  5
#define AVR32_MSI_MSISCR_CD_SIZE                                    1
#define AVR32_MSI_MSISCR_CRC                                        3
#define AVR32_MSI_MSISCR_CRC_MASK                          0x00000008
#define AVR32_MSI_MSISCR_CRC_OFFSET                                 3
#define AVR32_MSI_MSISCR_CRC_SIZE                                   1
#define AVR32_MSI_MSISCR_DRQ                                        1
#define AVR32_MSI_MSISCR_DRQ_MASK                          0x00000002
#define AVR32_MSI_MSISCR_DRQ_OFFSET                                 1
#define AVR32_MSI_MSISCR_DRQ_SIZE                                   1
#define AVR32_MSI_MSISCR_MSINT                                      2
#define AVR32_MSI_MSISCR_MSINT_MASK                        0x00000004
#define AVR32_MSI_MSISCR_MSINT_OFFSET                               2
#define AVR32_MSI_MSISCR_MSINT_SIZE                                 1
#define AVR32_MSI_MSISCR_PEND                                       0
#define AVR32_MSI_MSISCR_PEND_MASK                         0x00000001
#define AVR32_MSI_MSISCR_PEND_OFFSET                                0
#define AVR32_MSI_MSISCR_PEND_SIZE                                  1
#define AVR32_MSI_MSISCR_RBF                                       11
#define AVR32_MSI_MSISCR_RBF_MASK                          0x00000800
#define AVR32_MSI_MSISCR_RBF_OFFSET                                11
#define AVR32_MSI_MSISCR_RBF_SIZE                                   1
#define AVR32_MSI_MSISCR_RDE                                        9
#define AVR32_MSI_MSISCR_RDE_MASK                          0x00000200
#define AVR32_MSI_MSISCR_RDE_OFFSET                                 9
#define AVR32_MSI_MSISCR_RDE_SIZE                                   1
#define AVR32_MSI_MSISCR_TBE                                       10
#define AVR32_MSI_MSISCR_TBE_MASK                          0x00000400
#define AVR32_MSI_MSISCR_TBE_OFFSET                                10
#define AVR32_MSI_MSISCR_TBE_SIZE                                   1
#define AVR32_MSI_MSISCR_TDE                                        8
#define AVR32_MSI_MSISCR_TDE_MASK                          0x00000100
#define AVR32_MSI_MSISCR_TDE_OFFSET                                 8
#define AVR32_MSI_MSISCR_TDE_SIZE                                   1
#define AVR32_MSI_MSISCR_TOE                                        4
#define AVR32_MSI_MSISCR_TOE_MASK                          0x00000010
#define AVR32_MSI_MSISCR_TOE_OFFSET                                 4
#define AVR32_MSI_MSISCR_TOE_SIZE                                   1
#define AVR32_MSI_MSISR                                    0x00000010
#define AVR32_MSI_MSISR_CD                                          5
#define AVR32_MSI_MSISR_CD_MASK                            0x00000020
#define AVR32_MSI_MSISR_CD_OFFSET                                   5
#define AVR32_MSI_MSISR_CD_SIZE                                     1
#define AVR32_MSI_MSISR_CRC                                         3
#define AVR32_MSI_MSISR_CRC_MASK                           0x00000008
#define AVR32_MSI_MSISR_CRC_OFFSET                                  3
#define AVR32_MSI_MSISR_CRC_SIZE                                    1
#define AVR32_MSI_MSISR_DRQ                                         1
#define AVR32_MSI_MSISR_DRQ_MASK                           0x00000002
#define AVR32_MSI_MSISR_DRQ_OFFSET                                  1
#define AVR32_MSI_MSISR_DRQ_SIZE                                    1
#define AVR32_MSI_MSISR_MSINT                                       2
#define AVR32_MSI_MSISR_MSINT_MASK                         0x00000004
#define AVR32_MSI_MSISR_MSINT_OFFSET                                2
#define AVR32_MSI_MSISR_MSINT_SIZE                                  1
#define AVR32_MSI_MSISR_PEND                                        0
#define AVR32_MSI_MSISR_PEND_MASK                          0x00000001
#define AVR32_MSI_MSISR_PEND_OFFSET                                 0
#define AVR32_MSI_MSISR_PEND_SIZE                                   1
#define AVR32_MSI_MSISR_RBF                                        11
#define AVR32_MSI_MSISR_RBF_MASK                           0x00000800
#define AVR32_MSI_MSISR_RBF_OFFSET                                 11
#define AVR32_MSI_MSISR_RBF_SIZE                                    1
#define AVR32_MSI_MSISR_RDE                                         9
#define AVR32_MSI_MSISR_RDE_MASK                           0x00000200
#define AVR32_MSI_MSISR_RDE_OFFSET                                  9
#define AVR32_MSI_MSISR_RDE_SIZE                                    1
#define AVR32_MSI_MSISR_TBE                                        10
#define AVR32_MSI_MSISR_TBE_MASK                           0x00000400
#define AVR32_MSI_MSISR_TBE_OFFSET                                 10
#define AVR32_MSI_MSISR_TBE_SIZE                                    1
#define AVR32_MSI_MSISR_TDE                                         8
#define AVR32_MSI_MSISR_TDE_MASK                           0x00000100
#define AVR32_MSI_MSISR_TDE_OFFSET                                  8
#define AVR32_MSI_MSISR_TDE_SIZE                                    1
#define AVR32_MSI_MSISR_TOE                                         4
#define AVR32_MSI_MSISR_TOE_MASK                           0x00000010
#define AVR32_MSI_MSISR_TOE_OFFSET                                  4
#define AVR32_MSI_MSISR_TOE_SIZE                                    1
#define AVR32_MSI_MSSR                                     0x00000008
#define AVR32_MSI_MSSR_BRQ                                          1
#define AVR32_MSI_MSSR_BRQ_MASK                            0x00000002
#define AVR32_MSI_MSSR_BRQ_OFFSET                                   1
#define AVR32_MSI_MSSR_BRQ_SIZE                                     1
#define AVR32_MSI_MSSR_CED                                          3
#define AVR32_MSI_MSSR_CED_MASK                            0x00000008
#define AVR32_MSI_MSSR_CED_OFFSET                                   3
#define AVR32_MSI_MSSR_CED_SIZE                                     1
#define AVR32_MSI_MSSR_CNK                                          0
#define AVR32_MSI_MSSR_CNK_MASK                            0x00000001
#define AVR32_MSI_MSSR_CNK_OFFSET                                   0
#define AVR32_MSI_MSSR_CNK_SIZE                                     1
#define AVR32_MSI_MSSR_EMP                                          5
#define AVR32_MSI_MSSR_EMP_MASK                            0x00000020
#define AVR32_MSI_MSSR_EMP_OFFSET                                   5
#define AVR32_MSI_MSSR_EMP_SIZE                                     1
#define AVR32_MSI_MSSR_ERR                                          2
#define AVR32_MSI_MSSR_ERR_MASK                            0x00000004
#define AVR32_MSI_MSSR_ERR_OFFSET                                   2
#define AVR32_MSI_MSSR_ERR_SIZE                                     1
#define AVR32_MSI_MSSR_FUL                                          4
#define AVR32_MSI_MSSR_FUL_MASK                            0x00000010
#define AVR32_MSI_MSSR_FUL_OFFSET                                   4
#define AVR32_MSI_MSSR_FUL_SIZE                                     1
#define AVR32_MSI_MSSR_ISTA                                        16
#define AVR32_MSI_MSSR_ISTA_MASK                           0x00010000
#define AVR32_MSI_MSSR_ISTA_OFFSET                                 16
#define AVR32_MSI_MSSR_ISTA_SIZE                                    1
#define AVR32_MSI_MSSR_RDY                                         12
#define AVR32_MSI_MSSR_RDY_MASK                            0x00001000
#define AVR32_MSI_MSSR_RDY_OFFSET                                  12
#define AVR32_MSI_MSSR_RDY_SIZE                                     1
#define AVR32_MSI_MSSYS                                    0x0000000c
#define AVR32_MSI_MSSYS_BSY                                         0
#define AVR32_MSI_MSSYS_BSY_MASK                           0x00000007
#define AVR32_MSI_MSSYS_BSY_OFFSET                                  0
#define AVR32_MSI_MSSYS_BSY_SIZE                                    3
#define AVR32_MSI_MSSYS_CLKDIV                                     16
#define AVR32_MSI_MSSYS_CLKDIV_MASK                        0x00ff0000
#define AVR32_MSI_MSSYS_CLKDIV_OFFSET                              16
#define AVR32_MSI_MSSYS_CLKDIV_SIZE                                 8
#define AVR32_MSI_MSSYS_FCLR                                        9
#define AVR32_MSI_MSSYS_FCLR_MASK                          0x00000200
#define AVR32_MSI_MSSYS_FCLR_OFFSET                                 9
#define AVR32_MSI_MSSYS_FCLR_SIZE                                   1
#define AVR32_MSI_MSSYS_FDIR                                        8
#define AVR32_MSI_MSSYS_FDIR_MASK                          0x00000100
#define AVR32_MSI_MSSYS_FDIR_OFFSET                                 8
#define AVR32_MSI_MSSYS_FDIR_RECEIVE                       0x00000001
#define AVR32_MSI_MSSYS_FDIR_SIZE                                   1
#define AVR32_MSI_MSSYS_FDIR_TRANSMIT                      0x00000000
#define AVR32_MSI_MSSYS_NOCRC                                      12
#define AVR32_MSI_MSSYS_NOCRC_MASK                         0x00001000
#define AVR32_MSI_MSSYS_NOCRC_OFFSET                               12
#define AVR32_MSI_MSSYS_NOCRC_SIZE                                  1
#define AVR32_MSI_MSSYS_REI                                         4
#define AVR32_MSI_MSSYS_REI_MASK                           0x00000010
#define AVR32_MSI_MSSYS_REI_OFFSET                                  4
#define AVR32_MSI_MSSYS_REI_SIZE                                    1
#define AVR32_MSI_MSSYS_REO                                         3
#define AVR32_MSI_MSSYS_REO_MASK                           0x00000008
#define AVR32_MSI_MSSYS_REO_OFFSET                                  3
#define AVR32_MSI_MSSYS_REO_SIZE                                    1
#define AVR32_MSI_MSSYS_RST                                        15
#define AVR32_MSI_MSSYS_RST_MASK                           0x00008000
#define AVR32_MSI_MSSYS_RST_OFFSET                                 15
#define AVR32_MSI_MSSYS_RST_SIZE                                    1
#define AVR32_MSI_MSSYS_SRAC                                       14
#define AVR32_MSI_MSSYS_SRAC_MASK                          0x00004000
#define AVR32_MSI_MSSYS_SRAC_OFFSET                                14
#define AVR32_MSI_MSSYS_SRAC_SIZE                                   1
#define AVR32_MSI_NOCRC                                            12
#define AVR32_MSI_NOCRC_MASK                               0x00001000
#define AVR32_MSI_NOCRC_OFFSET                                     12
#define AVR32_MSI_NOCRC_SIZE                                        1
#define AVR32_MSI_PEND                                              0
#define AVR32_MSI_PEND_MASK                                0x00000001
#define AVR32_MSI_PEND_OFFSET                                       0
#define AVR32_MSI_PEND_SIZE                                         1
#define AVR32_MSI_RBF                                              11
#define AVR32_MSI_RBF_MASK                                 0x00000800
#define AVR32_MSI_RBF_OFFSET                                       11
#define AVR32_MSI_RBF_SIZE                                          1
#define AVR32_MSI_RDE                                               9
#define AVR32_MSI_RDE_MASK                                 0x00000200
#define AVR32_MSI_RDE_OFFSET                                        9
#define AVR32_MSI_RDE_SIZE                                          1
#define AVR32_MSI_RDY                                              12
#define AVR32_MSI_RDY_MASK                                 0x00001000
#define AVR32_MSI_RDY_OFFSET                                       12
#define AVR32_MSI_RDY_SIZE                                          1
#define AVR32_MSI_READ_LONG_DATA                           0x00000002
#define AVR32_MSI_READ_PAGE_DATA                           0x00000002
#define AVR32_MSI_READ_REG                                 0x00000004
#define AVR32_MSI_READ_SHORT_DATA                          0x00000003
#define AVR32_MSI_RECEIVE                                  0x00000001
#define AVR32_MSI_REI                                               4
#define AVR32_MSI_REI_MASK                                 0x00000010
#define AVR32_MSI_REI_OFFSET                                        4
#define AVR32_MSI_REI_SIZE                                          1
#define AVR32_MSI_REO                                               3
#define AVR32_MSI_REO_MASK                                 0x00000008
#define AVR32_MSI_REO_OFFSET                                        3
#define AVR32_MSI_REO_SIZE                                          1
#define AVR32_MSI_RST                                              15
#define AVR32_MSI_RST_MASK                                 0x00008000
#define AVR32_MSI_RST_OFFSET                                       15
#define AVR32_MSI_RST_SIZE                                          1
#define AVR32_MSI_SET_CMD                                  0x0000000e
#define AVR32_MSI_SET_RW_REG_ADRS                          0x00000008
#define AVR32_MSI_SRAC                                             14
#define AVR32_MSI_SRAC_MASK                                0x00004000
#define AVR32_MSI_SRAC_OFFSET                                      14
#define AVR32_MSI_SRAC_SIZE                                         1
#define AVR32_MSI_TBE                                              10
#define AVR32_MSI_TBE_MASK                                 0x00000400
#define AVR32_MSI_TBE_OFFSET                                       10
#define AVR32_MSI_TBE_SIZE                                          1
#define AVR32_MSI_TDE                                               8
#define AVR32_MSI_TDE_MASK                                 0x00000100
#define AVR32_MSI_TDE_OFFSET                                        8
#define AVR32_MSI_TDE_SIZE                                          1
#define AVR32_MSI_TOE                                               4
#define AVR32_MSI_TOE_MASK                                 0x00000010
#define AVR32_MSI_TOE_OFFSET                                        4
#define AVR32_MSI_TOE_SIZE                                          1
#define AVR32_MSI_TPC                                              12
#define AVR32_MSI_TPC_EX_SET_CMD                           0x00000009
#define AVR32_MSI_TPC_GET_INT                              0x00000007
#define AVR32_MSI_TPC_MASK                                 0x0000f000
#define AVR32_MSI_TPC_OFFSET                                       12
#define AVR32_MSI_TPC_READ_LONG_DATA                       0x00000002
#define AVR32_MSI_TPC_READ_PAGE_DATA                       0x00000002
#define AVR32_MSI_TPC_READ_REG                             0x00000004
#define AVR32_MSI_TPC_READ_SHORT_DATA                      0x00000003
#define AVR32_MSI_TPC_SET_CMD                              0x0000000e
#define AVR32_MSI_TPC_SET_RW_REG_ADRS                      0x00000008
#define AVR32_MSI_TPC_SIZE                                          4
#define AVR32_MSI_TPC_WRITE_LONG_DATA                      0x0000000d
#define AVR32_MSI_TPC_WRITE_PAGE_DATA                      0x0000000d
#define AVR32_MSI_TPC_WRITE_REG                            0x0000000b
#define AVR32_MSI_TPC_WRITE_SHORT_DATA                     0x0000000c
#define AVR32_MSI_TRANSMIT                                 0x00000000
#define AVR32_MSI_VERSION                                  0x00000024
#define AVR32_MSI_VERSION_MASK                             0x00000fff
#define AVR32_MSI_VERSION_OFFSET                                    0
#define AVR32_MSI_VERSION_SIZE                                     12
#define AVR32_MSI_VERSION_VERSION                                   0
#define AVR32_MSI_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_MSI_VERSION_VERSION_OFFSET                            0
#define AVR32_MSI_VERSION_VERSION_SIZE                             12
#define AVR32_MSI_WRITE_LONG_DATA                          0x0000000d
#define AVR32_MSI_WRITE_PAGE_DATA                          0x0000000d
#define AVR32_MSI_WRITE_REG                                0x0000000b
#define AVR32_MSI_WRITE_SHORT_DATA                         0x0000000c




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_msi_mscmd_t {
    unsigned int                 :16;
    unsigned int tpc             : 4;
    unsigned int                 : 1;
    unsigned int dsl             : 1;
    unsigned int dsz             :10;
} avr32_msi_mscmd_t;



typedef struct avr32_msi_mssr_t {
    unsigned int                 :15;
    unsigned int ista            : 1;
    unsigned int                 : 3;
    unsigned int rdy             : 1;
    unsigned int                 : 6;
    unsigned int emp             : 1;
    unsigned int ful             : 1;
    unsigned int ced             : 1;
    unsigned int err             : 1;
    unsigned int brq             : 1;
    unsigned int cnk             : 1;
} avr32_msi_mssr_t;



typedef struct avr32_msi_mssys_t {
    unsigned int                 : 8;
    unsigned int clkdiv          : 8;
    unsigned int rst             : 1;
    unsigned int srac            : 1;
    unsigned int                 : 1;
    unsigned int nocrc           : 1;
    unsigned int                 : 2;
    unsigned int fclr            : 1;
    unsigned int fdir            : 1;
    unsigned int                 : 3;
    unsigned int rei             : 1;
    unsigned int reo             : 1;
    unsigned int bsy             : 3;
} avr32_msi_mssys_t;



typedef struct avr32_msi_msisr_t {
    unsigned int                 :20;
    unsigned int rbf             : 1;
    unsigned int tbe             : 1;
    unsigned int rde             : 1;
    unsigned int tde             : 1;
    unsigned int                 : 2;
    unsigned int cd              : 1;
    unsigned int toe             : 1;
    unsigned int crc             : 1;
    unsigned int msint           : 1;
    unsigned int drq             : 1;
    unsigned int pend            : 1;
} avr32_msi_msisr_t;



typedef struct avr32_msi_msiscr_t {
    unsigned int                 :20;
    unsigned int rbf             : 1;
    unsigned int tbe             : 1;
    unsigned int rde             : 1;
    unsigned int tde             : 1;
    unsigned int                 : 2;
    unsigned int cd              : 1;
    unsigned int toe             : 1;
    unsigned int crc             : 1;
    unsigned int msint           : 1;
    unsigned int drq             : 1;
    unsigned int pend            : 1;
} avr32_msi_msiscr_t;



typedef struct avr32_msi_msier_t {
    unsigned int                 :20;
    unsigned int rbf             : 1;
    unsigned int tbe             : 1;
    unsigned int rde             : 1;
    unsigned int tde             : 1;
    unsigned int                 : 2;
    unsigned int cd              : 1;
    unsigned int toe             : 1;
    unsigned int crc             : 1;
    unsigned int msint           : 1;
    unsigned int drq             : 1;
    unsigned int pend            : 1;
} avr32_msi_msier_t;



typedef struct avr32_msi_msidr_t {
    unsigned int                 :20;
    unsigned int rbf             : 1;
    unsigned int tbe             : 1;
    unsigned int rde             : 1;
    unsigned int tde             : 1;
    unsigned int                 : 2;
    unsigned int cd              : 1;
    unsigned int toe             : 1;
    unsigned int crc             : 1;
    unsigned int msint           : 1;
    unsigned int drq             : 1;
    unsigned int pend            : 1;
} avr32_msi_msidr_t;



typedef struct avr32_msi_msimr_t {
    unsigned int                 :20;
    unsigned int rbf             : 1;
    unsigned int tbe             : 1;
    unsigned int rde             : 1;
    unsigned int tde             : 1;
    unsigned int                 : 2;
    unsigned int cd              : 1;
    unsigned int toe             : 1;
    unsigned int crc             : 1;
    unsigned int msint           : 1;
    unsigned int drq             : 1;
    unsigned int pend            : 1;
} avr32_msi_msimr_t;



typedef struct avr32_msi_version_t {
    unsigned int                 :20;
    unsigned int version         :12;
} avr32_msi_version_t;



typedef struct avr32_msi_t {
  union {
          unsigned long                  mscmd     ;//0x0000
          avr32_msi_mscmd_t              MSCMD     ;
  };
          unsigned long                  msdat     ;//0x0004
  union {
    const unsigned long                  mssr      ;//0x0008
    const avr32_msi_mssr_t               MSSR      ;
  };
  union {
          unsigned long                  mssys     ;//0x000c
          avr32_msi_mssys_t              MSSYS     ;
  };
  union {
    const unsigned long                  msisr     ;//0x0010
    const avr32_msi_msisr_t              MSISR     ;
  };
  union {
          unsigned long                  msiscr    ;//0x0014
          avr32_msi_msiscr_t             MSISCR    ;
  };
  union {
          unsigned long                  msier     ;//0x0018
          avr32_msi_msier_t              MSIER     ;
  };
  union {
          unsigned long                  msidr     ;//0x001c
          avr32_msi_msidr_t              MSIDR     ;
  };
  union {
    const unsigned long                  msimr     ;//0x0020
    const avr32_msi_msimr_t              MSIMR     ;
  };
  union {
    const unsigned long                  version   ;//0x0024
    const avr32_msi_version_t            VERSION   ;
  };
} avr32_msi_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_MSI_210_H_INCLUDED*/
#endif

