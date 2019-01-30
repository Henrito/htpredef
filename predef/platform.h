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

#ifndef HT_PREDEF_PLATFORM_H
#define HT_PREDEF_PLATFORM_H

typedef int HTPredefPlatform;

/*------------------------------------------------------------------------*
 * GAME CONSOLE PREDEFINED MACROS                                         *
 *------------------------------------------------------------------------*/

/*------------------------------------------------------------- Microsoft */
#if defined _DURANGO
  #define HT_PLATFORM_XBOX_ONE
  #define HT_PLATFORM_NAME      "Xbox One"
  #define HT_PLATFORM_DEVELOPER "Microsoft Corporation"
#elif defined _XBOX && defined _XENON
  #define HT_PLATFORM_XBOX_360
  #define HT_PLATFORM_NAME      "Xbox 360"
  #define HT_PLATFORM_DEVELOPER "Microsoft Corporation"
#elif defined _XBOX && !defined _XENON
  #define HT_PLATFORM_XBOX
  #define HT_PLATFORM_NAME      "Xbox"
  #define HT_PLATFORM_DEVELOPER "Microsoft Corporation"
/*-------------------------------------------------------------- Nintendo */
#elif defined __NX__
  #define HT_PLATFORM_SWITCH
  #define HT_PLATFORM_NAME      "Switch"
  #define HT_PLATFORM_DEVELOPER "Nintendo Co., Ltd."
#elif defined CAFE && defined __ghs__
  #define HT_PLATFORM_WII_U
  #define HT_PLATFORM_NAME      "Wii U"
  #define HT_PLATFORM_DEVELOPER "Nintendo Co., Ltd."
#elif defined RVL || defined RVL_OS || defined __PPCBROADWAY__
  #define HT_PLATFORM_WII
  #define HT_PLATFORM_NAME      "Wii"
  #define HT_PLATFORM_DEVELOPER "Nintendo Co., Ltd."
#elif defined GEKKO || defined __PPCGEKKO__ ||\
    defined __PPC__ && defined __SNC__
  #define HT_PLATFORM_GCN
  #define HT_PLATFORM_NAME      "Gamecube"
  #define HT_PLATFORM_DEVELOPER "Nintendo Co., Ltd."
#elif defined NN_PLATFORM_CTR
  #define HT_PLATFORM_3DS
  #define HT_PLATFORM_NAME      "Nintendo 3DS"
  #define HT_PLATFORM_DEVELOPER "Nintendo Co., Ltd."
#elif defined __MWERKS__ && defined SDK_ARM9
  #define HT_PLATFORM_DS
  #define HT_PLATFORM_NAME      "Nintendo DS"
  #define HT_PLATFORM_DEVELOPER "Nintendo Co., Ltd."
  #define HT_SYSTEM_CONSOLE
/*------------------------------------------------------------------ SEGA */
#elif defined _arch_dreamcast
  #define HT_PLATFORM_DREAMCAST
  #define HT_PLATFORM_NAME      "Dreamcast"
  #define HT_PLATFORM_DEVELOPER "SEGA Games Co., Ltd."
/*------------------------------------------------------------------ Sony */
#elif defined __ORBIS__
  #define HT_PLATFORM_PS4
  #define HT_PLATFORM_NAME      "PlayStation 4"
  #define HT_PLATFORM_DEVELOPER "Sony Interactive Entertainment Inc."
#elif defined __CELLOS_LV2__
  #define HT_PLATFORM_PS3
  #define HT_PLATFORM_NAME      "PlayStation 3"
  #define HT_PLATFORM_DEVELOPER "Sony Interactive Entertainment Inc."
#elif defined _R5900 || defined __R5900 || defined __R5900__
  #define HT_PLATFORM_PS2
  #define HT_PLATFORM_NAME      "PlayStation 2"
  #define HT_PLATFORM_DEVELOPER "Sony Interactive Entertainment Inc."
#elif (defined _R3000 || defined R3000) &&\
    !(defined __psp__ || defined sgi || defined __sgi)
  #define HT_PLATFORM_PS1
  #define HT_PLATFORM_NAME      "PlayStation"
  #define HT_PLATFORM_DEVELOPER "Sony Interactive Entertainment Inc."
