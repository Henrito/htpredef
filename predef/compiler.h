/* MIT License
 * 
 * Copyright (c) 2019 Henry To
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef HT_PREDEF_COMPILER_H
#define HT_PREDEF_COMPILER_H

typedef int HTPredefCompiler;

/*------------------------------------------------------------------------*
 * COMPILER PREDEFINED MACROS                                             *
 *------------------------------------------------------------------------*/

/*------------------------------------------------------------------- ACC */
#ifdef _ACC_
  #define HT_COMPILER_ACC
  #define HT_COMPILER_NAME   "ACC"
  #define HT_COMPILER_AUTHOR "David Ashley"
/*------------------------------------------------ Amsterdam Compiler Kit */
#elif defined __ACK__
  #define HT_COMPILER_ACK
  #define HT_COMPILER_NAME   "The Amsterdam Compiler Kit"
  #define HT_COMPILER_AUTHOR "Vrije Universiteit, Amsterdam"
/*------------------------------------------------------------------- ARM */
#elif defined __CC_ARM
  #define HT_COMPILER_ARM
  #define HT_COMPILER_NAME   "ARM Compiler"
  #define HT_COMPILER_AUTHOR "ARM Limited"
#elif defined __CA__
  #define HT_COMPILER_KEIL
  #define HT_COMPILER_NAME   "Keil CARM C Compiler"
  #define HT_COMPILER_AUTHOR "ARM Limited"
#elif defined __C166__
  #define HT_COMPILER_C166
  #define HT_COMPILER_NAME   "Keil C166 C Compiler"
  #define HT_COMPILER_AUTHOR "ARM Limited"
#elif defined __C51__
  #define HT_COMPILER_C51
  #define HT_COMPILER_NAME   "Keil C51 C Compiler"
  #define HT_COMPILER_AUTHOR "ARM Limited"
/*--------------------------------------------------------------- Aztec C */
#elif defined AZTEC_C
  #define HT_COMPILER_AZTEC
  #define HT_COMPILER_NAME   "Aztec C"
  #define HT_COMPILER_AUTHOR "Manx Software Systems"
/*--------------------------------------------------------------- Borland */
#elif defined __CODEGEARC__
  #define HT_COMPILER_BORLANDC
  #define HT_COMPILER_NAME   "C++ Builder"
  #define HT_COMPILER_AUTHOR "CodeGear"
#elif defined __BORLANDC__
  #define HT_COMPILER_BORLANDC
  #define HT_COMPILER_NAME   "Borland C++"
  #define HT_COMPILER_AUTHOR "Borland Software Corporation"
#elif defined __PUREC__
  #define HT_COMPILER_TURBOC
  #define HT_COMPILER_NAME   "Pure C"
  #define HT_COMPILER_AUTHOR "Borland Software Corporation"
#elif defined __TURBOC__
  #define HT_COMPILER_TURBOC
  #define HT_COMPILER_NAME   "Pure C"
  #define HT_COMPILER_AUTHOR "Borland Software Corporation"
/*--------------------------------------------------------- C-to-Hardware */
#elif defined __CHC__
  #define HT_COMPILER_CHC
  #define HT_COMPILER_NAME   "C-to-Hardware"
  #define HT_COMPILER_AUTHOR "Altium LLC"
/*------------------------------------------------------------------ CC65 */
#elif defined __CC65__
  #define HT_COMPILER_CC65
  #define HT_COMPILER_NAME   "CC65"
  #define HT_COMPILER_AUTHOR "Ullrich von Bassewitz"
/*-------------------------------------------------------------------- Ch */
#elif defined _CH_
  #define HT_COMPILER_CH
  #define HT_COMPILER_NAME   "Ch"
  #define HT_COMPILER_AUTHOR "Harry H. Cheng"
/*----------------------------------------------------------------- Clang */
#elif defined __clang__
  #define HT_COMPILER_CLANG
  #define HT_COMPILER_NAME   "Clang"
  #define HT_COMPILER_AUTHOR "Apple Inc."
/*----------------------------------------------------------- CodeWarrior */
#elif defined __MWERKS__ || defined __CWCC
  #define HT_COMPILER_MWERKS
  #define HT_COMPILER_NAME   "CodeWarrior"
  #define HT_COMPILER_AUTHOR "Metrowerks"
