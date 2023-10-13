#include "main.h"
/**
 * print_line - prints line
 * @n: number of times char _ gets printed
 * Description: \n printed if n is zero or less
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
		_putchar('\n');
	}
}
