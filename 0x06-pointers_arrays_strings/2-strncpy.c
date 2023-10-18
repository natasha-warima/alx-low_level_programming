#include "main.h"
/**
 * _strncpy - copies string upto n bytes
 * @dest: original string
 * @src: string being copied
 * @n: most n bytes that are copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)

{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
