/*
 * H-Bridge_config.h
 *
 *  Created on: Oct 13, 2021
 *      Author: sa7er
 */

#ifndef HAL_H_BRIDGE_CONFIG_H_
#define HAL_H_BRIDGE_CONFIG_H_

#define HAL_BRIDGE_u8DIRECTION		HAL_BRIDGE_u8ACW

#define HAL_BRIDGE_u8MOTOR_NUM		1

/*HAL-BRIDGE PINS*/
#define HAL_BRIDGE_u8EN1_PORT		DIO_u8GROUP_D
#define HAL_BRIDGE_u8EN1_PIN		DIO_u8PIN4

//MOTOR1 DIRECTION
#define HAL_BRIDGE_u8INPUT1_PORT	DIO_u8GROUP_C
#define HAL_BRIDGE_u8INPUT1_PIN		DIO_u8PIN3
#define HAL_BRIDGE_u8INPUT2_PORT	DIO_u8GROUP_C
#define HAL_BRIDGE_u8INPUT2_PIN		DIO_u8PIN4

//MOTOR2 DIRECTION
#define HAL_BRIDGE_u8INPUT3_PORT	DIO_u8GROUP_C
#define HAL_BRIDGE_u8INPUT3_PIN		DIO_u8PIN5
#define HAL_BRIDGE_u8INPUT4_PORT	DIO_u8GROUP_C
#define HAL_BRIDGE_u8INPUT4_PIN		DIO_u8PIN6

#define HAL_BRIDGE_u8EN2_PORT		DIO_u8GROUP_D
#define HAL_BRIDGE_u8EN2_PIN		DIO_u8PIN5

#endif /* HAL_H_BRIDGE_CONFIG_H_ */