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
#ifndef AVR32_CORE_C3_100_H_INCLUDED
#define AVR32_CORE_C3_100_H_INCLUDED

#define AVR32_CORE_C3_H_VERSION 100

#include "avr32/abi.h"

#define AVR32_CORE_ID                                  "C3"

#define AVR32_ACBA                                     0x00000008
#define AVR32_BEAR                                     0x0000013c
#define AVR32_COMPARE                                  0x0000010c
#define AVR32_CONFIG0                                  0x00000100
#define AVR32_CONFIG0_AR                                       10
#define AVR32_CONFIG0_AR_MASK                          0x00001c00
#define AVR32_CONFIG0_AR_OFFSET                                10
#define AVR32_CONFIG0_AR_SIZE                                   3
#define AVR32_CONFIG0_AT                                       13
#define AVR32_CONFIG0_AT_AVR32A                        0x00000000
#define AVR32_CONFIG0_AT_AVR32B                        0x00000001
#define AVR32_CONFIG0_AT_MASK                          0x0000e000
#define AVR32_CONFIG0_AT_OFFSET                                13
#define AVR32_CONFIG0_AT_SIZE                                   3
#define AVR32_CONFIG0_D                                         1
#define AVR32_CONFIG0_D_MASK                           0x00000002
#define AVR32_CONFIG0_D_OFFSET                                  1
#define AVR32_CONFIG0_D_SIZE                                    1
#define AVR32_CONFIG0_F                                         6
#define AVR32_CONFIG0_F_MASK                           0x00000040
#define AVR32_CONFIG0_F_OFFSET                                  6
#define AVR32_CONFIG0_F_SIZE                                    1
#define AVR32_CONFIG0_J                                         5
#define AVR32_CONFIG0_J_MASK                           0x00000020
#define AVR32_CONFIG0_J_OFFSET                                  5
#define AVR32_CONFIG0_J_SIZE                                    1
#define AVR32_CONFIG0_MMUT                                      7
#define AVR32_CONFIG0_MMUT_ITLB_DTLB                   0x00000001
#define AVR32_CONFIG0_MMUT_MASK                        0x00000380
#define AVR32_CONFIG0_MMUT_MPU                         0x00000003
#define AVR32_CONFIG0_MMUT_NONE                        0x00000000
#define AVR32_CONFIG0_MMUT_OFFSET                               7
#define AVR32_CONFIG0_MMUT_SHARED_TLB                  0x00000002
#define AVR32_CONFIG0_MMUT_SIZE                                 3
#define AVR32_CONFIG0_O                                         3
#define AVR32_CONFIG0_O_MASK                           0x00000008
#define AVR32_CONFIG0_O_OFFSET                                  3
#define AVR32_CONFIG0_O_SIZE                                    1
#define AVR32_CONFIG0_P                                         4
#define AVR32_CONFIG0_PROCESSORID                              24
#define AVR32_CONFIG0_PROCESSORID_AP7                  0x00000001
#define AVR32_CONFIG0_PROCESSORID_MASK                 0xff000000
#define AVR32_CONFIG0_PROCESSORID_OFFSET                       24
#define AVR32_CONFIG0_PROCESSORID_SIZE                          8
#define AVR32_CONFIG0_PROCESSORID_UC3                  0x00000002
#define AVR32_CONFIG0_PROCESSORREVISION                        16
#define AVR32_CONFIG0_PROCESSORREVISION_MASK           0x000f0000
#define AVR32_CONFIG0_PROCESSORREVISION_OFFSET                 16
#define AVR32_CONFIG0_PROCESSORREVISION_SIZE                    4
#define AVR32_CONFIG0_P_MASK                           0x00000010
#define AVR32_CONFIG0_P_OFFSET                                  4
#define AVR32_CONFIG0_P_SIZE                                    1
#define AVR32_CONFIG0_R                                         0
#define AVR32_CONFIG0_R_MASK                           0x00000001
#define AVR32_CONFIG0_R_OFFSET                                  0
#define AVR32_CONFIG0_R_SIZE                                    1
#define AVR32_CONFIG0_S                                         2
#define AVR32_CONFIG0_S_MASK                           0x00000004
#define AVR32_CONFIG0_S_OFFSET                                  2
#define AVR32_CONFIG0_S_SIZE                                    1
#define AVR32_CONFIG1                                  0x00000104
#define AVR32_CONFIG1_DASS                                      0
#define AVR32_CONFIG1_DASS_MASK                        0x00000007
#define AVR32_CONFIG1_DASS_OFFSET                               0
#define AVR32_CONFIG1_DASS_SIZE                                 3
#define AVR32_CONFIG1_DLSZ                                      3
#define AVR32_CONFIG1_DLSZ_MASK                        0x00000038
#define AVR32_CONFIG1_DLSZ_OFFSET                               3
#define AVR32_CONFIG1_DLSZ_SIZE                                 3
#define AVR32_CONFIG1_DMMUSZ                                   20
#define AVR32_CONFIG1_DMMUSZ_MASK                      0x03f00000
#define AVR32_CONFIG1_DMMUSZ_OFFSET                            20
#define AVR32_CONFIG1_DMMUSZ_SIZE                               6
#define AVR32_CONFIG1_DSET                                      6
#define AVR32_CONFIG1_DSET_MASK                        0x000003c0
#define AVR32_CONFIG1_DSET_OFFSET                               6
#define AVR32_CONFIG1_DSET_SIZE                                 4
#define AVR32_CONFIG1_IASS                                     10
#define AVR32_CONFIG1_IASS_MASK                        0x00001c00
#define AVR32_CONFIG1_IASS_OFFSET                              10
#define AVR32_CONFIG1_IASS_SIZE                                 3
#define AVR32_CONFIG1_ILSZ                                     13
#define AVR32_CONFIG1_ILSZ_MASK                        0x0000e000
#define AVR32_CONFIG1_ILSZ_OFFSET                              13
#define AVR32_CONFIG1_ILSZ_SIZE                                 3
#define AVR32_CONFIG1_IMMUSZ                                   26
#define AVR32_CONFIG1_IMMUSZ_MASK                      0xfc000000
#define AVR32_CONFIG1_IMMUSZ_OFFSET                            26
#define AVR32_CONFIG1_IMMUSZ_SIZE                               6
#define AVR32_CONFIG1_ISET                                     16
#define AVR32_CONFIG1_ISET_MASK                        0x000f0000
#define AVR32_CONFIG1_ISET_OFFSET                              16
#define AVR32_CONFIG1_ISET_SIZE                                 4
#define AVR32_COUNT                                    0x00000108
#define AVR32_CPUCR                                    0x0000000c
#define AVR32_CPUCR_BE                                          1
#define AVR32_CPUCR_BE_MASK                            0x00000002
#define AVR32_CPUCR_BE_OFFSET                                   1
#define AVR32_CPUCR_BE_SIZE                                     1
#define AVR32_CPUCR_BI                                          0
#define AVR32_CPUCR_BI_MASK                            0x00000001
#define AVR32_CPUCR_BI_OFFSET                                   0
#define AVR32_CPUCR_BI_SIZE                                     1
#define AVR32_CPUCR_COP0EN                                     24
#define AVR32_CPUCR_COP0EN_MASK                        0x01000000
#define AVR32_CPUCR_COP0EN_OFFSET                              24
#define AVR32_CPUCR_COP0EN_SIZE                                 1
#define AVR32_CPUCR_COP1EN                                     25
#define AVR32_CPUCR_COP1EN_MASK                        0x02000000
#define AVR32_CPUCR_COP1EN_OFFSET                              25
#define AVR32_CPUCR_COP1EN_SIZE                                 1
#define AVR32_CPUCR_COP2EN                                     26
#define AVR32_CPUCR_COP2EN_MASK                        0x04000000
#define AVR32_CPUCR_COP2EN_OFFSET                              26
#define AVR32_CPUCR_COP2EN_SIZE                                 1
#define AVR32_CPUCR_COP3EN                                     27
#define AVR32_CPUCR_COP3EN_MASK                        0x08000000
#define AVR32_CPUCR_COP3EN_OFFSET                              27
#define AVR32_CPUCR_COP3EN_SIZE                                 1
#define AVR32_CPUCR_COP4EN                                     28
#define AVR32_CPUCR_COP4EN_MASK                        0x10000000
#define AVR32_CPUCR_COP4EN_OFFSET                              28
#define AVR32_CPUCR_COP4EN_SIZE                                 1
#define AVR32_CPUCR_COP5EN                                     29
#define AVR32_CPUCR_COP5EN_MASK                        0x20000000
#define AVR32_CPUCR_COP5EN_OFFSET                              29
#define AVR32_CPUCR_COP5EN_SIZE                                 1
#define AVR32_CPUCR_COP6EN                                     30
#define AVR32_CPUCR_COP6EN_MASK                        0x40000000
#define AVR32_CPUCR_COP6EN_OFFSET                              30
#define AVR32_CPUCR_COP6EN_SIZE                                 1
#define AVR32_CPUCR_COP7EN                                     31
#define AVR32_CPUCR_COP7EN_MASK                        0x80000000
#define AVR32_CPUCR_COP7EN_OFFSET                              31
#define AVR32_CPUCR_COP7EN_SIZE                                 1
#define AVR32_CPUCR_FE                                          2
#define AVR32_CPUCR_FE_MASK                            0x00000004
#define AVR32_CPUCR_FE_OFFSET                                   2
#define AVR32_CPUCR_FE_SIZE                                     1
#define AVR32_CPUCR_IBE                                         4
#define AVR32_CPUCR_IBE_MASK                           0x00000010
#define AVR32_CPUCR_IBE_OFFSET                                  4
#define AVR32_CPUCR_IBE_SIZE                                    1
#define AVR32_CPUCR_IEE                                         5
#define AVR32_CPUCR_IEE_MASK                           0x00000020
#define AVR32_CPUCR_IEE_OFFSET                                  5
#define AVR32_CPUCR_IEE_SIZE                                    1
#define AVR32_CPUCR_RE                                          3
#define AVR32_CPUCR_RE_MASK                            0x00000008
#define AVR32_CPUCR_RE_OFFSET                                   3
#define AVR32_CPUCR_RE_SIZE                                     1
#define AVR32_ECR                                      0x00000010
#define AVR32_ECR_ECR                                           0
#define AVR32_ECR_ECR_ADDR_ALIGN_R                     0x0000000d
#define AVR32_ECR_ECR_ADDR_ALIGN_W                     0x0000000e
#define AVR32_ECR_ECR_ADDR_ALIGN_X                     0x00000005
#define AVR32_ECR_ECR_BUS_ERROR_READ                   0x00000003
#define AVR32_ECR_ECR_BUS_ERROR_WRITE                  0x00000002
#define AVR32_ECR_ECR_COPROC_ABSENT                    0x0000000c
#define AVR32_ECR_ECR_DEBUG                            0x00000007
#define AVR32_ECR_ECR_DTLB_MODIFIED                    0x00000011
#define AVR32_ECR_ECR_FPE                              0x0000000b
#define AVR32_ECR_ECR_ILLEGAL_OPCODE                   0x00000008
#define AVR32_ECR_ECR_MASK                             0xffffffff
#define AVR32_ECR_ECR_NMI                              0x00000004
#define AVR32_ECR_ECR_OFFSET                                    0
#define AVR32_ECR_ECR_PRIVILEGE_VIOLATION              0x0000000a
#define AVR32_ECR_ECR_PROTECTION_R                     0x0000000f
#define AVR32_ECR_ECR_PROTECTION_W                     0x00000010
#define AVR32_ECR_ECR_PROTECTION_X                     0x00000006
#define AVR32_ECR_ECR_SIZE                                     32
#define AVR32_ECR_ECR_TLB_MISS_R                       0x00000018
#define AVR32_ECR_ECR_TLB_MISS_W                       0x0000001c
#define AVR32_ECR_ECR_TLB_MISS_X                       0x00000014
#define AVR32_ECR_ECR_TLB_MULTIPLE                     0x00000001
#define AVR32_ECR_ECR_UNIMPL_INSTRUCTION               0x00000009
#define AVR32_ECR_ECR_UNRECOVERABLE                    0x00000000
#define AVR32_EVBA                                     0x00000004
#define AVR32_JAVA_LV0                                 0x0000005c
#define AVR32_JAVA_LV1                                 0x00000060
#define AVR32_JAVA_LV2                                 0x00000064
#define AVR32_JAVA_LV3                                 0x00000068
#define AVR32_JAVA_LV4                                 0x0000006c
#define AVR32_JAVA_LV5                                 0x00000070
#define AVR32_JAVA_LV6                                 0x00000074
#define AVR32_JAVA_LV7                                 0x00000078
#define AVR32_JBCR                                     0x00000080
#define AVR32_JECR                                     0x00000054
#define AVR32_JOSP                                     0x00000058
#define AVR32_JTBA                                     0x0000007c
#define AVR32_MMUCR                                    0x00000120
#define AVR32_MMUCR_DLA                                         8
#define AVR32_MMUCR_DLA_MASK                           0x00001f00
#define AVR32_MMUCR_DLA_OFFSET                                  8
#define AVR32_MMUCR_DLA_SIZE                                    5
#define AVR32_MMUCR_DRP                                        14
#define AVR32_MMUCR_DRP_MASK                           0x0007c000
#define AVR32_MMUCR_DRP_OFFSET                                 14
#define AVR32_MMUCR_DRP_SIZE                                    5
#define AVR32_MMUCR_E                                           0
#define AVR32_MMUCR_E_MASK                             0x00000001
#define AVR32_MMUCR_E_OFFSET                                    0
#define AVR32_MMUCR_E_SIZE                                      1
#define AVR32_MMUCR_I                                           2
#define AVR32_MMUCR_I_MASK                             0x00000004
#define AVR32_MMUCR_I_OFFSET                                    2
#define AVR32_MMUCR_I_SIZE                                      1
#define AVR32_MMUCR_M                                           1
#define AVR32_MMUCR_M_MASK                             0x00000002
#define AVR32_MMUCR_M_OFFSET                                    1
#define AVR32_MMUCR_M_PRIVATE                          0x00000000
#define AVR32_MMUCR_M_SHARED                           0x00000001
#define AVR32_MMUCR_M_SIZE                                      1
#define AVR32_MMUCR_N                                           3
#define AVR32_MMUCR_N_MASK                             0x00000008
#define AVR32_MMUCR_N_OFFSET                                    3
#define AVR32_MMUCR_N_SIZE                                      1
#define AVR32_MMUCR_S                                           4
#define AVR32_MMUCR_S_MASK                             0x00000010
#define AVR32_MMUCR_S_OFFSET                                    4
#define AVR32_MMUCR_S_SIZE                                      1
#define AVR32_PCCNT                                    0x0000012c
#define AVR32_PCCR                                     0x00000138
#define AVR32_PCCR_C                                            2
#define AVR32_PCCR_CONF0                                       12
#define AVR32_PCCR_CONF0_ACACHE_HIT                    0x00000015
#define AVR32_PCCR_CONF0_ACACHE_MISS                   0x00000016
#define AVR32_PCCR_CONF0_BR_EXECUTED                   0x00000005
#define AVR32_PCCR_CONF0_BR_MISPREDICTED               0x00000006
#define AVR32_PCCR_CONF0_BTB_HIT                       0x00000017
#define AVR32_PCCR_CONF0_CACHE_ACCESS_CYC              0x00000013
#define AVR32_PCCR_CONF0_CACHE_ACCESS_OCC              0x00000012
#define AVR32_PCCR_CONF0_CACHE_STALL_CYC               0x00000011
#define AVR32_PCCR_CONF0_CACHE_STALL_OCC               0x00000010
#define AVR32_PCCR_CONF0_DCACHE_LINE_WB                0x00000014
#define AVR32_PCCR_CONF0_DCACHE_READ_MISS_CYC          0x0000000b
#define AVR32_PCCR_CONF0_DCACHE_READ_MISS_OCC          0x0000000a
#define AVR32_PCCR_CONF0_DCACHE_WBUFF_FULL_STALL_CYC   0x00000009
#define AVR32_PCCR_CONF0_DCACHE_WBUFF_FULL_STALL_OCC   0x00000008
#define AVR32_PCCR_CONF0_DHAZARD_STALL                 0x00000002
#define AVR32_PCCR_CONF0_DTLB_MISS                     0x00000004
#define AVR32_PCCR_CONF0_DUTLB_MISS                    0x00000019
#define AVR32_PCCR_CONF0_ICACHE_MISS                   0x00000000
#define AVR32_PCCR_CONF0_IFETCH_STALL                  0x00000001
#define AVR32_PCCR_CONF0_INSN_EXECUTED                 0x00000007
#define AVR32_PCCR_CONF0_ITLB_MISS                     0x00000003
#define AVR32_PCCR_CONF0_IUTLB_MISS                    0x00000018
#define AVR32_PCCR_CONF0_MASK                          0x0003f000
#define AVR32_PCCR_CONF0_OFFSET                                12
#define AVR32_PCCR_CONF0_RACCESS_CYC                   0x0000000f
#define AVR32_PCCR_CONF0_RACCESS_OCC                   0x0000000e
#define AVR32_PCCR_CONF0_SIZE                                   6
#define AVR32_PCCR_CONF0_WACCESS_CYC                   0x0000000d
#define AVR32_PCCR_CONF0_WACCESS_OCC                   0x0000000c
#define AVR32_PCCR_CONF1                                       18
#define AVR32_PCCR_CONF1_ACACHE_HIT                    0x00000015
#define AVR32_PCCR_CONF1_ACACHE_MISS                   0x00000016
#define AVR32_PCCR_CONF1_BR_EXECUTED                   0x00000005
#define AVR32_PCCR_CONF1_BR_MISPREDICTED               0x00000006
#define AVR32_PCCR_CONF1_BTB_HIT                       0x00000017
#define AVR32_PCCR_CONF1_CACHE_ACCESS_CYC              0x00000013
#define AVR32_PCCR_CONF1_CACHE_ACCESS_OCC              0x00000012
#define AVR32_PCCR_CONF1_CACHE_STALL_CYC               0x00000011
#define AVR32_PCCR_CONF1_CACHE_STALL_OCC               0x00000010
#define AVR32_PCCR_CONF1_DCACHE_LINE_WB                0x00000014
#define AVR32_PCCR_CONF1_DCACHE_READ_MISS_CYC          0x0000000b
#define AVR32_PCCR_CONF1_DCACHE_READ_MISS_OCC          0x0000000a
#define AVR32_PCCR_CONF1_DCACHE_WBUFF_FULL_STALL_CYC   0x00000009
#define AVR32_PCCR_CONF1_DCACHE_WBUFF_FULL_STALL_OCC   0x00000008
#define AVR32_PCCR_CONF1_DHAZARD_STALL                 0x00000002
#define AVR32_PCCR_CONF1_DTLB_MISS                     0x00000004
#define AVR32_PCCR_CONF1_DUTLB_MISS                    0x00000019
#define AVR32_PCCR_CONF1_ICACHE_MISS                   0x00000000
#define AVR32_PCCR_CONF1_IFETCH_STALL                  0x00000001
#define AVR32_PCCR_CONF1_INSN_EXECUTED                 0x00000007
#define AVR32_PCCR_CONF1_ITLB_MISS                     0x00000003
#define AVR32_PCCR_CONF1_IUTLB_MISS                    0x00000018
#define AVR32_PCCR_CONF1_MASK                          0x00fc0000
#define AVR32_PCCR_CONF1_OFFSET                                18
#define AVR32_PCCR_CONF1_RACCESS_CYC                   0x0000000f
#define AVR32_PCCR_CONF1_RACCESS_OCC                   0x0000000e
#define AVR32_PCCR_CONF1_SIZE                                   6
#define AVR32_PCCR_CONF1_WACCESS_CYC                   0x0000000d
#define AVR32_PCCR_CONF1_WACCESS_OCC                   0x0000000c
#define AVR32_PCCR_C_MASK                              0x00000004
#define AVR32_PCCR_C_OFFSET                                     2
#define AVR32_PCCR_C_SIZE                                       1
#define AVR32_PCCR_E                                            0
#define AVR32_PCCR_E_MASK                              0x00000001
#define AVR32_PCCR_E_OFFSET                                     0
#define AVR32_PCCR_E_SIZE                                       1
#define AVR32_PCCR_F0                                           9
#define AVR32_PCCR_F0_MASK                             0x00000200
#define AVR32_PCCR_F0_OFFSET                                    9
#define AVR32_PCCR_F0_SIZE                                      1
#define AVR32_PCCR_F1                                          10
#define AVR32_PCCR_F1_MASK                             0x00000400
#define AVR32_PCCR_F1_OFFSET                                   10
#define AVR32_PCCR_F1_SIZE                                      1
#define AVR32_PCCR_FC                                           8
#define AVR32_PCCR_FC_MASK                             0x00000100
#define AVR32_PCCR_FC_OFFSET                                    8
#define AVR32_PCCR_FC_SIZE                                      1
#define AVR32_PCCR_IE0                                          5
#define AVR32_PCCR_IE0_MASK                            0x00000020
#define AVR32_PCCR_IE0_OFFSET                                   5
#define AVR32_PCCR_IE0_SIZE                                     1
#define AVR32_PCCR_IE1                                          6
#define AVR32_PCCR_IE1_MASK                            0x00000040
#define AVR32_PCCR_IE1_OFFSET                                   6
#define AVR32_PCCR_IE1_SIZE                                     1
#define AVR32_PCCR_IEC                                          4
#define AVR32_PCCR_IEC_MASK                            0x00000010
#define AVR32_PCCR_IEC_OFFSET                                   4
#define AVR32_PCCR_IEC_SIZE                                     1
#define AVR32_PCCR_R                                            1
#define AVR32_PCCR_R_MASK                              0x00000002
#define AVR32_PCCR_R_OFFSET                                     1
#define AVR32_PCCR_R_SIZE                                       1
#define AVR32_PCCR_S                                            3
#define AVR32_PCCR_S_MASK                              0x00000008
#define AVR32_PCCR_S_OFFSET                                     3
#define AVR32_PCCR_S_SIZE                                       1
#define AVR32_PCNT0                                    0x00000130
#define AVR32_PCNT1                                    0x00000134
#define AVR32_PTBR                                     0x00000118
#define AVR32_RAR_DBG                                  0x00000050
#define AVR32_RAR_EX                                   0x00000048
#define AVR32_RAR_INT0                                 0x00000038
#define AVR32_RAR_INT1                                 0x0000003c
#define AVR32_RAR_INT2                                 0x00000040
#define AVR32_RAR_INT3                                 0x00000044
#define AVR32_RAR_NMI                                  0x0000004c
#define AVR32_RAR_SUP                                  0x00000034
#define AVR32_RSR_DBG                                  0x00000030
#define AVR32_RSR_EX                                   0x00000028
#define AVR32_RSR_INT0                                 0x00000018
#define AVR32_RSR_INT1                                 0x0000001c
#define AVR32_RSR_INT2                                 0x00000020
#define AVR32_RSR_INT3                                 0x00000024
#define AVR32_RSR_NMI                                  0x0000002c
#define AVR32_RSR_SUP                                  0x00000014
#define AVR32_SABAH                                    0x00000304
#define AVR32_SABAL                                    0x00000300
#define AVR32_SABD                                     0x00000308
#define AVR32_SR                                       0x00000000
#define AVR32_SR_C                                              0
#define AVR32_SR_C_MASK                                0x00000001
#define AVR32_SR_C_OFFSET                                       0
#define AVR32_SR_C_SIZE                                         1
#define AVR32_SR_D                                             26
#define AVR32_SR_DM                                            27
#define AVR32_SR_DM_MASK                               0x08000000
#define AVR32_SR_DM_OFFSET                                     27
#define AVR32_SR_DM_SIZE                                        1
#define AVR32_SR_D_MASK                                0x04000000
#define AVR32_SR_D_OFFSET                                      26
#define AVR32_SR_D_SIZE                                         1
#define AVR32_SR_EM                                            21
#define AVR32_SR_EM_MASK                               0x00200000
#define AVR32_SR_EM_OFFSET                                     21
#define AVR32_SR_EM_SIZE                                        1
#define AVR32_SR_GM                                            16
#define AVR32_SR_GM_MASK                               0x00010000
#define AVR32_SR_GM_OFFSET                                     16
#define AVR32_SR_GM_SIZE                                        1
#define AVR32_SR_H                                             29
#define AVR32_SR_H_MASK                                0x20000000
#define AVR32_SR_H_OFFSET                                      29
#define AVR32_SR_H_SIZE                                         1
#define AVR32_SR_I0M                                           17
#define AVR32_SR_I0M_MASK                              0x00020000
#define AVR32_SR_I0M_OFFSET                                    17
#define AVR32_SR_I0M_SIZE                                       1
#define AVR32_SR_I1M                                           18
#define AVR32_SR_I1M_MASK                              0x00040000
#define AVR32_SR_I1M_OFFSET                                    18
#define AVR32_SR_I1M_SIZE                                       1
#define AVR32_SR_I2M                                           19
#define AVR32_SR_I2M_MASK                              0x00080000
#define AVR32_SR_I2M_OFFSET                                    19
#define AVR32_SR_I2M_SIZE                                       1
#define AVR32_SR_I3M                                           20
#define AVR32_SR_I3M_MASK                              0x00100000
#define AVR32_SR_I3M_OFFSET                                    20
#define AVR32_SR_I3M_SIZE                                       1
#define AVR32_SR_J                                             28
#define AVR32_SR_J_MASK                                0x10000000
#define AVR32_SR_J_OFFSET                                      28
#define AVR32_SR_J_SIZE                                         1
#define AVR32_SR_L                                              5
#define AVR32_SR_L_MASK                                0x00000020
#define AVR32_SR_L_OFFSET                                       5
#define AVR32_SR_L_SIZE                                         1
#define AVR32_SR_M0                                            22
#define AVR32_SR_M0_MASK                               0x00400000
#define AVR32_SR_M0_OFFSET                                     22
#define AVR32_SR_M0_SIZE                                        1
#define AVR32_SR_M1                                            23
#define AVR32_SR_M1_MASK                               0x00800000
#define AVR32_SR_M1_OFFSET                                     23
#define AVR32_SR_M1_SIZE                                        1
#define AVR32_SR_M2                                            24
#define AVR32_SR_M2_MASK                               0x01000000
#define AVR32_SR_M2_OFFSET                                     24
#define AVR32_SR_M2_SIZE                                        1
#define AVR32_SR_M                                             22
#define AVR32_SR_M_APP                                 0x00000000
#define AVR32_SR_M_EX                                  0x00000006
#define AVR32_SR_M_INT0                                0x00000002
#define AVR32_SR_M_INT1                                0x00000003
#define AVR32_SR_M_INT2                                0x00000004
#define AVR32_SR_M_INT3                                0x00000005
#define AVR32_SR_M_MASK                                0x01c00000
#define AVR32_SR_M_NMI                                 0x00000007
#define AVR32_SR_M_OFFSET                                      22
#define AVR32_SR_M_SIZE                                         3
#define AVR32_SR_M_SUP                                 0x00000001
#define AVR32_SR_N                                              2
#define AVR32_SR_N_MASK                                0x00000004
#define AVR32_SR_N_OFFSET                                       2
#define AVR32_SR_N_SIZE                                         1
#define AVR32_SR_Q                                              4
#define AVR32_SR_Q_MASK                                0x00000010
#define AVR32_SR_Q_OFFSET                                       4
#define AVR32_SR_Q_SIZE                                         1
#define AVR32_SR_R                                             15
#define AVR32_SR_R_MASK                                0x00008000
#define AVR32_SR_R_OFFSET                                      15
#define AVR32_SR_R_SIZE                                         1
#define AVR32_SR_T                                             14
#define AVR32_SR_T_MASK                                0x00004000
#define AVR32_SR_T_OFFSET                                      14
#define AVR32_SR_T_SIZE                                         1
#define AVR32_SR_V                                              3
#define AVR32_SR_V_MASK                                0x00000008
#define AVR32_SR_V_OFFSET                                       3
#define AVR32_SR_V_SIZE                                         1
#define AVR32_SR_Z                                              1
#define AVR32_SR_Z_MASK                                0x00000002
#define AVR32_SR_Z_OFFSET                                       1
#define AVR32_SR_Z_SIZE                                         1
#define AVR32_TLBARHI                                  0x00000128
#define AVR32_TLBARLO                                  0x00000124
#define AVR32_TLBEAR                                   0x0000011c
#define AVR32_TLBEHI                                   0x00000110
#define AVR32_TLBEHI_ASID                                       0
#define AVR32_TLBEHI_ASID_MASK                         0x000000ff
#define AVR32_TLBEHI_ASID_OFFSET                                0
#define AVR32_TLBEHI_ASID_SIZE                                  8
#define AVR32_TLBEHI_I                                          8
#define AVR32_TLBEHI_I_MASK                            0x00000100
#define AVR32_TLBEHI_I_OFFSET                                   8
#define AVR32_TLBEHI_I_SIZE                                     1
#define AVR32_TLBEHI_V                                          9
#define AVR32_TLBEHI_VPN                                       10
#define AVR32_TLBEHI_VPN_MASK                          0xfffffc00
#define AVR32_TLBEHI_VPN_OFFSET                                10
#define AVR32_TLBEHI_VPN_SIZE                                  22
#define AVR32_TLBEHI_V_MASK                            0x00000200
#define AVR32_TLBEHI_V_OFFSET                                   9
#define AVR32_TLBEHI_V_SIZE                                     1
#define AVR32_TLBELO                                   0x00000114
#define AVR32_TLBELO_AP                                         4
#define AVR32_TLBELO_AP_MASK                           0x00000070
#define AVR32_TLBELO_AP_OFFSET                                  4
#define AVR32_TLBELO_AP_PRIV_RWX_UNPRIV_NONE           0x00000003
#define AVR32_TLBELO_AP_PRIV_RWX_UNPRIV_RWX            0x00000007
#define AVR32_TLBELO_AP_PRIV_RW_UNPRIV_NONE            0x00000002
#define AVR32_TLBELO_AP_PRIV_RW_UNPRIV_RW              0x00000006
#define AVR32_TLBELO_AP_PRIV_RX_UNPRIV_NONE            0x00000001
#define AVR32_TLBELO_AP_PRIV_RX_UNPRIV_RX              0x00000005
#define AVR32_TLBELO_AP_PRIV_R_UNPRIV_NONE             0x00000000
#define AVR32_TLBELO_AP_PRIV_R_UNPRIV_R                0x00000004
#define AVR32_TLBELO_AP_SIZE                                    3
#define AVR32_TLBELO_B                                          7
#define AVR32_TLBELO_B_MASK                            0x00000080
#define AVR32_TLBELO_B_OFFSET                                   7
#define AVR32_TLBELO_B_SIZE                                     1
#define AVR32_TLBELO_C                                          9
#define AVR32_TLBELO_C_MASK                            0x00000200
#define AVR32_TLBELO_C_OFFSET                                   9
#define AVR32_TLBELO_C_SIZE                                     1
#define AVR32_TLBELO_D                                          1
#define AVR32_TLBELO_D_MASK                            0x00000002
#define AVR32_TLBELO_D_OFFSET                                   1
#define AVR32_TLBELO_D_SIZE                                     1
#define AVR32_TLBELO_G                                          8
#define AVR32_TLBELO_G_MASK                            0x00000100
#define AVR32_TLBELO_G_OFFSET                                   8
#define AVR32_TLBELO_G_SIZE                                     1
#define AVR32_TLBELO_PFN                                       10
#define AVR32_TLBELO_PFN_MASK                          0xfffffc00
#define AVR32_TLBELO_PFN_OFFSET                                10
#define AVR32_TLBELO_PFN_SIZE                                  22
#define AVR32_TLBELO_SZ                                         2
#define AVR32_TLBELO_SZ_1KB                            0x00000000
#define AVR32_TLBELO_SZ_1MB                            0x00000003
#define AVR32_TLBELO_SZ_4KB                            0x00000001
#define AVR32_TLBELO_SZ_64KB                           0x00000002
#define AVR32_TLBELO_SZ_MASK                           0x0000000c
#define AVR32_TLBELO_SZ_OFFSET                                  2
#define AVR32_TLBELO_SZ_SIZE                                    2
#define AVR32_TLBELO_W                                          0
#define AVR32_TLBELO_W_MASK                            0x00000001
#define AVR32_TLBELO_W_OFFSET                                   0
#define AVR32_TLBELO_W_SIZE                                     1

