#include <stdio.h>
/**
 *main- Entry point
 *Return: Always 0 (indicating success)
 *Description-testing positive,negative or zero
 */
int main(void)
{
	int d, p;

	for (d = '0'; d <= '8'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
		if (p != d)
			continue;
		putchar('0' + d);
		putchar('0' + p);
		if (d == '8' && p == '9')
			putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

