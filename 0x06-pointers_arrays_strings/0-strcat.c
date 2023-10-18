#include "main.h"
/**
 * _strcat - chains and interlinks two strings
 * @dest: string being appended
 * @src: string inputted to dest string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
			a++;
			b++;
	}
	dest[a] = '\0';
	return (dest);
}
