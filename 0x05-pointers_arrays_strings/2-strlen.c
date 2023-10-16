#include "main.h"
/**
 * _strlen - length of string retuned
 * @s: string
 * Return:Length of string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return(longi);
}