/*---------------------------------------------------------- Comeau C/C++ */
#elif defined __COMO__
  #define HT_COMPILER_COMO
  #define HT_COMPILER_NAME   "Comeau C/C++"
  #define HT_COMPILER_AUTHOR "Comeau Computing"
/*---------------------------------------------------------- Compaq C/C++ */
#elif defined __DECC
  #define HT_COMPILER_DECC
  #define HT_COMPILER_NAME   "Compaq C"
  #define HT_COMPILER_AUTHOR "Compaq"
#elif defined __DECCXX
  #define HT_COMPILER_DECCXX
  #define HT_COMPILER_NAME   "Compaq C++"
  #define HT_COMPILER_AUTHOR "Compaq"
/*-------------------------------------------------------------- CompCert */
#elif defined __COMPCERT__
  #define HT_COMPILER_COMPCERT
  #define HT_COMPILER_NAME   "CompCert"
  #define HT_COMPILER_AUTHOR "INRIA"
/*-------------------------------------------------------------- Convex C */
#elif defined __convexc__
  #define HT_COMPILER_CONVEX
  #define HT_COMPILER_NAME   "CONVEX Portable C Compiler"
  #define HT_COMPILER_AUTHOR "CONVEX Computer Corporation"
/*------------------------------------------------------------- Converity */
#elif defined __COVERITY__
  #define HT_COMPILER_COVERITY
  #define HT_COMPILER_NAME   "Coverity Code Advisor"
  #define HT_COMPILER_AUTHOR "Coverity"
/*---------------------------------------------------------------- Cray C */
#elif defined _CRAYC
  #define HT_COMPILER_CRAY
  #define HT_COMPILER_NAME   "Cray C/C++ Compiler"
  #define HT_COMPILER_AUTHOR "Cray Inc."
/*----------------------------------------------------------------- DEC C */
#elif defined __DECC
  #define HT_COMPILER_DECC
  #define HT_COMPILER_NAME   "DEC C"
  #define HT_COMPILER_AUTHOR "Digital Equipment Corporation"
/*------------------------------------------------------------------ DICE */
#elif defined _DICE
  #define HT_COMPILER_DICE
  #define HT_COMPILER_NAME   "DICE"
  #define HT_COMPILER_AUTHOR "Obvious Implementations Corporation"
/*------------------------------------------------------------------ Diab */
#elif defined __DCC__
  #define HT_COMPILER_DCC
  #define HT_COMPILER_NAME   "Diab Compiler"
  #define HT_COMPILER_AUTHOR "Wind River Systems, Inc."
/*---------------------------------------------------------- Digital Mars */
#elif defined __DMC__
  #define HT_COMPILER_DMC
  #define HT_COMPILER_NAME   "Digital Mars Compiler"
  #define HT_COMPILER_AUTHOR "Digital Mars"
/*---------------------------------------------------- Dignus Systems/C++ */
#elif defined __SYSC__
  #define HT_COMPILER_SYSC
  #define HT_COMPILER_NAME   "Systems/C++"
  #define HT_COMPILER_AUTHOR "Dignus"
/*----------------------------------------------------------------- DJGPP */
#elif defined __DJGPP__
  #define HT_COMPILER__DJGPP
  #define HT_COMPILER_NAME   "DJGPP"
  #define HT_COMPILER_AUTHOR "DJ Delorie"
/*------------------------------------------------------ EDG C++ Frontend */
#elif defined __EDG__
  #define HT_COMPILER_EDG
  #define HT_COMPILER_NAME   "C++ Frontend"
  #define HT_COMPILER_AUTHOR "Edison Design Group"
/*--------------------------------------------------------------- EKOpath */
#elif defined __PATHCC__
  #define HT_COMPILER_PATHCC
  #define HT_COMPILER_NAME   "EKOPath"
  #define HT_COMPILER_AUTHOR "Pathscale Inc."
/*--------------------------------------------------------------- Fujitsu */
#elif defined __FCC_VERSION
  #define HT_COMPILER_FCC
  #define HT_COMPILER_NAME   "Fujitsu Compiler"
  #define HT_COMPILER_AUTHOR "Fujitsu Ltd."
