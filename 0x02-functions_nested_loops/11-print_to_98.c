#include "main.h"

/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			{
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				n++;
			}
		}
		_putchar('\n');
	}
}