#elif defined __psp2__ || defined _R4000 ||\
    defined __SCE__ && defined __arm__
  #define HT_PLATFORM_PS_VITA
  #define HT_PLATFORM_NAME      "PlayStation Vita"
  #define HT_PLATFORM_DEVELOPER "Sony Interactive Entertainment Inc."
#elif defined __psp__
  #define HT_PLATFORM_PSP
  #define HT_PLATFORM_NAME      "PlayStation Portable"
  #define HT_PLATFORM_DEVELOPER "Sony Interactive Entertainment Inc."

/*------------------------------------------------------------------------*
 * OPERATING SYSTEM PREDEFINED MACROS                                     *
 *------------------------------------------------------------------------*/

/*------------------------------------------------------------------- AIX */
#elif defined _AIX
  #define HT_PLATFORM_AIX
  #define HT_PLATFORM_NAME      "AIX"
  #define HT_PLATFORM_DEVELOPER "IBM"
/*---------------------------------------------------------------- Akaros */
#elif defined __ros__
  #define HT_PLATFORM_AKAROS
  #define HT_PLATFORM_NAME      "Akaros"
  #define HT_PLATFORM_DEVELOPER "Open Source"
/*----------------------------------------------------------------- Amiga */
#elif defined __amigaos__ || defined AMIGA || defined MCH_AMIGA
  #define HT_PLATFORM_AMIGA
  #if defined __AROS__
    #define HT_PLATFORM_AROS
    #define HT_PLATFORM_NAME      "AROS"
    #define HT_PLATFORM_DEVELOPER "The AROS Development Team"
  #elif defined __MORPHOS__
    #define HT_PLATFORM_MORPHOS
    #define HT_PLATFORM_NAME      "MorphOS"
    #define HT_PLATFORM_DEVELOPER "The MorphOS Development Team"
  #elif defined __amigaos4__
    #define HT_PLATFORM_NAME      "AmigaOS 4"
    #define HT_PLATFORM_DEVELOPER "Hyperion Entertainment"
  #else
    #define HT_PLATFORM_NAME      "AmigaOS"
    #define HT_PLATFORM_DEVELOPER "Amiga Inc."
  #endif
/*------------------------------------------------------------- AOS/VS II */
#elif defined AOSVS
  #define HT_PLATFORM_AOS_VS
  #define HT_PLATFORM_NAME      "AOS/VS II"
  #define HT_PLATFORM_DEVELOPER "Data General"
/*------------------------------------------------------------------ BeOS */
#elif defined __BEOS__
  #define HT_PLATFORM_BEOS
  #if defined __HAIKU__
    #define HT_PLATFORM_HAIKU
    #define HT_PLATFORM_NAME      "Haiku"
    #define HT_PLATFORM_DEVELOPER "Haiku, Inc."
  #elif defined __ZETA__
    #define HT_PLATFORM_ZETA
    #define HT_PLATFORM_NAME      "ZETA"
    #define HT_PLATFORM_DEVELOPER "magnussoft"
  #else
    #define HT_PLATFORM_NAME      "BeOS"
    #define HT_PLATFORM_DEVELOPER "Be Inc."
  #endif
/*------------------------------------------------------------- Blue Gene */
#elif defined __bg__
  #define HT_PLATFORM_BLUE_GENE
  #define HT_PLATFORM_NAME      "Blue Gene"
  #define HT_PLATFORM_DEVELOPER "IBM"
/*------------------------------------------------------------------- BSD */
#elif defined __convex__
  #define HT_PLATFORM_CONVEX
  #define HT_PLATFORM_NAME      "ConvexOS"
  #define HT_PLATFORM_DEVELOPER "CONVEX Computer Corporation"
#elif defined __DragonFly__
  #define HT_PLATFORM_DRAGONFLY
  #define HT_PLATFORM_NAME      "DragonFly BSD"
  #define HT_PLATFORM_DEVELOPER "Matthew Dillon"
#elif defined __FreeBSD__
  #define HT_PLATFORM_FREEBSD
  #define HT_PLATFORM_NAME      "The FreeBSD Project FreeBSD"
  #define HT_PLATFORM_DEVELOPER "The Free BSD Project"
