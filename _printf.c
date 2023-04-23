#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input str.
 *
 * Return: num of characters printed.
 */
int _printf(const char *format, ...) {
int count = 0;
va_list args;
va_start(args, format);
while (*format != '\0') {
if (*format == '%') {
format++;
if (*format == 'c') {
int c = va_arg(args, int);
putchar(c);
count++;
} else if (*format == 's') {
char *s = va_arg(args, char *);
while (*s != '\0') {
putchar(*s);
s++;
count++;
}
} else if (*format == '%') {
putchar('%');
count++;
}
} else {
putchar(*format);
count++;
}
format++;
}
va_end(args);
return count;
}
