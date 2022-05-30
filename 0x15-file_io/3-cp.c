#include "main.h"

/**
 * main - copy file from one to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int fild1, fild2;
	int len;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fild1 =  open(argv[1], O_RDONLY, 0);
	if (fild1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fild2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fild2 == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((len = read(fild1, buff, 1024)) > 0)
	{
		if (write(fild2, buff, len) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fild1) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fild1), exit(100);
	}
	if (close(fild2) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fild2), exit(100);
	}
	return (0);
}