#elif defined __NetBSD__
  #define HT_PLATFORM_NETBSD
  #define HT_PLATFORM_NAME      "The NetBSD Foundation NetBSD"
  #define HT_PLATFORM_DEVELOPER "The NetBSD Foundation"
#elif defined __OpenBSD__
  #define HT_PLATFORM_OPENBSD
  #define HT_PLATFORM_NAME      "The OpenBSD Project OpenBSD"
  #define HT_PLATFORM_DEVELOPER "The OpenBSD Project"
#elif defined __bsdi__
  #define HT_PLATFORM_BSDI
  #define HT_PLATFORM_NAME      "BSD/OS"
  #define HT_PLATFORM_DEVELOPER "Berkley Software Design, Inc."
/*------------------------------------------------------------- Domain/OS */
#elif defined aegis
  #define HT_PLATFORM_AEGIS
  #define HT_PLATFORM_NAME      "AEGIS"
  #define HT_PLATFORM_DEVELOPER "Apollo Computer Inc."
#elif defined apollo
  #define HT_PLATFORM_DOMAIN
  #define HT_PLATFORM_NAME      "Domain/OS"
  #define HT_PLATFORM_DEVELOPER "Apollo Computer Inc."
/*------------------------------------------------------------------- GNU */
#elif defined __GNU__ || defined __gnu_hurd__
  #define HT_PLATFORM_GNU_HURD
  #define HT_PLATFORM_NAME      "GNU/Hurd"
  #define HT_PLATFORM_DEVELOPER "GNU Project"
#elif defined __FreeBSD_kernel__ && defined __GLIBC__
  #define HT_PLATFORM_GNU_KFREEBSD
  #define HT_PLATFORM_NAME      "Debian GNU/kFreeBSD"
  #define HT_PLATFORM_DEVELOPER "The Debian Project"
/*----------------------------------------------------------------- HP-UX */
#elif defined __hpux
  #define HT_PLATFORM_HPUX
  #define HT_PLATFORM_NAME      "HP-UX"
  #define HT_PLATFORM_DEVELOPER "Hewlett Packard Enterprise"
/*-------------------------------------------------------------- Human68k */
#elif defined __human68k__
  #define HT_PLATFORM_HUMAN68K
  #define HT_PLATFORM_NAME      "Human68k"
  #define HT_PLATFORM_DEVELOPER "Hudson Soft Co., Ltd"
/*----------------------------------------------------------------- IBM i */
#elif defined __OS400__
  #define HT_PLATFORM_IBM_I
  #define HT_PLATFORM_NAME      "IBM i"
  #define HT_PLATFORM_DEVELOPER "IBM"
/*------------------------------------------------------------------ IRIX */
#elif defined __sgi || defined sgi
  #define HT_PLATFORM_IRIX
  #define HT_PLATFORM_NAME      "IRIX"
  #define HT_PLATFORM_DEVELOPER "Silicon Graphics Inc."
/*----------------------------------------------------------------- Linux */
#elif defined __linux || defined __linux__
  #define HT_PLATFORM_LINUX
  #if defined __ANDROID__
    #define HT_PLATFORM_ANDROID
    #define HT_PLATFORM_NAME      "Android"
    #define HT_PLATFORM_DEVELOPER "Google LLC"
  #else
    #define HT_PLATFORM_NAME      "Linux"
    #define HT_PLATFORM_DEVELOPER "Open Source"
  #endif
/*------------------------------------------------------------- Macintosh */
#elif defined __MACH__ && defined __APPLE__
  #define HT_PLATFORM_DARWIN
  #define HT_PLATFORM_DEVELOPER "Apple Inc."
  #if defined __has_include && __has_include(<TargetConditionals.h>)
    #include <TargetConditionals.h>
  #endif
  #if defined TARGET_IPHONE_SIMULATOR && TARGET_IPHONE_SIMULATOR == 1
    #define HT_PLATFORM_IOS
    #define HT_PLATFORM_NAME     "iOS Simulator"
  #elif defined TARGET_OS_IPHONE && TARGET_OS_IPHONE == 1
    #define HT_PLATFORM_IOS
    #define HT_PLATFORM_NAME     "iOS"
  #elif defined TARGET_OS_MAC && TARGET_OS_MAC == 1
    #define HT_PLATFORM_MACOS
    #if defined __has_include && __has_include(<AvailabilityMacros.h>)
      #include <AvailabilityMacros.h>
      #ifdef MAC_OS_X_VERSION_10_12
        #define HT_PLATFORM_NAME     "macOS"
      #endif
    #else
      #define HT_PLATFORM_NAME     "OS X"
    #endif
  #elif defined NeXT
    #define HT_PLATFORM_RHAPSODY
    #define HT_PLATFORM_NAME      "Rhapsody"
  #else
    #define HT_PLATFORM_NAME      "Darwin"
  #endif