/*------------------------------------------------------------------- GCC */
#elif defined __GNUC__ && !(defined __clang__ || defined __INTEL_COMPILER)
  #define HT_COMPILER_GCC
  #define HT_COMPILER_NAME   "GCC"
  #define HT_COMPILER_AUTHOR "GNU Project"
#elif defined __GNUG__ && !(defined __clang__ || defined __INTEL_COMPILER)
  #define HT_COMPILER_GNUG
  #define HT_COMPILER_NAME   "G++"
  #define HT_COMPILER_AUTHOR "GNU Project"
/*----------------------------------------------------------- Green Hills */
#elif defined __ghs__
  #define HT_COMPILER_GHS
  #define HT_COMPILER_NAME   "Green Hills C/C++"
  #define HT_COMPILER_AUTHOR "Green Hills Software"
/*---------------------------------------------------------------- High C */
#elif defined __HIGHC__
  #define HT_COMPILER_HIGH_C
  #define HT_COMPILER_NAME   "High C"
  #define HT_COMPILER_AUTHOR "MetaWare, Inc."
/*------------------------------------------------------------- HP C/aC++ */
#elif defined __HT_cc
  #define HT_COMPILER_HP_CC
  #define HT_COMPILER_NAME   "HP C"
  #define HT_COMPILER_AUTHOR "Hewlett-Packard Company"
#elif defined __HP_aCC
  #define HT_COMPILER_HP_ACC
  #define HT_COMPILER_NAME   "HP aC++"
  #define HT_COMPILER_AUTHOR "Hewlett-Packard Company"
/*------------------------------------------------------------- IAR C/C++ */
#elif defined __IAR_SYSTEMS_ICC__
  #define HT_COMPILER_IAR
  #define HT_COMPILER_NAME   "IAR C/C++"
  #define HT_COMPILER_AUTHOR "IAR Systems"
/*---------------------------------------------------------------- IBM XL */
#elif defined __IBMC__
  #define HT_COMPILER_XLC
  #define HT_COMPILER_NAME   "XL C"
  #define HT_COMPILER_AUTHOR "IBM"
#elif defined __IBMCPP__
  #define HT_COMPILER_
  #define HT_COMPILER_NAME   "XL C++"
  #define HT_COMPILER_AUTHOR "IBM"
/*------------------------------------------------------------ ImageCraft */
#elif defined __IMAGECRAFT__
  #define HT_COMPILER_IMAGECRAFT
  #define HT_COMPILER_NAME   "ImageCraft C Compiler"
  #define HT_COMPILER_AUTHOR "ImageCraft Productions"
/*----------------------------------------------------------- Intel C/C++ */
#elif defined __INTEL_COMPILER
  #define HT_COMPILER_ICC
  #define HT_COMPILER_NAME   "Intel C/C++ Compiler"
  #define HT_COMPILER_AUTHOR "Intel Corporation"
/*--------------------------------------------------------------- Kai C++ */
#elif defined __KCC
  #define HT_COMPILER_KCC
  #define HT_COMPILER_NAME   "KAI C++"
  #define HT_COMPILER_AUTHOR "Kuck & Associates, Inc."
/*------------------------------------------------------------------- lcc */
#elif defined __LCC__
  #define HT_COMPILER_LCC
  #define HT_COMPILER_NAME   "lcc"
  #define HT_COMPILER_AUTHOR "Christopher W. Fraser and David R. Hanson"
/*------------------------------------------------------------------ LLVM */
#elif defined __llvm__
  #define HT_COMPILER_LLVM
  #define HT_COMPILER_NAME   "LLVM"
  #define HT_COMPILER_AUTHOR "LLVM Development Group"
/*--------------------------------------- Macintosh Programmer's Workshop */
#elif defined __MRC__
  #define HT_COMPILER_MPW
  #define HT_COMPILER_NAME   "Macintosh Programmer's Workshop"
  #define HT_COMPILER_AUTHOR "Apple Inc."
