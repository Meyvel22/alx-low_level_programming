#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input array
 * @size: size of array
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int x, y, sum1 = 0, sum2 = 0;

	for (y = 0, x = size - 1; y < (size * size); y += size + 1, x += size - 1)
		sum1 += a[y], sum2 += a[x];
	printf("%d, %d\n", sum1, sum2);
}
