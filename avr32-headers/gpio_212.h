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
#ifndef AVR32_GPIO_212_H_INCLUDED
#define AVR32_GPIO_212_H_INCLUDED

#define AVR32_GPIO_H_VERSION 212

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_GPIO_<register>
 - Bitfield mask:   AVR32_GPIO_<register>_<bitfield>
 - Bitfield offset: AVR32_GPIO_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_GPIO_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_GPIO_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_GPIO_<bitfield>
 - Bitfield offset: AVR32_GPIO_<bitfield>_OFFSET
 - Bitfield size:   AVR32_GPIO_<bitfield>_SIZE
 - Bitfield values: AVR32_GPIO_<bitfield>_<value name>
 - Bitfield values: AVR32_GPIO_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_GPIO_AR                                                0
#define AVR32_GPIO_AR_MASK                                  0x00000001
#define AVR32_GPIO_AR_OFFSET                                         0
#define AVR32_GPIO_AR_SIZE                                           1
#define AVR32_GPIO_ASR                                      0x000001e4
#define AVR32_GPIO_ASR_AR                                            0
#define AVR32_GPIO_ASR_AR_MASK                              0x00000001
#define AVR32_GPIO_ASR_AR_OFFSET                                     0
#define AVR32_GPIO_ASR_AR_SIZE                                       1
#define AVR32_GPIO_ASR_MASK                                 0x00000001
#define AVR32_GPIO_ASR_RESETVALUE                           0x00000000
#define AVR32_GPIO_EVER                                     0x00000180
#define AVR32_GPIO_EVERC                                    0x00000188
#define AVR32_GPIO_EVERS                                    0x00000184
#define AVR32_GPIO_EVERT                                    0x0000018c
#define AVR32_GPIO_GFER                                     0x000000c0
#define AVR32_GPIO_GFERC                                    0x000000c8
#define AVR32_GPIO_GFERS                                    0x000000c4
#define AVR32_GPIO_GFERT                                    0x000000cc
#define AVR32_GPIO_GPER                                     0x00000000
#define AVR32_GPIO_GPERC                                    0x00000008
#define AVR32_GPIO_GPERS                                    0x00000004
#define AVR32_GPIO_GPERT                                    0x0000000c
#define AVR32_GPIO_IER                                      0x00000090
#define AVR32_GPIO_IERC                                     0x00000098
#define AVR32_GPIO_IERS                                     0x00000094
#define AVR32_GPIO_IERT                                     0x0000009c
#define AVR32_GPIO_IFR                                      0x000000d0
#define AVR32_GPIO_IFRC                                     0x000000d8
#define AVR32_GPIO_IMR0                                     0x000000a0
#define AVR32_GPIO_IMR0C                                    0x000000a8
#define AVR32_GPIO_IMR0S                                    0x000000a4
#define AVR32_GPIO_IMR0T                                    0x000000ac
#define AVR32_GPIO_IMR1                                     0x000000b0
#define AVR32_GPIO_IMR1C                                    0x000000b8
#define AVR32_GPIO_IMR1S                                    0x000000b4
#define AVR32_GPIO_IMR1T                                    0x000000bc
#define AVR32_GPIO_KEY                                              24
#define AVR32_GPIO_KEY_MASK                                 0xff000000
#define AVR32_GPIO_KEY_OFFSET                                       24
#define AVR32_GPIO_KEY_SIZE                                          8
#define AVR32_GPIO_LOCK                                     0x000001a0
#define AVR32_GPIO_LOCKC                                    0x000001a8
#define AVR32_GPIO_LOCKS                                    0x000001a4
#define AVR32_GPIO_LOCKT                                    0x000001ac
#define AVR32_GPIO_ODCR0                                    0x00000100
#define AVR32_GPIO_ODCR0C                                   0x00000108
#define AVR32_GPIO_ODCR0S                                   0x00000104
#define AVR32_GPIO_ODCR0T                                   0x0000010c
#define AVR32_GPIO_ODCR1                                    0x00000110
#define AVR32_GPIO_ODCR1C                                   0x00000118
#define AVR32_GPIO_ODCR1S                                   0x00000114
#define AVR32_GPIO_ODCR1T                                   0x0000011c
#define AVR32_GPIO_ODER                                     0x00000040
#define AVR32_GPIO_ODERC                                    0x00000048
#define AVR32_GPIO_ODERS                                    0x00000044
#define AVR32_GPIO_ODERT                                    0x0000004c
#define AVR32_GPIO_ODMER                                    0x000000e0
#define AVR32_GPIO_ODMERC                                   0x000000e8
#define AVR32_GPIO_ODMERS                                   0x000000e4
#define AVR32_GPIO_ODMERT                                   0x000000ec
#define AVR32_GPIO_OFFSET                                            0
#define AVR32_GPIO_OFFSET_MASK                              0x000003ff
#define AVR32_GPIO_OFFSET_OFFSET                                     0
#define AVR32_GPIO_OFFSET_SIZE                                      10
#define AVR32_GPIO_OSRR0                                    0x00000130
#define AVR32_GPIO_OSRR0C                                   0x00000138
#define AVR32_GPIO_OSRR0S                                   0x00000134
#define AVR32_GPIO_OSRR0T                                   0x0000013c
#define AVR32_GPIO_OVR                                      0x00000050
#define AVR32_GPIO_OVRC                                     0x00000058
#define AVR32_GPIO_OVRS                                     0x00000054
#define AVR32_GPIO_OVRT                                     0x0000005c
#define AVR32_GPIO_PARAMETER                                0x000001f8
#define AVR32_GPIO_PARAMETER_MASK                           0xffffffff
#define AVR32_GPIO_PARAMETER_OFFSET                                  0
#define AVR32_GPIO_PARAMETER_SIZE                                   32
#define AVR32_GPIO_PARAMETER_RESETVALUE                     0x00000000
#define AVR32_GPIO_PDER                                     0x00000080
#define AVR32_GPIO_PDERC                                    0x00000088
#define AVR32_GPIO_PDERS                                    0x00000084
#define AVR32_GPIO_PDERT                                    0x0000008c
#define AVR32_GPIO_PMR0                                     0x00000010
#define AVR32_GPIO_PMR0C                                    0x00000018
#define AVR32_GPIO_PMR0S                                    0x00000014
#define AVR32_GPIO_PMR0T                                    0x0000001c
#define AVR32_GPIO_PMR1                                     0x00000020
#define AVR32_GPIO_PMR1C                                    0x00000028
#define AVR32_GPIO_PMR1S                                    0x00000024
#define AVR32_GPIO_PMR1T                                    0x0000002c
#define AVR32_GPIO_PMR2                                     0x00000030
#define AVR32_GPIO_PMR2C                                    0x00000038
#define AVR32_GPIO_PMR2S                                    0x00000034
#define AVR32_GPIO_PMR2T                                    0x0000003c
#define AVR32_GPIO_PUER                                     0x00000070
#define AVR32_GPIO_PUERC                                    0x00000078
#define AVR32_GPIO_PUERS                                    0x00000074
#define AVR32_GPIO_PUERT                                    0x0000007c
#define AVR32_GPIO_PVR                                      0x00000060
#define AVR32_GPIO_STER                                     0x00000160
#define AVR32_GPIO_STERC                                    0x00000168
#define AVR32_GPIO_STERS                                    0x00000164
#define AVR32_GPIO_STERT                                    0x0000016c
#define AVR32_GPIO_UNLOCK                                   0x000001e0
#define AVR32_GPIO_UNLOCK_KEY                                       24
#define AVR32_GPIO_UNLOCK_KEY_MASK                          0xff000000
#define AVR32_GPIO_UNLOCK_KEY_OFFSET                                24
#define AVR32_GPIO_UNLOCK_KEY_SIZE                                   8
#define AVR32_GPIO_UNLOCK_MASK                              0xff0003ff
#define AVR32_GPIO_UNLOCK_OFFSET                                     0
#define AVR32_GPIO_UNLOCK_OFFSET_MASK                       0x000003ff
#define AVR32_GPIO_UNLOCK_OFFSET_OFFSET                              0
#define AVR32_GPIO_UNLOCK_OFFSET_SIZE                               10
#define AVR32_GPIO_UNLOCK_RESETVALUE                        0x00000000
#define AVR32_GPIO_VERSION                                  0x000001fc
#define AVR32_GPIO_VERSION_MASK                             0x000f0fff
#define AVR32_GPIO_VERSION_OFFSET                                    0
#define AVR32_GPIO_VERSION_SIZE                                     24
#define AVR32_GPIO_VERSION_VARIANT                                  16
#define AVR32_GPIO_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_GPIO_VERSION_VARIANT_OFFSET                           16
#define AVR32_GPIO_VERSION_VARIANT_SIZE                              4
#define AVR32_GPIO_VERSION_VERSION                                   0
#define AVR32_GPIO_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_GPIO_VERSION_VERSION_OFFSET                            0
#define AVR32_GPIO_VERSION_VERSION_SIZE                             12
#define AVR32_GPIO_VERSION_RESETVALUE                       0x00000212




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_gpio_unlock_t {
    unsigned int key             : 8;
    unsigned int                 :14;
    unsigned int offset          :10;
} avr32_gpio_unlock_t;


