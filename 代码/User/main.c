#include "stm32f10x.h"
#include "GUI.h"
#include "stm3210b_eval.h"



int main(void)
{
	
	GUI_Init();
	
	FW_USB_Init();


	while(1);

}


