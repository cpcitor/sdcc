/* Register definitions for pic16f707.
 * This file was automatically generated by:
 *   inc2h.pl
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * tbut explicitly does not cover any code or objects generated by sdcc.
 *
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */
#include <pic16f707.h>

__sfr  __at (INDF_ADDR)                    INDF;
__sfr  __at (TMR0_ADDR)                    TMR0;
__sfr  __at (PCL_ADDR)                     PCL;
__sfr  __at (STATUS_ADDR)                  STATUS;
__sfr  __at (FSR_ADDR)                     FSR;
__sfr  __at (PORTA_ADDR)                   PORTA;
__sfr  __at (PORTB_ADDR)                   PORTB;
__sfr  __at (PORTC_ADDR)                   PORTC;
__sfr  __at (PORTD_ADDR)                   PORTD;
__sfr  __at (PORTE_ADDR)                   PORTE;
__sfr  __at (PCLATH_ADDR)                  PCLATH;
__sfr  __at (INTCON_ADDR)                  INTCON;
__sfr  __at (PIR1_ADDR)                    PIR1;
__sfr  __at (PIR2_ADDR)                    PIR2;
__sfr  __at (TMR1_ADDR)                    TMR1;
__sfr  __at (TMR1L_ADDR)                   TMR1L;
__sfr  __at (TMR1H_ADDR)                   TMR1H;
__sfr  __at (T1CON_ADDR)                   T1CON;
__sfr  __at (TMR2_ADDR)                    TMR2;
__sfr  __at (T2CON_ADDR)                   T2CON;
__sfr  __at (SSPBUF_ADDR)                  SSPBUF;
__sfr  __at (SSPCON_ADDR)                  SSPCON;
__sfr  __at (CCPR1_ADDR)                   CCPR1;
__sfr  __at (CCPR1L_ADDR)                  CCPR1L;
__sfr  __at (CCPR1H_ADDR)                  CCPR1H;
__sfr  __at (CCP1CON_ADDR)                 CCP1CON;
__sfr  __at (RCSTA_ADDR)                   RCSTA;
__sfr  __at (TXREG_ADDR)                   TXREG;
__sfr  __at (RCREG_ADDR)                   RCREG;
__sfr  __at (CCPR2_ADDR)                   CCPR2;
__sfr  __at (CCPR2L_ADDR)                  CCPR2L;
__sfr  __at (CCPR2H_ADDR)                  CCPR2H;
__sfr  __at (CCP2CON_ADDR)                 CCP2CON;
__sfr  __at (ADRES_ADDR)                   ADRES;
__sfr  __at (ADCON0_ADDR)                  ADCON0;
__sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
__sfr  __at (TRISA_ADDR)                   TRISA;
__sfr  __at (TRISB_ADDR)                   TRISB;
__sfr  __at (TRISC_ADDR)                   TRISC;
__sfr  __at (TRISD_ADDR)                   TRISD;
__sfr  __at (TRISE_ADDR)                   TRISE;
__sfr  __at (PIE1_ADDR)                    PIE1;
__sfr  __at (PIE2_ADDR)                    PIE2;
__sfr  __at (PCON_ADDR)                    PCON;
__sfr  __at (T1GCON_ADDR)                  T1GCON;
__sfr  __at (OSCCON_ADDR)                  OSCCON;
__sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
__sfr  __at (PR2_ADDR)                     PR2;
__sfr  __at (SSPADD_ADDR)                  SSPADD;
__sfr  __at (SSPMSK_ADDR)                  SSPMSK;
__sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
__sfr  __at (WPUB_ADDR)                    WPUB;
__sfr  __at (IOCB_ADDR)                    IOCB;
__sfr  __at (T3CON_ADDR)                   T3CON;
__sfr  __at (TXSTA_ADDR)                   TXSTA;
__sfr  __at (SPBRG_ADDR)                   SPBRG;
__sfr  __at (TMR3_ADDR)                    TMR3;
__sfr  __at (TMR3L_ADDR)                   TMR3L;
__sfr  __at (TMR3H_ADDR)                   TMR3H;
__sfr  __at (APFCON_ADDR)                  APFCON;
__sfr  __at (FVRCON_ADDR)                  FVRCON;
__sfr  __at (T3GCON_ADDR)                  T3GCON;
__sfr  __at (ADCON1_ADDR)                  ADCON1;
__sfr  __at (TACON_ADDR)                   TACON;
__sfr  __at (CPSBCON0_ADDR)                CPSBCON0;
__sfr  __at (CPSBCON1_ADDR)                CPSBCON1;
__sfr  __at (CPSACON0_ADDR)                CPSACON0;
__sfr  __at (CPSACON1_ADDR)                CPSACON1;
__sfr  __at (PMDATL_ADDR)                  PMDATL;
__sfr  __at (PMADRL_ADDR)                  PMADRL;
__sfr  __at (PMDATH_ADDR)                  PMDATH;
__sfr  __at (PMADRH_ADDR)                  PMADRH;
__sfr  __at (TMRA_ADDR)                    TMRA;
__sfr  __at (TBCON_ADDR)                   TBCON;
__sfr  __at (TMRB_ADDR)                    TMRB;
__sfr  __at (DACCON0_ADDR)                 DACCON0;
__sfr  __at (DACCON1_ADDR)                 DACCON1;
__sfr  __at (ANSELA_ADDR)                  ANSELA;
__sfr  __at (ANSELB_ADDR)                  ANSELB;
__sfr  __at (ANSELC_ADDR)                  ANSELC;
__sfr  __at (ANSELD_ADDR)                  ANSELD;
__sfr  __at (ANSELE_ADDR)                  ANSELE;
__sfr  __at (PMCON1_ADDR)                  PMCON1;

