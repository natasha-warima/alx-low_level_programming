#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: number to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int s, i;

		for (s = 0; s < n; s++)
		{
			for (i = 0; i < n; i++)
			{
			if (s == i)
			_putchar('\\');
			else if (i < s)
			_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
