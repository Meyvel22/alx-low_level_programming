#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int con;

	if (!b)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '1' && b[x] != '0')
			return (0);
	}
	for (con = 0; *b; b++)
	{
		if (*b == '1')
			con = (con << 1) | 1;
		else if (*b == '0')
			con <<= 1;
		else
			break;
	}
	return (con);
}
