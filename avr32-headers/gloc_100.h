/*****************************************************************************
 *
 * Copyright (C) 2009 Atmel Corporation
 * 
 * Model        : UC3000
 * Revision     : $Revision: 65301 $
 * Checkin Date : $Date: 2008-12-16 13:03:18 +0100 (Tue, 16 Dec 2008) $ 
 *
 ****************************************************************************/
#ifndef AVR32_GLOC_100_H_INCLUDED
#define AVR32_GLOC_100_H_INCLUDED

#include "avr32/abi.h"


/*
 Note to user:

 The following defines are always generated:
 - Register offset: AVR32_GLOC_<register>
 - Bitfield mask:   AVR32_GLOC_<register>_<bitfield>
 - Bitfield offset: AVR32_GLOC_<register>_<bitfield>_OFFSET
 - Bitfield size:   AVR32_GLOC_<register>_<bitfield>_SIZE
 - Bitfield values: AVR32_GLOC_<register>_<bitfield>_<value name>

 The following defines are generated if they don't cause ambiguities,
 i.e. the name is unique, or all values with that name are the same.
 - Bitfield mask:   AVR32_GLOC_<bitfield>
 - Bitfield offset: AVR32_GLOC_<bitfield>_OFFSET
 - Bitfield size:   AVR32_GLOC_<bitfield>_SIZE
 - Bitfield values: AVR32_GLOC_<bitfield>_<value name>
 - Bitfield values: AVR32_GLOC_<value name>

 All defines are sorted alphabetically.
*/


#define AVR32_GLOC_AEN                                               0
#define AVR32_GLOC_AEN_MASK                                 0x0000000f
#define AVR32_GLOC_AEN_OFFSET                                        0
#define AVR32_GLOC_AEN_SIZE                                          4
#define AVR32_GLOC_CR                                       0x00000000
#define AVR32_GLOC_CR_AEN                                            0
#define AVR32_GLOC_CR_AEN_MASK                              0x0000000f
#define AVR32_GLOC_CR_AEN_OFFSET                                     0
#define AVR32_GLOC_CR_AEN_SIZE                                       4
#define AVR32_GLOC_CR_FILTEN                                        31
#define AVR32_GLOC_CR_FILTEN_MASK                           0x80000000
#define AVR32_GLOC_CR_FILTEN_OFFSET                                 31
#define AVR32_GLOC_CR_FILTEN_SIZE                                    1
#define AVR32_GLOC_CR_MASK                                  0x8000000f
#define AVR32_GLOC_CR_RESETVALUE                            0x00000000
#define AVR32_GLOC_FILTEN                                           31
#define AVR32_GLOC_FILTEN_MASK                              0x80000000
#define AVR32_GLOC_FILTEN_OFFSET                                    31
#define AVR32_GLOC_FILTEN_SIZE                                       1
#define AVR32_GLOC_LUTS_MASK                                0x000000ff
#define AVR32_GLOC_LUTS_OFFSET                                       0
#define AVR32_GLOC_LUTS_SIZE                                         8
#define AVR32_GLOC_PARAMETER                                0x00000038
#define AVR32_GLOC_PARAMETER_LUTS                                    0
#define AVR32_GLOC_PARAMETER_LUTS_MASK                      0x000000ff
#define AVR32_GLOC_PARAMETER_LUTS_OFFSET                             0
#define AVR32_GLOC_PARAMETER_LUTS_SIZE                               8
#define AVR32_GLOC_PARAMETER_MASK                           0x000000ff
#define AVR32_GLOC_PARAMETER_RESETVALUE                     0x00000000
#define AVR32_GLOC_TRUTH                                    0x00000004
#define AVR32_GLOC_TRUTH_MASK                               0x0000ffff
#define AVR32_GLOC_TRUTH_OFFSET                                      0
#define AVR32_GLOC_TRUTH_RESETVALUE                         0x00000000
#define AVR32_GLOC_TRUTH_SIZE                                       16
#define AVR32_GLOC_TRUTH_TRUTH                                       0
#define AVR32_GLOC_TRUTH_TRUTH_MASK                         0x0000ffff
#define AVR32_GLOC_TRUTH_TRUTH_OFFSET                                0
#define AVR32_GLOC_TRUTH_TRUTH_SIZE                                 16
#define AVR32_GLOC_VARIANT                                          16
#define AVR32_GLOC_VARIANT_MASK                             0x000f0000
#define AVR32_GLOC_VARIANT_OFFSET                                   16
#define AVR32_GLOC_VARIANT_SIZE                                      4
#define AVR32_GLOC_VERSION                                  0x0000003c
#define AVR32_GLOC_VERSION_MASK                             0x000f0fff
#define AVR32_GLOC_VERSION_OFFSET                                    0
#define AVR32_GLOC_VERSION_RESETVALUE                       0x00000000
#define AVR32_GLOC_VERSION_SIZE                                     12
#define AVR32_GLOC_VERSION_VARIANT                                  16
#define AVR32_GLOC_VERSION_VARIANT_MASK                     0x000f0000
#define AVR32_GLOC_VERSION_VARIANT_OFFSET                           16
#define AVR32_GLOC_VERSION_VARIANT_SIZE                              4
#define AVR32_GLOC_VERSION_VERSION                                   0
#define AVR32_GLOC_VERSION_VERSION_MASK                     0x00000fff
#define AVR32_GLOC_VERSION_VERSION_OFFSET                            0
#define AVR32_GLOC_VERSION_VERSION_SIZE                             12




#ifdef __AVR32_ABI_COMPILER__


typedef struct avr32_gloc_cr_t {
    unsigned int filten          : 1;
    unsigned int                 :27;
    unsigned int aen             : 4;
} avr32_gloc_cr_t;



typedef struct avr32_gloc_truth_t {
    unsigned int                 :16;
    unsigned int truth           :16;
} avr32_gloc_truth_t;



typedef struct avr32_gloc_parameter_t {
    unsigned int                 :24;
    unsigned int luts            : 8;
} avr32_gloc_parameter_t;



typedef struct avr32_gloc_version_t {
    unsigned int                 :12;
    unsigned int variant         : 4;
    unsigned int                 : 4;
    unsigned int version         :12;
} avr32_gloc_version_t;


typedef struct avr32_gloc_lut_t {
  union {
          unsigned long                  cr        ;//0x0000
          avr32_gloc_cr_t                CR        ;
  };
  union {
          unsigned long                  truth     ;//0x0004
          avr32_gloc_truth_t             TRUTH     ;
  };
} avr32_gloc_lut_t;


typedef struct avr32_gloc_t {
  avr32_gloc_lut_t lut[AVR32_GLOC_LUTS];//0x0
  avr32_gloc_lut_t lut_reserved[7 - AVR32_GLOC_LUTS];//Padding
  union {
    const unsigned long                  parameter ;//0x0038
    const avr32_gloc_parameter_t         PARAMETER ;
  };
  union {
    const unsigned long                  version   ;//0x003c
    const avr32_gloc_version_t           VERSION   ;
  };
} avr32_gloc_t;



/*#ifdef __AVR32_ABI_COMPILER__*/
#endif

/*#ifdef AVR32_GLOC_100_H_INCLUDED*/
#endif

