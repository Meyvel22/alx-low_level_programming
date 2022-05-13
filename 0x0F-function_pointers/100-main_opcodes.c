#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, ybytes;
	char *abc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	ybytes = atoi(argv[1]);

	if (ybytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < ybytes; x++)
	{
		printf("%02hhx", *(*abc + x));
		if (x < ybytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
