#include "main.h"

/**
 * _atoi - a string converted to an integer
 * @s: string to be converted
 * Return: the string converted from integer
 */
int _atoi(char *s)
{
	int r, t, u, len, v, digit;

	r = 0;
	t = 0;
	u = 0;
	len = 0;
	v = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (r < len && v == 0)
	{
		if (s[r] == '-')
			++t;

		if (s[r] >= '0' && s[r] <= '9')
		{
			digit = s[r] - '0';
			if (t % 2)
				digit = -digit;
			u = u * 10 + digit;
			v = 1;
			if (s[r + 1] < '0' || s[r + 1] > '9')
				break;
			v = 0;
		}
		r++;
	}

	if (v == 0)
		return (0);

	return (u);
}
