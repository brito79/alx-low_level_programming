#include "main.h"
/**
 *main- Entry point
 *Return: Always 0 (indicating success)
 *Description-testing positive,negative or zero
 */
int print_last_digit(int num1)
{
	int last;

	last = num1%10;
	if (last < 0);
	{
		_putchar(-last + 48);
		return(-last);
	}
	else
	{
		_putchar(last + 48);
		return(last);
	}
}

