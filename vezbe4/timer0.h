/*
* timer0Init - Funkcija koja inicijalizuje timer 0 tako da
pravi prekide svake milisekunde
*/
void timer0Init ();

/*
* timer0Millis - Funkcija koja , na bezbedan nacin , vraca kao
povratnu vrednost broj milisekundi proteklih od pocetka
merenja vremena
*/
uint32_t timer0Millis() ;

/*
* timer0DelayMs - Funkcija koja implementira pauzu u broju
milisekundi koji je prosledjen kao parametar
*/
void timer0DelayMs( uint32_t delay_length ) ;
