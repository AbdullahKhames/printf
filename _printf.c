#include <unistd.h>
#include "main.h"
/**
 * _printf - prints output according to a format.
 * @format: character string.
 * Return: number of characters printed (excluding null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
printed_chars += write(1, &c, 1);
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
printed_chars += write(1, str, 1);
str++;
}
}
else if (*format == '%')
{
printed_chars += write(1, "%", 1);
}
else if (*format == '\0')
{
va_end(args);
return (-1);
}
format++;
}
else
{
printed_chars += write(1, format, 1);
format++;
}
}
va_end(args);
return (printed_chars);
}
