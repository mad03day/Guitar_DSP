/*
 * RCC.c
 *
 *  Created on: 23 січ. 2023 р.
 *      Author: mrem
 */
#include "RCC.h"

void Set_RCC(void)
{
	// On HSE
	RCC->CR |= RCC_CR_HSEON;
	while(!(RCC->CR & RCC_CR_HSERDY));	// Wait when HSE is been ready
	// Config Flash
	//FLASH->ACR = FLASH_ACR_LATENCY_3WS |



}
