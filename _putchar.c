#include "main.h"

/**
 * _putchar - function to put char
 * @c: c
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1);	
}

/**
 * _puts - func to priint string
 * @s: striung
 * Return: size of str
 */

int _puts(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		_putchar(s[index]);
		index++;
	}
	return (index);
}
