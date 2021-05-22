#include <avr/io.h>
#include <util/delay.h>
#include <avr/sleep.h>

#define LED_PIN PB3

int main(void)
{
  DDRB |= _BV(LED_PIN); // set LED pin as OUTPUT
  PORTB = 0b00000000 | _BV(LED_PIN); // set LED pin high
  _delay_ms(3200); // wait 3.2 sec
  PORTB = 0b00000000; // set LED pin low
  DDRB = 0b00000000; // set allpins as INPUT

  // sleep forever
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  while(1) {
    sleep_mode();
  }
}
