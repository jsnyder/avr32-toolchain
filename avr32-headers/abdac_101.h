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
#ifndef AVR32_ABDAC_101_H_INCLUDED
#define AVR32_ABDAC_101_H_INCLUDED

#define AVR32_ABDAC_H_VERSION 101

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_ABDAC_<register>
 - Bitfield mask:   AVR32_ABDAC_<register>_<bitfield>
 - Bitfield offset: AVR32_ABDAC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ABDAC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_ABDAC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_ABDAC_<bitfield>
 - Bitfield offset: AVR32_ABDAC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_ABDAC_<bitfield>_SIZE
 - Bitfield values: AVR32_ABDAC_<bitfield>_<value name>
 - Bitfield values: AVR32_ABDAC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_ABDAC_CHANNEL0                                          0
#define AVR32_ABDAC_CHANNEL0_MASK                            0x0000ffff
#define AVR32_ABDAC_CHANNEL0_OFFSET                                   0
#define AVR32_ABDAC_CHANNEL0_SIZE                                    16
#define AVR32_ABDAC_CHANNEL1                                         16
#define AVR32_ABDAC_CHANNEL1_MASK                            0xffff0000
#define AVR32_ABDAC_CHANNEL1_OFFSET                                  16
#define AVR32_ABDAC_CHANNEL1_SIZE                                    16
#define AVR32_ABDAC_CR                                       0x00000008
#define AVR32_ABDAC_CR_EN                                            31
#define AVR32_ABDAC_CR_EN_MASK                               0x80000000
#define AVR32_ABDAC_CR_EN_OFFSET                                     31
#define AVR32_ABDAC_CR_EN_SIZE                                        1
#define AVR32_ABDAC_CR_SWAP                                          30
#define AVR32_ABDAC_CR_SWAP_MASK                             0x40000000
#define AVR32_ABDAC_CR_SWAP_OFFSET                                   30
#define AVR32_ABDAC_CR_SWAP_SIZE                                      1
#define AVR32_ABDAC_EN                                               31
#define AVR32_ABDAC_EN_MASK                                  0x80000000
#define AVR32_ABDAC_EN_OFFSET                                        31
#define AVR32_ABDAC_EN_SIZE                                           1
#define AVR32_ABDAC_ICR                                      0x00000018
#define AVR32_ABDAC_ICR_UNDERRUN                                     28
#define AVR32_ABDAC_ICR_UNDERRUN_MASK                        0x10000000
#define AVR32_ABDAC_ICR_UNDERRUN_OFFSET                              28
#define AVR32_ABDAC_ICR_UNDERRUN_SIZE                                 1
#define AVR32_ABDAC_IDR                                      0x00000014
#define AVR32_ABDAC_IDR_TX_READY                                     29
#define AVR32_ABDAC_IDR_TX_READY_MASK                        0x20000000
#define AVR32_ABDAC_IDR_TX_READY_OFFSET                              29
#define AVR32_ABDAC_IDR_TX_READY_SIZE                                 1
#define AVR32_ABDAC_IDR_UNDERRUN                                     28
#define AVR32_ABDAC_IDR_UNDERRUN_MASK                        0x10000000
#define AVR32_ABDAC_IDR_UNDERRUN_OFFSET                              28
#define AVR32_ABDAC_IDR_UNDERRUN_SIZE                                 1
#define AVR32_ABDAC_IER                                      0x00000010
#define AVR32_ABDAC_IER_TX_READY                                     29
#define AVR32_ABDAC_IER_TX_READY_MASK                        0x20000000
#define AVR32_ABDAC_IER_TX_READY_OFFSET                              29
#define AVR32_ABDAC_IER_TX_READY_SIZE                                 1
#define AVR32_ABDAC_IER_UNDERRUN                                     28
#define AVR32_ABDAC_IER_UNDERRUN_MASK                        0x10000000
#define AVR32_ABDAC_IER_UNDERRUN_OFFSET                              28
#define AVR32_ABDAC_IER_UNDERRUN_SIZE                                 1
#define AVR32_ABDAC_IMR                                      0x0000000c
#define AVR32_ABDAC_IMR_TX_READY                                     29
#define AVR32_ABDAC_IMR_TX_READY_MASK                        0x20000000
#define AVR32_ABDAC_IMR_TX_READY_OFFSET                              29
#define AVR32_ABDAC_IMR_TX_READY_SIZE                                 1
#define AVR32_ABDAC_IMR_UNDERRUN                                     28
#define AVR32_ABDAC_IMR_UNDERRUN_MASK                        0x10000000
#define AVR32_ABDAC_IMR_UNDERRUN_OFFSET                              28
#define AVR32_ABDAC_IMR_UNDERRUN_SIZE                                 1
#define AVR32_ABDAC_ISR                                      0x0000001c
#define AVR32_ABDAC_ISR_TX_READY                                     29
#define AVR32_ABDAC_ISR_TX_READY_MASK                        0x20000000
#define AVR32_ABDAC_ISR_TX_READY_OFFSET                              29
#define AVR32_ABDAC_ISR_TX_READY_SIZE                                 1
#define AVR32_ABDAC_ISR_UNDERRUN                                     28
#define AVR32_ABDAC_ISR_UNDERRUN_MASK                        0x10000000
#define AVR32_ABDAC_ISR_UNDERRUN_OFFSET                              28
#define AVR32_ABDAC_ISR_UNDERRUN_SIZE                                 1
#define AVR32_ABDAC_SDR                                      0x00000000
#define AVR32_ABDAC_SDR_CHANNEL0                                      0
#define AVR32_ABDAC_SDR_CHANNEL0_MASK                        0x0000ffff
#define AVR32_ABDAC_SDR_CHANNEL0_OFFSET                               0
#define AVR32_ABDAC_SDR_CHANNEL0_SIZE                                16
#define AVR32_ABDAC_SDR_CHANNEL1                                     16
#define AVR32_ABDAC_SDR_CHANNEL1_MASK                        0xffff0000
#define AVR32_ABDAC_SDR_CHANNEL1_OFFSET                              16
#define AVR32_ABDAC_SDR_CHANNEL1_SIZE                                16
#define AVR32_ABDAC_SWAP                                             30
#define AVR32_ABDAC_SWAP_MASK                                0x40000000
#define AVR32_ABDAC_SWAP_OFFSET                                      30
#define AVR32_ABDAC_SWAP_SIZE                                         1
#define AVR32_ABDAC_TX_READY                                         29
#define AVR32_ABDAC_TX_READY_MASK                            0x20000000
#define AVR32_ABDAC_TX_READY_OFFSET                                  29
#define AVR32_ABDAC_TX_READY_SIZE                                     1
#define AVR32_ABDAC_UNDERRUN                                         28
#define AVR32_ABDAC_UNDERRUN_MASK                            0x10000000
#define AVR32_ABDAC_UNDERRUN_OFFSET                                  28
#define AVR32_ABDAC_UNDERRUN_SIZE                                     1




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_abdac_sdr_t {
    unsigned int channel1        :16;
    unsigned int channel0        :16;
} avr32_abdac_sdr_t;



