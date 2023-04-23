#include "main.h"

/**
 * converted_str - converts number to string
 * @number: number to be converted
 * @base: base of trhe number
 * @lowercase: case of the number
 * Return: string
 */
char *converted_str(unsigned long int number, int base, int lowercase)
{
	static char buff[50];
	static char *rep;
	char *cptr;

	rep = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";

	cptr = &buff[49];
	*cptr = '\0';

	do {

		*--cptr = rep[number % base];
		number /= base;
	} while (number != 0);

	return (cptr);
}
