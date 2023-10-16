#include "main.h"
/**
 * puts_half - half of a string printed
 * if odd = (length_of_the_string - 1) / 2
 * @str: input
 * Return: input halved printed
 */
void puts_half(char *str)
{
	int c, d, longi;

	longi = 0;

	for (c = 0; str[c] != '\0'; c++)
		longi++;

	d = (longi / 2);

	if ((longi % 2) == 1)
		d = ((longi + 1) / 2);

	for (c = d; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}

