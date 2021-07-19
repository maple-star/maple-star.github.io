#ifndef _KEY_H
#include "stm32h7xx.h"
#define GPIO_ALL GPIO_PIN_1|GPIO_PIN_0|GPIO_PIN_4|GPIO_PIN_2|GPIO_PIN_6|GPIO_PIN_5|GPIO_PIN_3|GPIO_PIN_7
#define KEY1 HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)
#define KEY2 HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)
#define KEY3 HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)
#define KEY4 HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)

 

void GPIO_Write(GPIO_TypeDef* GPIOx, uint16_t PortVal);
void seg(void);

#endif