#elif defined NeXT && !defined __APPLE__
  #define HT_PLATFORM_NEXTSTEP
  #define HT_PLATFORM_NAME      "NeXTSTEP"
  #define HT_PLATFORM_DEVELOPER "NeXT"
#elif defined __MACHTEN__
  #define HT_PLATFORM_MACHTEN
  #define HT_PLATFORM_NAME      "MachTen"
  #define HT_PLATFORM_DEVELOPER "Tenon Intersystems"
#elif defined macintosh || defined THINK_C || defined MCH_MACINTOSH
  #define HT_PLATFORM_MACINTOSH
  #define HT_PLATFORM_NAME      "Classic Mac OS"
  #define HT_PLATFORM_DEVELOPER "Apple Inc."
/*----------------------------------------------------------------- MINIX */
#elif defined __minix
  #define HT_PLATFORM_MINIX
  #define HT_PLATFORM_NAME      "MINIX"
  #define HT_PLATFORM_DEVELOPER "Andrew S. Tanenbaum"
/*---------------------------------------------------------------- MS-DOS */
#elif defined __EMX__
  #define HT_PLATFORM_EMX
  #define HT_PLATFORM_NAME      "EMX"
  #define HT_PLATFORM_DEVELOPER "Eberhard Mattes"
#elif defined MSDOS || defined __MSDOS__
  #define HT_PLATFORM_MSDOS
  #define HT_PLATFORM_NAME      "MS-DOS"
  #define HT_PLATFORM_DEVELOPER "Microsoft Corporation"
#elif defined __OS2__
  #define HT_PLATFORM_OS2
  #define HT_PLATFORM_NAME      "OS/2"
  #define HT_PLATFORM_DEVELOPER "IBM"
/*--------------------------------------------------------------- Palm OS */
#elif defined __palmos__
  #define HT_PLATFORM_PALM_OS
  #define HT_PLATFORM_NAME      "Palm OS"
  #define HT_PLATFORM_DEVELOPER "Palm, Inc."
/*---------------------------------------------------------------- Plan 9 */
#elif defined EPLAN9
  #define HT_PLATFORM_PLAN_9
  #define HT_PLATFORM_NAME      "Plan 9 from Bell Labs"
  #define HT_PLATFORM_DEVELOPER "Bell Labs"
/*------------------------------------------------------------------ QDOS */
#elif defined QDOS
  #define HT_PLATFORM_86DOS
  #define HT_PLATFORM_NAME      "QDOS"
  #define HT_PLATFORM_DEVELOPER "Sinclair Research"
/*------------------------------------------------------------------- QNX */
#elif defined __QNX__ || defined __QNXNTO__
  #define HT_PLATFORM_QNX
  #define HT_PLATFORM_NAME      "QNX"
  #define HT_PLATFORM_DEVELOPER "BlackBerry Limited"
/*-------------------------------------------- Real Time Operating System */
#elif defined __ECOS
  #define HT_PLATFORM_ECOS
  #define HT_PLATFORM_NAME      "eCos"
  #define HT_PLATFORM_DEVELOPER "Open Source"
#elif defined __Fushsia__
  #define HT_PLATFORM_FUSHSIA
  #define HT_PLATFORM_NAME      "Fushsia"
  #define HT_PLATFORM_DEVELOPER "Google LLC"
#elif defined __INTEGRITY
  #define HT_PLATFORM_INTEGRITY
  #define HT_PLATFORM_NAME      "INTEGRITY"
  #define HT_PLATFORM_DEVELOPER "Green Hills Software"
