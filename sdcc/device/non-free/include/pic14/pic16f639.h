//
// Register Declarations for Microchip 16F639 Processor
//
//
// This header file was automatically generated by:
//
//	inc2h.pl V4850
//
//	Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
//	SDCC is licensed under the GNU Public license (GPL) v2.  Note that
//	this license covers the code to the compiler and other executables,
//	but explicitly does not cover any code or objects generated by sdcc.
//	We have not yet decided on a license for the run time libraries, but
//	it will not put any requirements on code linked against it. See:
// 
//	http://www.gnu.org/copyleft/gpl/html
//
//	See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P16F639_H
#define P16F639_H

//
// Register addresses.
//
#define INDF_ADDR	0x0000
#define TMR0_ADDR	0x0001
#define PCL_ADDR	0x0002
#define STATUS_ADDR	0x0003
#define FSR_ADDR	0x0004
#define PORTA_ADDR	0x0005
#define PORTC_ADDR	0x0007
#define PCLATH_ADDR	0x000A
#define INTCON_ADDR	0x000B
#define PIR1_ADDR	0x000C
#define TMR1L_ADDR	0x000E
#define TMR1H_ADDR	0x000F
#define T1CON_ADDR	0x0010
#define WDTCON_ADDR	0x0018
#define CMCON0_ADDR	0x0019
#define CMCON1_ADDR	0x001A
#define OPTION_REG_ADDR	0x0081
#define TRISA_ADDR	0x0085
#define TRISC_ADDR	0x0087
#define PIE1_ADDR	0x008C
#define PCON_ADDR	0x008E
#define OSCCON_ADDR	0x008F
#define OSCTUNE_ADDR	0x0090
#define LVDCON_ADDR	0x0094
#define WPUDA_ADDR	0x0095
#define IOCA_ADDR	0x0096
#define WDA_ADDR	0x0097
#define VRCON_ADDR	0x0099
#define EEDAT_ADDR	0x009A
#define EEDATA_ADDR	0x009A
#define EEADR_ADDR	0x009B
#define EECON1_ADDR	0x009C
#define EECON2_ADDR	0x009D
#define CRCON_ADDR	0x0110
#define CRDAT0_ADDR	0x0111
#define CRDAT1_ADDR	0x0112
#define CRDAT2_ADDR	0x0113
#define CRDAT3_ADDR	0x0114

//
// Memory organization.
//



//         LIST
// P16F639.INC  Standard Header File, Version 1.00    Microchip Technology, Inc.
//         NOLIST

// This header file defines configurations, registers, and other useful bits of
// information for the PIC16F639 microcontroller.  These names are taken to match 
// the data sheets as closely as possible.  

// Note that the processor must be selected before this file is 
// included.  The processor may be selected the following ways:

//       1. Command line switch:
//               C:\ MPASM MYFILE.ASM /PIC16F639
//       2. LIST directive in the source file
//               LIST   P=PIC16F639
//       3. Processor Type entry in the MPASM full-screen interface

//==========================================================================
//
//       Revision History
//
//==========================================================================
//1.00   10/28/04 Original based on P16F636.INC
//==========================================================================
//
//       Verify Processor
//
//==========================================================================

//        IFNDEF __16F639
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files------------------------------------------------------
//Bank 0
extern __sfr  __at (INDF_ADDR)                    INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __sfr  __at (PCL_ADDR)                     PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (PORTA_ADDR)                   PORTA;

extern __sfr  __at (PORTC_ADDR)                   PORTC;

extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;

extern __sfr  __at (TMR1L_ADDR)                   TMR1L;		
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;		
extern __sfr  __at (T1CON_ADDR)                   T1CON;		

extern __sfr  __at (WDTCON_ADDR)                  WDTCON;
extern __sfr  __at (CMCON0_ADDR)                  CMCON0;		
extern __sfr  __at (CMCON1_ADDR)                  CMCON1;		

//Bank 1
extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;

extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISC_ADDR)                   TRISC;

