#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @num1: The number to be checked
 *
 * Return: -last when negative, otherwise positive
 */
int print_last_digit(int num1)
{
	int last;

	last = num1 % 10;
	if (last < 0)
	{
		_putchar(-last + '0');
		return (-last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
}

