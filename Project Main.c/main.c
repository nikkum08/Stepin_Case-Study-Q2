/*
 */

#include <avr/io.h>
#include <util/delay.h>


/*int main(void)
{
    SeatCheck();
    while(1) {
        if(!(PINB&(1<<PB0)))
        {
            PORTD |=(1<<PD7);
          //  _delay_ms(2000);
        }
        else{
            PORTD&=~(1<<PD7);
        }
    }

} */
#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>

#define RS 2
#define E  1

void send_a_command (unsigned char command);
void send_a_character(unsigned char character);

int main(void)
{
    SeatCheck();
    while(1) {
        if(!(PINB&(1<<PB0)))
        {
            PORTD |=(1<<PD7);
          //  _delay_ms(2000);
        }
        else{
            PORTD&=~(1<<PD7);
        }
    }
    DDRB = 0xFF;
    DDRC = 0xFF;
    _delay_ms(50);
    send_a_command(0x01);// sending all clear command
    send_a_command(0x38);// 16*2 line LCD
    send_a_command(0x0E);// screen and cursor ON

     send_a_character (0x44); // ASCII(American Standard Code for Information Interchange) code for 'D'
     send_a_character (0x49); // ASCII(American Standard Code for Information Interchange) code for 'I'
     send_a_character (0x4C); // ASCII(American Standard Code for Information Interchange) code for 'L'
     send_a_character (0x49); // ASCII(American Standard Code for Information Interchange) code for 'I'
     send_a_character (0x50); // ASCII(American Standard Code for Information Interchange) code for 'P'

}

void send_a_command (unsigned char command)
{
    PORTB=command;
    PORTC&= ~(1<<RS);
    PORTC|= (1<<E);
    _delay_ms(50);
    PORTC&= ~(1<<E);
    PORTB =0;
}

void send_a_character (unsigned char character)
{
    PORTB=character;
    PORTC|= (1<<RS);
    PORTC|= (1<<E);
    _delay_ms(50);
    PORTC&= ~(1<<E);
    PORTB =0;
}
