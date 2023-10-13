#include "main.h"
/**
 * print_square - entry point
 * @size: square size
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int q, r;

		for (q = 0; q < size; q++)
		{
			for (r = 0; r < size; r++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}

