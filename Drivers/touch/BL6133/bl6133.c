/*
 * bl6133.c
 *
 *  Created on: Jun 7, 2024
 *      Author: D-triple
 */
#include "bl6133.h"

uint8_t readTouchData(uint8_t* touchData, uint8_t len)
{
	uint8_t data_addr = 0x01;
	uint8_t i2c_err = 1;

//	uint16_t DevAddr = 88; // bl6133 touch IC
	uint16_t DevAddr = 42; // cst816d touch IC

	while(i2c_err == 1) {
//	for(DevAddr=41; DevAddr<=42; DevAddr++){
		i2c_err = HAL_I2C_Master_Transmit(&hi2c4, DevAddr, &data_addr, sizeof(data_addr), 10);
		i2c_err |= HAL_I2C_Master_Receive(&hi2c4, DevAddr+1, touchData, len, 10);

//		DevAddr++;

//		if(err_count == 0){
//			return 0;
//		}
//		if(i2c_err == 0){
//			int a = DevAddr;
//		}
	}

	return 0;
}

uint8_t touchDetect(uint8_t* touchData)
{
	if(touchData[1] == 0x01 && touchData[2] == 0x80) return 1;
	else return 0;
}

int32_t read_x(uint8_t* touchData)
{
	int32_t x = (int32_t)(touchData[2]<<8 | touchData[3]) & 0x0FFF;
	return x;
}

int32_t read_y(uint8_t* touchData)
{
	int32_t y = (int32_t)(touchData[4]<<8 | touchData[5]) & 0x0FFF;
	return y;
}
