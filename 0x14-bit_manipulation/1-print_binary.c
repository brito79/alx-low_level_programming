#include "main.h"

/**
  * print_binary - Print the binary presentation ofa number
  * @n: The number which binary representation to be printed
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int the_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (the_mask)
	{
		if ((n & the_mask))
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		the_mask >>= 1;

	}
	if (!flag)
	{
		_putchar('0');
	}
}

