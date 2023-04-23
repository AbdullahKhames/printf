#include "main.h"

/**
 * get_flag - returns the flags
 * @c: the char
 * @flags: flags type pointer
 * Return: 1 if a flag is fouined 0 if not
 */

int get_flag(char c, flags_type *flags)
{
	int index = 0;

	switch (c)
	{
		case ' ':
			flags->space = 1;
			index = 1;
			break;

		case '#':
			flags->hash = 1;
			index = 1;
			break;

		case '+':
			flags->plus = 1;
			index = 1;
			break;
	}
	return (index);
}