#define AVR32_DCACHE_CLEAN                             0x0000000c
#define AVR32_DCACHE_CLEAN_INVALIDATE                  0x0000000d
#define AVR32_DCACHE_FLUSH                             0x00000008
#define AVR32_DCACHE_FLUSH_CLEAN_ALL                   0x00000002
#define AVR32_DCACHE_FLUSH_CLEAN_INV_ALL               0x00000004
#define AVR32_DCACHE_FLUSH_CLEAN_INV_UNLOCKED          0x00000005
#define AVR32_DCACHE_FLUSH_CLEAN_UNLOCKED              0x00000003
#define AVR32_DCACHE_FLUSH_INV_ALL                     0x00000000
#define AVR32_DCACHE_FLUSH_INV_UNLOCKED                0x00000001
#define AVR32_DCACHE_FLUSH_UNLOCK_ALL                  0x00000006
#define AVR32_DCACHE_INVALIDATE                        0x0000000b
#define AVR32_DCACHE_LOCK                              0x00000009
#define AVR32_DCACHE_UNLOCK                            0x0000000a
#define AVR32_EVBA_OFFSET_BREAKPOINT                   0x0000001c
#define AVR32_EVBA_OFFSET_BUS_ERROR_DATA               0x00000008
#define AVR32_EVBA_OFFSET_BUS_ERROR_INSTR              0x0000000c
#define AVR32_EVBA_OFFSET_COP_ABSENT                   0x00000030
#define AVR32_EVBA_OFFSET_DATA_ADDR_R                  0x00000034
#define AVR32_EVBA_OFFSET_DATA_ADDR_W                  0x00000038
#define AVR32_EVBA_OFFSET_DTLB_MISS_R                  0x00000060
#define AVR32_EVBA_OFFSET_DTLB_MISS_W                  0x00000070
#define AVR32_EVBA_OFFSET_DTLB_MODIFIED                0x00000044
#define AVR32_EVBA_OFFSET_DTLB_PROT_R                  0x0000003c
#define AVR32_EVBA_OFFSET_DTLB_PROT_W                  0x00000040
#define AVR32_EVBA_OFFSET_FLOATING_POINT               0x0000002c
#define AVR32_EVBA_OFFSET_ILLEGAL_OPCODE               0x00000020
#define AVR32_EVBA_OFFSET_INSTR_ADDR                   0x00000014
#define AVR32_EVBA_OFFSET_ITLB_MISS                    0x00000050
#define AVR32_EVBA_OFFSET_ITLB_PROT                    0x00000018
#define AVR32_EVBA_OFFSET_NMI                          0x00000010
#define AVR32_EVBA_OFFSET_PRIVILEGE_VIOL               0x00000028
#define AVR32_EVBA_OFFSET_SCALL                        0x00000100
#define AVR32_EVBA_OFFSET_TLB_MULTIPLE                 0x00000004
#define AVR32_EVBA_OFFSET_UNIMPLEMENTED                0x00000024
#define AVR32_EVBA_OFFSET_UNRECOVERABLE                0x00000000
#define AVR32_ICACHE_FLUSH                             0x00000000
#define AVR32_ICACHE_FLUSH_ALL                         0x00000000
#define AVR32_ICACHE_FLUSH_UNLOCKED                    0x00000001
#define AVR32_ICACHE_FLUSH_UNLOCK_ALL                  0x00000002
#define AVR32_ICACHE_INVALIDATE                        0x00000001
#define AVR32_ICACHE_LOCK                              0x00000002
#define AVR32_ICACHE_PREFETCH                          0x00000004
#define AVR32_ICACHE_UNLOCK                            0x00000003
#define AVR32_RESET_VECTOR                             0xa0000000



