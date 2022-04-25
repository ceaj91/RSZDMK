#include "pin.c"
#include "timer0.c"
#include "utils.c"


/* ********************************************************* */
void pinPulsing ( uint8_t port , uint8_t pin , uint32_t period , uint8_t num_of_repetitions ) {
    uint8_t i ;
    // Implementacija num_of_repetitions perioda
    for ( i = 0; i < num_of_repetitions ; i ++)
        pinPulse ( port , pin , period ) ;
}
/* ********************************************************* */
void pinPulse ( uint8_t port , uint8_t pin , uint32_t period ) {
    // Poluperioda u kojoj pin ima visoku vrednost
    pinSetValue ( port , pin , HIGH ) ;
    timer0DelayMs ( calculateHalfPeriod ( period ) ) ;
    // Poluperioda u kojoj pin ima nisku vrednost
    pinSetValue ( port , pin , LOW ) ;
    timer0DelayMs ( calculateHalfPeriod ( period ) ) ;
}
