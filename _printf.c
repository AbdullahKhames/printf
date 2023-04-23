#include "main.h"

/**
 * _printf - printf
 * @format: const char pointer
 * Return: returns printed chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int (*func)(va_list, flags_t *);
	flags_t flags = {0, 0, 0};
	const char *cptr;
	int counter = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (cptr = format; *cptr; cptr++)
	{
		if (*cptr == '%')
		{
			cptr++;
			if (*cptr == '%')
			{
				counter += _putchar('%');
				continue;
			}
			while (get_flag(*cptr, &flags))
				cptr++;
			func = print_handler(*cptr);
			counter += (func) ? func(args, &flags) : _printf("%%%c", *cptr);
		} else
			counter += _putchar(*cptr);
	}
	_putchar(-1);
	va_end(args);
	return (counter);
}
