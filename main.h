#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _handlef()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
char *converted_str(unsigned long int num, int base, int lowercase);
int get_flag(char s, flags_t *f);
int (*print_handler(char s))(va_list, flags_t *);
int handle_int(va_list args, flags_t *f);
void handle_number(int n);
int handle_unsigned(va_list args, flags_t *f);
int count_digit(int i);
int handle_hex(va_list args, flags_t *f);
int handle_hex_big(va_list args, flags_t *f);
int handle_binary(va_list args, flags_t *f);
int handle_octal(va_list args, flags_t *f);
int handle_string(va_list args, flags_t *f);
int handle_char(va_list args, flags_t *f);
int handle_rot13(va_list args, flags_t *f);
int handle_rev(va_list args, flags_t *f);
int handle_bigS(va_list args, flags_t *f);
int handle_address(va_list args, flags_t *f);
int handle_percent(va_list args, flags_t *f);
#endif
