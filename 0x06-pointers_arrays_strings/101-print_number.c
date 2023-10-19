#include "main.h"
/**
 * print_number - function that prints integers
 * @n: integer input
 * Return: printed integer
 */
void print_number(int n)
{
	unsigned int n4;

	n4 = n;

	if (n < 0)
	{
		_putchar('-');
		n4 = -n;
	}
	if (n4 / 10 != 0)
	{
		print_number(n4 / 10);
	}
	_putchar((n4 % 10) + '0');
}
