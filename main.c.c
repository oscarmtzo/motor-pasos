#include <xc.h>

void main (void)
{
    TRISA = 0xFF; // Configuración inicial de todos los puertos A como entrada
    TRISB = 0x00; // Configuración inicial de todos los puertos B como salida
   
    while (1)
    {
        if (PORTAbits.RA2 == 0xFF)
        {
            PORTBbits.RB7 = 0xFF; // Configurar solo el puerto RB7 como 1 logico
        }
        if (PORTAbits.RA3 == 0x00)
        {
            PORTBbits.RB7 = 0x00; // Configurar solo el puerto RB7 como 0 logico
        }
    }
}
