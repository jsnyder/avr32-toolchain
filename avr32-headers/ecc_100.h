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
#ifndef AVR32_ECC_100_H_INCLUDED
#define AVR32_ECC_100_H_INCLUDED

#define AVR32_ECC_H_VERSION 100

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
#define AVR32_ECC_CR_RST                                            0
#define AVR32_ECC_CR_RST_MASK                              0x00000001
#define AVR32_ECC_CR_RST_OFFSET                                     0
#define AVR32_ECC_CR_RST_SIZE                                       1
#define AVR32_ECC_ECCERR                                            1
#define AVR32_ECC_ECCERR_MASK                              0x00000002
#define AVR32_ECC_ECCERR_OFFSET                                     1
#define AVR32_ECC_ECCERR_SIZE                                       1
#define AVR32_ECC_MR                                       0x00000004
#define AVR32_ECC_MR_PAGESIZE                                       0
#define AVR32_ECC_MR_PAGESIZE_MASK                         0x00000003
#define AVR32_ECC_MR_PAGESIZE_OFFSET                                0
#define AVR32_ECC_MR_PAGESIZE_SIZE                                  2
#define AVR32_ECC_MULERR                                            2
#define AVR32_ECC_MULERR_MASK                              0x00000004
#define AVR32_ECC_MULERR_OFFSET                                     2
#define AVR32_ECC_MULERR_SIZE                                       1
#define AVR32_ECC_NPARITY                                           0
#define AVR32_ECC_NPARITY_MASK                             0x0000ffff
#define AVR32_ECC_NPARITY_OFFSET                                    0
#define AVR32_ECC_NPARITY_SIZE                                     16
#define AVR32_ECC_NPR                                      0x00000010
#define AVR32_ECC_NPR_NPARITY                                       0
#define AVR32_ECC_NPR_NPARITY_MASK                         0x0000ffff
#define AVR32_ECC_NPR_NPARITY_OFFSET                                0
#define AVR32_ECC_NPR_NPARITY_SIZE                                 16
#define AVR32_ECC_PAGESIZE                                          0
#define AVR32_ECC_PAGESIZE_MASK                            0x00000003
#define AVR32_ECC_PAGESIZE_OFFSET                                   0
#define AVR32_ECC_PAGESIZE_SIZE                                     2
#define AVR32_ECC_PR                                       0x0000000c
#define AVR32_ECC_PR_BITADDR                                        0
#define AVR32_ECC_PR_BITADDR_MASK                          0x0000000f
#define AVR32_ECC_PR_BITADDR_OFFSET                                 0
#define AVR32_ECC_PR_BITADDR_SIZE                                   4
#define AVR32_ECC_PR_WORDADDR                                       4
#define AVR32_ECC_PR_WORDADDR_MASK                         0x0000fff0
#define AVR32_ECC_PR_WORDADDR_OFFSET                                4
#define AVR32_ECC_PR_WORDADDR_SIZE                                 12
#define AVR32_ECC_RECERR                                            0
#define AVR32_ECC_RECERR_MASK                              0x00000001
#define AVR32_ECC_RECERR_OFFSET                                     0
#define AVR32_ECC_RECERR_SIZE                                       1
#define AVR32_ECC_RST                                               0
#define AVR32_ECC_RST_MASK                                 0x00000001
#define AVR32_ECC_RST_OFFSET                                        0
#define AVR32_ECC_RST_SIZE                                          1
#define AVR32_ECC_SR                                       0x00000008
#define AVR32_ECC_SR_ECCERR                                         1
#define AVR32_ECC_SR_ECCERR_MASK                           0x00000002
#define AVR32_ECC_SR_ECCERR_OFFSET                                  1
#define AVR32_ECC_SR_ECCERR_SIZE                                    1
#define AVR32_ECC_SR_MULERR                                         2
#define AVR32_ECC_SR_MULERR_MASK                           0x00000004
#define AVR32_ECC_SR_MULERR_OFFSET                                  2
#define AVR32_ECC_SR_MULERR_SIZE                                    1
#define AVR32_ECC_SR_RECERR                                         0
#define AVR32_ECC_SR_RECERR_MASK                           0x00000001
#define AVR32_ECC_SR_RECERR_OFFSET                                  0
#define AVR32_ECC_SR_RECERR_SIZE                                    1
#define AVR32_ECC_WORDADDR                                          4
#define AVR32_ECC_WORDADDR_MASK                            0x0000fff0
#define AVR32_ECC_WORDADDR_OFFSET                                   4
#define AVR32_ECC_WORDADDR_SIZE                                    12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_ecc_cr_t {
    unsigned int                 :31;
    unsigned int rst             : 1;
} avr32_ecc_cr_t;



typedef struct avr32_ecc_mr_t {
    unsigned int                 :30;
    unsigned int pagesize        : 2;
} avr32_ecc_mr_t;



typedef struct avr32_ecc_sr_t {
    unsigned int                 :29;
    unsigned int mulerr          : 1;
    unsigned int eccerr          : 1;
    unsigned int recerr          : 1;
} avr32_ecc_sr_t;



typedef struct avr32_ecc_pr_t {
    unsigned int                 :16;
    unsigned int wordaddr        :12;
    unsigned int bitaddr         : 4;
} avr32_ecc_pr_t;



typedef struct avr32_ecc_npr_t {
    unsigned int                 :16;
    unsigned int nparity         :16;
} avr32_ecc_npr_t;



typedef struct avr32_ecc_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_ecc_cr_t                 CR        ;
  };
  union {
          unsigned long                  mr        ;//0x0004
          avr32_ecc_mr_t                 MR        ;
  };
  union {
    const unsigned long                  sr        ;//0x0008
    const avr32_ecc_sr_t                 SR        ;
  };
  union {
    const unsigned long                  pr        ;//0x000c
    const avr32_ecc_pr_t                 PR        ;
  };
  union {
    const unsigned long                  npr       ;//0x0010
    const avr32_ecc_npr_t                NPR       ;
  };
} avr32_ecc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ECC_100_H_INCLUDED*/
#endif

