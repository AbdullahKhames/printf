#ifndef KHAMIS_H
#define KHAMIS_H

int handle_int(va_list args, flags_type *flags);
void put_number(int n);
int put_unsigned(va_list args, flags_type *flags);
int counter(int num);
int get_flag(char c, flags_type *flags);
char *convert(unsigned long int num, int base, int lowercase);
#endif
