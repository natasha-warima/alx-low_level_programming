#include <math.h>
#include <stdio.h>
/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int max;
	long int n;
	long int t;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (t = 3; t <= sqrt(n); t = t + 2)
	{
		while (n % t == 0)
		{
			max = t;
			n = n / t;
		}
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);
	return (0);
}