#elif defined mpeix || defined __mpexl
  #define HT_PLATFORM_MPE
  #define HT_PLATFORM_NAME      "MPE"
  #define HT_PLATFORM_DEVELOPER "Hewlett-Packard Company"
#elif defined __nucleus__
  #define HT_PLATFORM_NUCLEUS
  #define HT_PLATFORM_NAME      "Nucleus RTOS"
  #define HT_PLATFORM_DEVELOPER "Mentor, a Siemens Business"
#elif defined _OSK || defined __OS9000
  #define HT_PLATFORM_OS_9
  #define HT_PLATFORM_NAME      "OS-9"
  #define HT_PLATFORM_DEVELOPER "Microware Systems Corporation"
#elif defined __VXWORKS__ || defined __vxworks
  #define HT_PLATFORM_VXWORKS
  #define HT_PLATFORM_NAME      "VxWorks"
  #define HT_PLATFORM_DEVELOPER "Wind River Systems"
/*--------------------------------------------------------------- RISC OS */
#elif defined riscos || defined __riscos || defined __riscos__
  #define HT_PLATFORM_RISCOS
  #define HT_PLATFORM_NAME      "RISC OS"
  #define HT_PLATFORM_DEVELOPER "RISC OS Open"
/*--------------------------------------------------------------- Solaris */
#elif defined __sun && defined __SVR4
  #define HT_PLATFORM_SOLARIS
  #define HT_PLATFORM_NAME      "Solaris"
  #define HT_PLATFORM_DEVELOPER "Oracle Corporation"
#elif defined __sun && !defined __SVR4
  #define HT_PLATFORM_SOLARIS
  #define HT_PLATFORM_NAME      "SunOS"
  #define HT_PLATFORM_DEVELOPER "Sun Microsystems, Inc."
/*-------------------------------------------------------------- Syllable */
#elif defined __ATHEOS__
  #define HT_PLATFORM_ATHEOS
  #define HT_PLATFORM_NAME      "AtheOS"
  #define HT_PLATFORM_DEVELOPER "Kurt Skauen"
#elif defined __SYLLABLE__
  #define HT_PLATFORM_SYLLABLE
  #define HT_PLATFORM_NAME      "Syllable"
  #define HT_PLATFORM_DEVELOPER "Open Source"
/*------------------------------------------------------------ Symbian OS */
#elif defined __SYMBIAN32__
  #define HT_PLATFORM_SYMBIAN
  #define HT_PLATFORM_NAME      "Symbian"
  #define HT_PLATFORM_DEVELOPER "Symbian Ltd."
/*----------------------------------------------------------------- THEOS */
#elif defined THEOS
  #define HT_PLATFORM_THEOS
  #define HT_PLATFORM_NAME      "THEOS"
  #define HT_PLATFORM_DEVELOPER "THEOS Software Corporation"
/*--------------------------------------------------------------- TOPS-20 */
#elif defined TOPS20 || defined __COMPILER_KCC__ && defined SYS_T20
  #define HT_PLATFORM_TOPS20
  #define HT_PLATFORM_NAME      "TOPS-20"
  #define HT_PLATFORM_DEVELOPER "Digital Equipment Corporation"
/*------------------------------------------------------------------- TOS */
#elif defined __MINT__
  #define HT_PLATFORM_ATARI_ST
  #define HT_PLATFORM_NAME      "MiNT"
  #define HT_PLATFORM_DEVELOPER "Eric R. Smith"
#elif defined __TOS__ ||\
    defined ATARI || defined MCH_ATARI || defined atarist
  #define HT_PLATFORM_ATARI_ST
  #define HT_PLATFORM_NAME      "TOS"
  #define HT_PLATFORM_DEVELOPER "Atari Corporation"
/*------------------------------------------------------------------ Unix */
#elif defined __AMIX__
  #define HT_PLATFORM_AMIX
  #define HT_PLATFORM_NAME      "Amiga Unix"
  #define HT_PLATFORM_DEVELOPER "Amiga Inc."
#elif defined __AUX
  #define HT_PLATFORM_AUX
  #define HT_PLATFORM_NAME      "A/UX"
  #define HT_PLATFORM_DEVELOPER "Apple Inc."
