#include "main.h"

/**
 * iprime - Evaluates from 1 to n
 * @x: input integer
 * @y: iterated integer
 * Return: 1 if prime and 0 if not prime
 */

int iprime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (iprime(x, y + 1));
}

/**
 * is_prime_number - returns 1 if integer is prime, otherwise 0
 * @n: integer
 * Return: 1 if n is prime. 0 if n is not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (iprime(n, 2));
}
