#include <stdarg.h>

<<<<<<< HEAD
/**
 * handle_int - Handles the conversion specifier for integers
 * @args: The list of arguments
 *
 * Return: The integer value of the argument
 */
int handle_int(va_list args)
{
int x = va_arg(args, int);
return (x);
}

/**
 * counter - Counts the number of digits in an integer
 * @num: The integer to count digits in
 *
 * Return: The number of digits in num
 */
int counter(int num)
{
unsigned int x = 0, y;

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
=======
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
>>>>>>> baa166539fc5752b431c845b71f7f7b1ce605d0c
}

