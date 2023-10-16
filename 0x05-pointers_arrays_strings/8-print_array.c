#include "main.h"

/**
 * print_array - n elements of an array printed
 * @a: array name
 * @n: is the number of elements printed
 * Return: a and n printed
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
		if (b == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

