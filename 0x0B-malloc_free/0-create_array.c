#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: unsigned integer
 * @c: character
 * Return: NULL if 0 and pointer to array if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;

	return (s);
}

