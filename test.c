#include "main.h"

int main (void)
{
	int r,r1;

	char name[] = "alsdmklamsd";
	_putchar(name[4]);
	_putchar('\n');

	r = my_printf("hhello world\n%c\n%s\n", 'w', "khamiss");
	printf("%d\n", r);
	puts("\n-------------------------------\n");
	r1 = printf("hhello world\n%c\n%s\n", 'w', "khamiss");
	printf("%d\n", r1);
	return (0);
}
