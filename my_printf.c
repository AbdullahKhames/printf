#include "main.h"

int my_printf(const char *format, ...)
{
	unsigned f = 0, count = 0;
	va_list args;
	
	va_start(args, format);

	for(; format[f] != '\0'; f++)
	{
		if (format[f] != '%')
		{
			_putchar(format[f]);
			count++;
		}
		else if(format[++f] == 'c')
		{
			_putchar(va_arg(args, int));
			count++;
		}
		else if(format[++f] == 's')
		{
			count += handle_string(va_arg(args, char *));
			
		}
	}
	return (count);
}
