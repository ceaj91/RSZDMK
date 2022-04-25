/*
* main . c - Aplikacija koja implementira ogranicen broj
treptanja diode
*/
#include<avr/io.h>
#include<avr/interrupt.h>
#include<stdint.h>
#include "pulsing.c"
#include "timer0.c"
#include "pin.c"



// Makro za selektovanje pina na koji je povezana dioda
#define DIODE_PIN 6
// Makro za podesavanje periode u brzom rezimu treptanja
#define FAST 50
// Makro za podesavanje periode u sporom rezimu treptanja
#define SLOW 200
// Makro za podesavanje broja brzih treptaja
#define FAST_REPS 15
// Makro za podesavanje broja sporih treptaja
#define SLOW_REPS 3






/*
* main - funkcija koja implementira glavni deo aplikacije
*/
int16_t main (){
    uint32_t period = 1000; // Period jednog treptaja
    uint8_t repetitions = 5; // Broj treptaja
    // Inicijalizacija
    pinInit ( PORT_D , DIODE_PIN , OUTPUT ) ;
    timer0Init () ;
    // Glavna petlja
    while (1){
        // Brzo treptanje
        pinPulsing ( PORT_B , DIODE_PIN , FAST , FAST_REPS ) ;
        // Sporo treptanje
        pinPulsing ( PORT_B , DIODE_PIN , SLOW , SLOW_REPS ) ;
        // Kraj
        while (1);
    }
    return 0;
}




	/* ********************************************************* */

