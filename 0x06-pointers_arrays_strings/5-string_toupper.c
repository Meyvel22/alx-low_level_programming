#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @c: string to utilize
 * Return: string.
 */
char *string_toupper(char *c)
{
	int x;

	x = 0;
	while (c[x] != '\0')
	{
		if (c[x] >= 97 && c[x] <= 122)
			c[x] = c[x] - 32;
		x++;
	}
	return (c);
}
