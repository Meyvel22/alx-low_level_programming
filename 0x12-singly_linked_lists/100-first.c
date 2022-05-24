#include <stdio.h>
#include <stdlib.h>

/**
 * initial - prints a string before main
 *
 * Return: void
 */

void __attribute__ ((constructor)) initial()
{
	printf("You're beat! and yet you must allow,\n");
	printf("I bore my house upon my back!\n");
}
