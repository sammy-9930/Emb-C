#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED
#include<avr/io.h>
#include<util/delay.h>
#define SetTimer1withFastPWMmode (TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10))
#define PrescaleTo64 (TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10))
#define SetPWMoutputPin (DDRB|=(1<<PB1))
#define PWMout (OCR1A)
#define Pwm20percent (205)
#define Pwm40percent (410)
#define Pwm70percent (717)
#define Pwm95percent (973)
void initPWM();
char PWMoutput(uint16_t value);
#endif // ACTIVITY3_H_INCLUDED
