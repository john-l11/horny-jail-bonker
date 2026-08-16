#include "../headers/includes.h"
/**
 * PORTS
 * 
 */
 
void portInit(void)
{ 
    //Oscillator
    OSCFRQbits.FRQ = 0b0010;
    //OSCCON1bits.NOSC = 0b110;
    
    //section A
    LATA = 0x0a;
    ANSELA = 0b00000001;
    TRISA = 0b00000101;
    
    //section B
    LATB = 0x00;
    ANSELB = 0b00000000;
    TRISB = 0b11111100;
    
    //section C
    LATC = 0x10;
    ANSELC = 0b00000000;
    TRISC = 0b10100001;
    //ODCONC = 0b00011000;                //Set pins RC3 and RC4 to open drain
    
    //section D
    LATD = 0x00;
    ANSELD = 0b00000000;
    TRISD = 0b00000000;
    
    //section E
    LATE = 0x00;
    ANSELE = 0b00000000;
    TRISE = 0b00001000;
}