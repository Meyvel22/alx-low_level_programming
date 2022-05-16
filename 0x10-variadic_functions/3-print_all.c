#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of all types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list alist;
	unsigned int x;
	char *y, *separator;

	va_start(alist, format);

	separator = "";

	x = 0;
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", separator, va_arg(alist, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(alist, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(alist, double));
			case 's':
				s = va_arg(alist, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				x++;
				continue;
		}
		separator = ", ";
		x++;
	}

	printf("\n");
	va_end(alist);
}

