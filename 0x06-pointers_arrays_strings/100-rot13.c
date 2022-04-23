#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13
 * @c: string to be utilised
 * Return: encoded string.
 */

char *rot13(char *c)
{
	int x = 0;
	int y = 0;
	char c_alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c_rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; c[x] != '\0'; x++)
	{
		for (y = 0; c_alph[y] != '\0'; y++)
		{
			if (c[x] == c_alph[y])
			{
				c[x] = c_rot13[y];
				break;
			}
		}
	}

	return (c);
}
