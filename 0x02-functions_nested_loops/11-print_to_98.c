#include "main.h"

/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
