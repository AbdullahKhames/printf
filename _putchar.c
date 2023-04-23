#include "main.h"

/**
 * _putchar - prints char to stdout
 * @c: c to print
 * Return: returns no of char printed
 */

int _putchar(char c)
{
	return (write(1 ,&c, 1));
}

/**
 * _puts - prints string to stdout
 * @s: string
 * Return: returns number of chars printed
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
	}
	return (i);
}
