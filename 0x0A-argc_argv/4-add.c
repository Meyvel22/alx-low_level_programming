#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguements
 * @argv: array containing program command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < 48 || argv[x][y] > 57)
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