/*------------------------------------------------------------ MicroBlaze */
#elif defined __CMB__
  #define HT_COMPILER_CMB
  #define HT_COMPILER_NAME   "MicroBlaze C Compiler"
  #define HT_COMPILER_AUTHOR "Altium LLC"
#elif defined __CPMB__
  #define HT_COMPILER_CPMB
  #define HT_COMPILER_NAME   "MicroBlaze C++ Compiler"
  #define HT_COMPILER_AUTHOR "Altium LLC"
/*-------------------------------------------------------- Microtec C/C++ */
#elif defined _MRI
  #define HT_COMPILER_MRI
  #define HT_COMPILER_NAME   "Microtec C/C++"
  #define HT_COMPILER_AUTHOR "Microtec"
/*-------------------------------------------------------- Microway NDP C */
#elif defined __NDPC__ || defined __NDPX__
  #define HT_COMPILER_NDPC
  #define HT_COMPILER_NAME   "Microway NDP C"
  #define HT_COMPILER_AUTHOR "Microway"
/*------------------------------------------------------------- Miracle C */
#elif defined MIRACLE
  #define HT_COMPILER_MIRACLE
  #define HT_COMPILER_NAME   "Miracle C"
  #define HT_COMPILER_AUTHOR "Tadeusz Szocik"
/*----------------------------------------------------------------- MPLAB */
#elif defined __XC__
  #define HT_COMPILER_XC
  #define HT_COMPILER_NAME   "MPLAB XC"
  #define HT_COMPILER_AUTHOR "Microchip Technology Inc."
#elif defined __18CXX
  #define HT_COMPILER_18CXX
  #define HT_COMPILER_NAME   "MPLAB C18"
  #define HT_COMPILER_AUTHOR "Microchip Technology Inc."
#elif defined __PIC32MX
  #define HT_COMPILER_PIC32MX
  #define HT_COMPILER_NAME   "MPLAB C32"
  #define HT_COMPILER_AUTHOR "Microchip Technology Inc."
/*-------------------------------------------------------------- Norcroft */
#elif defined __CC_NORCROFT
  #define HT_COMPILER_MWERKS
  #define HT_COMPILER_NAME   "Norcroft"
  #define HT_COMPILER_AUTHOR "Codemist Ltd"
/*------------------------------------------------------------------ nwcc */
#elif defined __NWCC__
  #define HT_COMPILER_NWCC
  #define HT_COMPILER_NAME   "nwcc"
  #define HT_COMPILER_AUTHOR "Nils Weller"
/*---------------------------------------------------------------- Open64 */
#elif defined __OPENCC__
  #define HT_COMPILER_OPEN64
  #define HT_COMPILER_NAME   "Open64"
  #define HT_COMPILER_AUTHOR "Silicon Graphics Inc."
/*------------------------------------------------------------- Pacific C */
#elif defined __PACIFIC__
  #define HT_COMPILER_PACIFIC
  #define HT_COMPILER_NAME   "Pacific C"
  #define HT_COMPILER_AUTHOR "HI-TECH Software"
/*------------------------------------------------------------ Palm C/C++ */
#elif defined _PACC_VER
  #define HT_COMPILER_PACC
  #define HT_COMPILER_NAME   "Palm C/C++"
  #define HT_COMPILER_AUTHOR "Palm, Inc."
/*-------------------------------------------------------------- Pelles C */
#elif defined __POCC__
  #define HT_COMPILER_POCC
  #define HT_COMPILER_NAME   "Pelles C"
  #define HT_COMPILER_AUTHOR "Pelle Orinius"
/*------------------------------------------------------------- Pro*C/C++ */
#elif defined ORA_PROC
  #define HT_COMPILER_PROC
  #define HT_COMPILER_NAME   "Pro*C/C++"
  #define HT_COMPILER_AUTHOR "Oracle Corporation"
/*------------------------------------------------------------- PGI C/C++ */
#elif defined __PGI
  #define HT_COMPILER_PGI
  #define HT_COMPILER_NAME   "PGI C/C++"
  #define HT_COMPILER_AUTHOR "The Portland Group, Inc"
