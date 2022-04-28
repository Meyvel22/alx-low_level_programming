#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * ipalin - compares each character of string
 * @s: string
 * @x: first integer
 * @y: last integer
 * Return: 0 if not palindrome, 1 if palindrome
 */
int ipalin(char *s, int x, int y)
{
	if (x < y && s[x] == s[y])
	{
		return (ipalin(s, x + 1, y - 1));
	}
	if (s[x] != s[y])
	{
		return (0);
	}
	return (1);
}

/**
 * is_palindrome - returns 1 if string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (ipalin(s, 0, _strlen_recursion(s) - 1));
}
