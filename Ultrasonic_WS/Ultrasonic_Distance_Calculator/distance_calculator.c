/*
 * distance_calculator.c
 *
 *  Created on: Oct 22, 2023
 *      Author: Mark
 */
#include "Ultrasonic.h"
#include "my_lcd.h"
#include "util/delay.h"
#include "avr/io.h"
int main(void){
	LCD_init(); /*initialize lcd*/
	LCD_displayString("Distance=    cm"); /*display the always displayed string */
	Ultrasonic_init(); /*initialize ultrasonic*/
	SREG|=1<<7; /*enabling global interrupts*/
	uint16 distance;
	while(1){
		distance=Ultrasonic_readDistance(); /*read the distance and store it in distance variable*/
		LCD_moveCursor(0,10); /*every time move the cursor to the beginning of the space where to write the new distance*/
		/*display the distance*/
		if(distance>=100){
			LCD_integerToString(distance);
		}
		/*if distance is two digits or 1 digit display spaces after the value to overwrite
		 * the old values on the lcd screen*/
		else if(distance<100&&distance>=10){
			LCD_integerToString(distance);
			LCD_displayChar(' ');

		}
		else if(distance<10){
			LCD_integerToString(distance);
			LCD_displayChar(' ');
			LCD_displayChar(' ');

		}
	}
}