#elif defined COHERENT
  #define HT_PLATFORM_COHERENT
  #define HT_PLATFORM_NAME      "Coherent"
  #define HT_PLATFORM_DEVELOPER "Mark Williams Company"
#elif defined __CYGWIN__
  #define HT_PLATFORM_CYGWIN
  #define HT_PLATFORM_NAME      "Cygwin"
  #define HT_PLATFORM_DEVELOPER "Cygnus Solutions"
#elif defined pyr
  #define HT_PLATFORM_DCOSX
  #define HT_PLATFORM_NAME      "DC/OSx"
  #define HT_PLATFORM_DEVELOPER "Pyramid Technology Corporation"
#elif defined __DGUX__ || defined __dgux__ || defined DGUX
  #define HT_PLATFORM_DGUX
  #define HT_PLATFORM_NAME      "DG/UX"
  #define HT_PLATFORM_DEVELOPER "Data General"
#elif defined _SEQUENT_ || defined sequent
  #define HT_PLATFORM_DYNIX
  #define HT_PLATFORM_NAME      "DYNIX"
  #define HT_PLATFORM_DEVELOPER "Sequent Computer Systems"
#elif defined __hiuxmpp
  #define HT_PLATFORM_HIUX_MPP
  #define HT_PLATFORM_NAME      "HI-UX/MPP"
  #define HT_PLATFORM_DEVELOPER "Hitachi, Ltd"
#elif defined __INTERIX || defined __OPENNT
  #define HT_PLATFORM_INTERIX
  #define HT_PLATFORM_NAME      "Interix"
  #define HT_PLATFORM_DEVELOPER "Softway Systems, Inc."
#elif defined __Lynx__
  #define HT_PLATFORM_LYNX
  #define HT_PLATFORM_NAME      "LynxOS"
  #define HT_PLATFORM_DEVELOPER "Lynx Software Technologies, Inc."
#elif defined _ATT4
  #define HT_PLATFORM_NCR
  #define HT_PLATFORM_NAME      "NCR Unix"
  #define HT_PLATFORM_DEVELOPER "NCR Corporation"
#elif defined __nonstopux || defined __TANDEM
  #define HT_PLATFORM_NONSTOP
  #define HT_PLATFORM_NAME      "NonStop OS"
  #define HT_PLATFORM_DEVELOPER "Tandem Computers, Inc."
#elif defined M_XENIX || defined _SCO_DS
  #define HT_PLATFORM_OPENSERVER
  #define HT_PLATFORM_NAME      "OpenServer"
  #define HT_PLATFORM_DEVELOPER "Santa Cruz Operation"
#elif defined sinux
  #define HT_PLATFORM_SINUX
  #define HT_PLATFORM_NAME      "SINIX"
  #define HT_PLATFORM_DEVELOPER "Siemens Nixdorf Informationssysteme"
#elif defined __SVR4 || defined __sysv__ || defined __svr4__
  #define HT_PLATFORM_SVR4
  #define HT_PLATFORM_NAME      "UNIX System V"
  #define HT_PLATFORM_DEVELOPER "AT&T Corporation"
#elif defined __osf || defined __osf__
  #define HT_PLATFORM_TRU64
  #define HT_PLATFORM_NAME      "Tru64 UNIX"
  #define HT_PLATFORM_DEVELOPER "Hewlett-Packard Company"
#elif defined ultrix || defined __ultrix || defined __ultrix__
  #define HT_PLATFORM_ULTRIX
  #define HT_PLATFORM_NAME      "ULTRIX"
  #define HT_PLATFORM_DEVELOPER "Digital Equipment Corporation"
#elif defined _UNICOS
  #define HT_PLATFORM_UNICOS
  #define HT_PLATFORM_NAME      "UNICOS"
  #define HT_PLATFORM_DEVELOPER "Cray Inc."
#elif defined _CRAY || defined __crayx1
  #define HT_PLATFORM_UNICOS_MP
  #define HT_PLATFORM_NAME      "UNICOS/mp"
  #define HT_PLATFORM_DEVELOPER "Cray Inc."
#elif defined __USLC__ && !defined M_XENIX
  #define HT_PLATFORM_UNIXWARE
  #define HT_PLATFORM_NAME      "UnixWare"
  #define HT_PLATFORM_DEVELOPER "Univel"
