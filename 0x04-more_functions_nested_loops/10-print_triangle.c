#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters
 * @size: Number of rows in the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}

		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

