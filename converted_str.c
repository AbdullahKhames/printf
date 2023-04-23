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
	static char buff[100];
	static char *cptr;
	char * bu;

	cptr = (lowercase) ? "0123456789abcdef" : "0123456789ABCDEF";

	bu = &buff[99];
	*bu = '\0';

	do {

		*--bu = cptr[number %base];
		number /= base;
	}while (number != 0);

	return (bu);
}
