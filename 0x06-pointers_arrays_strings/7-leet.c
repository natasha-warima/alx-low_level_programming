#include "main.h"
/**
 * leet - string is encoded
 * @n: string to be encoded
 * Return: string that is encoded
 */
char *leet(char *n)
{
	int l;
	int m;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};
	for (l = 0; n[l] != '\0'; l++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (n[l] == find[m])
			{
				n[l] = replacer[m / 2];
				m = 9;
			}
		}
	}
	return (n);
}
