#include "main.h"

/**
 * print_sign - Checks the sign of a number
 * @n: The number to be tested
 *
 *Return: 1 when n > 0, -1 when n < 0, otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
