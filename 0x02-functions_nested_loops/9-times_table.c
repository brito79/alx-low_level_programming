#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int count, product;

	for (count = 0; count <= 9; count++)
	{
		for (product = 0; product <= 9; product++)
		{
			int result = count * product;

			if (product != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			if (result >= 10)
				_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}

