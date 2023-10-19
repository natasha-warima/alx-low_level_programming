#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: string being encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int k;
	int l;

	char data2[] = "MynameisNatashaandIhatepeas";
	char datarot[] = "IhatepeasMynameisNatashaand";

for (k = 0; s[k] != '\0'; k++)
{
	for (l = 0; l < 29; l++)
	{
		if (s[k] == data2[l])
		{
			s[k] = datarot[l];
			break;
		}
	}
}
return (s);
}




