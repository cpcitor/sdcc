/*
 * This definitions of the PIC10F320 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2012.
 *
 * This file is generated automatically by the cinc2h.pl, 2012-09-28 08:19:44 UTC.
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

#include <pic10f320.h>

//==============================================================================

__at(0x0000) __sfr INDF;

__at(0x0001) __sfr TMR0;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR;

__at(0x0005) __sfr PORTA;
__at(0x0005) volatile __PORTAbits_t PORTAbits;

__at(0x0006) __sfr TRISA;
__at(0x0006) volatile __TRISAbits_t TRISAbits;

__at(0x0007) __sfr LATA;
__at(0x0007) volatile __LATAbits_t LATAbits;

__at(0x0008) __sfr ANSELA;
__at(0x0008) volatile __ANSELAbits_t ANSELAbits;

__at(0x0009) __sfr WPUA;
__at(0x0009) volatile __WPUAbits_t WPUAbits;

__at(0x000A) __sfr PCLATH;
__at(0x000A) volatile __PCLATHbits_t PCLATHbits;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PIR1;
__at(0x000C) volatile __PIR1bits_t PIR1bits;

__at(0x000D) __sfr PIE1;
__at(0x000D) volatile __PIE1bits_t PIE1bits;

__at(0x000E) __sfr OPTION_REG;
__at(0x000E) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x000F) __sfr PCON;
__at(0x000F) volatile __PCONbits_t PCONbits;

__at(0x0010) __sfr OSCCON;
__at(0x0010) volatile __OSCCONbits_t OSCCONbits;

__at(0x0011) __sfr TMR2;

__at(0x0012) __sfr PR2;

__at(0x0013) __sfr T2CON;
__at(0x0013) volatile __T2CONbits_t T2CONbits;

__at(0x0014) __sfr PWM1DCL;
__at(0x0014) volatile __PWM1DCLbits_t PWM1DCLbits;

__at(0x0015) __sfr PWM1DCH;
__at(0x0015) volatile __PWM1DCHbits_t PWM1DCHbits;

__at(0x0016) __sfr PWM1CON;
__at(0x0016) volatile __PWM1CONbits_t PWM1CONbits;

__at(0x0016) __sfr PWM1CON0;
__at(0x0016) volatile __PWM1CON0bits_t PWM1CON0bits;

__at(0x0017) __sfr PWM2DCL;
__at(0x0017) volatile __PWM2DCLbits_t PWM2DCLbits;

__at(0x0018) __sfr PWM2DCH;
__at(0x0018) volatile __PWM2DCHbits_t PWM2DCHbits;

__at(0x0019) __sfr PWM2CON;
__at(0x0019) volatile __PWM2CONbits_t PWM2CONbits;

__at(0x0019) __sfr PWM2CON0;
__at(0x0019) volatile __PWM2CON0bits_t PWM2CON0bits;

__at(0x001A) __sfr IOCAP;
__at(0x001A) volatile __IOCAPbits_t IOCAPbits;

__at(0x001B) __sfr IOCAN;
__at(0x001B) volatile __IOCANbits_t IOCANbits;

__at(0x001C) __sfr IOCAF;
__at(0x001C) volatile __IOCAFbits_t IOCAFbits;

__at(0x001D) __sfr FVRCON;
__at(0x001D) volatile __FVRCONbits_t FVRCONbits;

__at(0x001E) __sfr ADRES;

__at(0x001F) __sfr ADCON;
__at(0x001F) volatile __ADCONbits_t ADCONbits;

__at(0x0020) __sfr PMADR;

__at(0x0020) __sfr PMADRL;

__at(0x0021) __sfr PMADRH;
__at(0x0021) volatile __PMADRHbits_t PMADRHbits;

__at(0x0022) __sfr PMDAT;

__at(0x0022) __sfr PMDATL;

__at(0x0023) __sfr PMDATH;

__at(0x0024) __sfr PMCON1;
__at(0x0024) volatile __PMCON1bits_t PMCON1bits;

__at(0x0025) __sfr PMCON2;

__at(0x0026) __sfr CLKRCON;
__at(0x0026) volatile __CLKRCONbits_t CLKRCONbits;

__at(0x0027) __sfr NCO1ACC;

__at(0x0027) __sfr NCO1ACCL;
__at(0x0027) volatile __NCO1ACCLbits_t NCO1ACCLbits;

__at(0x0028) __sfr NCO1ACCH;
__at(0x0028) volatile __NCO1ACCHbits_t NCO1ACCHbits;

__at(0x0029) __sfr NCO1ACCU;
__at(0x0029) volatile __NCO1ACCUbits_t NCO1ACCUbits;

__at(0x002A) __sfr NCO1INC;

__at(0x002A) __sfr NCO1INCL;
__at(0x002A) volatile __NCO1INCLbits_t NCO1INCLbits;

__at(0x002B) __sfr NCO1INCH;
__at(0x002B) volatile __NCO1INCHbits_t NCO1INCHbits;

__at(0x002C) __sfr NCO1INCU;

__at(0x002D) __sfr NCO1CON;
__at(0x002D) volatile __NCO1CONbits_t NCO1CONbits;

__at(0x002E) __sfr NCO1CLK;
__at(0x002E) volatile __NCO1CLKbits_t NCO1CLKbits;

__at(0x0030) __sfr WDTCON;
__at(0x0030) volatile __WDTCONbits_t WDTCONbits;

__at(0x0031) __sfr CLC1CON;
__at(0x0031) volatile __CLC1CONbits_t CLC1CONbits;

__at(0x0032) __sfr CLC1SEL0;
__at(0x0032) volatile __CLC1SEL0bits_t CLC1SEL0bits;

__at(0x0033) __sfr CLC1SEL1;
__at(0x0033) volatile __CLC1SEL1bits_t CLC1SEL1bits;

__at(0x0034) __sfr CLC1POL;
__at(0x0034) volatile __CLC1POLbits_t CLC1POLbits;

__at(0x0035) __sfr CLC1GLS0;
__at(0x0035) volatile __CLC1GLS0bits_t CLC1GLS0bits;

__at(0x0036) __sfr CLC1GLS1;
__at(0x0036) volatile __CLC1GLS1bits_t CLC1GLS1bits;

__at(0x0037) __sfr CLC1GLS2;
__at(0x0037) volatile __CLC1GLS2bits_t CLC1GLS2bits;

__at(0x0038) __sfr CLC1GLS3;
__at(0x0038) volatile __CLC1GLS3bits_t CLC1GLS3bits;

__at(0x0039) __sfr CWG1CON0;
__at(0x0039) volatile __CWG1CON0bits_t CWG1CON0bits;

__at(0x003A) __sfr CWG1CON1;
__at(0x003A) volatile __CWG1CON1bits_t CWG1CON1bits;

__at(0x003B) __sfr CWG1CON2;
__at(0x003B) volatile __CWG1CON2bits_t CWG1CON2bits;

__at(0x003C) __sfr CWG1DBR;
__at(0x003C) volatile __CWG1DBRbits_t CWG1DBRbits;

__at(0x003D) __sfr CWG1DBF;
__at(0x003D) volatile __CWG1DBFbits_t CWG1DBFbits;

__at(0x003E) __sfr VREGCON;
__at(0x003E) volatile __VREGCONbits_t VREGCONbits;

__at(0x003F) __sfr BORCON;
__at(0x003F) volatile __BORCONbits_t BORCONbits;
