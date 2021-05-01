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

#define PWMout (OCR1A)
#define DUTY_CYCLE(Percent) (1024*Percent/100)

/**
 * @brief Initalising for PWM
 * 
 */
void initializePWM();
/**
 * @brief to set PWM output depending on input
 * 
 * @param value input from the analog temperature sensor(pot) converted to digital 
 * @return char temperature(Celsius) displayed through Usart on serial monitor
 */
char PWMoutput(uint16_t value);
#endif // ACTIVITY3_H_INCLUDED
