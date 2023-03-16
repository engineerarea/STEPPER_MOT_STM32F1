/**
  ******************************************************************************
  * @file      delay.h
  * @author   B�LAL DOGRUCU
  * @date      12/05/2020
  ******************************************************************************
  */
   
#ifndef __DELAY_H
#define __DELAY_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f10x.h"

void DelayInit(void);
void delay_ms(uint32_t time);

#ifdef __cplusplus
}
#endif

#endif

/********************************* END OF FILE ********************************/
/******************************************************************************/
