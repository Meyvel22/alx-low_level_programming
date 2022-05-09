#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned integer
 * Return: Pointer to allocated memory of s1 + nbytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length = n, x;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
		length++;

	cat = malloc(sizeof(char) * (length + 1));

	if (!cat)
		return (NULL);

	length = 0;

	for (x = 0; s1[x]; x++)
		cat[length++] = s1[x];
	for (x = 0; s2[x] && x < n; x++)
		cat[length++] = s2[x];
	cat[length] = '\0';

	return (cat);
}
