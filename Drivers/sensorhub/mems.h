/*
 * mems.h
 *
 *  Created on: Jun 24, 2024
 *      Author: D-triple
 */

#ifndef SENSORHUB_MEMS_H_
#define SENSORHUB_MEMS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

#define IIS2MDC_ADDR_W		0x3C // magneto
#define ISM330DHCX_ADDR_W	0xD6 // IMU
#define LPS22HH_ADDR_W		0xBA // pressure

////////////// IIS2MDC /////////////
#define IIS2MDC_OFFSET_X_REG_L		0x45
#define IIS2MDC_OFFSET_X_REG_H 		0x46
#define IIS2MDC_OFFSET_Y_REG_L 		0x47
#define IIS2MDC_OFFSET_Y_REG_H 		0x48
#define IIS2MDC_OFFSET_Z_REG_L 		0x49
#define IIS2MDC_OFFSET_Z_REG_H 		0x4A
#define IIS2MDC_WHO_AM_I 			0x4F
#define IIS2MDC_CFG_REG_A 			0x60
#define IIS2MDC_CFG_REG_B 			0x61
#define IIS2MDC_CFG_REG_C 			0x62
#define IIS2MDC_INT_CRTL_REG 		0x63
#define IIS2MDC_INT_SOURCE_REG 		0x64
#define IIS2MDC_INT_THS_L_REG  		0x65
#define IIS2MDC_INT_THS_H_REG  		0x66
#define IIS2MDC_STATUS_REG  		0x67
#define IIS2MDC_OUTX_L_REG  		0x68
#define IIS2MDC_OUTX_H_REG  		0x69
#define IIS2MDC_OUTY_L_REG  		0x6A
#define IIS2MDC_OUTY_H_REG  		0x6B
#define IIS2MDC_OUTZ_L_REG  		0x6C
#define IIS2MDC_OUTZ_H_REG  		0x6D
#define IIS2MDC_TEMP_OUT_L_REG  	0x6E

void read_iis2mdc(double* magnetX, double* magnetY, double* magnetZ, double* temp);
void init_iis2mdc(void);

#define ISM330DHCX_FUNC_CFG_ACCESS		0x01
#define ISM330DHCX_PIN_CTRL				0x02
#define ISM330DHCX_FIFO_CTRL1			0x07
#define ISM330DHCX_FIFO_CTRL2			0x08
#define ISM330DHCX_FIFO_CTRL3			0x09
#define ISM330DHCX_FIFO_CTRL4			0x0A
#define ISM330DHCX_COUNTER_BDR_REG1		0x0B
#define ISM330DHCX_COUNTER_BDR_REG2		0x0C
#define ISM330DHCX_INT1_CTRL			0x0D
#define ISM330DHCX_INT2_CTRL			0x0E
#define ISM330DHCX_WHO_AM_I				0x0F
#define ISM330DHCX_CTRL1_XL				0x10
#define ISM330DHCX_CTRL2_G				0x11
#define ISM330DHCX_CTRL3_C				0x12
#define ISM330DHCX_CTRL4_C				0x13
#define ISM330DHCX_CTRL5_C				0x14
#define ISM330DHCX_CTRL6_C				0x15
#define ISM330DHCX_CTRL7_G				0x16
#define ISM330DHCX_CTRL8_XL				0x17
#define ISM330DHCX_CTRL9_XL				0x18
#define ISM330DHCX_CTRL10_C				0x19
#define ISM330DHCX_ALL_INT_SRC			0x1A
#define ISM330DHCX_WAKE_UP_SRC			0x1B
#define ISM330DHCX_TAP_SRC				0x1C
#define ISM330DHCX_D6D_SRC				0x1D
#define ISM330DHCX_STATUS_REG			0x1E
#define ISM330DHCX_OUT_TEMP_L			0x20
#define ISM330DHCX_OUT_TEMP_H			0x21
#define ISM330DHCX_OUTX_L_G				0x22
#define ISM330DHCX_OUTX_H_G				0x23
#define ISM330DHCX_OUTY_L_G				0x24
#define ISM330DHCX_OUTY_H_G 					0x25
#define ISM330DHCX_OUTZ_L_G 					0x26
#define ISM330DHCX_OUTZ_H_G 					0x27
#define ISM330DHCX_OUTX_L_A 					0x28
#define ISM330DHCX_OUTX_H_A 					0x29
#define ISM330DHCX_OUTY_L_A 					0x2A
#define ISM330DHCX_OUTY_H_A 					0x2B
#define ISM330DHCX_OUTZ_L_A 					0x2C
#define ISM330DHCX_OUTZ_H_A 					0x2D
#define ISM330DHCX_EMB_FUNC_STATUS_MAINPAGE 	0x35
#define ISM330DHCX_FSM_STATUS_A_MAINPAGE 		0x36
#define ISM330DHCX_FSM_STATUS_B_MAINPAGE 		0x37
#define ISM330DHCX_MLC_STATUS_MAINPAGE 			0x38
#define ISM330DHCX_STATUS_MASTER_MAINPAGE 		0x39
#define ISM330DHCX_FIFO_STATUS1 				0x3A
#define ISM330DHCX_FIFO_STATUS2 				0x3B
#define ISM330DHCX_TIMESTAMP0 					0x40
#define ISM330DHCX_TIMESTAMP1 					0x41
#define ISM330DHCX_TIMESTAMP2 					0x42
#define ISM330DHCX_TIMESTAMP3 					0x43
#define ISM330DHCX_TAP_CFG0 					0x56
#define ISM330DHCX_TAP_CFG1 					0x57
#define ISM330DHCX_TAP_CFG2 					0x58
#define ISM330DHCX_TAP_THS_6D 					0x59
#define ISM330DHCX_INT_DUR2 					0x5A
#define ISM330DHCX_WAKE_UP_THS 					0x5B
#define ISM330DHCX_WAKE_UP_DUR 					0x5C
#define ISM330DHCX_FREE_FALL 					0x5D
#define ISM330DHCX_MD1_CFG 						0x5E
#define ISM330DHCX_MD2_CFG 						0x5F
#define ISM330DHCX_INTERNAL_FREQ_FINE 			0x63
#define ISM330DHCX_INT_OIS 						0x6F
#define ISM330DHCX_CTRL1_OIS 					0x70
#define ISM330DHCX_CTRL2_OIS 					0x71
#define ISM330DHCX_CTRL3_OIS			 0x72
#define ISM330DHCX_X_OFS_USR			 0x73
#define ISM330DHCX_Y_OFS_USR			 0x74
#define ISM330DHCX_Z_OFS_USR			 0x75
#define ISM330DHCX_FIFO_DATA_OUT_TAG	 0x78
#define ISM330DHCX_FIFO_DATA_OUT_X_L	 0x79
#define ISM330DHCX_FIFO_DATA_OUT_X_H	 0x7A
#define ISM330DHCX_FIFO_DATA_OUT_Y_L	 0x7B
#define ISM330DHCX_FIFO_DATA_OUT_Y_H	 0x7C
#define ISM330DHCX_FIFO_DATA_OUT_Z_L	 0x7D
#define ISM330DHCX_FIFO_DATA_OUT_Z_H	 0x7E

