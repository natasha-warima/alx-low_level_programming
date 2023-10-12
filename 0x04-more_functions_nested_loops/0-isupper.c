#include <main.h>I
#include <stdio.h>

/* main - entry point
 * description - checks for upper case
 * use _putchar for printing
 *
 * return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}


