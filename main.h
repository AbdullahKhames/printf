#ifndef MAIN_H
#define MAIN_H

/*includng C Standard Lib Headers*/
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*structs*/

/**
 * struct flag - struct for flags
 * @plus: +
 * @space: ' '
 * @hash: #
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct handleprint - struct
 * @c: character
 * @f: pointer to function
 */

typedef struct handleprint
{
	char c;
	int (*f)(va_list args, flags_type *flags);
} printer;
/* Including my own function prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int handle_string(va_list args, flags_t *f);
int (*print_handler(char cha))(va_list, flags_t *f);
int handle_int(va_list args, flags_type *f);
int handle_unsigned(va_list args, flags_t *f);
int handle_count(int x);
int handle_hex(va_list args, flags_t *f);
int handle_big_hex(va_list args, flags_t *f);
int handle_binary(va_list args, flags_t *f);
int handle_octal(va_list args, flags_t *f);
int handle_char(va_list args, flags_t *f);
int handle_rot13(va_list args, flags_t *f);
int handle_rev(va_list args, flags_t *f);
int handle_big_string(va_list args, flags_t *f);
int handle_address(va_list args, flags_t *f);
int handle_percent(va_list args, flags_t *f);
int handle_number(int y);
int get_flag(char cha, flags_type *f);
char *converted_str(unsigned long int number, int base, int lowercase);

#endif
