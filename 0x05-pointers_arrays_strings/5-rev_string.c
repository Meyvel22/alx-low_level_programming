#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string to be reversed
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int a, b, length;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	b = length - 1;
	a = 0;

	while (b > a)
	{
		v1 = s[a];
		v2 = s[b];
		s[a] = v2;
		s[b] = v1;
		b--;
		a++;
	}
}
