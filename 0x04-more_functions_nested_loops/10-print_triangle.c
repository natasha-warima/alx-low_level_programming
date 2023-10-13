#include "main.h"

/**
 * print_triangle - entry point
 * Description: prints triangle
 * @size: triangle size
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int w, r;

		for (w = 1; w <= size; w++)
		{
			for (r = w; r < size; r++)
			{
				_putchar(' ');
			}

			for (r = 1; r <= w; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
