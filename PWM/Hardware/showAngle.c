#include "stm32f10x.h"
#include "PWM.h"
void showAngle_init(float Angle)
{
   PWM_Init();
  
}
void Angle(float Angle)
{


  PWM_SetCompare2(Angle /180*2000+500);

	
}
