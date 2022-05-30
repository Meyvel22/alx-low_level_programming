#include "main.h"

/**
 * create_file - function that createsw a file
 * @filename: name of the file to create
 * @text_content: Null terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fild;
	int let;
	int cw;

	if (!filename)
		return (-1);

	fild = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fild == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let = 0; text_content[let]; let++)
		;

	cw = write(fild, text_content, let);

	if (cw == -1)
		return (-1);

	close(fild);

	return (1);
}
