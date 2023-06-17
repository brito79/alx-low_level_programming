#include <stdio.h>
/**
 *main- Entry point
 *Return: Always 0 (indicating success)
 *Description-testing positive,negative or zero
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
