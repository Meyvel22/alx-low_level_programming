#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;
	int lenght;

	for (length = 0; s[length] != '\0'; length++)
	{
		_putchar('\n');
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