#elif defined UTS
  #define HT_PLATFORM_UTS
  #define HT_PLATFORM_NAME      "UTS"
  #define HT_PLATFORM_DEVELOPER "Amdahl Corporation"
#elif defined _UWIN
  #define HT_PLATFORM_UWIN
  #define HT_PLATFORM_NAME      "UWIN"
  #define HT_PLATFORM_DEVELOPER "David Korn"
#elif defined __MVS__
  #define HT_PLATFORM_ZOS
  #define HT_PLATFORM_NAME      "z/OS"
  #define HT_PLATFORM_DEVELOPER "IBM"
/*---------------------------------------------------------------- VM/CMS */
#elif defined VM_CMS || defined __VM__ || defined MVS
  #define HT_PLATFORM_VM_CMS
  #define HT_PLATFORM_NAME      "VM/CMS"
  #define HT_PLATFORM_DEVELOPER "IBM"
/*------------------------------------------------------------------- VMS */
#elif defined VMS || defined __VMS
  #define HT_PLATFORM_VMS
  #define HT_PLATFORM_NAME      "VMS"
  #define HT_PLATFORM_DEVELOPER "Digital Equipment Corporation"
/*------------------------------------------------------------------- VOS */
#elif defined __VOS__
  #define HT_PLATFORM_VOS
  #define HT_PLATFORM_NAME      "VOS"
  #define HT_PLATFORM_DEVELOPER "Stratus Technologies, Inc."
/*------------------------------------------------ Web Browser Technology */
#elif defined __asmjs__
  #define HT_PLATFORM_ASMJS
  #define HT_PLATFORM_NAME      "asm.js"
  #define HT_PLATFORM_DEVELOPER "Mozilla"
#elif defined __native_client__
  #define HT_PLATFORM_NACL
  #define HT_PLATFORM_NAME      "Native Client"
  #define HT_PLATFORM_DEVELOPER "Google LLC"
#elif defined __wasm__
  #define HT_PLATFORM_WASM
  #define HT_PLATFORM_NAME      "WebAssembly"
  #define HT_PLATFORM_DEVELOPER "World Wide Web Consortium"
/*--------------------------------------------------------------- Windows */
#elif defined _WINDU_SOURCE
  #define HT_PLATFORM_WIND_U
  #define HT_PLATFORM_NAME      "Wind/U"
  #define HT_PLATFORM_DEVELOPER "Bristol Technology Inc."
#elif defined _WIN64 || defined _WIN32 || defined _WIN16
  #define HT_PLATFORM_WINDOWS
  #define HT_PLATFORM_NAME      "Windows"
  #define HT_PLATFORM_DEVELOPER "Microsoft Corporation"
  #if defined _WIN64
    #define HT_PLATFORM_WIN64
  #elif defined _WIN32
    #define HT_PLATFORM_WIN32
  #else
    #define HT_PLATFORM_WIN16
  #endif
  #define WIN32_LEAN_AND_MEAN
  #define STRICT
  #include <Windows.h>
  #ifdef _WIN32_WINNT
    #define HT_PLATFORM_WINDOWS_NT
  #elif defined _WIN32_WINDOWS
    #define HT_PLATFORM_WINDOWS_9X
  #else
    #define HT_PLATFORM_MSDOS
  #endif
/*--------------------------------------------------------------- Unknown */
#else
  #define HT_PLATFORM_UNKNOWN
#endif
/*------------------------------------------------------------------ Unix */
#if defined __unix || defined __unix__ || defined __MACH__
  #define HT_PLATFORM_UNIX
  #include <sys/param.h>
  #if defined BSD
    #define HT_PLATFORM_BSD
    #ifndef HT_PLATFORM_NAME    
      #define HT_PLATFORM_NAME     "BSD"
    #endif
  #else
    #ifndef HT_PLATFORM_NAME    
      #define HT_PLATFORM_NAME     "Unix"
    #endif
  #endif
#endif
/*--------------------------------------------------------------- Unknown */
#ifndef HT_PLATFORM_NAME    
  #define HT_PLATFORM_NAME     "Unknown"
#endif
#ifndef HT_PLATFORM_DEVELOPER
  #define HT_PLATFORM_DEVELOPER "Unknown"
#endif

#endif
