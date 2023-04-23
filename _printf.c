#include "main.h"

/**
 * my_printf - produces output according to a format
 * @format: character string containing zero or more directives
 * Return: the number of characters printed
 */
int my_printf(const char *format, ...)
{
unsigned int f = 0, count = 0;
va_list args;

va_start(args, format);
for (; format[f] != '\0'; f++)
{
if (format[f] != '%')
{
_putchar(format[f]);
count++;
}
else if (format[f + 1] == 'c')
{
_putchar(va_arg(args, int));
count++;
f++;
}
else if (format[f + 1] == 's')
{
count += handle_string(va_arg(args, char *));
f++;
}
else if (format[f] == '%')
{
_putchar('%');
count++;
}
}
va_end(args);
return (count);
}