extern __sfr  __at (PIE1_ADDR)                    PIE1;

extern __sfr  __at (PCON_ADDR)                    PCON;
extern __sfr  __at (OSCCON_ADDR)                  OSCCON;
extern __sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;

extern __sfr  __at (LVDCON_ADDR)                  LVDCON;
extern __sfr  __at (WPUDA_ADDR)                   WPUDA;
extern __sfr  __at (IOCA_ADDR)                    IOCA;
extern __sfr  __at (WDA_ADDR)                     WDA;

extern __sfr  __at (VRCON_ADDR)                   VRCON;
extern __sfr  __at (EEDAT_ADDR)                   EEDAT;	
extern __sfr  __at (EEDATA_ADDR)                  EEDATA;	
extern __sfr  __at (EEADR_ADDR)                   EEADR;	
extern __sfr  __at (EECON1_ADDR)                  EECON1;
extern __sfr  __at (EECON2_ADDR)                  EECON2;

//Bank 2
extern __sfr  __at (CRCON_ADDR)                   CRCON;
extern __sfr  __at (CRDAT0_ADDR)                  CRDAT0;
extern __sfr  __at (CRDAT1_ADDR)                  CRDAT1;
extern __sfr  __at (CRDAT2_ADDR)                  CRDAT2;
extern __sfr  __at (CRDAT3_ADDR)                  CRDAT3;

//----- STATUS Bits --------------------------------------------------------


//----- INTCON Bits --------------------------------------------------------


//----- PIR1 Bits ----------------------------------------------------------


//----- T1CON Bits ---------------------------------------------------------


//----- WDTCON Bits --------------------------------------------------------


//----- CMCON0 Bits -------------------------------------------------------


//----- CMCON1 Bits -------------------------------------------------------


//----- OPTION Bits --------------------------------------------------------


//----- PIE1 Bits ----------------------------------------------------------


//----- PCON Bits ----------------------------------------------------------


//----- OSCCON Bits --------------------------------------------------------


//----- OSCTUNE Bits -------------------------------------------------------


//----- IOCA Bits ---------------------------------------------------------


//----- EECON1 Bits --------------------------------------------------------


//----- VRCON Bits ----------------------------------------------------



//----- CRCON Bits --------------------------------------------------------


//----- LVDCON Bits --------------------------------------------------------


//----- WDA Bits -----------------------------------------------------------


//----- WPUDA Bits -----------------------------------------------------------



//==========================================================================
//
//       RAM Definition
//
//==========================================================================

//         __MAXRAM H'1FF'
//         __BADRAM H'06', H'08'-H'09', H'0D', H'11'-H'17', H'1B'-H'1F'
//         __BADRAM H'86', H'88'-H'89', H'8D', H'91'-H'93', H'98', H'9E'-H'9F', H'C0'-H'EF'
// 		__BADRAM H'10C'-H'10F', H'115'-H'16F', H'106', H'108'-H'109', H'186'
// 		__BADRAM H'188'-H'189', H'18C'-H'1EF'

//==========================================================================
//
//       Configuration Bits
//
//==========================================================================
#define _WUREN_ON            0x2FFF
#define _WUREN_OFF           0x3FFF
#define _FCMEN_ON            0x3FFF
#define _FCMEN_OFF           0x37FF
#define _IESO_ON             0x3FFF
#define _IESO_OFF            0x3BFF
#define _BOD_ON              0x3FFF
#define _BOD_NSLEEP          0x3EFF
#define _BOD_SBODEN          0x3DFF
#define _BOD_OFF             0x3CFF
#define _CPD_ON              0x3F7F
#define _CPD_OFF             0x3FFF
#define _CP_ON               0x3FBF
#define _CP_OFF              0x3FFF
#define _MCLRE_ON            0x3FFF
#define _MCLRE_OFF           0x3FDF
#define _PWRTE_OFF           0x3FFF
#define _PWRTE_ON            0x3FEF
#define _WDT_ON              0x3FFF
#define _WDT_OFF             0x3FF7
#define _LP_OSC              0x3FF8
#define _XT_OSC              0x3FF9
#define _HS_OSC              0x3FFA
#define _EC_OSC              0x3FFB
#define _INTRC_OSC_NOCLKOUT  0x3FFC
#define _INTRC_OSC_CLKOUT    0x3FFD
#define _EXTRC_OSC_NOCLKOUT  0x3FFE
#define _EXTRC_OSC_CLKOUT    0x3FFF

