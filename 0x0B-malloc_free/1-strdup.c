#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to string
 * Return: pointer to string if success and NULL if str=NULL
 */

char *_strdup(char *str)
{
	int x;
	char *s1;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
	;
	x++;
	s1 = malloc(sizeof(char) * x);

	if (s1 == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		s1[x] = str[x];
	s1[x] = '\0';
	return (s1);
}
