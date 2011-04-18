/*****************************************************************************
 *
 * Copyright (C) 2008 Atmel Corporation
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
#ifndef AVR32_ECC_200_H_INCLUDED
#define AVR32_ECC_200_H_INCLUDED

#define AVR32_ECC_H_VERSION 200

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ECC_<register>
 - Bitfield mask:   AVR32_ECC_<register>_<bitfield>
 - Bitfield offset: AVR32_ECC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ECC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ECC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ECC_<bitfield>
 - Bitfield offset: AVR32_ECC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ECC_<bitfield>_SIZE
 - Bitfield values: AVR32_ECC_<bitfield>_<value name>
 - Bitfield values: AVR32_ECC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_ECC_BITADDR                                           0
#define AVR32_ECC_BITADDR_MASK                             0x0000000f
#define AVR32_ECC_BITADDR_OFFSET                                    0
#define AVR32_ECC_BITADDR_SIZE                                      4
#define AVR32_ECC_CR                                       0x00000000
#define AVR32_ECC_CR_MASK                                  0x00000001
#define AVR32_ECC_CR_RESETVALUE                            0x00000000
#define AVR32_ECC_CR_RST                                            0
#define AVR32_ECC_CR_RST_MASK                              0x00000001
#define AVR32_ECC_CR_RST_OFFSET                                     0
#define AVR32_ECC_CR_RST_SIZE                                       1
#define AVR32_ECC_ECCERR                                            1
#define AVR32_ECC_ECCERR_MASK                              0x00000002
#define AVR32_ECC_ECCERR_OFFSET                                     1
#define AVR32_ECC_ECCERR_SIZE                                       1
#define AVR32_ECC_MD                                       0x00000004
#define AVR32_ECC_MD_MASK                                  0x00000003
#define AVR32_ECC_MD_PAGESIZE                                       0
#define AVR32_ECC_MD_PAGESIZE_MASK                         0x00000003
#define AVR32_ECC_MD_PAGESIZE_OFFSET                                0
#define AVR32_ECC_MD_PAGESIZE_SIZE                                  2
#define AVR32_ECC_MD_RESETVALUE                            0x00000000
#define AVR32_ECC_MFN                                              16
#define AVR32_ECC_MFN_MASK                                 0x00070000
#define AVR32_ECC_MFN_OFFSET                                       16
#define AVR32_ECC_MFN_SIZE                                          3
#define AVR32_ECC_MULERR                                            2
#define AVR32_ECC_MULERR_MASK                              0x00000004
#define AVR32_ECC_MULERR_OFFSET                                     2
#define AVR32_ECC_MULERR_SIZE                                       1
#define AVR32_ECC_NPARITY                                           0
#define AVR32_ECC_NPARITY_MASK                             0x0000ffff
#define AVR32_ECC_NPARITY_OFFSET                                    0
#define AVR32_ECC_NPARITY_SIZE                                     16
#define AVR32_ECC_PAGESIZE                                          0
#define AVR32_ECC_PAGESIZE_MASK                            0x00000003
#define AVR32_ECC_PAGESIZE_OFFSET                                   0
#define AVR32_ECC_PAGESIZE_SIZE                                     2
#define AVR32_ECC_PR0                                      0x0000000c
#define AVR32_ECC_PR0_BITADDR                                       0
#define AVR32_ECC_PR0_BITADDR_MASK                         0x0000000f
#define AVR32_ECC_PR0_BITADDR_OFFSET                                0
#define AVR32_ECC_PR0_BITADDR_SIZE                                  4
#define AVR32_ECC_PR0_MASK                                 0x0000ffff
#define AVR32_ECC_PR0_RESETVALUE                           0x00000000
#define AVR32_ECC_PR0_WORDADDR                                      4
#define AVR32_ECC_PR0_WORDADDR_MASK                        0x0000fff0
#define AVR32_ECC_PR0_WORDADDR_OFFSET                               4
#define AVR32_ECC_PR0_WORDADDR_SIZE                                12
#define AVR32_ECC_PR1                                      0x00000010
#define AVR32_ECC_PR10                                     0x00000038
#define AVR32_ECC_PR10_MASK                                0x00000000
#define AVR32_ECC_PR10_RESETVALUE                          0x00000000
#define AVR32_ECC_PR11                                     0x0000003c
#define AVR32_ECC_PR11_MASK                                0x00000000
#define AVR32_ECC_PR11_RESETVALUE                          0x00000000
#define AVR32_ECC_PR12                                     0x00000040
#define AVR32_ECC_PR12_MASK                                0x00000000
#define AVR32_ECC_PR12_RESETVALUE                          0x00000000
#define AVR32_ECC_PR13                                     0x00000044
#define AVR32_ECC_PR13_MASK                                0x00000000
#define AVR32_ECC_PR13_RESETVALUE                          0x00000000
#define AVR32_ECC_PR14                                     0x00000048
#define AVR32_ECC_PR14_MASK                                0x00000000
#define AVR32_ECC_PR14_RESETVALUE                          0x00000000
#define AVR32_ECC_PR15                                     0x0000004c
#define AVR32_ECC_PR15_MASK                                0x00000000
#define AVR32_ECC_PR15_RESETVALUE                          0x00000000
#define AVR32_ECC_PR1_MASK                                 0x0000ffff
#define AVR32_ECC_PR1_NPARITY                                       0
#define AVR32_ECC_PR1_NPARITY_MASK                         0x0000ffff
#define AVR32_ECC_PR1_NPARITY_OFFSET                                0
#define AVR32_ECC_PR1_NPARITY_SIZE                                 16
#define AVR32_ECC_PR1_RESETVALUE                           0x00000000
#define AVR32_ECC_PR2                                      0x00000018
#define AVR32_ECC_PR2_MASK                                 0x00000000
#define AVR32_ECC_PR2_RESETVALUE                           0x00000000
#define AVR32_ECC_PR3                                      0x0000001c
#define AVR32_ECC_PR3_MASK                                 0x00000000
#define AVR32_ECC_PR3_RESETVALUE                           0x00000000
#define AVR32_ECC_PR4                                      0x00000020
#define AVR32_ECC_PR4_MASK                                 0x00000000
#define AVR32_ECC_PR4_RESETVALUE                           0x00000000
#define AVR32_ECC_PR5                                      0x00000024
#define AVR32_ECC_PR5_MASK                                 0x00000000
#define AVR32_ECC_PR5_RESETVALUE                           0x00000000
#define AVR32_ECC_PR6                                      0x00000028
#define AVR32_ECC_PR6_MASK                                 0x00000000
#define AVR32_ECC_PR6_RESETVALUE                           0x00000000
#define AVR32_ECC_PR7                                      0x0000002c
#define AVR32_ECC_PR7_MASK                                 0x00000000
#define AVR32_ECC_PR7_RESETVALUE                           0x00000000
#define AVR32_ECC_PR8                                      0x00000030
#define AVR32_ECC_PR8_MASK                                 0x00000000
#define AVR32_ECC_PR8_RESETVALUE                           0x00000000
#define AVR32_ECC_PR9                                      0x00000034
#define AVR32_ECC_PR9_MASK                                 0x00000000
#define AVR32_ECC_PR9_RESETVALUE                           0x00000000
#define AVR32_ECC_RECERR                                            0
#define AVR32_ECC_RECERR_MASK                              0x00000001
#define AVR32_ECC_RECERR_OFFSET                                     0
#define AVR32_ECC_RECERR_SIZE                                       1
#define AVR32_ECC_RST                                               0
#define AVR32_ECC_RST_MASK                                 0x00000001
#define AVR32_ECC_RST_OFFSET                                        0
#define AVR32_ECC_RST_SIZE                                          1
#define AVR32_ECC_SR1                                      0x00000008
#define AVR32_ECC_SR1_ECCERR                                        1
#define AVR32_ECC_SR1_ECCERR_MASK                          0x00000002
#define AVR32_ECC_SR1_ECCERR_OFFSET                                 1
#define AVR32_ECC_SR1_ECCERR_SIZE                                   1
#define AVR32_ECC_SR1_MASK                                 0x00000007
#define AVR32_ECC_SR1_MULERR                                        2
#define AVR32_ECC_SR1_MULERR_MASK                          0x00000004
#define AVR32_ECC_SR1_MULERR_OFFSET                                 2
#define AVR32_ECC_SR1_MULERR_SIZE                                   1
#define AVR32_ECC_SR1_RECERR                                        0
#define AVR32_ECC_SR1_RECERR_MASK                          0x00000001
#define AVR32_ECC_SR1_RECERR_OFFSET                                 0
#define AVR32_ECC_SR1_RECERR_SIZE                                   1
#define AVR32_ECC_SR1_RESETVALUE                           0x00000000
#define AVR32_ECC_SR2                                      0x00000014
#define AVR32_ECC_SR2_MASK                                 0x00000000
#define AVR32_ECC_SR2_RESETVALUE                           0x00000000
#define AVR32_ECC_VERSION                                  0x000000fc
#define AVR32_ECC_VERSION_MASK                             0x00070fff
#define AVR32_ECC_VERSION_MFN                                      16
#define AVR32_ECC_VERSION_MFN_MASK                         0x00070000
#define AVR32_ECC_VERSION_MFN_OFFSET                               16
#define AVR32_ECC_VERSION_MFN_SIZE                                  3
#define AVR32_ECC_VERSION_OFFSET                                    0
#define AVR32_ECC_VERSION_RESETVALUE                       0x00000000
#define AVR32_ECC_VERSION_SIZE                                     12
#define AVR32_ECC_VERSION_VERSION                                   0
#define AVR32_ECC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_ECC_VERSION_VERSION_OFFSET                            0
#define AVR32_ECC_VERSION_VERSION_SIZE                             12
#define AVR32_ECC_WORDADDR                                          4
#define AVR32_ECC_WORDADDR_MASK                            0x0000fff0
#define AVR32_ECC_WORDADDR_OFFSET                                   4
#define AVR32_ECC_WORDADDR_SIZE                                    12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_ecc_cr_t {
    unsigned int                 :31;
    unsigned int rst             : 1;
} avr32_ecc_cr_t;



typedef struct avr32_ecc_md_t {
    unsigned int                 :30;
    unsigned int pagesize        : 2;
} avr32_ecc_md_t;



typedef struct avr32_ecc_sr1_t {
    unsigned int                 :29;
    unsigned int mulerr          : 1;
    unsigned int eccerr          : 1;
    unsigned int recerr          : 1;
} avr32_ecc_sr1_t;



typedef struct avr32_ecc_pr0_t {
    unsigned int                 :16;
    unsigned int wordaddr        :12;
    unsigned int bitaddr         : 4;
} avr32_ecc_pr0_t;



typedef struct avr32_ecc_pr1_t {
    unsigned int                 :16;
    unsigned int nparity         :16;
} avr32_ecc_pr1_t;



typedef struct avr32_ecc_version_t {
    unsigned int                 :13;
    unsigned int mfn             : 3;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_ecc_version_t;



typedef struct avr32_ecc_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_ecc_cr_t                 CR        ;
  };
  union {
          unsigned long                  md        ;//0x0004
          avr32_ecc_md_t                 MD        ;
  };
  union {
    const unsigned long                  sr1       ;//0x0008
    const avr32_ecc_sr1_t                SR1       ;
  };
  union {
    const unsigned long                  pr0       ;//0x000c
    const avr32_ecc_pr0_t                PR0       ;
  };
  union {
    const unsigned long                  pr1       ;//0x0010
    const avr32_ecc_pr1_t                PR1       ;
  };
    const unsigned long                  sr2       ;//0x0014
    const unsigned long                  pr2       ;//0x0018
    const unsigned long                  pr3       ;//0x001c
    const unsigned long                  pr4       ;//0x0020
    const unsigned long                  pr5       ;//0x0024
    const unsigned long                  pr6       ;//0x0028
    const unsigned long                  pr7       ;//0x002c
    const unsigned long                  pr8       ;//0x0030
    const unsigned long                  pr9       ;//0x0034
    const unsigned long                  pr10      ;//0x0038
    const unsigned long                  pr11      ;//0x003c
    const unsigned long                  pr12      ;//0x0040
    const unsigned long                  pr13      ;//0x0044
    const unsigned long                  pr14      ;//0x0048
    const unsigned long                  pr15      ;//0x004c
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
    const avr32_ecc_version_t            VERSION   ;
  };
} avr32_ecc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ECC_200_H_INCLUDED*/
#endif

