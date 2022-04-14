#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: Always 0.
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a < size; a++)
		{
			for (b = 1; b < size; b++)
			{
				_putchar(' ');
			}
			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}		
