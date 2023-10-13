#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description:prints 1 to 100 but
 * for multiples of 3 replace with
 * Return: 0 (Success)
 */
int main(void)
{
	int g;

	for (g = 1; g <= 100; g++)
	{
		if (g % 3 == 0 && g % 5 != 0)
		{
			printf("Fizz");
		}
		else if (g % 5 == 0 && g % 3 != 0)
		{
			printf("Buzz");
		}
		else if (g % 3 == 0 && g % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (g == 1)
		{
			printf("%d", g);
		}
		else
		printf("%d", g);
	}
	printf("\n");

	return (0);
}
