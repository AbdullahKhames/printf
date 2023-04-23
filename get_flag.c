#include "main.h"
/**
 * get_flag - function to return flag
 * @cha: character
 * @f: pointer to functrion
 * Return: int
 */
int get_flag(char cha, flags_t *f)
{
	int index = 0;

	switch (cha)
	{
		case ' ':
			f->space = 1;
			index = 1;
			break;

		case '#':
			f->hash = 1;
			index = 1;
			break;

		case '+':
			f->plus = 1;
			index = 1;
			break;

	}
	return (index);
}
