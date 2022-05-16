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
	va_list alist;
	unsigned int x;
	char *st;

	va_start(alist, n);

	for (x = 0, x < n; x++)
	{
		st = va_arg(alist, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(alist);
}