void read_ism330dhcx(uint16_t gyroSensi, uint8_t accSensi, double* temp, double* gyroX, double* gyroY, double* gyroZ, double* accX, double* accY, double* accZ);
void init_ism330dhcx(void);
void read_ism330dhcx_stepCount(uint16_t *stepCount);
uint8_t whatKindInterrupt();

#define LPS22HH_INTERRUPT_CFG 			0x0B
#define LPS22HH_THS_P_L 				0x0C
#define LPS22HH_THS_P_H 				0x0D
#define LPS22HH_IF_CTRL 				0x0E
#define LPS22HH_WHO_AM_I 				0x0F
#define LPS22HH_CTRL_REG1 				0x10
#define LPS22HH_CTRL_REG2 				0x11
#define LPS22HH_CTRL_REG3 				0x12
#define LPS22HH_FIFO_CTRL 				0x13
#define LPS22HH_FIFO_WTM 				0x14
#define LPS22HH_REF_P_L 				0x15
#define LPS22HH_REF_P_H 				0x16
#define LPS22HH_RPDS_L 					0x18
#define LPS22HH_RPDS_H 					0x19
#define LPS22HH_INT_SOURCE 				0x24
#define LPS22HH_FIFO_STATUS1 			0x25
#define LPS22HH_FIFO_STATUS2 			0x26
#define LPS22HH_STATUS 					0x27
#define LPS22HH_PRESSURE_OUT_XL 		0x28
#define LPS22HH_PRESSURE_OUT_L 			0x29
#define LPS22HH_PRESSURE_OUT_H 			0x2A
#define LPS22HH_TEMP_OUT_L 				0x2B
#define LPS22HH_TEMP_OUT_H 				0x2C
#define LPS22HH_FIFO_DATA_OUT_PRESS_XL 	0x78
#define LPS22HH_FIFO_DATA_OUT_PRESS_L 	0x79
#define LPS22HH_FIFO_DATA_OUT_PRESS_H 	0x7A
#define LPS22HH_FIFO_DATA_OUT_TEMP_L	0x7B
#define LPS22HH_FIFO_DATA_OUT_TEMP_H	0x7C

void read_lps22hh(double* pressure, double* temp);
void init_lps22hh(void);

#ifdef __cplusplus
}
#endif

#endif /* SENSORHUB_MEMS_H_ */
