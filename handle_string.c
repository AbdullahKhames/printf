#include "main.h"

/***/

int handle_string(char *s)
{
	int len = 0, index = 0;
	
	if (s)
	{
		while (s[index] != '\0')
		{
			_putchar(s[index]);
			len++;
		}
	}
	return (len);
}
