#include <stdio.h>

/**
 * initial - function that prints before main
 *
 * Return: void
 */

void __attribute__ ((constructor)) initial()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