/*------------------------------------------------------------ Renesas RX */
#elif defined __RENESAS__ || defined __HITACHI__
  #define HT_COMPILER_RENESAS
  #define HT_COMPILER_NAME   "Renesas RX Family C/C++"
  #define HT_COMPILER_AUTHOR "Renesas Electronics Corporation"
/*----------------------------------------------------------------- SAS/C */
#elif defined LATTICE
  #define HT_COMPILER_LATTICE
  #define HT_COMPILER_NAME   "Lattice C"
  #define HT_COMPILER_AUTHOR "Lifeboat Associates"
#elif defined __SASC
  #define HT_COMPILER_SASC
  #define HT_COMPILER_NAME   "SAS/C"
  #define HT_COMPILER_AUTHOR "SAS Institute Inc."
/*------------------------------------------------------------- OpenServer */
#elif defined _SCO_DS
  #define HT_COMPILER_SCO
  #define HT_COMPILER_NAME   "OpenServer C/C++ Compiler"
  #define HT_COMPILER_AUTHOR "Santa Cruz Operation"
/*----------------------------------------------- Oracle Developer Studio */
#elif defined __SUNPRO_C || defined __SUNPRO_CC
  #ifdef __SUNPRO_CC
    #define HT_COMPILER_SUNPRO_CC
  #else
    #define HT_COMPILER_SUNPRO_C
  #endif
  #if __SUNPRO_C >= 0x5140 || __SUNPRO_CC >= 0x5140
    #define HT_COMPILER_NAME   "Developer Studio"
    #define HT_COMPILER_AUTHOR "Oracle Corporation"
  #elif __SUNPRO_C >= 0x5110 || __SUNPRO_CC >= 0x5110
    #define HT_COMPILER_NAME   "Solaris Studio"
    #define HT_COMPILER_AUTHOR "Oracle Corporation"
  #elif __SUNPRO_C >= 0x5050 || __SUNPRO_CC >= 0x5050
    #define HT_COMPILER_NAME   "Sun Studio"
    #define HT_COMPILER_AUTHOR "Sun Microsystems, Inc."
  #elif __SUNPRO_C >= 0x5040 || __SUNPRO_CC >= 0x5040
    #define HT_COMPILER_NAME   "Sun ONE Studio"
    #define HT_COMPILER_AUTHOR "Sun Microsystems, Inc."
  #elif __SUNPRO_C >= 0x5010 || __SUNPRO_CC >= 0x5010
    #define HT_COMPILER_NAME   "Forte Developer"
    #define HT_COMPILER_AUTHOR "Sun Microsystems, Inc."
  #elif __SUNPRO_C >= 0x4020 || __SUNPRO_CC >= 0x4020
    #define HT_COMPILER_NAME   "Sun Workshop"
    #define HT_COMPILER_AUTHOR "Sun Microsystems, Inc."
  #elif __SUNPRO_C >= 0x3000 || __SUNPRO_CC >= 0x3000
    #define HT_COMPILER_NAME   "SunSoft Workshop"
    #define HT_COMPILER_AUTHOR "Sun Microsystems, Inc."
  #elif __SUNPRO_C >= 0x2000 || __SUNPRO_CC >= 0x2000
    #define HT_COMPILER_NAME   "SPARCworks"
    #define HT_COMPILER_AUTHOR "Sun Microsystems, Inc."
  #else
    #define HT_COMPILER_NAME   "Sun Compiler"
    #define HT_COMPILER_AUTHOR "Sun Microsystems, Inc."
  #endif
/*------------------------------------------------------------------ SDCC */
#elif defined SDCC
  #define HT_COMPILER_SDCC
  #define HT_COMPILER_NAME   "Small Device C Compiler"
  #define HT_COMPILER_AUTHOR "Sandeep Dutta"
/*----------------------------------------------------------- SGI MIPSPro */
#elif defined __sgi || defined sgi
  #define HT_COMPILER_MIPSPRO
  #define HT_COMPILER_NAME   "MIPSPro"
  #define HT_COMPILER_AUTHOR "Silicon Graphics Inc."
/*----------------------------------------------------------- SN Compiler */
#elif defined __SNC__
  #define HT_COMPILER_SNC
  #define HT_COMPILER_NAME   "SN Compiler"
  #define HT_COMPILER_AUTHOR "SN Systems Software Ltd"
