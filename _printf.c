#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input str.
 *
 * Return: num of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int c = va_arg(args, int);

				write(1, &c, sizeof(c));
				count++;
			}

			else if (*format == 's')
			{
			char *s = va_arg(args, char *);
				while (*s != '\0')
				{
					write(1, s, sizeof(char));
					s++;
					count++;
				}
			}

			else if (*format == '%')
			{
				write(1, "%", sizeof(char));
				count++;
			}
		}

		else
		{
			write(1, *format, sizeof(char));
			count++;
		}
		format++;
		}
	va_end(args);
	return (count);
}
