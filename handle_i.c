#include "main.h"

/**
 * handle_int - prints an int
 * @l: va_list to args from _printf
 * @q: pointer to the struct flags determine
 * if a flag _printf
 * Return: num of char print
 */
int handle_int(va_list l, flags_t *q)
{
int d = va_arg(l, int);
int res = count_digit(d);

if (q->space == 1 && q->plus == 0 && d >= 0)
res += _putchar(' ');
if (q->plus == 1 && d >= 0)
res += _putchar('+');
if (d <= 0)
res++;
handle_number(d);
return (res);
}

/**
 * handle_unsigned - prints an unsigned integer
 * @l: va_list of arguments from _printf
 * @f: to the struct f deteg
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int handle_unsigned(va_list l, flags_t *f)
{
unsigned int u = va_arg(l, unsigned int);
char *str = converted_str(u, 10, 0);

(void)f;
return (_puts(str));
}

/**
 * handle_number - heper function that lops through
 * an integer and rint all its digit
 * @n: integer printed
 */
void handle_number(int n)
{
unsigned int n1;

if (n < 0)
{
_putchar('-');
n1 = -n;
}
else
n1 = n;

if (n1 / 10)
handle_number(n1 / 10);
_putchar((n1 % 10) + '0');
}

/**
 * count_digit - returns num of digits in an int
 * for _printf
 * @x: int to evaluate
 * Return: num digits
 */
int count_digit(int x)
{
unsigned int d = 0;
unsigned int u;

if (x < 0)
u = x * -1;
else
u = x;
while (u != 0)
{
u /= 10;
d++;
}
return (d);
}
