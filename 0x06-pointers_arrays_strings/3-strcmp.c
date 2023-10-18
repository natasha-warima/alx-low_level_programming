#include "main.h"
/**
 * _strcmp - fucntion that compares strings
 * @s1: string compared
 * @s2: string compared
 * Return: comparison of strings s1[c] - s2[c]
 */
int _strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
