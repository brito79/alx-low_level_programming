#include <stdio.h>
/**
 *main- Entry point
 *Return: Always 0 (indicating success)
 *Description-testing positive,negative or zero
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar("%d", n);
	}
	putchar('\n');
	return (0);
}
