#include "main.h"
/**
 *main- Entry point
 *Return: Always 0 (indicating success)
 *Description-testing positive,negative or zero
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n++;
	}
	}
	_putchar('\n');
}
