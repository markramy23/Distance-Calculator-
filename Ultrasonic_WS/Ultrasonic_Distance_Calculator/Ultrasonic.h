/*
 * Ultrasonic.h
 *
 *Description: Header file for ultrasonic driver.
 *
 *  Created on: Oct 22, 2023
 *      Author: Mark
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_
#include "std_types.h"
#include "icu.h"
#include "gpio.h"

/**************************************************************************************
 *                                 DEFINITIONS                                        *
 **************************************************************************************/

#define ULTRASONIC_ICU_PRESCALER 8 /*conigure the icu prescaler*/
#define ULTRASONIC_TRIGGER_PORT PORTB_ID /*configure the port where the trigger pin is connected*/
#define ULTRASONIC_TRIGGER_PIN PIN5_ID /*configure the trigger pin num*/


/**************************************************************************************
 *                                FUNCTIONS PROTOTYPES
 **************************************************************************************/


/*
 * Description:
 *  Initialize the ICU driver as required.
 *  Setup the ICU call back function.
 *  Setup the direction for the trigger pin as output pin through the GPIO driver.
 */
void Ultrasonic_init(void);




/*
 * Description:
 *  Send the trigger pulse by using Ultrasonic_Trigger function.
 *   Start the measurements by the ICU from this moment.
 *
 *   Return: The measured distance in Centimeter.
 */
uint16 Ultrasonic_readDistance();

#endif /* ULTRASONIC_H_ */
