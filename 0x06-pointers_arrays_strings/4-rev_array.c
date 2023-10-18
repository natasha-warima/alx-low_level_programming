#include "main.h"
/**
 * reverse_array - array of integers reversed
 * @n: number of elements
 * @a: array to be reversed
 * Return: pointer
 */
void reverse_array(int *a, int n)
{
	int f;
	int g;

	for (f = 0; f < n; f++)
	{
		n--;
		g = a[f];
		a[f] = a[n];
		a[n] = g;
	}
}
