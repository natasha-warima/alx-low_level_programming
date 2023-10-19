#include "main.h"
#include "unistd.h"
/**
 * _putchar - write a character, of unsigned char type, to stdout
 * @c: character to be printed
 * Return:printed character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
