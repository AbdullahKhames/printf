#include "main.h"

/**
 * handle_string - loops through a string and prints
 * every character
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int handle_string(va_list args, flags_t *f)
{
char *s = va_arg(args, char *);

if (!s)
s = "(null)";

return (_puts(s));
}

/**
 * handle_char - prints a character
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int handle_char(va_list args, flags_t *f)
{
_putchar(va_arg(args, int));
(void)f;
return (1);
}