typedef struct avr32_gpio_asr_t {
    unsigned int                 :31;
    unsigned int ar              : 1;
} avr32_gpio_asr_t;


typedef struct avr32_gpio_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_gpio_version_t;


typedef struct avr32_gpio_port_t {
          unsigned long                  gper      ;//0x0000
          unsigned long                  gpers     ;//0x0004
          unsigned long                  gperc     ;//0x0008
          unsigned long                  gpert     ;//0x000c
          unsigned long                  pmr0      ;//0x0010
          unsigned long                  pmr0s     ;//0x0014
          unsigned long                  pmr0c     ;//0x0018
          unsigned long                  pmr0t     ;//0x001c
          unsigned long                  pmr1      ;//0x0020
          unsigned long                  pmr1s     ;//0x0024
          unsigned long                  pmr1c     ;//0x0028
          unsigned long                  pmr1t     ;//0x002c
          unsigned long                  pmr2      ;//0x0030
          unsigned long                  pmr2s     ;//0x0034
          unsigned long                  pmr2c     ;//0x0038
          unsigned long                  pmr2t     ;//0x003c
          unsigned long                  oder      ;//0x0040
          unsigned long                  oders     ;//0x0044
          unsigned long                  oderc     ;//0x0048
          unsigned long                  odert     ;//0x004c
          unsigned long                  ovr       ;//0x0050
          unsigned long                  ovrs      ;//0x0054
          unsigned long                  ovrc      ;//0x0058
          unsigned long                  ovrt      ;//0x005c
    const unsigned long                  pvr       ;//0x0060
          unsigned int                   :32       ;//0x0064
          unsigned int                   :32       ;//0x0068
          unsigned int                   :32       ;//0x006c
          unsigned long                  puer      ;//0x0070
          unsigned long                  puers     ;//0x0074
          unsigned long                  puerc     ;//0x0078
          unsigned long                  puert     ;//0x007c
          unsigned long                  pder      ;//0x0080
          unsigned long                  pders     ;//0x0084
          unsigned long                  pderc     ;//0x0088
          unsigned long                  pdert     ;//0x008c
          unsigned long                  ier       ;//0x0090
          unsigned long                  iers      ;//0x0094
          unsigned long                  ierc      ;//0x0098
          unsigned long                  iert      ;//0x009c
          unsigned long                  imr0      ;//0x00a0
          unsigned long                  imr0s     ;//0x00a4
          unsigned long                  imr0c     ;//0x00a8
          unsigned long                  imr0t     ;//0x00ac
          unsigned long                  imr1      ;//0x00b0
          unsigned long                  imr1s     ;//0x00b4
          unsigned long                  imr1c     ;//0x00b8
          unsigned long                  imr1t     ;//0x00bc
          unsigned long                  gfer      ;//0x00c0
          unsigned long                  gfers     ;//0x00c4
          unsigned long                  gferc     ;//0x00c8
          unsigned long                  gfert     ;//0x00cc
    const unsigned long                  ifr       ;//0x00d0
          unsigned int                   :32       ;//0x00d4
          unsigned long                  ifrc      ;//0x00d8
          unsigned int                   :32       ;//0x00dc
          unsigned long                  odmer     ;//0x00e0
          unsigned long                  odmers    ;//0x00e4
          unsigned long                  odmerc    ;//0x00e8
          unsigned long                  odmert    ;//0x00ec
          unsigned int                   :32       ;//0x00f0
          unsigned int                   :32       ;//0x00f4
          unsigned int                   :32       ;//0x00f8
          unsigned int                   :32       ;//0x00fc
          unsigned long                  odcr0     ;//0x0100
          unsigned long                  odcr0s    ;//0x0104
          unsigned long                  odcr0c    ;//0x0108
          unsigned long                  odcr0t    ;//0x010c
          unsigned long                  odcr1     ;//0x0110
          unsigned long                  odcr1s    ;//0x0114
          unsigned long                  odcr1c    ;//0x0118
          unsigned long                  odcr1t    ;//0x011c
          unsigned int                   :32       ;//0x0120
          unsigned int                   :32       ;//0x0124
          unsigned int                   :32       ;//0x0128
          unsigned int                   :32       ;//0x012c
          unsigned long                  osrr0     ;//0x0130
          unsigned long                  osrr0s    ;//0x0134
          unsigned long                  osrr0c    ;//0x0138
          unsigned long                  osrr0t    ;//0x013c
          unsigned int                   :32       ;//0x0140
          unsigned int                   :32       ;//0x0144
          unsigned int                   :32       ;//0x0148
          unsigned int                   :32       ;//0x014c
          unsigned int                   :32       ;//0x0150
          unsigned int                   :32       ;//0x0154
          unsigned int                   :32       ;//0x0158
          unsigned int                   :32       ;//0x015c
          unsigned long                  ster      ;//0x0160
          unsigned long                  sters     ;//0x0164
          unsigned long                  sterc     ;//0x0168
          unsigned long                  stert     ;//0x016c
          unsigned int                   :32       ;//0x0170
          unsigned int                   :32       ;//0x0174
          unsigned int                   :32       ;//0x0178
          unsigned int                   :32       ;//0x017c
          unsigned long                  ever      ;//0x0180
          unsigned long                  evers     ;//0x0184
          unsigned long                  everc     ;//0x0188
          unsigned long                  evert     ;//0x018c
          unsigned int                   :32       ;//0x0190
          unsigned int                   :32       ;//0x0194
          unsigned int                   :32       ;//0x0198
          unsigned int                   :32       ;//0x019c
          unsigned long                  lock      ;//0x01a0
          unsigned long                  locks     ;//0x01a4
          unsigned long                  lockc     ;//0x01a8
          unsigned long                  lockt     ;//0x01ac
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
  union {
          unsigned long                  unlock    ;//0x01e0
          avr32_gpio_unlock_t            UNLOCK    ;
  };
  union {
          unsigned long                  asr       ;//0x01e4
          avr32_gpio_asr_t               ASR       ;
  };
          unsigned int                   :32       ;//0x01e8
          unsigned int                   :32       ;//0x01ec
          unsigned int                   :32       ;//0x01f0
          unsigned int                   :32       ;//0x01f4
    const unsigned int                   parameter ;//0x01f8
  union {
    const unsigned long                  version   ;//0x01fc
    const avr32_gpio_version_t           VERSION   ;
  };
} avr32_gpio_port_t;


typedef struct avr32_gpio_t {
  avr32_gpio_port_t port[AVR32_GPIO_PORT_LENGTH];//0x0
  avr32_gpio_port_t port_reserved[64 - AVR32_GPIO_PORT_LENGTH];//Padding
} avr32_gpio_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_GPIO_212_H_INCLUDED*/
#endif

