#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generated
 * for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int pass[100];
	int m, sum, o;

	sum = 0;
	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		pass[m] = rand() % 78;
		sum += (pass[m] + '0');
		putchar(pass[m] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			o = 2772 - sum - '0';
			sum += o;
			putchar(o + '0');
			break;
		}
	}

	return (0);
}
















