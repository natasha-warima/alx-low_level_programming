#include "main.h"
/**
 * _puts - string is printed followed
 * by new line
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
