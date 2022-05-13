#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of pointers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of first element for which cmp function doesn't return zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (x = 0; x < size; x++)
			if (cmp(array[x]))
				return (x);
	}

	return (-1);
}
