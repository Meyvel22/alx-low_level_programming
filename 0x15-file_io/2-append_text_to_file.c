#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on succes and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fild;
	int lett;
	int aw;

	if (!filename)
		return (-1);

	fild = open(filename, O_WRONLY | O_APPEND);

	if (fild == -1)
		return (-1);

	if (text_content)
	{
		for (lett = 0; text_content[lett]; lett++)
			;

		aw = write(fild, text_content, lett);

		if (aw == -1)
			return (-1);
	}

	close(fild);

	return (1);
}
