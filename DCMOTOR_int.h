/**********************************************************/
/* Title       : DCMOTOR peripheral interface file       */
/* Author      : Yahia Ahmed                            */
/* Release     : 1.0                                   */
/* Last Update : Aug 19, 2021                         */
/*****************************************************/
#ifndef DCMOTOR_INTERFACE_H_
#define DCMOTOR_INTERFACE_H_
#define DCMOTOR_u8_CLOCKWISE 			2
#define DCMOTOR_u8_COUNTER_CLOCKWISE    1
void DCMOTOR_vid_Init(void);
void DCMOTOR_vid_MoveDirecion(void);

#endif /* DCMOTOR_INTERFACE_H_*/
