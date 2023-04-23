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
write(1, &c, 1);
count++;
}
else if (*format == 's')
{
char *s = va_arg(args, char *);
int len = 0;
while (s[len] != '\0')
{
len++;
}
write(1, s, len);
count += len;
}
else if (*format == '%')
{
write(1, "%", 1);
count++;
}
}
else
{
write(1, format, 1);
count++;
}
format++;
}
va_end(args);
return (count);
}
