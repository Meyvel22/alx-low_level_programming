#include "main.h"

/**
 * *_strstr - function that locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: a pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	while (*haystack != '\0')
	{
		x = 0;
		while (*haystack == *needle && *haystack != '\0' && needle != '\0')
			haystack++, needle++, x++;
		if (*needle == '\0')
			return (haystack - x);
		haytack -= (x - 1), needle -= k;
	}
	return ('\0');
}
