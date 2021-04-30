#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
#include <avr/io.h>
#include <util/delay.h>
#define RefToVcc (REFS0)
#define EnableADC (ADEN)
#define SetFCPU (ADPS0)
#define MuxReg (ADMUX)
#define CntrlReg (ADCSRA)
#define StrtConv (ADSC)
#define ADCInterruptFlag (ADIF)
#define AtoDvalue (ADC)
void initADC();
uint16_t ReadADC(uint8_t select_channel);
#endif // ACTIVITY2_H_INCLUDED
