#include <stdio.h>

/**
 * largestPrimeFactor - Finds the largest prime factor of a number
 * @number: The number to find the largest prime factor of
 *
 * Return: The largest prime factor
 */
long largestPrimeFactor(long number)
{
	long factor = 2;

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
	long number = 612852475143;
	long largestPrime = largestPrimeFactor(number);

	printf("The largest prime factor of %ld is %ld\n", number, largestPrime);

	return (0);
}

