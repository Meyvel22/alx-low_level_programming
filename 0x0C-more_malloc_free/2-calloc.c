#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array using malloc
 * @nmemb: elements of array
 * @size: bytes of memory
 * Return: NULL if nmemb or size 0 or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		s[x] = 0;

	return (s);
}
