#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 with comms and spaces
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	while (c < 10)
	{
	putchar(48 + c);
	if (c != 9)
	{
	putchar(',');
	putchar(' ');
	}
	c++;
	}
	putchar('\n');
	return (0);
}
