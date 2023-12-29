#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Key.h"
#include "PWM.h"
#include "showAngle.h"
uint8_t KeyNum;
uint8_t i;
int main(void)
{
	OLED_Init();
	Key_Init();
    showAngle_init();
		
	while (1)
	{
   
   TIM_SetCompare2(TIM2,1000);


	
		
		
	}
}
