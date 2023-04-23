#include "main.h"

/**
 * handle_address - print addre of input in hexadecilmlo format
 * @ap_list: va_list arguments from _printf
 * @f: point to the struc flag that determis
 * if a flag passed to _printf
 * Return: number of char print
 */
int handle_address(va_list ap_list, flags_t *f)
{
char *hex_str;
unsigned long int addr = va_arg(ap_list, unsigned long int);
int char_count = 0;

(void)f;

if (!addr)
return (_puts("(nil)"));

hex_str = converted_str(addr, 16, 1);
char_count += _puts("0x");
char_count += _puts(hex_str);
free(hex_str);

return (char_count);
}