//
// bitfield definitions
//
volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;
volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;
volatile __ANSELAbits_t __at(ANSELA_ADDR) ANSELAbits;
volatile __ANSELBbits_t __at(ANSELB_ADDR) ANSELBbits;
volatile __ANSELCbits_t __at(ANSELC_ADDR) ANSELCbits;
volatile __ANSELDbits_t __at(ANSELD_ADDR) ANSELDbits;
volatile __ANSELEbits_t __at(ANSELE_ADDR) ANSELEbits;
volatile __APFCONbits_t __at(APFCON_ADDR) APFCONbits;
volatile __CCP1CONbits_t __at(CCP1CON_ADDR) CCP1CONbits;
volatile __CCP2CONbits_t __at(CCP2CON_ADDR) CCP2CONbits;
volatile __CPSACON0bits_t __at(CPSACON0_ADDR) CPSACON0bits;
volatile __CPSACON1bits_t __at(CPSACON1_ADDR) CPSACON1bits;
volatile __CPSBCON0bits_t __at(CPSBCON0_ADDR) CPSBCON0bits;
volatile __CPSBCON1bits_t __at(CPSBCON1_ADDR) CPSBCON1bits;
volatile __DACCON0bits_t __at(DACCON0_ADDR) DACCON0bits;
volatile __DACCON1bits_t __at(DACCON1_ADDR) DACCON1bits;
volatile __FVRCONbits_t __at(FVRCON_ADDR) FVRCONbits;
volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;
volatile __IOCBbits_t __at(IOCB_ADDR) IOCBbits;
volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;
volatile __OSCCONbits_t __at(OSCCON_ADDR) OSCCONbits;
volatile __PCONbits_t __at(PCON_ADDR) PCONbits;
volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;
volatile __PIE2bits_t __at(PIE2_ADDR) PIE2bits;
volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;
volatile __PIR2bits_t __at(PIR2_ADDR) PIR2bits;
volatile __PMCON1bits_t __at(PMCON1_ADDR) PMCON1bits;
volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;
volatile __PORTBbits_t __at(PORTB_ADDR) PORTBbits;
volatile __PORTCbits_t __at(PORTC_ADDR) PORTCbits;
volatile __PORTDbits_t __at(PORTD_ADDR) PORTDbits;
volatile __PORTEbits_t __at(PORTE_ADDR) PORTEbits;
volatile __RCSTAbits_t __at(RCSTA_ADDR) RCSTAbits;
volatile __SSPCONbits_t __at(SSPCON_ADDR) SSPCONbits;
volatile __SSPSTATbits_t __at(SSPSTAT_ADDR) SSPSTATbits;
volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;
volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;
volatile __T1GCONbits_t __at(T1GCON_ADDR) T1GCONbits;
volatile __T2CONbits_t __at(T2CON_ADDR) T2CONbits;
volatile __T3CONbits_t __at(T3CON_ADDR) T3CONbits;
volatile __T3GCONbits_t __at(T3GCON_ADDR) T3GCONbits;
volatile __TACONbits_t __at(TACON_ADDR) TACONbits;
volatile __TBCONbits_t __at(TBCON_ADDR) TBCONbits;
volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;
volatile __TRISBbits_t __at(TRISB_ADDR) TRISBbits;
volatile __TRISCbits_t __at(TRISC_ADDR) TRISCbits;
volatile __TRISDbits_t __at(TRISD_ADDR) TRISDbits;
volatile __TRISEbits_t __at(TRISE_ADDR) TRISEbits;
volatile __TXSTAbits_t __at(TXSTA_ADDR) TXSTAbits;
volatile __WPUBbits_t __at(WPUB_ADDR) WPUBbits;