/*---------------------------------------------------------- Symantec C++ */
#elif defined __SC__
  #define HT_COMPILER_SC
  #define HT_COMPILER_NAME   "Symantec C++"
  #define HT_COMPILER_AUTHOR "Symantec Corporation"
/*---------------------------------------------------------------- TenDRA */
#elif defined __TenDRA__
  #define HT_COMPILER_TENDRA
  #define HT_COMPILER_NAME   "TenDra Compiler"
  #define HT_COMPILER_AUTHOR "The TenDRA Project"
/*--------------------------------------------------------------- THINK C */
#elif defined THINK_C
  #define HT_COMPILER_THINK_C
  #define HT_COMPILER_NAME   "THINK C"
  #define HT_COMPILER_AUTHOR "THINK Technologies"
/*----------------------------------------------------- TI C/C++ Compiler */
#elif defined __TI_COMPILER_VERSION__
  #define HT_COMPILER_TI
  #define HT_COMPILER_NAME   "TI C/C++ Compiler"
  #define HT_COMPILER_AUTHOR "Texas Instruments Inc."
/*------------------------------------------------------- Tiny C Compiler */
#elif defined __TINYC__
  #define HT_COMPILER_TINYC
  #define HT_COMPILER_NAME   "Tiny C Compiler"
  #define HT_COMPILER_AUTHOR "Fabrice Bellard"
/*------------------------------------------------------------ TopSpeed C */
#elif defined __TSC__
  #define HT_COMPILER_TSC
  #define HT_COMPILER_NAME   "TopSpeed C"
  #define HT_COMPILER_AUTHOR "Jensen and Partners International"
/*----------------------------------------------------------- Ultra C/C++ */
#elif defined _UCC
  #define HT_COMPILER_UCC
  #define HT_COMPILER_NAME   "Ultra C/C++"
  #define HT_COMPILER_AUTHOR "Microware Systems Corporation"
/*----------------------------------------------------------------- USL C */
#elif defined __USLC__
  #define HT_COMPILER_USLC
  #define HT_COMPILER_NAME   "UnixWare UDK C/C++"
  #define HT_COMPILER_AUTHOR "Univel"
/*------------------------------------------------------------------ vbcc */
#elif defined __VBCC__
  #define HT_COMPILER_VBCC
  #define HT_COMPILER_NAME   "vbcc"
  #define HT_COMPILER_AUTHOR "Volker Barthelmann"
/*---------------------------------------------------------- Visual C/C++ */
#elif defined _MSC_VER
  #define HT_COMPILER_MSC
  #define HT_COMPILER_NAME   "Visual C/C++"
  #define HT_COMPILER_AUTHOR "Microsoft Corporation"
/*----------------------------------------------------------------- VOS C */
#elif defined __VOSC__
  #define HT_COMPILER_VOSC
  #define HT_COMPILER_NAME   "VOS C"
  #define HT_COMPILER_AUTHOR "Stratus Technologies, Inc."
/*---------------------------------------------------------------- Watcom */
#elif defined __WATCOMC__ && __WATCOMC__ >= 1200
  #define HT_COMPILER_WATCOM
  #define HT_COMPILER_NAME   "Open Watcom"
  #define HT_COMPILER_AUTHOR "Sybase"
#elif defined __WATCOMC__
  #define HT_COMPILER_WATCOM
  #define HT_COMPILER_NAME   "Watcom C/C++"
  #define HT_COMPILER_AUTHOR "Watcom International Corporation"
/*--------------------------------------------------------- Zortech C/C++ */
#elif defined __ZTC__
  #define HT_COMPILER_ZTC
  #define HT_COMPILER_NAME   "Zortech C/C++"
  #define HT_COMPILER_AUTHOR "Digital Mars"
/*--------------------------------------------------------------- Unknown */
#else
  #define HT_COMPILER_UNKNOWN
  #define HT_COMPILER_NAME   "Unknown"
  #define HT_COMPILER_AUTHOR "Unknown"
#endif
/*------------------------------------------------------------------ GNUC */
#if defined __GNUC__
  #define HT_COMPILER_GNUC
#endif

#endif
