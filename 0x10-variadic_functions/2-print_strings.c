#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list character;
	char *str;
	unsigned int x;

	va_start(character, n);

	for (x = 0, x < n; x++)
	{
		str = va_arg(character, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(character);
}
