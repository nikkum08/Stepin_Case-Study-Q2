#include <avr/io.h>
void SeatCheck(){
    DDRD |=(1<<PD7);
    DDRB&=~(1<<PB0);
    PORTB |=(1<<PB0);
}