//         LIST

// ----- CMCON0 bits --------------------
typedef union {
  struct {
    unsigned char CM0:1;
    unsigned char CM1:1;
    unsigned char CM2:1;
    unsigned char CIS:1;
    unsigned char C1INV:1;
    unsigned char C2INV:1;
    unsigned char C1OUT:1;
    unsigned char C2OUT:1;
  };
} __CMCON0bits_t;
extern volatile __CMCON0bits_t __at(CMCON0_ADDR) CMCON0bits;

// ----- CMCON1 bits --------------------
typedef union {
  struct {
    unsigned char C2SYNC:1;
    unsigned char T1GSS:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __CMCON1bits_t;
extern volatile __CMCON1bits_t __at(CMCON1_ADDR) CMCON1bits;

// ----- CRCON bits --------------------
typedef union {
  struct {
    unsigned char CRREG0:1;
    unsigned char CRREG1:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ENC_DEC:1;
    unsigned char GO:1;
  };
} __CRCONbits_t;
extern volatile __CRCONbits_t __at(CRCON_ADDR) CRCONbits;

// ----- EECON1 bits --------------------
typedef union {
  struct {
    unsigned char RD:1;
    unsigned char WR:1;
    unsigned char WREN:1;
    unsigned char WRERR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __EECON1bits_t;
extern volatile __EECON1bits_t __at(EECON1_ADDR) EECON1bits;

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RAIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char RAIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
} __INTCONbits_t;
extern volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;

// ----- IOCA bits --------------------
typedef union {
  struct {
    unsigned char IOCA0:1;
    unsigned char IOCA1:1;
    unsigned char IOCA2:1;
    unsigned char IOCA3:1;
    unsigned char IOCA4:1;
    unsigned char IOCA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __IOCAbits_t;
extern volatile __IOCAbits_t __at(IOCA_ADDR) IOCAbits;

// ----- LVDCON bits --------------------
typedef union {
  struct {
    unsigned char LVDL0:1;
    unsigned char LVDL1:1;
    unsigned char LVDL2:1;
    unsigned char :1;
    unsigned char LVDEN:1;
    unsigned char IRVST:1;
    unsigned char :1;
    unsigned char :1;
  };
} __LVDCONbits_t;
extern volatile __LVDCONbits_t __at(LVDCON_ADDR) LVDCONbits;

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_RAPU:1;
  };
} __OPTION_REGbits_t;
extern volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;

// ----- OSCCON bits --------------------
typedef union {
  struct {
    unsigned char SCS:1;
    unsigned char LTS:1;
    unsigned char HTS:1;
    unsigned char OSTS:1;
    unsigned char IRCF0:1;
    unsigned char IRCF1:1;
    unsigned char IRCF2:1;
    unsigned char :1;
  };
} __OSCCONbits_t;
extern volatile __OSCCONbits_t __at(OSCCON_ADDR) OSCCONbits;

// ----- OSCTUNE bits --------------------
typedef union {
  struct {
    unsigned char TUN0:1;
    unsigned char TUN1:1;
    unsigned char TUN2:1;
    unsigned char TUN3:1;
    unsigned char TUN4:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __OSCTUNEbits_t;
extern volatile __OSCTUNEbits_t __at(OSCTUNE_ADDR) OSCTUNEbits;

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BOD:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char NOT_WUR:1;
    unsigned char SBODEN:1;
    unsigned char ULPWUE:1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCONbits_t;
extern volatile __PCONbits_t __at(PCON_ADDR) PCONbits;

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IE:1;
    unsigned char :1;
    unsigned char OSFIE:1;
    unsigned char C1IE:1;
    unsigned char C2IE:1;
    unsigned char CRIE:1;
    unsigned char LVDIE:1;
    unsigned char EEIE:1;
  };
} __PIE1bits_t;
extern volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char TMR1IF:1;
    unsigned char :1;
    unsigned char OSFIF:1;
    unsigned char C1IF:1;
    unsigned char C2IF:1;
    unsigned char CRIF:1;
    unsigned char LVDIF:1;
    unsigned char EEIF:1;
  };
} __PIR1bits_t;
extern volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;

// ----- PORTA bits --------------------
typedef union {
  struct {
    unsigned char RA0:1;
    unsigned char RA1:1;
    unsigned char RA2:1;
    unsigned char RA3:1;
    unsigned char RA4:1;
    unsigned char RA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __PORTAbits_t;
extern volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;

// ----- PORTC bits --------------------
typedef union {
  struct {
    unsigned char RC0:1;
    unsigned char RC1:1;
    unsigned char RC2:1;
    unsigned char RC3:1;
    unsigned char RC4:1;
    unsigned char RC5:1;
    unsigned char RC6:1;
    unsigned char RC7:1;
  };
} __PORTCbits_t;
extern volatile __PORTCbits_t __at(PORTC_ADDR) PORTCbits;

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUSbits_t;
extern volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char TMR1GE:1;
    unsigned char T1GINV:1;
  };
} __T1CONbits_t;
extern volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;

// ----- TRISA bits --------------------
typedef union {
  struct {
    unsigned char TRISA0:1;
    unsigned char TRISA1:1;
    unsigned char TRISA2:1;
    unsigned char TRISA3:1;
    unsigned char TRISA4:1;
    unsigned char TRISA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __TRISAbits_t;
extern volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;

// ----- TRISC bits --------------------
typedef union {
  struct {
    unsigned char TRISC0:1;
    unsigned char TRISC1:1;
    unsigned char TRISC2:1;
    unsigned char TRISC3:1;
    unsigned char TRISC4:1;
    unsigned char TRISC5:1;
    unsigned char TRISC6:1;
    unsigned char TRISC7:1;
  };
} __TRISCbits_t;
extern volatile __TRISCbits_t __at(TRISC_ADDR) TRISCbits;

// ----- VRCON bits --------------------
typedef union {
  struct {
    unsigned char VR0:1;
    unsigned char VR1:1;
    unsigned char VR2:1;
    unsigned char VR3:1;
    unsigned char :1;
    unsigned char VRR:1;
    unsigned char :1;
    unsigned char VREN:1;
  };
} __VRCONbits_t;
extern volatile __VRCONbits_t __at(VRCON_ADDR) VRCONbits;

// ----- WDA bits --------------------
typedef union {
  struct {
    unsigned char WDA0:1;
    unsigned char WDA1:1;
    unsigned char WDA2:1;
    unsigned char :1;
    unsigned char WDA4:1;
    unsigned char WDA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __WDAbits_t;
extern volatile __WDAbits_t __at(WDA_ADDR) WDAbits;

// ----- WDTCON bits --------------------
typedef union {
  struct {
    unsigned char SWDTEN:1;
    unsigned char WDTPS0:1;
    unsigned char WDTPS1:1;
    unsigned char WDTPS2:1;
    unsigned char WDTPS3:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __WDTCONbits_t;
extern volatile __WDTCONbits_t __at(WDTCON_ADDR) WDTCONbits;

// ----- WPUDA bits --------------------
typedef union {
  struct {
    unsigned char WPUDA0:1;
    unsigned char WPUDA1:1;
    unsigned char WPUDA2:1;
    unsigned char :1;
    unsigned char WPUDA4:1;
    unsigned char WPUDA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __WPUDAbits_t;
extern volatile __WPUDAbits_t __at(WPUDA_ADDR) WPUDAbits;


#ifndef NO_BIT_DEFINES

#define CM0                  CMCON0bits.CM0                 /* bit 0 */
#define CM1                  CMCON0bits.CM1                 /* bit 1 */
#define CM2                  CMCON0bits.CM2                 /* bit 2 */
#define CIS                  CMCON0bits.CIS                 /* bit 3 */
#define C1INV                CMCON0bits.C1INV               /* bit 4 */
#define C2INV                CMCON0bits.C2INV               /* bit 5 */
#define C1OUT                CMCON0bits.C1OUT               /* bit 6 */
#define C2OUT                CMCON0bits.C2OUT               /* bit 7 */

#define C2SYNC               CMCON1bits.C2SYNC              /* bit 0 */
#define T1GSS                CMCON1bits.T1GSS               /* bit 1 */

#define CRREG0               CRCONbits.CRREG0               /* bit 0 */
#define CRREG1               CRCONbits.CRREG1               /* bit 1 */
#define ENC_DEC              CRCONbits.ENC_DEC              /* bit 6 */
#define GO                   CRCONbits.GO                   /* bit 7 */

#define RD                   EECON1bits.RD                  /* bit 0 */
#define WR                   EECON1bits.WR                  /* bit 1 */
#define WREN                 EECON1bits.WREN                /* bit 2 */
#define WRERR                EECON1bits.WRERR               /* bit 3 */

#define RAIF                 INTCONbits.RAIF                /* bit 0 */
#define INTF                 INTCONbits.INTF                /* bit 1 */
#define T0IF                 INTCONbits.T0IF                /* bit 2 */
#define RAIE                 INTCONbits.RAIE                /* bit 3 */
#define INTE                 INTCONbits.INTE                /* bit 4 */
#define T0IE                 INTCONbits.T0IE                /* bit 5 */
#define PEIE                 INTCONbits.PEIE                /* bit 6 */
#define GIE                  INTCONbits.GIE                 /* bit 7 */

#define IOCA0                IOCAbits.IOCA0                 /* bit 0 */
#define IOCA1                IOCAbits.IOCA1                 /* bit 1 */
#define IOCA2                IOCAbits.IOCA2                 /* bit 2 */
#define IOCA3                IOCAbits.IOCA3                 /* bit 3 */
#define IOCA4                IOCAbits.IOCA4                 /* bit 4 */
#define IOCA5                IOCAbits.IOCA5                 /* bit 5 */

#define LVDL0                LVDCONbits.LVDL0               /* bit 0 */
#define LVDL1                LVDCONbits.LVDL1               /* bit 1 */
#define LVDL2                LVDCONbits.LVDL2               /* bit 2 */
#define LVDEN                LVDCONbits.LVDEN               /* bit 4 */
#define IRVST                LVDCONbits.IRVST               /* bit 5 */

#define PS0                  OPTION_REGbits.PS0             /* bit 0 */
#define PS1                  OPTION_REGbits.PS1             /* bit 1 */
#define PS2                  OPTION_REGbits.PS2             /* bit 2 */
#define PSA                  OPTION_REGbits.PSA             /* bit 3 */
#define T0SE                 OPTION_REGbits.T0SE            /* bit 4 */
#define T0CS                 OPTION_REGbits.T0CS            /* bit 5 */
#define INTEDG               OPTION_REGbits.INTEDG          /* bit 6 */
#define NOT_RAPU             OPTION_REGbits.NOT_RAPU        /* bit 7 */

#define SCS                  OSCCONbits.SCS                 /* bit 0 */
#define LTS                  OSCCONbits.LTS                 /* bit 1 */
#define HTS                  OSCCONbits.HTS                 /* bit 2 */
#define OSTS                 OSCCONbits.OSTS                /* bit 3 */
#define IRCF0                OSCCONbits.IRCF0               /* bit 4 */
#define IRCF1                OSCCONbits.IRCF1               /* bit 5 */
#define IRCF2                OSCCONbits.IRCF2               /* bit 6 */

#define TUN0                 OSCTUNEbits.TUN0               /* bit 0 */
#define TUN1                 OSCTUNEbits.TUN1               /* bit 1 */
#define TUN2                 OSCTUNEbits.TUN2               /* bit 2 */
#define TUN3                 OSCTUNEbits.TUN3               /* bit 3 */
#define TUN4                 OSCTUNEbits.TUN4               /* bit 4 */

#define NOT_BOD              PCONbits.NOT_BOD               /* bit 0 */
#define NOT_POR              PCONbits.NOT_POR               /* bit 1 */
#define NOT_WUR              PCONbits.NOT_WUR               /* bit 3 */
#define SBODEN               PCONbits.SBODEN                /* bit 4 */
#define ULPWUE               PCONbits.ULPWUE                /* bit 5 */

#define TMR1IE               PIE1bits.TMR1IE                /* bit 0 */
#define OSFIE                PIE1bits.OSFIE                 /* bit 2 */
#define C1IE                 PIE1bits.C1IE                  /* bit 3 */
#define C2IE                 PIE1bits.C2IE                  /* bit 4 */
#define CRIE                 PIE1bits.CRIE                  /* bit 5 */
#define LVDIE                PIE1bits.LVDIE                 /* bit 6 */
#define EEIE                 PIE1bits.EEIE                  /* bit 7 */

#define TMR1IF               PIR1bits.TMR1IF                /* bit 0 */
#define OSFIF                PIR1bits.OSFIF                 /* bit 2 */
#define C1IF                 PIR1bits.C1IF                  /* bit 3 */
#define C2IF                 PIR1bits.C2IF                  /* bit 4 */
#define CRIF                 PIR1bits.CRIF                  /* bit 5 */
#define LVDIF                PIR1bits.LVDIF                 /* bit 6 */
#define EEIF                 PIR1bits.EEIF                  /* bit 7 */

#define RA0                  PORTAbits.RA0                  /* bit 0 */
#define RA1                  PORTAbits.RA1                  /* bit 1 */
#define RA2                  PORTAbits.RA2                  /* bit 2 */
#define RA3                  PORTAbits.RA3                  /* bit 3 */
#define RA4                  PORTAbits.RA4                  /* bit 4 */
#define RA5                  PORTAbits.RA5                  /* bit 5 */

#define RC0                  PORTCbits.RC0                  /* bit 0 */
#define RC1                  PORTCbits.RC1                  /* bit 1 */
#define RC2                  PORTCbits.RC2                  /* bit 2 */
#define RC3                  PORTCbits.RC3                  /* bit 3 */
#define RC4                  PORTCbits.RC4                  /* bit 4 */
#define RC5                  PORTCbits.RC5                  /* bit 5 */
#define RC6                  PORTCbits.RC6                  /* bit 6 */
#define RC7                  PORTCbits.RC7                  /* bit 7 */

#define C                    STATUSbits.C                   /* bit 0 */
#define DC                   STATUSbits.DC                  /* bit 1 */
#define Z                    STATUSbits.Z                   /* bit 2 */
#define NOT_PD               STATUSbits.NOT_PD              /* bit 3 */
#define NOT_TO               STATUSbits.NOT_TO              /* bit 4 */
#define RP0                  STATUSbits.RP0                 /* bit 5 */
#define RP1                  STATUSbits.RP1                 /* bit 6 */
#define IRP                  STATUSbits.IRP                 /* bit 7 */

#define TMR1ON               T1CONbits.TMR1ON               /* bit 0 */
#define TMR1CS               T1CONbits.TMR1CS               /* bit 1 */
#define NOT_T1SYNC           T1CONbits.NOT_T1SYNC           /* bit 2 */
#define T1OSCEN              T1CONbits.T1OSCEN              /* bit 3 */
#define T1CKPS0              T1CONbits.T1CKPS0              /* bit 4 */
#define T1CKPS1              T1CONbits.T1CKPS1              /* bit 5 */
#define TMR1GE               T1CONbits.TMR1GE               /* bit 6 */
#define T1GINV               T1CONbits.T1GINV               /* bit 7 */

#define TRISA0               TRISAbits.TRISA0               /* bit 0 */
#define TRISA1               TRISAbits.TRISA1               /* bit 1 */
#define TRISA2               TRISAbits.TRISA2               /* bit 2 */
#define TRISA3               TRISAbits.TRISA3               /* bit 3 */
#define TRISA4               TRISAbits.TRISA4               /* bit 4 */
#define TRISA5               TRISAbits.TRISA5               /* bit 5 */

#define TRISC0               TRISCbits.TRISC0               /* bit 0 */
#define TRISC1               TRISCbits.TRISC1               /* bit 1 */
#define TRISC2               TRISCbits.TRISC2               /* bit 2 */
#define TRISC3               TRISCbits.TRISC3               /* bit 3 */
#define TRISC4               TRISCbits.TRISC4               /* bit 4 */
#define TRISC5               TRISCbits.TRISC5               /* bit 5 */
#define TRISC6               TRISCbits.TRISC6               /* bit 6 */
#define TRISC7               TRISCbits.TRISC7               /* bit 7 */

#define VR0                  VRCONbits.VR0                  /* bit 0 */
#define VR1                  VRCONbits.VR1                  /* bit 1 */
#define VR2                  VRCONbits.VR2                  /* bit 2 */
#define VR3                  VRCONbits.VR3                  /* bit 3 */
#define VRR                  VRCONbits.VRR                  /* bit 5 */
#define VREN                 VRCONbits.VREN                 /* bit 7 */

#define WDA0                 WDAbits.WDA0                   /* bit 0 */
#define WDA1                 WDAbits.WDA1                   /* bit 1 */
#define WDA2                 WDAbits.WDA2                   /* bit 2 */
#define WDA4                 WDAbits.WDA4                   /* bit 4 */
#define WDA5                 WDAbits.WDA5                   /* bit 5 */

#define SWDTEN               WDTCONbits.SWDTEN              /* bit 0 */
#define WDTPS0               WDTCONbits.WDTPS0              /* bit 1 */
#define WDTPS1               WDTCONbits.WDTPS1              /* bit 2 */
#define WDTPS2               WDTCONbits.WDTPS2              /* bit 3 */
#define WDTPS3               WDTCONbits.WDTPS3              /* bit 4 */

#define WPUDA0               WPUDAbits.WPUDA0               /* bit 0 */
#define WPUDA1               WPUDAbits.WPUDA1               /* bit 1 */
#define WPUDA2               WPUDAbits.WPUDA2               /* bit 2 */
#define WPUDA4               WPUDAbits.WPUDA4               /* bit 4 */
#define WPUDA5               WPUDAbits.WPUDA5               /* bit 5 */
#endif /* NO_BIT_DEFINES */

#ifndef NO_LEGACY_NAMES
#define CMCON0_bits          CMCON0bits
#define CMCON1_bits          CMCON1bits
#define CRCON_bits           CRCONbits
#define EECON1_bits          EECON1bits
#define INTCON_bits          INTCONbits
#define IOCA_bits            IOCAbits
#define LVDCON_bits          LVDCONbits
#define OPTION_REG_bits      OPTION_REGbits
#define OSCCON_bits          OSCCONbits
#define OSCTUNE_bits         OSCTUNEbits
#define PCON_bits            PCONbits
#define PIE1_bits            PIE1bits
#define PIR1_bits            PIR1bits
#define PORTA_bits           PORTAbits
#define PORTC_bits           PORTCbits
#define STATUS_bits          STATUSbits
#define T1CON_bits           T1CONbits
#define TRISA_bits           TRISAbits
#define TRISC_bits           TRISCbits
#define VRCON_bits           VRCONbits
#define WDA_bits             WDAbits
#define WDTCON_bits          WDTCONbits
#define WPUDA_bits           WPUDAbits
#endif /* NO_LEGACY_NAMES */

#endif
