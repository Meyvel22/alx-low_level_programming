#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguements
 * @argv: array containing program command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