typedef struct avr32_abdac_cr_t {
    unsigned int en              : 1;
    unsigned int swap            : 1;
    unsigned int                 :30;
} avr32_abdac_cr_t;



typedef struct avr32_abdac_imr_t {
    unsigned int                 : 2;
    unsigned int tx_ready        : 1;
    unsigned int underrun        : 1;
    unsigned int                 :28;
} avr32_abdac_imr_t;



typedef struct avr32_abdac_ier_t {
    unsigned int                 : 2;
    unsigned int tx_ready        : 1;
    unsigned int underrun        : 1;
    unsigned int                 :28;
} avr32_abdac_ier_t;



typedef struct avr32_abdac_idr_t {
    unsigned int                 : 2;
    unsigned int tx_ready        : 1;
    unsigned int underrun        : 1;
    unsigned int                 :28;
} avr32_abdac_idr_t;



typedef struct avr32_abdac_icr_t {
    unsigned int                 : 3;
    unsigned int underrun        : 1;
    unsigned int                 :28;
} avr32_abdac_icr_t;



typedef struct avr32_abdac_isr_t {
    unsigned int                 : 2;
    unsigned int tx_ready        : 1;
    unsigned int underrun        : 1;
    unsigned int                 :28;
} avr32_abdac_isr_t;



typedef struct avr32_abdac_t {
  union {
          unsigned long                  sdr       ;//0x0000
          avr32_abdac_sdr_t              SDR       ;
  };
          unsigned int                   :32       ;//0x0004
  union {
          unsigned long                  cr        ;//0x0008
          avr32_abdac_cr_t               CR        ;
  };
  union {
    const unsigned long                  imr       ;//0x000c
    const avr32_abdac_imr_t              IMR       ;
  };
  union {
          unsigned long                  ier       ;//0x0010
          avr32_abdac_ier_t              IER       ;
  };
  union {
          unsigned long                  idr       ;//0x0014
          avr32_abdac_idr_t              IDR       ;
  };
  union {
          unsigned long                  icr       ;//0x0018
          avr32_abdac_icr_t              ICR       ;
  };
  union {
    const unsigned long                  isr       ;//0x001c
    const avr32_abdac_isr_t              ISR       ;
  };
} avr32_abdac_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_ABDAC_101_H_INCLUDED*/
#endif

