#include "main.h"
/**
 *main- Entry point
 *Return: Always 0 (indicating success)
 *Description-testing positive,negative or zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('43');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('45');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	_putchar('\n');
}