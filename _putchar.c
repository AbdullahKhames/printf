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