#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_sr_t {
    unsigned int                 : 2;
    unsigned int h               : 1;
    unsigned int j               : 1;
    unsigned int dm              : 1;
    unsigned int d               : 1;
    unsigned int                 : 1;
    unsigned int m2              : 1;
    unsigned int m1              : 1;
    unsigned int m0              : 1;
    unsigned int em              : 1;
    unsigned int i3m             : 1;
    unsigned int i2m             : 1;
    unsigned int i1m             : 1;
    unsigned int i0m             : 1;
    unsigned int gm              : 1;
    unsigned int r               : 1;
    unsigned int t               : 1;
    unsigned int                 : 8;
    unsigned int l               : 1;
    unsigned int q               : 1;
    unsigned int v               : 1;
    unsigned int n               : 1;
    unsigned int z               : 1;
    unsigned int c               : 1;
} avr32_sr_t;



typedef struct avr32_cpucr_t {
    unsigned int cop7en          : 1;
    unsigned int cop6en          : 1;
    unsigned int cop5en          : 1;
    unsigned int cop4en          : 1;
    unsigned int cop3en          : 1;
    unsigned int cop2en          : 1;
    unsigned int cop1en          : 1;
    unsigned int cop0en          : 1;
    unsigned int                 :18;
    unsigned int iee             : 1;
    unsigned int ibe             : 1;
    unsigned int re              : 1;
    unsigned int fe              : 1;
    unsigned int be              : 1;
    unsigned int bi              : 1;
} avr32_cpucr_t;



