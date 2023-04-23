#include "main.h"

/**
 * handle_big_string - Non printable char
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexa (upper case - always 2 characters)
 * @l: va_list arguments from _printf
 * @f: point to the struc flag
 * if a flag is passed to _printf
 * Return: num of char printed
 */
int handle_big_string(va_list l, flags_t *f)
{
int x, count = 0;
char *res;
char *s = va_arg(l, char *);

(void)f;
if (!s)
return (_puts("(null)"));

for (x = 0; s[x]; x++)
{
if (s[x] > 0 && (s[x] < 32 || s[x] >= 127))
{
_puts("\\x");
count += 2;
res = converted_str(s[x], 16, 0);
if (!res[1])
count += _putchar('0');
count += _puts(res);
}
else
count += _putchar(s[x]);
}
return (count);
}

/**
 * handle_rev - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags
 * if a flag is passed to _printf
 * Return: length of printed str
 */
int handle_rev(va_list l, flags_t *f)
{
int x = 0, j;
char *s = va_arg(l, char *);

(void)f;
if (!s)
s = "(null)";

while (s[x])
x++;

for (j = x - 1; j >= 0; j--)
_putchar(s[j]);
return (x);
}

/**
 * handle_rot13 - prints a string using rot13
 * @l: list argu from _printf
 * @f: pointer to the struct
 * if a flag is passed to _printf
 * Return: length of the printed str
 */
int handle_rot13(va_list l, flags_t *f)
{
int x, j;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *s = va_arg(l, char *);

(void)f;
for (j = 0; s[j]; j++)
{
if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
_putchar(s[j]);
else
{
for (x = 0; x <= 52; x++)
{
if (s[j] == rot13[x])
_putchar(ROT13[x]);
}
}
}

return (j);
}

/**
 * handle_percent - prints a percent
 * @l: va_list arguments from _printf
 * @f: point to the struct flags
 * Return: num of char prin
 */
int handle_percent(va_list l, flags_t *f)
{
(void)l;
(void)f;
return (_putchar('%'));
}
