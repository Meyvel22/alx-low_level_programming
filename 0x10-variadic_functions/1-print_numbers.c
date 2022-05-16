#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list alist;
	unsigned int x;

	va_start(alist, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(alist, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(alist);
}
