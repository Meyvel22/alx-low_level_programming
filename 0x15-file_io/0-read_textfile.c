#include "main.h"

/**
 * read_textfile - function that reads a text file and prints to the POSIX
 * @filename: pointer to the name of file
 * @letters: characters to be printed
 *
 * Return: the actual number of letters it should read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fild;
	ssize_t nr, nw;
	char *buff;

	if (!filename)
		return (0);

	fild = open(filename, O_RDONLY);

	if (fild == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nr = read(fild, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);

	close(fild);

	free(buff);

	return (nw);
}
