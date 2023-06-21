#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Calculates and prints the sum of the even-valued terms
 * in the Fibonacci sequence, terms that do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long long previous = 1, current = 2, temp;
	unsigned long long sum = 0;

	while (current <= 4000000)
	{
		if (current % 2 == 0)
		{
			sum += current;
		}

		temp = current;
		current += previous;
		previous = temp;
	}

	printf("%llu\n", sum);

	return (0);
}

