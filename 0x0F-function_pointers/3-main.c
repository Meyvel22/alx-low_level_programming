#include "3-calc.h"

/**
 * main - checks the code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if there are no errors
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*abc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	abc = get_op_func(argv[2]);

	if (abc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", abc(x, y));
	return (0);
}
