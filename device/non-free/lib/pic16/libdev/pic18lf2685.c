/*
 * This definitions of the PIC18LF2685 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2016.
 *
 * This file is generated automatically by the cinc2h.pl, 2016-01-17 15:36:33 UTC.
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

#include <pic18lf2685.h>

//==============================================================================

__at(0x0D60) __sfr RXF6SIDH;
__at(0x0D60) volatile __RXF6SIDHbits_t RXF6SIDHbits;

__at(0x0D61) __sfr RXF6SIDL;
__at(0x0D61) volatile __RXF6SIDLbits_t RXF6SIDLbits;

__at(0x0D62) __sfr RXF6EIDH;
__at(0x0D62) volatile __RXF6EIDHbits_t RXF6EIDHbits;

__at(0x0D63) __sfr RXF6EIDL;
__at(0x0D63) volatile __RXF6EIDLbits_t RXF6EIDLbits;

__at(0x0D64) __sfr RXF7SIDH;
__at(0x0D64) volatile __RXF7SIDHbits_t RXF7SIDHbits;

__at(0x0D65) __sfr RXF7SIDL;
__at(0x0D65) volatile __RXF7SIDLbits_t RXF7SIDLbits;

__at(0x0D66) __sfr RXF7EIDH;
__at(0x0D66) volatile __RXF7EIDHbits_t RXF7EIDHbits;

__at(0x0D67) __sfr RXF7EIDL;
__at(0x0D67) volatile __RXF7EIDLbits_t RXF7EIDLbits;

__at(0x0D68) __sfr RXF8SIDH;
__at(0x0D68) volatile __RXF8SIDHbits_t RXF8SIDHbits;

__at(0x0D69) __sfr RXF8SIDL;
__at(0x0D69) volatile __RXF8SIDLbits_t RXF8SIDLbits;

__at(0x0D6A) __sfr RXF8EIDH;
__at(0x0D6A) volatile __RXF8EIDHbits_t RXF8EIDHbits;

__at(0x0D6B) __sfr RXF8EIDL;
__at(0x0D6B) volatile __RXF8EIDLbits_t RXF8EIDLbits;

__at(0x0D70) __sfr RXF9SIDH;
__at(0x0D70) volatile __RXF9SIDHbits_t RXF9SIDHbits;

__at(0x0D71) __sfr RXF9SIDL;
__at(0x0D71) volatile __RXF9SIDLbits_t RXF9SIDLbits;

__at(0x0D72) __sfr RXF9EIDH;
__at(0x0D72) volatile __RXF9EIDHbits_t RXF9EIDHbits;

__at(0x0D73) __sfr RXF9EIDL;
__at(0x0D73) volatile __RXF9EIDLbits_t RXF9EIDLbits;

__at(0x0D74) __sfr RXF10SIDH;
__at(0x0D74) volatile __RXF10SIDHbits_t RXF10SIDHbits;

__at(0x0D75) __sfr RXF10SIDL;
__at(0x0D75) volatile __RXF10SIDLbits_t RXF10SIDLbits;

__at(0x0D76) __sfr RXF10EIDH;
__at(0x0D76) volatile __RXF10EIDHbits_t RXF10EIDHbits;

__at(0x0D77) __sfr RXF10EIDL;
__at(0x0D77) volatile __RXF10EIDLbits_t RXF10EIDLbits;

__at(0x0D78) __sfr RXF11SIDH;
__at(0x0D78) volatile __RXF11SIDHbits_t RXF11SIDHbits;

__at(0x0D79) __sfr RXF11SIDL;
__at(0x0D79) volatile __RXF11SIDLbits_t RXF11SIDLbits;

__at(0x0D7A) __sfr RXF11EIDH;
__at(0x0D7A) volatile __RXF11EIDHbits_t RXF11EIDHbits;

__at(0x0D7B) __sfr RXF11EIDL;
__at(0x0D7B) volatile __RXF11EIDLbits_t RXF11EIDLbits;

__at(0x0D80) __sfr RXF12SIDH;
__at(0x0D80) volatile __RXF12SIDHbits_t RXF12SIDHbits;

__at(0x0D81) __sfr RXF12SIDL;
__at(0x0D81) volatile __RXF12SIDLbits_t RXF12SIDLbits;

__at(0x0D82) __sfr RXF12EIDH;
__at(0x0D82) volatile __RXF12EIDHbits_t RXF12EIDHbits;

__at(0x0D83) __sfr RXF12EIDL;
__at(0x0D83) volatile __RXF12EIDLbits_t RXF12EIDLbits;

__at(0x0D84) __sfr RXF13SIDH;
__at(0x0D84) volatile __RXF13SIDHbits_t RXF13SIDHbits;

__at(0x0D85) __sfr RXF13SIDL;
__at(0x0D85) volatile __RXF13SIDLbits_t RXF13SIDLbits;

__at(0x0D86) __sfr RXF13EIDH;
__at(0x0D86) volatile __RXF13EIDHbits_t RXF13EIDHbits;

__at(0x0D87) __sfr RXF13EIDL;
__at(0x0D87) volatile __RXF13EIDLbits_t RXF13EIDLbits;

__at(0x0D88) __sfr RXF14SIDH;
__at(0x0D88) volatile __RXF14SIDHbits_t RXF14SIDHbits;

__at(0x0D89) __sfr RXF14SIDL;
__at(0x0D89) volatile __RXF14SIDLbits_t RXF14SIDLbits;

__at(0x0D8A) __sfr RXF14EIDH;
__at(0x0D8A) volatile __RXF14EIDHbits_t RXF14EIDHbits;

__at(0x0D8B) __sfr RXF14EIDL;
__at(0x0D8B) volatile __RXF14EIDLbits_t RXF14EIDLbits;

__at(0x0D90) __sfr RXF15SIDH;
__at(0x0D90) volatile __RXF15SIDHbits_t RXF15SIDHbits;

__at(0x0D91) __sfr RXF15SIDL;
__at(0x0D91) volatile __RXF15SIDLbits_t RXF15SIDLbits;

__at(0x0D92) __sfr RXF15EIDH;
__at(0x0D92) volatile __RXF15EIDHbits_t RXF15EIDHbits;

__at(0x0D93) __sfr RXF15EIDL;
__at(0x0D93) volatile __RXF15EIDLbits_t RXF15EIDLbits;

__at(0x0DD4) __sfr RXFCON0;
__at(0x0DD4) volatile __RXFCON0bits_t RXFCON0bits;

__at(0x0DD5) __sfr RXFCON1;
__at(0x0DD5) volatile __RXFCON1bits_t RXFCON1bits;

__at(0x0DD8) __sfr SDFLC;
__at(0x0DD8) volatile __SDFLCbits_t SDFLCbits;

__at(0x0DE0) __sfr RXFBCON0;
__at(0x0DE0) volatile __RXFBCON0bits_t RXFBCON0bits;

__at(0x0DE1) __sfr RXFBCON1;
__at(0x0DE1) volatile __RXFBCON1bits_t RXFBCON1bits;

__at(0x0DE2) __sfr RXFBCON2;
__at(0x0DE2) volatile __RXFBCON2bits_t RXFBCON2bits;

__at(0x0DE3) __sfr RXFBCON3;
__at(0x0DE3) volatile __RXFBCON3bits_t RXFBCON3bits;

__at(0x0DE4) __sfr RXFBCON4;
__at(0x0DE4) volatile __RXFBCON4bits_t RXFBCON4bits;

__at(0x0DE5) __sfr RXFBCON5;
__at(0x0DE5) volatile __RXFBCON5bits_t RXFBCON5bits;

__at(0x0DE6) __sfr RXFBCON6;
__at(0x0DE6) volatile __RXFBCON6bits_t RXFBCON6bits;

__at(0x0DE7) __sfr RXFBCON7;
__at(0x0DE7) volatile __RXFBCON7bits_t RXFBCON7bits;

__at(0x0DF0) __sfr MSEL0;
__at(0x0DF0) volatile __MSEL0bits_t MSEL0bits;

__at(0x0DF1) __sfr MSEL1;
__at(0x0DF1) volatile __MSEL1bits_t MSEL1bits;

__at(0x0DF2) __sfr MSEL2;
__at(0x0DF2) volatile __MSEL2bits_t MSEL2bits;

__at(0x0DF3) __sfr MSEL3;
__at(0x0DF3) volatile __MSEL3bits_t MSEL3bits;

__at(0x0DF8) __sfr BSEL0;
__at(0x0DF8) volatile __BSEL0bits_t BSEL0bits;

__at(0x0DFA) __sfr BIE0;
__at(0x0DFA) volatile __BIE0bits_t BIE0bits;

__at(0x0DFC) __sfr TXBIE;
__at(0x0DFC) volatile __TXBIEbits_t TXBIEbits;

__at(0x0E20) __sfr B0CON;
__at(0x0E20) volatile __B0CONbits_t B0CONbits;

__at(0x0E21) __sfr B0SIDH;
__at(0x0E21) volatile __B0SIDHbits_t B0SIDHbits;

__at(0x0E22) __sfr B0SIDL;
__at(0x0E22) volatile __B0SIDLbits_t B0SIDLbits;

__at(0x0E23) __sfr B0EIDH;
__at(0x0E23) volatile __B0EIDHbits_t B0EIDHbits;

__at(0x0E24) __sfr B0EIDL;
__at(0x0E24) volatile __B0EIDLbits_t B0EIDLbits;

__at(0x0E25) __sfr B0DLC;
__at(0x0E25) volatile __B0DLCbits_t B0DLCbits;

__at(0x0E26) __sfr B0D0;
__at(0x0E26) volatile __B0D0bits_t B0D0bits;

__at(0x0E27) __sfr B0D1;
__at(0x0E27) volatile __B0D1bits_t B0D1bits;

__at(0x0E28) __sfr B0D2;
__at(0x0E28) volatile __B0D2bits_t B0D2bits;

__at(0x0E29) __sfr B0D3;
__at(0x0E29) volatile __B0D3bits_t B0D3bits;

__at(0x0E2A) __sfr B0D4;
__at(0x0E2A) volatile __B0D4bits_t B0D4bits;

__at(0x0E2B) __sfr B0D5;
__at(0x0E2B) volatile __B0D5bits_t B0D5bits;

__at(0x0E2C) __sfr B0D6;
__at(0x0E2C) volatile __B0D6bits_t B0D6bits;

__at(0x0E2D) __sfr B0D7;
__at(0x0E2D) volatile __B0D7bits_t B0D7bits;

__at(0x0E2E) __sfr CANSTAT_RO9;
__at(0x0E2E) volatile __CANSTAT_RO9bits_t CANSTAT_RO9bits;

__at(0x0E2F) __sfr CANCON_RO9;
__at(0x0E2F) volatile __CANCON_RO9bits_t CANCON_RO9bits;

__at(0x0E30) __sfr B1CON;
__at(0x0E30) volatile __B1CONbits_t B1CONbits;

__at(0x0E31) __sfr B1SIDH;
__at(0x0E31) volatile __B1SIDHbits_t B1SIDHbits;

__at(0x0E32) __sfr B1SIDL;
__at(0x0E32) volatile __B1SIDLbits_t B1SIDLbits;

__at(0x0E33) __sfr B1EIDH;
__at(0x0E33) volatile __B1EIDHbits_t B1EIDHbits;

__at(0x0E34) __sfr B1EIDL;
__at(0x0E34) volatile __B1EIDLbits_t B1EIDLbits;

__at(0x0E35) __sfr B1DLC;
__at(0x0E35) volatile __B1DLCbits_t B1DLCbits;

__at(0x0E36) __sfr B1D0;
__at(0x0E36) volatile __B1D0bits_t B1D0bits;

__at(0x0E37) __sfr B1D1;
__at(0x0E37) volatile __B1D1bits_t B1D1bits;

__at(0x0E38) __sfr B1D2;
__at(0x0E38) volatile __B1D2bits_t B1D2bits;

__at(0x0E39) __sfr B1D3;
__at(0x0E39) volatile __B1D3bits_t B1D3bits;

__at(0x0E3A) __sfr B1D4;
__at(0x0E3A) volatile __B1D4bits_t B1D4bits;

__at(0x0E3B) __sfr B1D5;
__at(0x0E3B) volatile __B1D5bits_t B1D5bits;

__at(0x0E3C) __sfr B1D6;
__at(0x0E3C) volatile __B1D6bits_t B1D6bits;

__at(0x0E3D) __sfr B1D7;
__at(0x0E3D) volatile __B1D7bits_t B1D7bits;

__at(0x0E3E) __sfr CANSTAT_RO8;
__at(0x0E3E) volatile __CANSTAT_RO8bits_t CANSTAT_RO8bits;

__at(0x0E3F) __sfr CANCON_RO8;
__at(0x0E3F) volatile __CANCON_RO8bits_t CANCON_RO8bits;

__at(0x0E40) __sfr B2CON;
__at(0x0E40) volatile __B2CONbits_t B2CONbits;

__at(0x0E41) __sfr B2SIDH;
__at(0x0E41) volatile __B2SIDHbits_t B2SIDHbits;

__at(0x0E42) __sfr B2SIDL;
__at(0x0E42) volatile __B2SIDLbits_t B2SIDLbits;

__at(0x0E43) __sfr B2EIDH;
__at(0x0E43) volatile __B2EIDHbits_t B2EIDHbits;

__at(0x0E44) __sfr B2EIDL;
__at(0x0E44) volatile __B2EIDLbits_t B2EIDLbits;

__at(0x0E45) __sfr B2DLC;
__at(0x0E45) volatile __B2DLCbits_t B2DLCbits;

__at(0x0E46) __sfr B2D0;
__at(0x0E46) volatile __B2D0bits_t B2D0bits;

__at(0x0E47) __sfr B2D1;
__at(0x0E47) volatile __B2D1bits_t B2D1bits;

__at(0x0E48) __sfr B2D2;
__at(0x0E48) volatile __B2D2bits_t B2D2bits;

__at(0x0E49) __sfr B2D3;
__at(0x0E49) volatile __B2D3bits_t B2D3bits;

__at(0x0E4A) __sfr B2D4;
__at(0x0E4A) volatile __B2D4bits_t B2D4bits;

__at(0x0E4B) __sfr B2D5;
__at(0x0E4B) volatile __B2D5bits_t B2D5bits;

__at(0x0E4C) __sfr B2D6;
__at(0x0E4C) volatile __B2D6bits_t B2D6bits;

__at(0x0E4D) __sfr B2D7;
__at(0x0E4D) volatile __B2D7bits_t B2D7bits;

__at(0x0E4E) __sfr CANSTAT_RO7;
__at(0x0E4E) volatile __CANSTAT_RO7bits_t CANSTAT_RO7bits;

__at(0x0E4F) __sfr CANCON_RO7;
__at(0x0E4F) volatile __CANCON_RO7bits_t CANCON_RO7bits;

__at(0x0E50) __sfr B3CON;
__at(0x0E50) volatile __B3CONbits_t B3CONbits;

__at(0x0E51) __sfr B3SIDH;
__at(0x0E51) volatile __B3SIDHbits_t B3SIDHbits;

__at(0x0E52) __sfr B3SIDL;
__at(0x0E52) volatile __B3SIDLbits_t B3SIDLbits;

__at(0x0E53) __sfr B3EIDH;
__at(0x0E53) volatile __B3EIDHbits_t B3EIDHbits;

__at(0x0E54) __sfr B3EIDL;
__at(0x0E54) volatile __B3EIDLbits_t B3EIDLbits;

__at(0x0E55) __sfr B3DLC;
__at(0x0E55) volatile __B3DLCbits_t B3DLCbits;

__at(0x0E56) __sfr B3D0;
__at(0x0E56) volatile __B3D0bits_t B3D0bits;

__at(0x0E57) __sfr B3D1;
__at(0x0E57) volatile __B3D1bits_t B3D1bits;

__at(0x0E58) __sfr B3D2;
__at(0x0E58) volatile __B3D2bits_t B3D2bits;

__at(0x0E59) __sfr B3D3;
__at(0x0E59) volatile __B3D3bits_t B3D3bits;

__at(0x0E5A) __sfr B3D4;
__at(0x0E5A) volatile __B3D4bits_t B3D4bits;

__at(0x0E5B) __sfr B3D5;
__at(0x0E5B) volatile __B3D5bits_t B3D5bits;

__at(0x0E5C) __sfr B3D6;
__at(0x0E5C) volatile __B3D6bits_t B3D6bits;

__at(0x0E5D) __sfr B3D7;
__at(0x0E5D) volatile __B3D7bits_t B3D7bits;

__at(0x0E5E) __sfr CANSTAT_RO6;
__at(0x0E5E) volatile __CANSTAT_RO6bits_t CANSTAT_RO6bits;

__at(0x0E5F) __sfr CANCON_RO6;
__at(0x0E5F) volatile __CANCON_RO6bits_t CANCON_RO6bits;

__at(0x0E60) __sfr B4CON;
__at(0x0E60) volatile __B4CONbits_t B4CONbits;

__at(0x0E61) __sfr B4SIDH;
__at(0x0E61) volatile __B4SIDHbits_t B4SIDHbits;

__at(0x0E62) __sfr B4SIDL;
__at(0x0E62) volatile __B4SIDLbits_t B4SIDLbits;

__at(0x0E63) __sfr B4EIDH;
__at(0x0E63) volatile __B4EIDHbits_t B4EIDHbits;

__at(0x0E64) __sfr B4EIDL;
__at(0x0E64) volatile __B4EIDLbits_t B4EIDLbits;

__at(0x0E65) __sfr B4DLC;
__at(0x0E65) volatile __B4DLCbits_t B4DLCbits;

__at(0x0E66) __sfr B4D0;
__at(0x0E66) volatile __B4D0bits_t B4D0bits;

__at(0x0E67) __sfr B4D1;
__at(0x0E67) volatile __B4D1bits_t B4D1bits;

__at(0x0E68) __sfr B4D2;
__at(0x0E68) volatile __B4D2bits_t B4D2bits;

__at(0x0E69) __sfr B4D3;
__at(0x0E69) volatile __B4D3bits_t B4D3bits;

__at(0x0E6A) __sfr B4D4;
__at(0x0E6A) volatile __B4D4bits_t B4D4bits;

__at(0x0E6B) __sfr B4D5;
__at(0x0E6B) volatile __B4D5bits_t B4D5bits;

__at(0x0E6C) __sfr B4D6;
__at(0x0E6C) volatile __B4D6bits_t B4D6bits;

__at(0x0E6D) __sfr B4D7;
__at(0x0E6D) volatile __B4D7bits_t B4D7bits;

__at(0x0E6E) __sfr CANSTAT_RO5;
__at(0x0E6E) volatile __CANSTAT_RO5bits_t CANSTAT_RO5bits;

__at(0x0E6F) __sfr CANCON_RO5;
__at(0x0E6F) volatile __CANCON_RO5bits_t CANCON_RO5bits;

__at(0x0E70) __sfr B5CON;
__at(0x0E70) volatile __B5CONbits_t B5CONbits;

__at(0x0E71) __sfr B5SIDH;
__at(0x0E71) volatile __B5SIDHbits_t B5SIDHbits;

__at(0x0E72) __sfr B5SIDL;
__at(0x0E72) volatile __B5SIDLbits_t B5SIDLbits;

__at(0x0E73) __sfr B5EIDH;
__at(0x0E73) volatile __B5EIDHbits_t B5EIDHbits;

__at(0x0E74) __sfr B5EIDL;
__at(0x0E74) volatile __B5EIDLbits_t B5EIDLbits;

__at(0x0E75) __sfr B5DLC;
__at(0x0E75) volatile __B5DLCbits_t B5DLCbits;

__at(0x0E76) __sfr B5D0;
__at(0x0E76) volatile __B5D0bits_t B5D0bits;

__at(0x0E77) __sfr B5D1;
__at(0x0E77) volatile __B5D1bits_t B5D1bits;

__at(0x0E78) __sfr B5D2;
__at(0x0E78) volatile __B5D2bits_t B5D2bits;

__at(0x0E79) __sfr B5D3;
__at(0x0E79) volatile __B5D3bits_t B5D3bits;

__at(0x0E7A) __sfr B5D4;
__at(0x0E7A) volatile __B5D4bits_t B5D4bits;

__at(0x0E7B) __sfr B5D5;
__at(0x0E7B) volatile __B5D5bits_t B5D5bits;

__at(0x0E7C) __sfr B5D6;
__at(0x0E7C) volatile __B5D6bits_t B5D6bits;

__at(0x0E7D) __sfr B5D7;
__at(0x0E7D) volatile __B5D7bits_t B5D7bits;

__at(0x0E7E) __sfr CANSTAT_RO4;
__at(0x0E7E) volatile __CANSTAT_RO4bits_t CANSTAT_RO4bits;

__at(0x0E7F) __sfr CANCON_RO4;
__at(0x0E7F) volatile __CANCON_RO4bits_t CANCON_RO4bits;

__at(0x0F00) __sfr RXF0SIDH;
__at(0x0F00) volatile __RXF0SIDHbits_t RXF0SIDHbits;

__at(0x0F01) __sfr RXF0SIDL;
__at(0x0F01) volatile __RXF0SIDLbits_t RXF0SIDLbits;

__at(0x0F02) __sfr RXF0EIDH;
__at(0x0F02) volatile __RXF0EIDHbits_t RXF0EIDHbits;

__at(0x0F03) __sfr RXF0EIDL;
__at(0x0F03) volatile __RXF0EIDLbits_t RXF0EIDLbits;

__at(0x0F04) __sfr RXF1SIDH;
__at(0x0F04) volatile __RXF1SIDHbits_t RXF1SIDHbits;

__at(0x0F05) __sfr RXF1SIDL;
__at(0x0F05) volatile __RXF1SIDLbits_t RXF1SIDLbits;

__at(0x0F06) __sfr RXF1EIDH;
__at(0x0F06) volatile __RXF1EIDHbits_t RXF1EIDHbits;

__at(0x0F07) __sfr RXF1EIDL;
__at(0x0F07) volatile __RXF1EIDLbits_t RXF1EIDLbits;

__at(0x0F08) __sfr RXF2SIDH;
__at(0x0F08) volatile __RXF2SIDHbits_t RXF2SIDHbits;

__at(0x0F09) __sfr RXF2SIDL;
__at(0x0F09) volatile __RXF2SIDLbits_t RXF2SIDLbits;

__at(0x0F0A) __sfr RXF2EIDH;
__at(0x0F0A) volatile __RXF2EIDHbits_t RXF2EIDHbits;

__at(0x0F0B) __sfr RXF2EIDL;
__at(0x0F0B) volatile __RXF2EIDLbits_t RXF2EIDLbits;

__at(0x0F0C) __sfr RXF3SIDH;
__at(0x0F0C) volatile __RXF3SIDHbits_t RXF3SIDHbits;

__at(0x0F0D) __sfr RXF3SIDL;
__at(0x0F0D) volatile __RXF3SIDLbits_t RXF3SIDLbits;

__at(0x0F0E) __sfr RXF3EIDH;
__at(0x0F0E) volatile __RXF3EIDHbits_t RXF3EIDHbits;

__at(0x0F0F) __sfr RXF3EIDL;
__at(0x0F0F) volatile __RXF3EIDLbits_t RXF3EIDLbits;

__at(0x0F10) __sfr RXF4SIDH;
__at(0x0F10) volatile __RXF4SIDHbits_t RXF4SIDHbits;

__at(0x0F11) __sfr RXF4SIDL;
__at(0x0F11) volatile __RXF4SIDLbits_t RXF4SIDLbits;

__at(0x0F12) __sfr RXF4EIDH;
__at(0x0F12) volatile __RXF4EIDHbits_t RXF4EIDHbits;

__at(0x0F13) __sfr RXF4EIDL;
__at(0x0F13) volatile __RXF4EIDLbits_t RXF4EIDLbits;

__at(0x0F14) __sfr RXF5SIDH;
__at(0x0F14) volatile __RXF5SIDHbits_t RXF5SIDHbits;

__at(0x0F15) __sfr RXF5SIDL;
__at(0x0F15) volatile __RXF5SIDLbits_t RXF5SIDLbits;

__at(0x0F16) __sfr RXF5EIDH;
__at(0x0F16) volatile __RXF5EIDHbits_t RXF5EIDHbits;

__at(0x0F17) __sfr RXF5EIDL;
__at(0x0F17) volatile __RXF5EIDLbits_t RXF5EIDLbits;

__at(0x0F18) __sfr RXM0SIDH;
__at(0x0F18) volatile __RXM0SIDHbits_t RXM0SIDHbits;

__at(0x0F19) __sfr RXM0SIDL;
__at(0x0F19) volatile __RXM0SIDLbits_t RXM0SIDLbits;

__at(0x0F1A) __sfr RXM0EIDH;
__at(0x0F1A) volatile __RXM0EIDHbits_t RXM0EIDHbits;

__at(0x0F1B) __sfr RXM0EIDL;
__at(0x0F1B) volatile __RXM0EIDLbits_t RXM0EIDLbits;

__at(0x0F1C) __sfr RXM1SIDH;
__at(0x0F1C) volatile __RXM1SIDHbits_t RXM1SIDHbits;

__at(0x0F1D) __sfr RXM1SIDL;
__at(0x0F1D) volatile __RXM1SIDLbits_t RXM1SIDLbits;

__at(0x0F1E) __sfr RXM1EIDH;
__at(0x0F1E) volatile __RXM1EIDHbits_t RXM1EIDHbits;

__at(0x0F1F) __sfr RXM1EIDL;
__at(0x0F1F) volatile __RXM1EIDLbits_t RXM1EIDLbits;

__at(0x0F20) __sfr TXB2CON;
__at(0x0F20) volatile __TXB2CONbits_t TXB2CONbits;

__at(0x0F21) __sfr TXB2SIDH;
__at(0x0F21) volatile __TXB2SIDHbits_t TXB2SIDHbits;

__at(0x0F22) __sfr TXB2SIDL;
__at(0x0F22) volatile __TXB2SIDLbits_t TXB2SIDLbits;

__at(0x0F23) __sfr TXB2EIDH;
__at(0x0F23) volatile __TXB2EIDHbits_t TXB2EIDHbits;

__at(0x0F24) __sfr TXB2EIDL;
__at(0x0F24) volatile __TXB2EIDLbits_t TXB2EIDLbits;

__at(0x0F25) __sfr TXB2DLC;
__at(0x0F25) volatile __TXB2DLCbits_t TXB2DLCbits;

__at(0x0F26) __sfr TXB2D0;
__at(0x0F26) volatile __TXB2D0bits_t TXB2D0bits;

__at(0x0F27) __sfr TXB2D1;
__at(0x0F27) volatile __TXB2D1bits_t TXB2D1bits;

__at(0x0F28) __sfr TXB2D2;
__at(0x0F28) volatile __TXB2D2bits_t TXB2D2bits;

__at(0x0F29) __sfr TXB2D3;
__at(0x0F29) volatile __TXB2D3bits_t TXB2D3bits;

__at(0x0F2A) __sfr TXB2D4;
__at(0x0F2A) volatile __TXB2D4bits_t TXB2D4bits;

__at(0x0F2B) __sfr TXB2D5;
__at(0x0F2B) volatile __TXB2D5bits_t TXB2D5bits;

__at(0x0F2C) __sfr TXB2D6;
__at(0x0F2C) volatile __TXB2D6bits_t TXB2D6bits;

__at(0x0F2D) __sfr TXB2D7;
__at(0x0F2D) volatile __TXB2D7bits_t TXB2D7bits;

__at(0x0F2E) __sfr CANSTAT_RO3;
__at(0x0F2E) volatile __CANSTAT_RO3bits_t CANSTAT_RO3bits;

__at(0x0F2F) __sfr CANCON_RO3;
__at(0x0F2F) volatile __CANCON_RO3bits_t CANCON_RO3bits;

__at(0x0F30) __sfr TXB1CON;
__at(0x0F30) volatile __TXB1CONbits_t TXB1CONbits;

__at(0x0F31) __sfr TXB1SIDH;
__at(0x0F31) volatile __TXB1SIDHbits_t TXB1SIDHbits;

__at(0x0F32) __sfr TXB1SIDL;
__at(0x0F32) volatile __TXB1SIDLbits_t TXB1SIDLbits;

__at(0x0F33) __sfr TXB1EIDH;
__at(0x0F33) volatile __TXB1EIDHbits_t TXB1EIDHbits;

__at(0x0F34) __sfr TXB1EIDL;
__at(0x0F34) volatile __TXB1EIDLbits_t TXB1EIDLbits;

__at(0x0F35) __sfr TXB1DLC;
__at(0x0F35) volatile __TXB1DLCbits_t TXB1DLCbits;

__at(0x0F36) __sfr TXB1D0;
__at(0x0F36) volatile __TXB1D0bits_t TXB1D0bits;

__at(0x0F37) __sfr TXB1D1;
__at(0x0F37) volatile __TXB1D1bits_t TXB1D1bits;

__at(0x0F38) __sfr TXB1D2;
__at(0x0F38) volatile __TXB1D2bits_t TXB1D2bits;

__at(0x0F39) __sfr TXB1D3;
__at(0x0F39) volatile __TXB1D3bits_t TXB1D3bits;

__at(0x0F3A) __sfr TXB1D4;
__at(0x0F3A) volatile __TXB1D4bits_t TXB1D4bits;

__at(0x0F3B) __sfr TXB1D5;
__at(0x0F3B) volatile __TXB1D5bits_t TXB1D5bits;

__at(0x0F3C) __sfr TXB1D6;
__at(0x0F3C) volatile __TXB1D6bits_t TXB1D6bits;

__at(0x0F3D) __sfr TXB1D7;
__at(0x0F3D) volatile __TXB1D7bits_t TXB1D7bits;

__at(0x0F3E) __sfr CANSTAT_RO2;
__at(0x0F3E) volatile __CANSTAT_RO2bits_t CANSTAT_RO2bits;

__at(0x0F3F) __sfr CANCON_RO2;
__at(0x0F3F) volatile __CANCON_RO2bits_t CANCON_RO2bits;

__at(0x0F40) __sfr TXB0CON;
__at(0x0F40) volatile __TXB0CONbits_t TXB0CONbits;

__at(0x0F41) __sfr TXB0SIDH;
__at(0x0F41) volatile __TXB0SIDHbits_t TXB0SIDHbits;

__at(0x0F42) __sfr TXB0SIDL;
__at(0x0F42) volatile __TXB0SIDLbits_t TXB0SIDLbits;

__at(0x0F43) __sfr TXB0EIDH;
__at(0x0F43) volatile __TXB0EIDHbits_t TXB0EIDHbits;

__at(0x0F44) __sfr TXB0EIDL;
__at(0x0F44) volatile __TXB0EIDLbits_t TXB0EIDLbits;

__at(0x0F45) __sfr TXB0DLC;
__at(0x0F45) volatile __TXB0DLCbits_t TXB0DLCbits;

__at(0x0F46) __sfr TXB0D0;
__at(0x0F46) volatile __TXB0D0bits_t TXB0D0bits;

__at(0x0F47) __sfr TXB0D1;
__at(0x0F47) volatile __TXB0D1bits_t TXB0D1bits;

__at(0x0F48) __sfr TXB0D2;
__at(0x0F48) volatile __TXB0D2bits_t TXB0D2bits;

__at(0x0F49) __sfr TXB0D3;
__at(0x0F49) volatile __TXB0D3bits_t TXB0D3bits;

__at(0x0F4A) __sfr TXB0D4;
__at(0x0F4A) volatile __TXB0D4bits_t TXB0D4bits;

__at(0x0F4B) __sfr TXB0D5;
__at(0x0F4B) volatile __TXB0D5bits_t TXB0D5bits;

__at(0x0F4C) __sfr TXB0D6;
__at(0x0F4C) volatile __TXB0D6bits_t TXB0D6bits;

__at(0x0F4D) __sfr TXB0D7;
__at(0x0F4D) volatile __TXB0D7bits_t TXB0D7bits;

__at(0x0F4E) __sfr CANSTAT_RO1;
__at(0x0F4E) volatile __CANSTAT_RO1bits_t CANSTAT_RO1bits;

__at(0x0F4F) __sfr CANCON_RO1;
__at(0x0F4F) volatile __CANCON_RO1bits_t CANCON_RO1bits;

__at(0x0F50) __sfr RXB1CON;
__at(0x0F50) volatile __RXB1CONbits_t RXB1CONbits;

__at(0x0F51) __sfr RXB1SIDH;
__at(0x0F51) volatile __RXB1SIDHbits_t RXB1SIDHbits;

__at(0x0F52) __sfr RXB1SIDL;
__at(0x0F52) volatile __RXB1SIDLbits_t RXB1SIDLbits;

__at(0x0F53) __sfr RXB1EIDH;
__at(0x0F53) volatile __RXB1EIDHbits_t RXB1EIDHbits;

__at(0x0F54) __sfr RXB1EIDL;
__at(0x0F54) volatile __RXB1EIDLbits_t RXB1EIDLbits;

__at(0x0F55) __sfr RXB1DLC;
__at(0x0F55) volatile __RXB1DLCbits_t RXB1DLCbits;

__at(0x0F56) __sfr RXB1D0;
__at(0x0F56) volatile __RXB1D0bits_t RXB1D0bits;

__at(0x0F57) __sfr RXB1D1;
__at(0x0F57) volatile __RXB1D1bits_t RXB1D1bits;

__at(0x0F58) __sfr RXB1D2;
__at(0x0F58) volatile __RXB1D2bits_t RXB1D2bits;

__at(0x0F59) __sfr RXB1D3;
__at(0x0F59) volatile __RXB1D3bits_t RXB1D3bits;

__at(0x0F5A) __sfr RXB1D4;
__at(0x0F5A) volatile __RXB1D4bits_t RXB1D4bits;

__at(0x0F5B) __sfr RXB1D5;
__at(0x0F5B) volatile __RXB1D5bits_t RXB1D5bits;

__at(0x0F5C) __sfr RXB1D6;
__at(0x0F5C) volatile __RXB1D6bits_t RXB1D6bits;

__at(0x0F5D) __sfr RXB1D7;
__at(0x0F5D) volatile __RXB1D7bits_t RXB1D7bits;

__at(0x0F5E) __sfr CANSTAT_RO0;
__at(0x0F5E) volatile __CANSTAT_RO0bits_t CANSTAT_RO0bits;

__at(0x0F5F) __sfr CANCON_RO0;
__at(0x0F5F) volatile __CANCON_RO0bits_t CANCON_RO0bits;

__at(0x0F60) __sfr RXB0CON;
__at(0x0F60) volatile __RXB0CONbits_t RXB0CONbits;

__at(0x0F61) __sfr RXB0SIDH;
__at(0x0F61) volatile __RXB0SIDHbits_t RXB0SIDHbits;

__at(0x0F62) __sfr RXB0SIDL;
__at(0x0F62) volatile __RXB0SIDLbits_t RXB0SIDLbits;

__at(0x0F63) __sfr RXB0EIDH;
__at(0x0F63) volatile __RXB0EIDHbits_t RXB0EIDHbits;

__at(0x0F64) __sfr RXB0EIDL;
__at(0x0F64) volatile __RXB0EIDLbits_t RXB0EIDLbits;

__at(0x0F65) __sfr RXB0DLC;
__at(0x0F65) volatile __RXB0DLCbits_t RXB0DLCbits;

__at(0x0F66) __sfr RXB0D0;
__at(0x0F66) volatile __RXB0D0bits_t RXB0D0bits;

__at(0x0F67) __sfr RXB0D1;
__at(0x0F67) volatile __RXB0D1bits_t RXB0D1bits;

__at(0x0F68) __sfr RXB0D2;
__at(0x0F68) volatile __RXB0D2bits_t RXB0D2bits;

__at(0x0F69) __sfr RXB0D3;
__at(0x0F69) volatile __RXB0D3bits_t RXB0D3bits;

__at(0x0F6A) __sfr RXB0D4;
__at(0x0F6A) volatile __RXB0D4bits_t RXB0D4bits;

__at(0x0F6B) __sfr RXB0D5;
__at(0x0F6B) volatile __RXB0D5bits_t RXB0D5bits;

__at(0x0F6C) __sfr RXB0D6;
__at(0x0F6C) volatile __RXB0D6bits_t RXB0D6bits;

__at(0x0F6D) __sfr RXB0D7;
__at(0x0F6D) volatile __RXB0D7bits_t RXB0D7bits;

__at(0x0F6E) __sfr CANSTAT;
__at(0x0F6E) volatile __CANSTATbits_t CANSTATbits;

__at(0x0F6F) __sfr CANCON;
__at(0x0F6F) volatile __CANCONbits_t CANCONbits;

__at(0x0F70) __sfr BRGCON1;
__at(0x0F70) volatile __BRGCON1bits_t BRGCON1bits;

__at(0x0F71) __sfr BRGCON2;
__at(0x0F71) volatile __BRGCON2bits_t BRGCON2bits;

__at(0x0F72) __sfr BRGCON3;
__at(0x0F72) volatile __BRGCON3bits_t BRGCON3bits;

__at(0x0F73) __sfr CIOCON;
__at(0x0F73) volatile __CIOCONbits_t CIOCONbits;

__at(0x0F74) __sfr COMSTAT;
__at(0x0F74) volatile __COMSTATbits_t COMSTATbits;

__at(0x0F75) __sfr RXERRCNT;
__at(0x0F75) volatile __RXERRCNTbits_t RXERRCNTbits;

__at(0x0F76) __sfr TXERRCNT;
__at(0x0F76) volatile __TXERRCNTbits_t TXERRCNTbits;

__at(0x0F77) __sfr ECANCON;
__at(0x0F77) volatile __ECANCONbits_t ECANCONbits;

__at(0x0F80) __sfr PORTA;
__at(0x0F80) volatile __PORTAbits_t PORTAbits;

__at(0x0F81) __sfr PORTB;
__at(0x0F81) volatile __PORTBbits_t PORTBbits;

__at(0x0F82) __sfr PORTC;
__at(0x0F82) volatile __PORTCbits_t PORTCbits;

__at(0x0F84) __sfr PORTE;
__at(0x0F84) volatile __PORTEbits_t PORTEbits;

__at(0x0F89) __sfr LATA;
__at(0x0F89) volatile __LATAbits_t LATAbits;

__at(0x0F8A) __sfr LATB;
__at(0x0F8A) volatile __LATBbits_t LATBbits;

__at(0x0F8B) __sfr LATC;
__at(0x0F8B) volatile __LATCbits_t LATCbits;

__at(0x0F92) __sfr DDRA;
__at(0x0F92) volatile __DDRAbits_t DDRAbits;

__at(0x0F92) __sfr TRISA;
__at(0x0F92) volatile __TRISAbits_t TRISAbits;

__at(0x0F93) __sfr DDRB;
__at(0x0F93) volatile __DDRBbits_t DDRBbits;

__at(0x0F93) __sfr TRISB;
__at(0x0F93) volatile __TRISBbits_t TRISBbits;

__at(0x0F94) __sfr DDRC;
__at(0x0F94) volatile __DDRCbits_t DDRCbits;

__at(0x0F94) __sfr TRISC;
__at(0x0F94) volatile __TRISCbits_t TRISCbits;

__at(0x0F9B) __sfr OSCTUNE;
__at(0x0F9B) volatile __OSCTUNEbits_t OSCTUNEbits;

__at(0x0F9D) __sfr PIE1;
__at(0x0F9D) volatile __PIE1bits_t PIE1bits;

__at(0x0F9E) __sfr PIR1;
__at(0x0F9E) volatile __PIR1bits_t PIR1bits;

__at(0x0F9F) __sfr IPR1;
__at(0x0F9F) volatile __IPR1bits_t IPR1bits;

__at(0x0FA0) __sfr PIE2;
__at(0x0FA0) volatile __PIE2bits_t PIE2bits;

__at(0x0FA1) __sfr PIR2;
__at(0x0FA1) volatile __PIR2bits_t PIR2bits;

__at(0x0FA2) __sfr IPR2;
__at(0x0FA2) volatile __IPR2bits_t IPR2bits;

__at(0x0FA3) __sfr PIE3;
__at(0x0FA3) volatile __PIE3bits_t PIE3bits;

__at(0x0FA4) __sfr PIR3;
__at(0x0FA4) volatile __PIR3bits_t PIR3bits;

__at(0x0FA5) __sfr IPR3;
__at(0x0FA5) volatile __IPR3bits_t IPR3bits;

__at(0x0FA6) __sfr EECON1;
__at(0x0FA6) volatile __EECON1bits_t EECON1bits;

__at(0x0FA7) __sfr EECON2;

__at(0x0FA8) __sfr EEDATA;

__at(0x0FA9) __sfr EEADR;

__at(0x0FAA) __sfr EEADRH;

__at(0x0FAB) __sfr RCSTA;
__at(0x0FAB) volatile __RCSTAbits_t RCSTAbits;

__at(0x0FAC) __sfr TXSTA;
__at(0x0FAC) volatile __TXSTAbits_t TXSTAbits;

__at(0x0FAD) __sfr TXREG;

__at(0x0FAE) __sfr RCREG;

__at(0x0FAF) __sfr SPBRG;

__at(0x0FB0) __sfr SPBRGH;

__at(0x0FB1) __sfr T3CON;
__at(0x0FB1) volatile __T3CONbits_t T3CONbits;

__at(0x0FB2) __sfr TMR3;

__at(0x0FB2) __sfr TMR3L;

__at(0x0FB3) __sfr TMR3H;

__at(0x0FB6) __sfr ECCP1AS;
__at(0x0FB6) volatile __ECCP1ASbits_t ECCP1ASbits;

__at(0x0FB7) __sfr ECCP1DEL;
__at(0x0FB7) volatile __ECCP1DELbits_t ECCP1DELbits;

__at(0x0FB8) __sfr BAUDCON;
__at(0x0FB8) volatile __BAUDCONbits_t BAUDCONbits;

__at(0x0FB8) __sfr BAUDCTL;
__at(0x0FB8) volatile __BAUDCTLbits_t BAUDCTLbits;

__at(0x0FBD) __sfr CCP1CON;
__at(0x0FBD) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x0FBE) __sfr CCPR1;

__at(0x0FBE) __sfr CCPR1L;

__at(0x0FBF) __sfr CCPR1H;

__at(0x0FC0) __sfr ADCON2;
__at(0x0FC0) volatile __ADCON2bits_t ADCON2bits;

__at(0x0FC1) __sfr ADCON1;
__at(0x0FC1) volatile __ADCON1bits_t ADCON1bits;

__at(0x0FC2) __sfr ADCON0;
__at(0x0FC2) volatile __ADCON0bits_t ADCON0bits;

__at(0x0FC3) __sfr ADRES;

__at(0x0FC3) __sfr ADRESL;

__at(0x0FC4) __sfr ADRESH;

__at(0x0FC5) __sfr SSPCON2;
__at(0x0FC5) volatile __SSPCON2bits_t SSPCON2bits;

__at(0x0FC6) __sfr SSPCON1;
__at(0x0FC6) volatile __SSPCON1bits_t SSPCON1bits;

__at(0x0FC7) __sfr SSPSTAT;
__at(0x0FC7) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x0FC8) __sfr SSPADD;

__at(0x0FC9) __sfr SSPBUF;

__at(0x0FCA) __sfr T2CON;
__at(0x0FCA) volatile __T2CONbits_t T2CONbits;

__at(0x0FCB) __sfr PR2;

__at(0x0FCC) __sfr TMR2;

__at(0x0FCD) __sfr T1CON;
__at(0x0FCD) volatile __T1CONbits_t T1CONbits;

__at(0x0FCE) __sfr TMR1;

__at(0x0FCE) __sfr TMR1L;

__at(0x0FCF) __sfr TMR1H;

__at(0x0FD0) __sfr RCON;
__at(0x0FD0) volatile __RCONbits_t RCONbits;

__at(0x0FD1) __sfr WDTCON;
__at(0x0FD1) volatile __WDTCONbits_t WDTCONbits;

__at(0x0FD2) __sfr HLVDCON;
__at(0x0FD2) volatile __HLVDCONbits_t HLVDCONbits;

__at(0x0FD2) __sfr LVDCON;
__at(0x0FD2) volatile __LVDCONbits_t LVDCONbits;

__at(0x0FD3) __sfr OSCCON;
__at(0x0FD3) volatile __OSCCONbits_t OSCCONbits;

__at(0x0FD5) __sfr T0CON;
__at(0x0FD5) volatile __T0CONbits_t T0CONbits;

__at(0x0FD6) __sfr TMR0;

__at(0x0FD6) __sfr TMR0L;

__at(0x0FD7) __sfr TMR0H;

__at(0x0FD8) __sfr STATUS;
__at(0x0FD8) volatile __STATUSbits_t STATUSbits;

__at(0x0FD9) __sfr FSR2L;

__at(0x0FDA) __sfr FSR2H;

__at(0x0FDB) __sfr PLUSW2;

__at(0x0FDC) __sfr PREINC2;

__at(0x0FDD) __sfr POSTDEC2;

__at(0x0FDE) __sfr POSTINC2;

__at(0x0FDF) __sfr INDF2;

__at(0x0FE0) __sfr BSR;

__at(0x0FE1) __sfr FSR1L;

__at(0x0FE2) __sfr FSR1H;

__at(0x0FE3) __sfr PLUSW1;

__at(0x0FE4) __sfr PREINC1;

__at(0x0FE5) __sfr POSTDEC1;

__at(0x0FE6) __sfr POSTINC1;

__at(0x0FE7) __sfr INDF1;

__at(0x0FE8) __sfr WREG;

__at(0x0FE9) __sfr FSR0L;

__at(0x0FEA) __sfr FSR0H;

__at(0x0FEB) __sfr PLUSW0;

__at(0x0FEC) __sfr PREINC0;

__at(0x0FED) __sfr POSTDEC0;

__at(0x0FEE) __sfr POSTINC0;

__at(0x0FEF) __sfr INDF0;

__at(0x0FF0) __sfr INTCON3;
__at(0x0FF0) volatile __INTCON3bits_t INTCON3bits;

__at(0x0FF1) __sfr INTCON2;
__at(0x0FF1) volatile __INTCON2bits_t INTCON2bits;

__at(0x0FF2) __sfr INTCON;
__at(0x0FF2) volatile __INTCONbits_t INTCONbits;

__at(0x0FF3) __sfr PROD;

__at(0x0FF3) __sfr PRODL;

__at(0x0FF4) __sfr PRODH;

__at(0x0FF5) __sfr TABLAT;

__at(0x0FF6) __sfr TBLPTR;

__at(0x0FF6) __sfr TBLPTRL;

__at(0x0FF7) __sfr TBLPTRH;

__at(0x0FF8) __sfr TBLPTRU;

__at(0x0FF9) __sfr PC;

__at(0x0FF9) __sfr PCL;

__at(0x0FFA) __sfr PCLATH;

__at(0x0FFB) __sfr PCLATU;

__at(0x0FFC) __sfr STKPTR;
__at(0x0FFC) volatile __STKPTRbits_t STKPTRbits;

__at(0x0FFD) __sfr TOS;

__at(0x0FFD) __sfr TOSL;

__at(0x0FFE) __sfr TOSH;

__at(0x0FFF) __sfr TOSU;
