#include "variadic_functions.h"

/**
 * print_strings - function that prints, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list chara;
	char *c;
	unsigned int x;

	if (separator == NULL)
		separator = "";

	va_start(chara, n);

	for (x = 0; x < n; x++)
	{
		c = va_arg(chara, char *);

		if (c == NULL)
			c = "(nil)";
		printf("%s", c);
		if (x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(chara);
}
