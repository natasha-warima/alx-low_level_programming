
#include "main.h"

/**
 * char *_strcpy - copies string pointed to by src
 * @dest: copy destination
 * @src: copy departure
 * Return: string copied
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int a = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; a < l ; a++)
	{
		dest[a] = src[a];
	}
	dest[l] = '\0';
	return (dest);
}

