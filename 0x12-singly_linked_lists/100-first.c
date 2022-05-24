#include <stdio.h>
#include <stdlib.h>

void print(void) __attribute__((constructor));
/**
 * print - prints a string before main
 *
 * Return: void
 */

void print(void)
{
	printf("You're beat! and yet you must allow,\n");
	printf("I bore my house upon my back!\n");
}
