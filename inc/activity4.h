#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED
#include <avr/io.h>
#include <util/delay.h>
#define SetBaudLow (UBRR0L=ubrr_value)
#define SetBaudHigh (UBRR0H=(ubrr_value>>8)&0x00ff)
#define SetCharBits (UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00))
#define EnableReceiverAndTransmitter (UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0))
#define ReadOrWriteData (UDR0)
#define WaitForTransmissionReady (!(UCSR0A&(1<<UDRE0)))
void initUSART(uint16_t ubrr_value);
void WriteCharUSART(char data);



#endif // ACTIVITY4_H_INCLUDED
