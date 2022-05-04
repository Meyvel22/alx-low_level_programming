#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguements
 * @argv: array containing program command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, total;

	total = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	return (total);
}
