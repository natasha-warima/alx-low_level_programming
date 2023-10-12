#include "main.h"
/**
 * _isupper - define if char is uppercase
 * @c: variable text
 * Return: 0(Success)
 */
/*
 * description - program checks for upper case
 * use _putchar for printing
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
