#include "main.h"

/**
 * convert - convert number to string
 * @num: number
 * @base: base of number
 * @lowercase: flag for hexadecimal values
 * Return string result
 */

char *convert(unsiigned long int num, int base, int lowercase)
{
	static char buffer[100];
	static char *bu;
	char *ptr;

	bu = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = bu[num % base];
		num /= bse;
	}while (num != 0);

	return (ptr);
}
