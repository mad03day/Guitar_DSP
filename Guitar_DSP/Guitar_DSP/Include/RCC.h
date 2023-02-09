/*
 * RCC.h
 *
 *  Created on: 23 січ. 2023 р.
 *      Author: mrem
 */
#include "stm32f401xc.h"
#include "stm32f4xx.h"

#define M
#define N
#define P

#ifndef GUITAR_DSP_INCLUDE_RCC_H_
#define GUITAR_DSP_INCLUDE_RCC_H_

void Set_HSE(void);
void Set_FLASH_Latency(void);
void Set_PLL();
void Set_RCC(void);


#endif /* GUITAR_DSP_INCLUDE_RCC_H_ */
