#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED
#include<avr/io.h>
#define INPUTPIN (PIND)
#define HEATERSWITCH (PD0)
#define SEATED (PD1)

void initialize_pins();
void turn_off_led();
void turn_on_led();

#endif // ACTIVITY1_H_INCLUDED
