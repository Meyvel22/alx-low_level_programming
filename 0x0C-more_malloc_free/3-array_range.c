#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int x;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		array[x] = min;

	return (array);
}
