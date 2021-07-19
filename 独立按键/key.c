#include "KEY.h"
const int table[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
uint8_t i;
void GPIO_Write(GPIO_TypeDef* GPIOx, uint16_t PortVal)
{
  assert_param(IS_GPIO_ALL_PERIPH(GPIOx));
  
  GPIOx->ODR = PortVal;
}


void seg(void)
{   
	 if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==GPIO_PIN_SET) 
{
HAL_Delay(10); 
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==GPIO_PIN_SET) 
{ 
	for(i=0;i<10;i++)
	{GPIO_Write(GPIOA,table[i]);
		HAL_Delay (100);
  HAL_GPIO_TogglePin (GPIOF,0x01<<5); 
while(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==GPIO_PIN_SET); 
}
}
}
}
 
	 



