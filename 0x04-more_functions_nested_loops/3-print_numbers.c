#include "main.h"
/**
 * print_numbers - numbers printed
 * Return: The numbers between 0 and 9
 * Description: use _putchar to print
 */

void print_numbers(void)
{

char n;

for (n = '0'; n <= '9'; n++)
{
_putchar(n);
}
_putchar('\n');
}
