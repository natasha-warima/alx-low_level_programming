#include "main.h"
/*
 * _isupper - check for uppercase character
 * @c: variable text
 * return: Always 0
 * description - checks for upper case
 * use _putchar for printing
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
