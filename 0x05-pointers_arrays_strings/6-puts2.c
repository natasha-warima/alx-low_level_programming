#include "main.h"
/**
 * puts2 - prints first character
 * @str: input
 * Return: prints first char
 */
void puts2(char *str)
{
	int longi = 0;
	int f = 0;
	char *y = str;
	int g;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	f = longi - 1;
	for (g = 0 ; g <= f; g++)
	{
		if (g % 2 == 0)
	{
		_putchar(str[g]);
	}
	}
	_putchar('\n');
}

