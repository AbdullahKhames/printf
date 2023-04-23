#include "main.h"

/**
 * print_handler - function to match the char input
 * @sa: char input
 * Return: a pointer to the matching function
 */

int (*print_handler(char sa))(va_list, flags_t *)
{
	printer functions[] = {
		{'i', handle_int},
		{'d', handle_int},
		{'x', handle_hex},
		{'X', handle_big_hex},
		{'o', handle_octal},
		{'b', handle_binary},
		{'c', handle_char},
		{'s', handle_string},
		{'S', handle_big_string},
		{'u', handle_unsigned},
		{'%', handle_percent},
		{'p', handle_address},
		{'r', handle_rev},
		{'R', handle_rot13}
	};

	int f = 14;

	int i = 0;

	for (; i < f; i++)
	{
		if (functions[i].c == sa)
			return (functions[i].f);
	}
	return (NULL);
}

