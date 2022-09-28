/***********************************************************/
/* Title       : DCMOTOR peripheral program file          */
/* Author      : Yahia Ahmed                             */
/* Release     : 1.0                                    */
/* Last Update : Aug 17, 2021                          */
/******************************************************/
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "DCMOTOR_int.h"
#include "DCMOTOR_priv.h"
#include "DCMOTOR_config.h"
#include<avr/delay.h>
#ifndef DCMOTOR_PROG_H_
#define  DCMOTOR_PROG_H_
void DCMOTOR_vid_Init(void)
{
	DIO_vid_ActivatePullUpResistor(DIO_u8_PIN_8);
}
void DCMOTOR_vid_MoveDirecion(void)
{
	static u8 Local_u8_Flag=DCMOTOR_u8_CLOCKWISE;
	DIO_vid_SetPORTValue(DCMOTOR_u8_PORT,Local_u8_Flag);
	_delay_ms(DCMOTOR_u8_DELAY_MS);
	if(DIO_u8_GetPinValue(DCMOTOR_u8_DIRECTION_PIN)==0)
	{
		Local_u8_Flag=(Local_u8_Flag==DCMOTOR_u8_CLOCKWISE)? DCMOTOR_u8_COUNTER_CLOCKWISE:DCMOTOR_u8_CLOCKWISE;

		DIO_vid_SetPORTValue(DCMOTOR_u8_PORT,Local_u8_Flag);
				_delay_ms(DCMOTOR_u8_DELAY_MS);

	}
}

#endif /* STEPPER_MOTOR_PROG_H_*/
