#include "main.h"

/**
 * set_bit - function that sets the valuse of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: the index starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked or -1 if an error ocurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