typedef struct avr32_config0_t {
    unsigned int processorid     : 8;
    unsigned int                 : 4;
    unsigned int processorrevision : 4;
    unsigned int at              : 3;
    unsigned int ar              : 3;
    unsigned int mmut            : 3;
    unsigned int f               : 1;
    unsigned int j               : 1;
    unsigned int p               : 1;
    unsigned int o               : 1;
    unsigned int s               : 1;
    unsigned int d               : 1;
    unsigned int r               : 1;
} avr32_config0_t;



typedef struct avr32_config1_t {
    unsigned int immusz          : 6;
    unsigned int dmmusz          : 6;
    unsigned int iset            : 4;
    unsigned int ilsz            : 3;
    unsigned int iass            : 3;
    unsigned int dset            : 4;
    unsigned int dlsz            : 3;
    unsigned int dass            : 3;
} avr32_config1_t;



typedef struct avr32_tlbehi_t {
    unsigned int vpn             :22;
    unsigned int v               : 1;
    unsigned int i               : 1;
    unsigned int asid            : 8;
} avr32_tlbehi_t;



typedef struct avr32_tlbelo_t {
    unsigned int pfn             :22;
    unsigned int c               : 1;
    unsigned int g               : 1;
    unsigned int b               : 1;
    unsigned int ap              : 3;
    unsigned int sz              : 2;
    unsigned int d               : 1;
    unsigned int w               : 1;
} avr32_tlbelo_t;



typedef struct avr32_mmucr_t {
    unsigned int                 :13;
    unsigned int drp             : 5;
    unsigned int                 : 1;
    unsigned int dla             : 5;
    unsigned int                 : 3;
    unsigned int s               : 1;
    unsigned int n               : 1;
    unsigned int i               : 1;
    unsigned int m               : 1;
    unsigned int e               : 1;
} avr32_mmucr_t;



typedef struct avr32_pccr_t {
    unsigned int                 : 8;
    unsigned int conf1           : 6;
    unsigned int conf0           : 6;
    unsigned int                 : 1;
    unsigned int f1              : 1;
    unsigned int f0              : 1;
    unsigned int fc              : 1;
    unsigned int                 : 1;
    unsigned int ie1             : 1;
    unsigned int ie0             : 1;
    unsigned int iec             : 1;
    unsigned int s               : 1;
    unsigned int c               : 1;
    unsigned int r               : 1;
    unsigned int e               : 1;
} avr32_pccr_t;




/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_CORE_C3_100_H_INCLUDED*/
#endif

