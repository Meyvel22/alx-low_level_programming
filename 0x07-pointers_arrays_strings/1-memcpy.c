#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: memory area destination
 * @src: memory area origin
 * @n: bytes of memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned in x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
