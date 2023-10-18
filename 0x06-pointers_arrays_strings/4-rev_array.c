#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: reversed content
 */
void reverse_array(int *a, int n)
{
	int d;
	int e;

	for (d = 0; d < n; d++)
	{
		e = a[d];
		a[d] = a[n];
		a[n] = e;
	}
}
