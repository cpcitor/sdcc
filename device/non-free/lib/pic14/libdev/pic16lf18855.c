/*
 * This definitions of the PIC16LF18855 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2016.
 *
 * This file is generated automatically by the cinc2h.pl, 2016-01-17 15:36:00 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
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

#include <pic16lf18855.h>

//==============================================================================

__at(0x0000) __sfr INDF0;

__at(0x0001) __sfr INDF1;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR0;

__at(0x0004) __sfr FSR0L;

__at(0x0005) __sfr FSR0H;

__at(0x0006) __sfr FSR1;

__at(0x0006) __sfr FSR1L;

__at(0x0007) __sfr FSR1H;

__at(0x0008) __sfr BSR;
__at(0x0008) volatile __BSRbits_t BSRbits;

__at(0x0009) __sfr WREG;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PORTA;
__at(0x000C) volatile __PORTAbits_t PORTAbits;

__at(0x000D) __sfr PORTB;
__at(0x000D) volatile __PORTBbits_t PORTBbits;

__at(0x000E) __sfr PORTC;
__at(0x000E) volatile __PORTCbits_t PORTCbits;

__at(0x0010) __sfr PORTE;
__at(0x0010) volatile __PORTEbits_t PORTEbits;

__at(0x0011) __sfr TRISA;
__at(0x0011) volatile __TRISAbits_t TRISAbits;

__at(0x0012) __sfr TRISB;
__at(0x0012) volatile __TRISBbits_t TRISBbits;

__at(0x0013) __sfr TRISC;
__at(0x0013) volatile __TRISCbits_t TRISCbits;

__at(0x0016) __sfr LATA;
__at(0x0016) volatile __LATAbits_t LATAbits;

__at(0x0017) __sfr LATB;
__at(0x0017) volatile __LATBbits_t LATBbits;

__at(0x0018) __sfr LATC;
__at(0x0018) volatile __LATCbits_t LATCbits;

__at(0x001C) __sfr TMR0;
__at(0x001C) volatile __TMR0bits_t TMR0bits;

__at(0x001C) __sfr TMR0L;
__at(0x001C) volatile __TMR0Lbits_t TMR0Lbits;

__at(0x001D) __sfr PR0;
__at(0x001D) volatile __PR0bits_t PR0bits;

__at(0x001D) __sfr TMR0H;
__at(0x001D) volatile __TMR0Hbits_t TMR0Hbits;

__at(0x001E) __sfr T0CON0;
__at(0x001E) volatile __T0CON0bits_t T0CON0bits;

__at(0x001F) __sfr T0CON1;
__at(0x001F) volatile __T0CON1bits_t T0CON1bits;

__at(0x008C) __sfr ADRES;

__at(0x008C) __sfr ADRESL;

__at(0x008D) __sfr ADRESH;

__at(0x008E) __sfr ADPREV;

__at(0x008E) __sfr ADPREVL;
__at(0x008E) volatile __ADPREVLbits_t ADPREVLbits;

__at(0x008F) __sfr ADPREVH;
__at(0x008F) volatile __ADPREVHbits_t ADPREVHbits;

__at(0x0090) __sfr ADACC;

__at(0x0090) __sfr ADACCL;
__at(0x0090) volatile __ADACCLbits_t ADACCLbits;

__at(0x0091) __sfr ADACCH;
__at(0x0091) volatile __ADACCHbits_t ADACCHbits;

__at(0x0093) __sfr ADCON0;
__at(0x0093) volatile __ADCON0bits_t ADCON0bits;

__at(0x0094) __sfr ADCON1;
__at(0x0094) volatile __ADCON1bits_t ADCON1bits;

__at(0x0095) __sfr ADCON2;
__at(0x0095) volatile __ADCON2bits_t ADCON2bits;

__at(0x0096) __sfr ADCON3;
__at(0x0096) volatile __ADCON3bits_t ADCON3bits;

__at(0x0097) __sfr ADSTAT;
__at(0x0097) volatile __ADSTATbits_t ADSTATbits;

__at(0x0098) __sfr ADCLK;
__at(0x0098) volatile __ADCLKbits_t ADCLKbits;

__at(0x0099) __sfr ADACT;
__at(0x0099) volatile __ADACTbits_t ADACTbits;

__at(0x009A) __sfr ADREF;
__at(0x009A) volatile __ADREFbits_t ADREFbits;

__at(0x009B) __sfr ADCAP;
__at(0x009B) volatile __ADCAPbits_t ADCAPbits;

__at(0x009C) __sfr ADPRE;
__at(0x009C) volatile __ADPREbits_t ADPREbits;

__at(0x009D) __sfr ADACQ;
__at(0x009D) volatile __ADACQbits_t ADACQbits;

__at(0x009E) __sfr ADPCH;
__at(0x009E) volatile __ADPCHbits_t ADPCHbits;

__at(0x010C) __sfr ADCNT;
__at(0x010C) volatile __ADCNTbits_t ADCNTbits;

__at(0x010D) __sfr ADRPT;
__at(0x010D) volatile __ADRPTbits_t ADRPTbits;

__at(0x010E) __sfr ADLTH;

__at(0x010E) __sfr ADLTHL;
__at(0x010E) volatile __ADLTHLbits_t ADLTHLbits;

__at(0x010F) __sfr ADLTHH;
__at(0x010F) volatile __ADLTHHbits_t ADLTHHbits;

__at(0x0110) __sfr ADUTH;

__at(0x0110) __sfr ADUTHL;
__at(0x0110) volatile __ADUTHLbits_t ADUTHLbits;

__at(0x0111) __sfr ADUTHH;
__at(0x0111) volatile __ADUTHHbits_t ADUTHHbits;

__at(0x0112) __sfr ADSTPT;

__at(0x0112) __sfr ADSTPTL;
__at(0x0112) volatile __ADSTPTLbits_t ADSTPTLbits;

__at(0x0113) __sfr ADSTPTH;
__at(0x0113) volatile __ADSTPTHbits_t ADSTPTHbits;

__at(0x0114) __sfr ADFLTR;

__at(0x0114) __sfr ADFLTRL;
__at(0x0114) volatile __ADFLTRLbits_t ADFLTRLbits;

__at(0x0115) __sfr ADFLTRH;
__at(0x0115) volatile __ADFLTRHbits_t ADFLTRHbits;

__at(0x0116) __sfr ADERR;

__at(0x0116) __sfr ADERRL;
__at(0x0116) volatile __ADERRLbits_t ADERRLbits;

__at(0x0117) __sfr ADERRH;
__at(0x0117) volatile __ADERRHbits_t ADERRHbits;

__at(0x0119) __sfr RC1REG;

__at(0x0119) __sfr RCREG;

__at(0x0119) __sfr RCREG1;

__at(0x011A) __sfr TX1REG;

__at(0x011A) __sfr TXREG;

__at(0x011A) __sfr TXREG1;

__at(0x011B) __sfr SP1BRG;

__at(0x011B) __sfr SP1BRGL;

__at(0x011B) __sfr SPBRG;

__at(0x011B) __sfr SPBRG1;

__at(0x011B) __sfr SPBRGL;

__at(0x011C) __sfr SP1BRGH;

__at(0x011C) __sfr SPBRGH;

__at(0x011C) __sfr SPBRGH1;

__at(0x011D) __sfr RC1STA;
__at(0x011D) volatile __RC1STAbits_t RC1STAbits;

__at(0x011D) __sfr RCSTA;
__at(0x011D) volatile __RCSTAbits_t RCSTAbits;

__at(0x011D) __sfr RCSTA1;
__at(0x011D) volatile __RCSTA1bits_t RCSTA1bits;

__at(0x011E) __sfr TX1STA;
__at(0x011E) volatile __TX1STAbits_t TX1STAbits;

__at(0x011E) __sfr TXSTA;
__at(0x011E) volatile __TXSTAbits_t TXSTAbits;

__at(0x011E) __sfr TXSTA1;
__at(0x011E) volatile __TXSTA1bits_t TXSTA1bits;

__at(0x011F) __sfr BAUD1CON;
__at(0x011F) volatile __BAUD1CONbits_t BAUD1CONbits;

__at(0x011F) __sfr BAUDCON;
__at(0x011F) volatile __BAUDCONbits_t BAUDCONbits;

__at(0x011F) __sfr BAUDCON1;
__at(0x011F) volatile __BAUDCON1bits_t BAUDCON1bits;

__at(0x011F) __sfr BAUDCTL;
__at(0x011F) volatile __BAUDCTLbits_t BAUDCTLbits;

__at(0x011F) __sfr BAUDCTL1;
__at(0x011F) volatile __BAUDCTL1bits_t BAUDCTL1bits;

__at(0x018C) __sfr SSP1BUF;

__at(0x018D) __sfr SSP1ADD;

__at(0x018E) __sfr SSP1MSK;
__at(0x018E) volatile __SSP1MSKbits_t SSP1MSKbits;

__at(0x018F) __sfr SSP1STAT;
__at(0x018F) volatile __SSP1STATbits_t SSP1STATbits;

__at(0x0190) __sfr SSP1CON1;
__at(0x0190) volatile __SSP1CON1bits_t SSP1CON1bits;

__at(0x0191) __sfr SSP1CON2;
__at(0x0191) volatile __SSP1CON2bits_t SSP1CON2bits;

__at(0x0192) __sfr SSP1CON3;
__at(0x0192) volatile __SSP1CON3bits_t SSP1CON3bits;

__at(0x0196) __sfr SSP2BUF;

__at(0x0197) __sfr SSP2ADD;

__at(0x0198) __sfr SSP2MSK;
__at(0x0198) volatile __SSP2MSKbits_t SSP2MSKbits;

__at(0x0199) __sfr SSP2STAT;
__at(0x0199) volatile __SSP2STATbits_t SSP2STATbits;

__at(0x019A) __sfr SSP2CON1;
__at(0x019A) volatile __SSP2CON1bits_t SSP2CON1bits;

__at(0x019B) __sfr SSP2CON2;
__at(0x019B) volatile __SSP2CON2bits_t SSP2CON2bits;

__at(0x019C) __sfr SSP2CON3;
__at(0x019C) volatile __SSP2CON3bits_t SSP2CON3bits;

__at(0x020C) __sfr TMR1L;
__at(0x020C) volatile __TMR1Lbits_t TMR1Lbits;

__at(0x020D) __sfr TMR1H;
__at(0x020D) volatile __TMR1Hbits_t TMR1Hbits;

__at(0x020E) __sfr T1CON;
__at(0x020E) volatile __T1CONbits_t T1CONbits;

__at(0x020F) __sfr PR1;
__at(0x020F) volatile __PR1bits_t PR1bits;

__at(0x020F) __sfr T1GCON;
__at(0x020F) volatile __T1GCONbits_t T1GCONbits;

__at(0x0210) __sfr T1GATE;
__at(0x0210) volatile __T1GATEbits_t T1GATEbits;

__at(0x0210) __sfr TMR1GATE;
__at(0x0210) volatile __TMR1GATEbits_t TMR1GATEbits;

__at(0x0211) __sfr T1CLK;
__at(0x0211) volatile __T1CLKbits_t T1CLKbits;

__at(0x0211) __sfr TMR1CLK;
__at(0x0211) volatile __TMR1CLKbits_t TMR1CLKbits;

__at(0x0212) __sfr TMR3L;
__at(0x0212) volatile __TMR3Lbits_t TMR3Lbits;

__at(0x0213) __sfr TMR3H;
__at(0x0213) volatile __TMR3Hbits_t TMR3Hbits;

__at(0x0214) __sfr T3CON;
__at(0x0214) volatile __T3CONbits_t T3CONbits;

__at(0x0215) __sfr PR3;
__at(0x0215) volatile __PR3bits_t PR3bits;

__at(0x0215) __sfr T3GCON;
__at(0x0215) volatile __T3GCONbits_t T3GCONbits;

__at(0x0216) __sfr T3GATE;
__at(0x0216) volatile __T3GATEbits_t T3GATEbits;

__at(0x0216) __sfr TMR3GATE;
__at(0x0216) volatile __TMR3GATEbits_t TMR3GATEbits;

__at(0x0217) __sfr T3CLK;
__at(0x0217) volatile __T3CLKbits_t T3CLKbits;

__at(0x0217) __sfr TMR3CLK;
__at(0x0217) volatile __TMR3CLKbits_t TMR3CLKbits;

__at(0x0218) __sfr TMR5L;
__at(0x0218) volatile __TMR5Lbits_t TMR5Lbits;

__at(0x0219) __sfr TMR5H;
__at(0x0219) volatile __TMR5Hbits_t TMR5Hbits;

__at(0x021A) __sfr T5CON;
__at(0x021A) volatile __T5CONbits_t T5CONbits;

__at(0x021B) __sfr PR5;
__at(0x021B) volatile __PR5bits_t PR5bits;

__at(0x021B) __sfr T5GCON;
__at(0x021B) volatile __T5GCONbits_t T5GCONbits;

__at(0x021C) __sfr T5GATE;
__at(0x021C) volatile __T5GATEbits_t T5GATEbits;

__at(0x021C) __sfr TMR5GATE;
__at(0x021C) volatile __TMR5GATEbits_t TMR5GATEbits;

__at(0x021D) __sfr T5CLK;
__at(0x021D) volatile __T5CLKbits_t T5CLKbits;

__at(0x021D) __sfr TMR5CLK;
__at(0x021D) volatile __TMR5CLKbits_t TMR5CLKbits;

__at(0x021E) __sfr CCPTMRS0;
__at(0x021E) volatile __CCPTMRS0bits_t CCPTMRS0bits;

__at(0x021F) __sfr CCPTMRS1;
__at(0x021F) volatile __CCPTMRS1bits_t CCPTMRS1bits;

__at(0x028C) __sfr T2TMR;

__at(0x028C) __sfr TMR2;

__at(0x028D) __sfr PR2;

__at(0x028D) __sfr T2PR;

__at(0x028E) __sfr T2CON;
__at(0x028E) volatile __T2CONbits_t T2CONbits;

__at(0x028F) __sfr T2HLT;
__at(0x028F) volatile __T2HLTbits_t T2HLTbits;

__at(0x0290) __sfr T2CLKCON;
__at(0x0290) volatile __T2CLKCONbits_t T2CLKCONbits;

__at(0x0291) __sfr T2RST;
__at(0x0291) volatile __T2RSTbits_t T2RSTbits;

__at(0x0292) __sfr T4TMR;

__at(0x0292) __sfr TMR4;

__at(0x0293) __sfr PR4;

__at(0x0293) __sfr T4PR;

__at(0x0294) __sfr T4CON;
__at(0x0294) volatile __T4CONbits_t T4CONbits;

__at(0x0295) __sfr T4HLT;
__at(0x0295) volatile __T4HLTbits_t T4HLTbits;

__at(0x0296) __sfr T4CLKCON;
__at(0x0296) volatile __T4CLKCONbits_t T4CLKCONbits;

__at(0x0297) __sfr T4RST;
__at(0x0297) volatile __T4RSTbits_t T4RSTbits;

__at(0x0298) __sfr T6TMR;

__at(0x0298) __sfr TMR6;

__at(0x0299) __sfr PR6;

__at(0x0299) __sfr T6PR;

__at(0x029A) __sfr T6CON;
__at(0x029A) volatile __T6CONbits_t T6CONbits;

__at(0x029B) __sfr T6HLT;
__at(0x029B) volatile __T6HLTbits_t T6HLTbits;

__at(0x029C) __sfr T6CLKCON;
__at(0x029C) volatile __T6CLKCONbits_t T6CLKCONbits;

__at(0x029D) __sfr T6RST;
__at(0x029D) volatile __T6RSTbits_t T6RSTbits;

__at(0x030C) __sfr CCPR1;

__at(0x030C) __sfr CCPR1L;

__at(0x030D) __sfr CCPR1H;

__at(0x030E) __sfr CCP1CON;
__at(0x030E) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x030F) __sfr CCP1CAP;
__at(0x030F) volatile __CCP1CAPbits_t CCP1CAPbits;

__at(0x0310) __sfr CCPR2;

__at(0x0310) __sfr CCPR2L;

__at(0x0311) __sfr CCPR2H;

__at(0x0312) __sfr CCP2CON;
__at(0x0312) volatile __CCP2CONbits_t CCP2CONbits;

__at(0x0313) __sfr CCP2CAP;
__at(0x0313) volatile __CCP2CAPbits_t CCP2CAPbits;

__at(0x0314) __sfr CCPR3;

__at(0x0314) __sfr CCPR3L;

__at(0x0315) __sfr CCPR3H;

__at(0x0316) __sfr CCP3CON;
__at(0x0316) volatile __CCP3CONbits_t CCP3CONbits;

__at(0x0317) __sfr CCP3CAP;
__at(0x0317) volatile __CCP3CAPbits_t CCP3CAPbits;

__at(0x0318) __sfr CCPR4;

__at(0x0318) __sfr CCPR4L;

__at(0x0319) __sfr CCPR4H;

__at(0x031A) __sfr CCP4CON;
__at(0x031A) volatile __CCP4CONbits_t CCP4CONbits;

__at(0x031B) __sfr CCP4CAP;
__at(0x031B) volatile __CCP4CAPbits_t CCP4CAPbits;

__at(0x031C) __sfr CCPR5;

__at(0x031C) __sfr CCPR5L;

__at(0x031D) __sfr CCPR5H;

__at(0x031E) __sfr CCP5CON;
__at(0x031E) volatile __CCP5CONbits_t CCP5CONbits;

__at(0x031F) __sfr CCP5CAP;
__at(0x031F) volatile __CCP5CAPbits_t CCP5CAPbits;

__at(0x038C) __sfr PWM6DCL;
__at(0x038C) volatile __PWM6DCLbits_t PWM6DCLbits;

__at(0x038D) __sfr PWM6DCH;
__at(0x038D) volatile __PWM6DCHbits_t PWM6DCHbits;

__at(0x038E) __sfr PWM6CON;
__at(0x038E) volatile __PWM6CONbits_t PWM6CONbits;

__at(0x0390) __sfr PWM7DCL;
__at(0x0390) volatile __PWM7DCLbits_t PWM7DCLbits;

__at(0x0391) __sfr PWM7DCH;
__at(0x0391) volatile __PWM7DCHbits_t PWM7DCHbits;

__at(0x0392) __sfr PWM7CON;
__at(0x0392) volatile __PWM7CONbits_t PWM7CONbits;

__at(0x040C) __sfr SCANLADRL;
__at(0x040C) volatile __SCANLADRLbits_t SCANLADRLbits;

__at(0x040D) __sfr SCANLADRH;
__at(0x040D) volatile __SCANLADRHbits_t SCANLADRHbits;

__at(0x040E) __sfr SCANHADRL;
__at(0x040E) volatile __SCANHADRLbits_t SCANHADRLbits;

__at(0x040F) __sfr SCANHADRH;
__at(0x040F) volatile __SCANHADRHbits_t SCANHADRHbits;

__at(0x0410) __sfr SCANCON0;
__at(0x0410) volatile __SCANCON0bits_t SCANCON0bits;

__at(0x0411) __sfr SCANTRIG;
__at(0x0411) volatile __SCANTRIGbits_t SCANTRIGbits;

__at(0x0416) __sfr CRCDATA;

__at(0x0416) __sfr CRCDATL;
__at(0x0416) volatile __CRCDATLbits_t CRCDATLbits;

__at(0x0417) __sfr CRCDATH;
__at(0x0417) volatile __CRCDATHbits_t CRCDATHbits;

__at(0x0418) __sfr CRCACC;

__at(0x0418) __sfr CRCACCL;
__at(0x0418) volatile __CRCACCLbits_t CRCACCLbits;

__at(0x0419) __sfr CRCACCH;
__at(0x0419) volatile __CRCACCHbits_t CRCACCHbits;

__at(0x041A) __sfr CRCSHFT;

__at(0x041A) __sfr CRCSHIFTL;
__at(0x041A) volatile __CRCSHIFTLbits_t CRCSHIFTLbits;

__at(0x041B) __sfr CRCSHIFTH;
__at(0x041B) volatile __CRCSHIFTHbits_t CRCSHIFTHbits;

__at(0x041C) __sfr CRCXOR;

__at(0x041C) __sfr CRCXORL;
__at(0x041C) volatile __CRCXORLbits_t CRCXORLbits;

__at(0x041D) __sfr CRCXORH;
__at(0x041D) volatile __CRCXORHbits_t CRCXORHbits;

__at(0x041E) __sfr CRCCON0;
__at(0x041E) volatile __CRCCON0bits_t CRCCON0bits;

__at(0x041F) __sfr CRCCON1;
__at(0x041F) volatile __CRCCON1bits_t CRCCON1bits;

__at(0x048C) __sfr SMT1TMR;

__at(0x048C) __sfr SMT1TMRL;
__at(0x048C) volatile __SMT1TMRLbits_t SMT1TMRLbits;

__at(0x048D) __sfr SMT1TMRH;
__at(0x048D) volatile __SMT1TMRHbits_t SMT1TMRHbits;

__at(0x048E) __sfr SMT1TMRU;
__at(0x048E) volatile __SMT1TMRUbits_t SMT1TMRUbits;

__at(0x048F) __sfr SMT1CPR;

__at(0x048F) __sfr SMT1CPRL;
__at(0x048F) volatile __SMT1CPRLbits_t SMT1CPRLbits;

__at(0x0490) __sfr SMT1CPRH;
__at(0x0490) volatile __SMT1CPRHbits_t SMT1CPRHbits;

__at(0x0491) __sfr SMT1CPRU;
__at(0x0491) volatile __SMT1CPRUbits_t SMT1CPRUbits;

__at(0x0492) __sfr SMT1CPW;

__at(0x0492) __sfr SMT1CPWL;
__at(0x0492) volatile __SMT1CPWLbits_t SMT1CPWLbits;

__at(0x0493) __sfr SMT1CPWH;
__at(0x0493) volatile __SMT1CPWHbits_t SMT1CPWHbits;

__at(0x0494) __sfr SMT1CPWU;
__at(0x0494) volatile __SMT1CPWUbits_t SMT1CPWUbits;

__at(0x0495) __sfr SMT1PR;

__at(0x0495) __sfr SMT1PRL;
__at(0x0495) volatile __SMT1PRLbits_t SMT1PRLbits;

__at(0x0496) __sfr SMT1PRH;
__at(0x0496) volatile __SMT1PRHbits_t SMT1PRHbits;

__at(0x0497) __sfr SMT1PRU;
__at(0x0497) volatile __SMT1PRUbits_t SMT1PRUbits;

__at(0x0498) __sfr SMT1CON0;
__at(0x0498) volatile __SMT1CON0bits_t SMT1CON0bits;

__at(0x0499) __sfr SMT1CON1;
__at(0x0499) volatile __SMT1CON1bits_t SMT1CON1bits;

__at(0x049A) __sfr SMT1STAT;
__at(0x049A) volatile __SMT1STATbits_t SMT1STATbits;

__at(0x049B) __sfr SMT1CLK;
__at(0x049B) volatile __SMT1CLKbits_t SMT1CLKbits;

__at(0x049C) __sfr SMT1SIG;
__at(0x049C) volatile __SMT1SIGbits_t SMT1SIGbits;

__at(0x049D) __sfr SMT1WIN;
__at(0x049D) volatile __SMT1WINbits_t SMT1WINbits;

__at(0x050C) __sfr SMT2TMR;

__at(0x050C) __sfr SMT2TMRL;
__at(0x050C) volatile __SMT2TMRLbits_t SMT2TMRLbits;

__at(0x050D) __sfr SMT2TMRH;
__at(0x050D) volatile __SMT2TMRHbits_t SMT2TMRHbits;

__at(0x050E) __sfr SMT2TMRU;
__at(0x050E) volatile __SMT2TMRUbits_t SMT2TMRUbits;

__at(0x050F) __sfr SMT2CPR;

__at(0x050F) __sfr SMT2CPRL;
__at(0x050F) volatile __SMT2CPRLbits_t SMT2CPRLbits;

__at(0x0510) __sfr SMT2CPRH;
__at(0x0510) volatile __SMT2CPRHbits_t SMT2CPRHbits;

__at(0x0511) __sfr SMT2CPRU;
__at(0x0511) volatile __SMT2CPRUbits_t SMT2CPRUbits;

__at(0x0512) __sfr SMT2CPW;

__at(0x0512) __sfr SMT2CPWL;
__at(0x0512) volatile __SMT2CPWLbits_t SMT2CPWLbits;

__at(0x0513) __sfr SMT2CPWH;
__at(0x0513) volatile __SMT2CPWHbits_t SMT2CPWHbits;

__at(0x0514) __sfr SMT2CPWU;
__at(0x0514) volatile __SMT2CPWUbits_t SMT2CPWUbits;

__at(0x0515) __sfr SMT2PR;

__at(0x0515) __sfr SMT2PRL;
__at(0x0515) volatile __SMT2PRLbits_t SMT2PRLbits;

__at(0x0516) __sfr SMT2PRH;
__at(0x0516) volatile __SMT2PRHbits_t SMT2PRHbits;

__at(0x0517) __sfr SMT2PRU;
__at(0x0517) volatile __SMT2PRUbits_t SMT2PRUbits;

__at(0x0518) __sfr SMT2CON0;
__at(0x0518) volatile __SMT2CON0bits_t SMT2CON0bits;

__at(0x0519) __sfr SMT2CON1;
__at(0x0519) volatile __SMT2CON1bits_t SMT2CON1bits;

__at(0x051A) __sfr SMT2STAT;
__at(0x051A) volatile __SMT2STATbits_t SMT2STATbits;

__at(0x051B) __sfr SMT2CLK;
__at(0x051B) volatile __SMT2CLKbits_t SMT2CLKbits;

__at(0x051C) __sfr SMT2SIG;
__at(0x051C) volatile __SMT2SIGbits_t SMT2SIGbits;

__at(0x051D) __sfr SMT2WIN;
__at(0x051D) volatile __SMT2WINbits_t SMT2WINbits;

__at(0x058C) __sfr NCO1ACC;

__at(0x058C) __sfr NCO1ACCL;
__at(0x058C) volatile __NCO1ACCLbits_t NCO1ACCLbits;

__at(0x058D) __sfr NCO1ACCH;
__at(0x058D) volatile __NCO1ACCHbits_t NCO1ACCHbits;

__at(0x058E) __sfr NCO1ACCU;
__at(0x058E) volatile __NCO1ACCUbits_t NCO1ACCUbits;

__at(0x058F) __sfr NCO1INC;

__at(0x058F) __sfr NCO1INCL;
__at(0x058F) volatile __NCO1INCLbits_t NCO1INCLbits;

__at(0x0590) __sfr NCO1INCH;
__at(0x0590) volatile __NCO1INCHbits_t NCO1INCHbits;

__at(0x0591) __sfr NCO1INCU;
__at(0x0591) volatile __NCO1INCUbits_t NCO1INCUbits;

__at(0x0592) __sfr NCO1CON;
__at(0x0592) volatile __NCO1CONbits_t NCO1CONbits;

__at(0x0593) __sfr NCO1CLK;
__at(0x0593) volatile __NCO1CLKbits_t NCO1CLKbits;

__at(0x060C) __sfr CWG1CLKCON;
__at(0x060C) volatile __CWG1CLKCONbits_t CWG1CLKCONbits;

__at(0x060D) __sfr CWG1ISM;
__at(0x060D) volatile __CWG1ISMbits_t CWG1ISMbits;

__at(0x060E) __sfr CWG1DBR;
__at(0x060E) volatile __CWG1DBRbits_t CWG1DBRbits;

__at(0x060F) __sfr CWG1DBF;
__at(0x060F) volatile __CWG1DBFbits_t CWG1DBFbits;

__at(0x0610) __sfr CWG1CON0;
__at(0x0610) volatile __CWG1CON0bits_t CWG1CON0bits;

__at(0x0611) __sfr CWG1CON1;
__at(0x0611) volatile __CWG1CON1bits_t CWG1CON1bits;

__at(0x0612) __sfr CWG1AS0;
__at(0x0612) volatile __CWG1AS0bits_t CWG1AS0bits;

__at(0x0613) __sfr CWG1AS1;
__at(0x0613) volatile __CWG1AS1bits_t CWG1AS1bits;

__at(0x0614) __sfr CWG1STR;
__at(0x0614) volatile __CWG1STRbits_t CWG1STRbits;

__at(0x0616) __sfr CWG2CLKCON;
__at(0x0616) volatile __CWG2CLKCONbits_t CWG2CLKCONbits;

__at(0x0617) __sfr CWG2ISM;
__at(0x0617) volatile __CWG2ISMbits_t CWG2ISMbits;

__at(0x0618) __sfr CWG2DBR;
__at(0x0618) volatile __CWG2DBRbits_t CWG2DBRbits;

__at(0x0619) __sfr CWG2DBF;
__at(0x0619) volatile __CWG2DBFbits_t CWG2DBFbits;

__at(0x061A) __sfr CWG2CON0;
__at(0x061A) volatile __CWG2CON0bits_t CWG2CON0bits;

__at(0x061B) __sfr CWG2CON1;
__at(0x061B) volatile __CWG2CON1bits_t CWG2CON1bits;

__at(0x061C) __sfr CWG2AS0;
__at(0x061C) volatile __CWG2AS0bits_t CWG2AS0bits;

__at(0x061D) __sfr CWG2AS1;
__at(0x061D) volatile __CWG2AS1bits_t CWG2AS1bits;

__at(0x061E) __sfr CWG2STR;
__at(0x061E) volatile __CWG2STRbits_t CWG2STRbits;

__at(0x068C) __sfr CWG3CLKCON;
__at(0x068C) volatile __CWG3CLKCONbits_t CWG3CLKCONbits;

__at(0x068D) __sfr CWG3ISM;
__at(0x068D) volatile __CWG3ISMbits_t CWG3ISMbits;

__at(0x068E) __sfr CWG3DBR;
__at(0x068E) volatile __CWG3DBRbits_t CWG3DBRbits;

__at(0x068F) __sfr CWG3DBF;
__at(0x068F) volatile __CWG3DBFbits_t CWG3DBFbits;

__at(0x0690) __sfr CWG3CON0;
__at(0x0690) volatile __CWG3CON0bits_t CWG3CON0bits;

__at(0x0691) __sfr CWG3CON1;
__at(0x0691) volatile __CWG3CON1bits_t CWG3CON1bits;

__at(0x0692) __sfr CWG3AS0;
__at(0x0692) volatile __CWG3AS0bits_t CWG3AS0bits;

__at(0x0693) __sfr CWG3AS1;
__at(0x0693) volatile __CWG3AS1bits_t CWG3AS1bits;

__at(0x0694) __sfr CWG3STR;
__at(0x0694) volatile __CWG3STRbits_t CWG3STRbits;

__at(0x070C) __sfr PIR0;
__at(0x070C) volatile __PIR0bits_t PIR0bits;

__at(0x070D) __sfr PIR1;
__at(0x070D) volatile __PIR1bits_t PIR1bits;

__at(0x070E) __sfr PIR2;
__at(0x070E) volatile __PIR2bits_t PIR2bits;

__at(0x070F) __sfr PIR3;
__at(0x070F) volatile __PIR3bits_t PIR3bits;

__at(0x0710) __sfr PIR4;
__at(0x0710) volatile __PIR4bits_t PIR4bits;

__at(0x0711) __sfr PIR5;
__at(0x0711) volatile __PIR5bits_t PIR5bits;

__at(0x0712) __sfr PIR6;
__at(0x0712) volatile __PIR6bits_t PIR6bits;

__at(0x0713) __sfr PIR7;
__at(0x0713) volatile __PIR7bits_t PIR7bits;

__at(0x0714) __sfr PIR8;
__at(0x0714) volatile __PIR8bits_t PIR8bits;

__at(0x0716) __sfr PIE0;
__at(0x0716) volatile __PIE0bits_t PIE0bits;

__at(0x0717) __sfr PIE1;
__at(0x0717) volatile __PIE1bits_t PIE1bits;

__at(0x0718) __sfr PIE2;
__at(0x0718) volatile __PIE2bits_t PIE2bits;

__at(0x0719) __sfr PIE3;
__at(0x0719) volatile __PIE3bits_t PIE3bits;

__at(0x071A) __sfr PIE4;
__at(0x071A) volatile __PIE4bits_t PIE4bits;

__at(0x071B) __sfr PIE5;
__at(0x071B) volatile __PIE5bits_t PIE5bits;

__at(0x071C) __sfr PIE6;
__at(0x071C) volatile __PIE6bits_t PIE6bits;

__at(0x071D) __sfr PIE7;
__at(0x071D) volatile __PIE7bits_t PIE7bits;

__at(0x071E) __sfr PIE8;
__at(0x071E) volatile __PIE8bits_t PIE8bits;

__at(0x0796) __sfr PMD0;
__at(0x0796) volatile __PMD0bits_t PMD0bits;

__at(0x0797) __sfr PMD1;
__at(0x0797) volatile __PMD1bits_t PMD1bits;

__at(0x0798) __sfr PMD2;
__at(0x0798) volatile __PMD2bits_t PMD2bits;

__at(0x0799) __sfr PMD3;
__at(0x0799) volatile __PMD3bits_t PMD3bits;

__at(0x079A) __sfr PMD4;
__at(0x079A) volatile __PMD4bits_t PMD4bits;

__at(0x079B) __sfr PMD5;
__at(0x079B) volatile __PMD5bits_t PMD5bits;

__at(0x080C) __sfr WDTCON0;
__at(0x080C) volatile __WDTCON0bits_t WDTCON0bits;

__at(0x080D) __sfr WDTCON1;
__at(0x080D) volatile __WDTCON1bits_t WDTCON1bits;

__at(0x080E) __sfr WDTPSL;
__at(0x080E) volatile __WDTPSLbits_t WDTPSLbits;

__at(0x080F) __sfr WDTPSH;
__at(0x080F) volatile __WDTPSHbits_t WDTPSHbits;

__at(0x0810) __sfr WDTTMR;
__at(0x0810) volatile __WDTTMRbits_t WDTTMRbits;

__at(0x0811) __sfr BORCON;
__at(0x0811) volatile __BORCONbits_t BORCONbits;

__at(0x0813) __sfr PCON0;
__at(0x0813) volatile __PCON0bits_t PCON0bits;

__at(0x0814) __sfr CCDCON;
__at(0x0814) volatile __CCDCONbits_t CCDCONbits;

__at(0x081A) __sfr NVMADRL;
__at(0x081A) volatile __NVMADRLbits_t NVMADRLbits;

__at(0x081B) __sfr NVMADRH;
__at(0x081B) volatile __NVMADRHbits_t NVMADRHbits;

__at(0x081C) __sfr NVMDATL;
__at(0x081C) volatile __NVMDATLbits_t NVMDATLbits;

__at(0x081D) __sfr NVMDATH;
__at(0x081D) volatile __NVMDATHbits_t NVMDATHbits;

__at(0x081E) __sfr NVMCON1;
__at(0x081E) volatile __NVMCON1bits_t NVMCON1bits;

__at(0x081F) __sfr NVMCON2;

__at(0x088C) __sfr CPUDOZE;
__at(0x088C) volatile __CPUDOZEbits_t CPUDOZEbits;

__at(0x088D) __sfr OSCCON1;
__at(0x088D) volatile __OSCCON1bits_t OSCCON1bits;

__at(0x088E) __sfr OSCCON2;
__at(0x088E) volatile __OSCCON2bits_t OSCCON2bits;

__at(0x088F) __sfr OSCCON3;
__at(0x088F) volatile __OSCCON3bits_t OSCCON3bits;

__at(0x0890) __sfr OSCSTAT;
__at(0x0890) volatile __OSCSTATbits_t OSCSTATbits;

__at(0x0891) __sfr OSCEN;
__at(0x0891) volatile __OSCENbits_t OSCENbits;

__at(0x0892) __sfr OSCTUNE;
__at(0x0892) volatile __OSCTUNEbits_t OSCTUNEbits;

__at(0x0893) __sfr OSCFRQ;
__at(0x0893) volatile __OSCFRQbits_t OSCFRQbits;

__at(0x0895) __sfr CLKRCON;
__at(0x0895) volatile __CLKRCONbits_t CLKRCONbits;

__at(0x0896) __sfr CLKRCLK;
__at(0x0896) volatile __CLKRCLKbits_t CLKRCLKbits;

__at(0x0897) __sfr MDCON0;
__at(0x0897) volatile __MDCON0bits_t MDCON0bits;

__at(0x0898) __sfr MDCON1;
__at(0x0898) volatile __MDCON1bits_t MDCON1bits;

__at(0x0899) __sfr MDSRC;
__at(0x0899) volatile __MDSRCbits_t MDSRCbits;

__at(0x089A) __sfr MDCARL;
__at(0x089A) volatile __MDCARLbits_t MDCARLbits;

__at(0x089B) __sfr MDCARH;
__at(0x089B) volatile __MDCARHbits_t MDCARHbits;

__at(0x090C) __sfr FVRCON;
__at(0x090C) volatile __FVRCONbits_t FVRCONbits;

__at(0x090E) __sfr DAC1CON0;
__at(0x090E) volatile __DAC1CON0bits_t DAC1CON0bits;

__at(0x090F) __sfr DAC1CON1;
__at(0x090F) volatile __DAC1CON1bits_t DAC1CON1bits;

__at(0x091F) __sfr ZCD1CON;
__at(0x091F) volatile __ZCD1CONbits_t ZCD1CONbits;

__at(0x091F) __sfr ZCDCON;
__at(0x091F) volatile __ZCDCONbits_t ZCDCONbits;

__at(0x098F) __sfr CMOUT;
__at(0x098F) volatile __CMOUTbits_t CMOUTbits;

__at(0x098F) __sfr CMSTAT;
__at(0x098F) volatile __CMSTATbits_t CMSTATbits;

__at(0x0990) __sfr CM1CON0;
__at(0x0990) volatile __CM1CON0bits_t CM1CON0bits;

__at(0x0991) __sfr CM1CON1;
__at(0x0991) volatile __CM1CON1bits_t CM1CON1bits;

__at(0x0992) __sfr CM1NSEL;
__at(0x0992) volatile __CM1NSELbits_t CM1NSELbits;

__at(0x0993) __sfr CM1PSEL;
__at(0x0993) volatile __CM1PSELbits_t CM1PSELbits;

__at(0x0994) __sfr CM2CON0;
__at(0x0994) volatile __CM2CON0bits_t CM2CON0bits;

__at(0x0995) __sfr CM2CON1;
__at(0x0995) volatile __CM2CON1bits_t CM2CON1bits;

__at(0x0996) __sfr CM2NSEL;
__at(0x0996) volatile __CM2NSELbits_t CM2NSELbits;

__at(0x0997) __sfr CM2PSEL;
__at(0x0997) volatile __CM2PSELbits_t CM2PSELbits;

__at(0x0E0F) __sfr CLCDATA;
__at(0x0E0F) volatile __CLCDATAbits_t CLCDATAbits;

__at(0x0E10) __sfr CLC1CON;
__at(0x0E10) volatile __CLC1CONbits_t CLC1CONbits;

__at(0x0E11) __sfr CLC1POL;
__at(0x0E11) volatile __CLC1POLbits_t CLC1POLbits;

__at(0x0E12) __sfr CLC1SEL0;
__at(0x0E12) volatile __CLC1SEL0bits_t CLC1SEL0bits;

__at(0x0E13) __sfr CLC1SEL1;
__at(0x0E13) volatile __CLC1SEL1bits_t CLC1SEL1bits;

__at(0x0E14) __sfr CLC1SEL2;
__at(0x0E14) volatile __CLC1SEL2bits_t CLC1SEL2bits;

__at(0x0E15) __sfr CLC1SEL3;
__at(0x0E15) volatile __CLC1SEL3bits_t CLC1SEL3bits;

__at(0x0E16) __sfr CLC1GLS0;
__at(0x0E16) volatile __CLC1GLS0bits_t CLC1GLS0bits;

__at(0x0E17) __sfr CLC1GLS1;
__at(0x0E17) volatile __CLC1GLS1bits_t CLC1GLS1bits;

__at(0x0E18) __sfr CLC1GLS2;
__at(0x0E18) volatile __CLC1GLS2bits_t CLC1GLS2bits;

__at(0x0E19) __sfr CLC1GLS3;
__at(0x0E19) volatile __CLC1GLS3bits_t CLC1GLS3bits;

__at(0x0E1A) __sfr CLC2CON;
__at(0x0E1A) volatile __CLC2CONbits_t CLC2CONbits;

__at(0x0E1B) __sfr CLC2POL;
__at(0x0E1B) volatile __CLC2POLbits_t CLC2POLbits;

__at(0x0E1C) __sfr CLC2SEL0;
__at(0x0E1C) volatile __CLC2SEL0bits_t CLC2SEL0bits;

__at(0x0E1D) __sfr CLC2SEL1;
__at(0x0E1D) volatile __CLC2SEL1bits_t CLC2SEL1bits;

__at(0x0E1E) __sfr CLC2SEL2;
__at(0x0E1E) volatile __CLC2SEL2bits_t CLC2SEL2bits;

__at(0x0E1F) __sfr CLC2SEL3;
__at(0x0E1F) volatile __CLC2SEL3bits_t CLC2SEL3bits;

__at(0x0E20) __sfr CLC2GLS0;
__at(0x0E20) volatile __CLC2GLS0bits_t CLC2GLS0bits;

__at(0x0E21) __sfr CLC2GLS1;
__at(0x0E21) volatile __CLC2GLS1bits_t CLC2GLS1bits;

__at(0x0E22) __sfr CLC2GLS2;
__at(0x0E22) volatile __CLC2GLS2bits_t CLC2GLS2bits;

__at(0x0E23) __sfr CLC2GLS3;
__at(0x0E23) volatile __CLC2GLS3bits_t CLC2GLS3bits;

__at(0x0E24) __sfr CLC3CON;
__at(0x0E24) volatile __CLC3CONbits_t CLC3CONbits;

__at(0x0E25) __sfr CLC3POL;
__at(0x0E25) volatile __CLC3POLbits_t CLC3POLbits;

__at(0x0E26) __sfr CLC3SEL0;
__at(0x0E26) volatile __CLC3SEL0bits_t CLC3SEL0bits;

__at(0x0E27) __sfr CLC3SEL1;
__at(0x0E27) volatile __CLC3SEL1bits_t CLC3SEL1bits;

__at(0x0E28) __sfr CLC3SEL2;
__at(0x0E28) volatile __CLC3SEL2bits_t CLC3SEL2bits;

__at(0x0E29) __sfr CLC3SEL3;
__at(0x0E29) volatile __CLC3SEL3bits_t CLC3SEL3bits;

__at(0x0E2A) __sfr CLC3GLS0;
__at(0x0E2A) volatile __CLC3GLS0bits_t CLC3GLS0bits;

__at(0x0E2B) __sfr CLC3GLS1;
__at(0x0E2B) volatile __CLC3GLS1bits_t CLC3GLS1bits;

__at(0x0E2C) __sfr CLC3GLS2;
__at(0x0E2C) volatile __CLC3GLS2bits_t CLC3GLS2bits;

__at(0x0E2D) __sfr CLC3GLS3;
__at(0x0E2D) volatile __CLC3GLS3bits_t CLC3GLS3bits;

__at(0x0E2E) __sfr CLC4CON;
__at(0x0E2E) volatile __CLC4CONbits_t CLC4CONbits;

__at(0x0E2F) __sfr CLC4POL;
__at(0x0E2F) volatile __CLC4POLbits_t CLC4POLbits;

__at(0x0E30) __sfr CLC4SEL0;
__at(0x0E30) volatile __CLC4SEL0bits_t CLC4SEL0bits;

__at(0x0E31) __sfr CLC4SEL1;
__at(0x0E31) volatile __CLC4SEL1bits_t CLC4SEL1bits;

__at(0x0E32) __sfr CLC4SEL2;
__at(0x0E32) volatile __CLC4SEL2bits_t CLC4SEL2bits;

__at(0x0E33) __sfr CLC4SEL3;
__at(0x0E33) volatile __CLC4SEL3bits_t CLC4SEL3bits;

__at(0x0E34) __sfr CLC4GLS0;
__at(0x0E34) volatile __CLC4GLS0bits_t CLC4GLS0bits;

__at(0x0E35) __sfr CLC4GLS1;
__at(0x0E35) volatile __CLC4GLS1bits_t CLC4GLS1bits;

__at(0x0E36) __sfr CLC4GLS2;
__at(0x0E36) volatile __CLC4GLS2bits_t CLC4GLS2bits;

__at(0x0E37) __sfr CLC4GLS3;
__at(0x0E37) volatile __CLC4GLS3bits_t CLC4GLS3bits;

__at(0x0E8F) __sfr PPSLOCK;
__at(0x0E8F) volatile __PPSLOCKbits_t PPSLOCKbits;

__at(0x0E90) __sfr INTPPS;
__at(0x0E90) volatile __INTPPSbits_t INTPPSbits;

__at(0x0E91) __sfr T0CKIPPS;
__at(0x0E91) volatile __T0CKIPPSbits_t T0CKIPPSbits;

__at(0x0E92) __sfr T1CKIPPS;
__at(0x0E92) volatile __T1CKIPPSbits_t T1CKIPPSbits;

__at(0x0E93) __sfr T1GPPS;
__at(0x0E93) volatile __T1GPPSbits_t T1GPPSbits;

__at(0x0E94) __sfr T3CKIPPS;
__at(0x0E94) volatile __T3CKIPPSbits_t T3CKIPPSbits;

__at(0x0E95) __sfr T3GPPS;
__at(0x0E95) volatile __T3GPPSbits_t T3GPPSbits;

__at(0x0E96) __sfr T5CKIPPS;
__at(0x0E96) volatile __T5CKIPPSbits_t T5CKIPPSbits;

__at(0x0E97) __sfr T5GPPS;
__at(0x0E97) volatile __T5GPPSbits_t T5GPPSbits;

__at(0x0E9C) __sfr T2AINPPS;
__at(0x0E9C) volatile __T2AINPPSbits_t T2AINPPSbits;

__at(0x0E9D) __sfr T4AINPPS;
__at(0x0E9D) volatile __T4AINPPSbits_t T4AINPPSbits;

__at(0x0E9E) __sfr T6AINPPS;
__at(0x0E9E) volatile __T6AINPPSbits_t T6AINPPSbits;

__at(0x0EA1) __sfr CCP1PPS;
__at(0x0EA1) volatile __CCP1PPSbits_t CCP1PPSbits;

__at(0x0EA2) __sfr CCP2PPS;
__at(0x0EA2) volatile __CCP2PPSbits_t CCP2PPSbits;

__at(0x0EA3) __sfr CCP3PPS;
__at(0x0EA3) volatile __CCP3PPSbits_t CCP3PPSbits;

__at(0x0EA4) __sfr CCP4PPS;
__at(0x0EA4) volatile __CCP4PPSbits_t CCP4PPSbits;

__at(0x0EA5) __sfr CCP5PPS;
__at(0x0EA5) volatile __CCP5PPSbits_t CCP5PPSbits;

__at(0x0EA9) __sfr SMT1WINPPS;
__at(0x0EA9) volatile __SMT1WINPPSbits_t SMT1WINPPSbits;

__at(0x0EAA) __sfr SMT1SIGPPS;
__at(0x0EAA) volatile __SMT1SIGPPSbits_t SMT1SIGPPSbits;

__at(0x0EAB) __sfr SMT2WINPPS;
__at(0x0EAB) volatile __SMT2WINPPSbits_t SMT2WINPPSbits;

__at(0x0EAC) __sfr SMT2SIGPPS;
__at(0x0EAC) volatile __SMT2SIGPPSbits_t SMT2SIGPPSbits;

__at(0x0EB1) __sfr CWG1PPS;
__at(0x0EB1) volatile __CWG1PPSbits_t CWG1PPSbits;

__at(0x0EB2) __sfr CWG2PPS;
__at(0x0EB2) volatile __CWG2PPSbits_t CWG2PPSbits;

__at(0x0EB3) __sfr CWG3PPS;
__at(0x0EB3) volatile __CWG3PPSbits_t CWG3PPSbits;

__at(0x0EB8) __sfr MDCARLPPS;
__at(0x0EB8) volatile __MDCARLPPSbits_t MDCARLPPSbits;

__at(0x0EB9) __sfr MDCARHPPS;
__at(0x0EB9) volatile __MDCARHPPSbits_t MDCARHPPSbits;

__at(0x0EBA) __sfr MDSRCPPS;
__at(0x0EBA) volatile __MDSRCPPSbits_t MDSRCPPSbits;

__at(0x0EBB) __sfr CLCIN0PPS;
__at(0x0EBB) volatile __CLCIN0PPSbits_t CLCIN0PPSbits;

__at(0x0EBC) __sfr CLCIN1PPS;
__at(0x0EBC) volatile __CLCIN1PPSbits_t CLCIN1PPSbits;

__at(0x0EBD) __sfr CLCIN2PPS;
__at(0x0EBD) volatile __CLCIN2PPSbits_t CLCIN2PPSbits;

__at(0x0EBE) __sfr CLCIN3PPS;
__at(0x0EBE) volatile __CLCIN3PPSbits_t CLCIN3PPSbits;

__at(0x0EC3) __sfr ADCACTPPS;
__at(0x0EC3) volatile __ADCACTPPSbits_t ADCACTPPSbits;

__at(0x0EC5) __sfr SSP1CLKPPS;
__at(0x0EC5) volatile __SSP1CLKPPSbits_t SSP1CLKPPSbits;

__at(0x0EC6) __sfr SSP1DATPPS;
__at(0x0EC6) volatile __SSP1DATPPSbits_t SSP1DATPPSbits;

__at(0x0EC7) __sfr SSP1SSPPS;
__at(0x0EC7) volatile __SSP1SSPPSbits_t SSP1SSPPSbits;

__at(0x0EC8) __sfr SSP2CLKPPS;
__at(0x0EC8) volatile __SSP2CLKPPSbits_t SSP2CLKPPSbits;

__at(0x0EC9) __sfr SSP2DATPPS;
__at(0x0EC9) volatile __SSP2DATPPSbits_t SSP2DATPPSbits;

__at(0x0ECA) __sfr SSP2SSPPS;
__at(0x0ECA) volatile __SSP2SSPPSbits_t SSP2SSPPSbits;

__at(0x0ECB) __sfr RXPPS;
__at(0x0ECB) volatile __RXPPSbits_t RXPPSbits;

__at(0x0ECC) __sfr TXPPS;
__at(0x0ECC) volatile __TXPPSbits_t TXPPSbits;

__at(0x0F10) __sfr RA0PPS;
__at(0x0F10) volatile __RA0PPSbits_t RA0PPSbits;

__at(0x0F11) __sfr RA1PPS;
__at(0x0F11) volatile __RA1PPSbits_t RA1PPSbits;

__at(0x0F12) __sfr RA2PPS;
__at(0x0F12) volatile __RA2PPSbits_t RA2PPSbits;

__at(0x0F13) __sfr RA3PPS;
__at(0x0F13) volatile __RA3PPSbits_t RA3PPSbits;

__at(0x0F14) __sfr RA4PPS;
__at(0x0F14) volatile __RA4PPSbits_t RA4PPSbits;

__at(0x0F15) __sfr RA5PPS;
__at(0x0F15) volatile __RA5PPSbits_t RA5PPSbits;

__at(0x0F16) __sfr RA6PPS;
__at(0x0F16) volatile __RA6PPSbits_t RA6PPSbits;

__at(0x0F17) __sfr RA7PPS;
__at(0x0F17) volatile __RA7PPSbits_t RA7PPSbits;

__at(0x0F18) __sfr RB0PPS;
__at(0x0F18) volatile __RB0PPSbits_t RB0PPSbits;

__at(0x0F19) __sfr RB1PPS;
__at(0x0F19) volatile __RB1PPSbits_t RB1PPSbits;

__at(0x0F1A) __sfr RB2PPS;
__at(0x0F1A) volatile __RB2PPSbits_t RB2PPSbits;

__at(0x0F1B) __sfr RB3PPS;
__at(0x0F1B) volatile __RB3PPSbits_t RB3PPSbits;

__at(0x0F1C) __sfr RB4PPS;
__at(0x0F1C) volatile __RB4PPSbits_t RB4PPSbits;

__at(0x0F1D) __sfr RB5PPS;
__at(0x0F1D) volatile __RB5PPSbits_t RB5PPSbits;

__at(0x0F1E) __sfr RB6PPS;
__at(0x0F1E) volatile __RB6PPSbits_t RB6PPSbits;

__at(0x0F1F) __sfr RB7PPS;
__at(0x0F1F) volatile __RB7PPSbits_t RB7PPSbits;

__at(0x0F20) __sfr RC0PPS;
__at(0x0F20) volatile __RC0PPSbits_t RC0PPSbits;

__at(0x0F21) __sfr RC1PPS;
__at(0x0F21) volatile __RC1PPSbits_t RC1PPSbits;

__at(0x0F22) __sfr RC2PPS;
__at(0x0F22) volatile __RC2PPSbits_t RC2PPSbits;

__at(0x0F23) __sfr RC3PPS;
__at(0x0F23) volatile __RC3PPSbits_t RC3PPSbits;

__at(0x0F24) __sfr RC4PPS;
__at(0x0F24) volatile __RC4PPSbits_t RC4PPSbits;

__at(0x0F25) __sfr RC5PPS;
__at(0x0F25) volatile __RC5PPSbits_t RC5PPSbits;

__at(0x0F26) __sfr RC6PPS;
__at(0x0F26) volatile __RC6PPSbits_t RC6PPSbits;

__at(0x0F27) __sfr RC7PPS;
__at(0x0F27) volatile __RC7PPSbits_t RC7PPSbits;

__at(0x0F38) __sfr ANSELA;
__at(0x0F38) volatile __ANSELAbits_t ANSELAbits;

__at(0x0F39) __sfr WPUA;
__at(0x0F39) volatile __WPUAbits_t WPUAbits;

__at(0x0F3A) __sfr ODCONA;
__at(0x0F3A) volatile __ODCONAbits_t ODCONAbits;

__at(0x0F3B) __sfr SLRCONA;
__at(0x0F3B) volatile __SLRCONAbits_t SLRCONAbits;

__at(0x0F3C) __sfr INLVLA;
__at(0x0F3C) volatile __INLVLAbits_t INLVLAbits;

__at(0x0F3D) __sfr IOCAP;
__at(0x0F3D) volatile __IOCAPbits_t IOCAPbits;

__at(0x0F3E) __sfr IOCAN;
__at(0x0F3E) volatile __IOCANbits_t IOCANbits;

__at(0x0F3F) __sfr IOCAF;
__at(0x0F3F) volatile __IOCAFbits_t IOCAFbits;

__at(0x0F40) __sfr CCDNA;
__at(0x0F40) volatile __CCDNAbits_t CCDNAbits;

__at(0x0F41) __sfr CCDPA;
__at(0x0F41) volatile __CCDPAbits_t CCDPAbits;

__at(0x0F43) __sfr ANSELB;
__at(0x0F43) volatile __ANSELBbits_t ANSELBbits;

__at(0x0F44) __sfr WPUB;
__at(0x0F44) volatile __WPUBbits_t WPUBbits;

__at(0x0F45) __sfr ODCONB;
__at(0x0F45) volatile __ODCONBbits_t ODCONBbits;

__at(0x0F46) __sfr SLRCONB;
__at(0x0F46) volatile __SLRCONBbits_t SLRCONBbits;

__at(0x0F47) __sfr INLVLB;
__at(0x0F47) volatile __INLVLBbits_t INLVLBbits;

__at(0x0F48) __sfr IOCBP;
__at(0x0F48) volatile __IOCBPbits_t IOCBPbits;

__at(0x0F49) __sfr IOCBN;
__at(0x0F49) volatile __IOCBNbits_t IOCBNbits;

__at(0x0F4A) __sfr IOCBF;
__at(0x0F4A) volatile __IOCBFbits_t IOCBFbits;

__at(0x0F4B) __sfr CCDNB;
__at(0x0F4B) volatile __CCDNBbits_t CCDNBbits;

__at(0x0F4C) __sfr CCDPB;
__at(0x0F4C) volatile __CCDPBbits_t CCDPBbits;

__at(0x0F4E) __sfr ANSELC;
__at(0x0F4E) volatile __ANSELCbits_t ANSELCbits;

__at(0x0F4F) __sfr WPUC;
__at(0x0F4F) volatile __WPUCbits_t WPUCbits;

__at(0x0F50) __sfr ODCONC;
__at(0x0F50) volatile __ODCONCbits_t ODCONCbits;

__at(0x0F51) __sfr SLRCONC;
__at(0x0F51) volatile __SLRCONCbits_t SLRCONCbits;

__at(0x0F52) __sfr INLVLC;
__at(0x0F52) volatile __INLVLCbits_t INLVLCbits;

__at(0x0F53) __sfr IOCCP;
__at(0x0F53) volatile __IOCCPbits_t IOCCPbits;

__at(0x0F54) __sfr IOCCN;
__at(0x0F54) volatile __IOCCNbits_t IOCCNbits;

__at(0x0F55) __sfr IOCCF;
__at(0x0F55) volatile __IOCCFbits_t IOCCFbits;

__at(0x0F56) __sfr CCDNC;
__at(0x0F56) volatile __CCDNCbits_t CCDNCbits;

__at(0x0F57) __sfr CCDPC;
__at(0x0F57) volatile __CCDPCbits_t CCDPCbits;

__at(0x0F65) __sfr WPUE;
__at(0x0F65) volatile __WPUEbits_t WPUEbits;

__at(0x0F68) __sfr INLVLE;
__at(0x0F68) volatile __INLVLEbits_t INLVLEbits;

__at(0x0F69) __sfr IOCEP;
__at(0x0F69) volatile __IOCEPbits_t IOCEPbits;

__at(0x0F6A) __sfr IOCEN;
__at(0x0F6A) volatile __IOCENbits_t IOCENbits;

__at(0x0F6B) __sfr IOCEF;
__at(0x0F6B) volatile __IOCEFbits_t IOCEFbits;

__at(0x0FE4) __sfr STATUS_SHAD;
__at(0x0FE4) volatile __STATUS_SHADbits_t STATUS_SHADbits;

__at(0x0FE5) __sfr WREG_SHAD;

__at(0x0FE6) __sfr BSR_SHAD;

__at(0x0FE7) __sfr PCLATH_SHAD;

__at(0x0FE8) __sfr FSR0L_SHAD;

__at(0x0FE9) __sfr FSR0H_SHAD;

__at(0x0FEA) __sfr FSR1L_SHAD;

__at(0x0FEB) __sfr FSR1H_SHAD;

__at(0x0FED) __sfr STKPTR;

__at(0x0FEE) __sfr TOSL;

__at(0x0FEF) __sfr TOSH;
