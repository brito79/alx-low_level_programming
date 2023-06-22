#include <stdio.h>

/**
 * largestPrimeFactor - Finds the largest prime factor of a number
 * @number: The number to find the largest prime factor of
 *
 * Return: The largest prime factor
 */
unsigned long largestPrimeFactor(unsigned long number)
{
	unsigned long factor = 2;

	while (factor * factor <= number)
	{
		if (number % factor == 0)
		{
			number /= factor;
		}
		else
		{
			factor++;
		}
	}

	return (number);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largestPrime = largestPrimeFactor(number);

	printf("%lu\n", largestPrime);

	return (0);
}
