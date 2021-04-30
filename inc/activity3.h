/**
 * @file activity3.h
 * @author Samantha Menezes
 * @brief Read input for Adc and display on oscilloscope
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED
/**
 *@note avr header file 
 */
#include<avr/io.h>
/**
 * @note delay header file
 */
#include<util/delay.h>
#define SetTimer1withFastPWMmode (TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10))
#define PrescaleTo64 (TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10))
#define SetPWMoutputPin (DDRB|=(1<<PB1))
#define PWMout (OCR1A)
#define Pwm20percent (205)
#define Pwm40percent (410)
#define Pwm70percent (717)
#define Pwm95percent (973)

/**
 * @brief Initalising for PWM
 * 
 */
void initPWM();
/**
 * @brief to set PWM output depending on input
 * 
 * @param value input from the analog temperature sensor(pot) converted to digital 
 * @return char temperature(Celsius) displayed through Usart on serial monitor
 */
char PWMoutput(uint16_t value);
#endif // ACTIVITY3_H_INCLUDED
