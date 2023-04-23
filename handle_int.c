#include "main.h"

int handle_int(va_list args, flags *fl)
{
	int x = va_arg(args, int)
}

int counter(int num)
{
	unsigned int x =0, y;
	
	if (num < 0)
		y = num * -1;
	else
		y = num;

	while (y != 0)
	{
		y /= 10;
		x++;
	}
	return (x);
}

