#include "gpio_ctrl.h"
#include "xparameters.h"

int main()
{
	gpioCtrl gpio_ins;

	init_gpio(&gpio_ins, XPAR_GPIO_CTRL_IP_0_S00_AXI_BASEADDR);

	while(1)
	{
		u32 switches = read_gpio(&gpio_ins);
		write_gpio(&gpio_ins, switches);
	}

	return 0;
}
