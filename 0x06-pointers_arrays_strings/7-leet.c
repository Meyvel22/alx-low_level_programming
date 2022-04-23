#include "main.h"

/**
 * *leet - writes a function that encodes a string to 1337
 * @c: string to encode
 * Return: encoded string
 */

char *leet(char *c)
{
	int x = 0;
	int y = 0;
	char c_low[] = {'a', 'e', 'l', 'o', 't'};
	char c_up[] = {'A', 'E', 'L', 'O', 'T'};
	char c_num[] = {'4', '3', '1', '0', '7'};

	while (c[x] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (c[x] == c_low[y] || c[x] == c_up[y])
				c[x] = c_num[y];
		}
		x++;
	}

	return (c);
}
