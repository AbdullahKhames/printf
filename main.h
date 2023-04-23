#ifndef MAIN_H
#define MAIN_H

/*includng C Standard Lib Headers*/
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "khamis.h"

/*structs*/

/**
 * struct flag - struct for flags
 * @plus: +
 * @space: ' '
 * @hash: #
 */

typedef struct flag
{
	int plus;
	int space;
	int hash;
} flags_type;

/***/

typedef struct handle_print
{
	char c;
	int (*f)(va_list args, flags_type *flags);
} printer;

/* Including my own function prototypes*/
int my_printf(const char *format, ...);
int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(char *s);
int _puts(char *s);
#endif
