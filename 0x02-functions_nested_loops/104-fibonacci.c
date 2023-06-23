#include <stdio.h>

/**
 * print_fibonacci_sequence - Prints Fibonacci sequence
 * @n: Number up to which Fibonacci sequence is printed.
 *
 * Calculates and prints Fibonacci sequence up to given number.
 * Also calculates sum of even-valued terms.
 * Numbers are separated by commas and a space.
 */
void print_fibonacci_sequence(unsigned long n)
{
	unsigned long prev = 1, curr = 2;
	unsigned long fib;
	unsigned long sum = 2; /* Starting with initial even term (2) */

	printf("%lu, %lu", prev, curr);

	while (curr <= n)
	{
		fib = prev + curr;

		if (fib % 2 == 0)
			sum += fib;

		printf(", %lu", fib);

		prev = curr;
		curr = fib;
	}

	printf("\nSum of even-valued terms: %lu\n", sum);
}

/**
 * main - Entry point of program.
 *
 * Calls print_fibonacci_sequence function with value 4000000
 * to print Fibonacci sequence up to 4,000,000 and calculate
 * sum of even-valued terms.
 *
 * Return: 0 on success.
 */
int main(void)
{
	print_fibonacci_sequence(4000000);

	return (0);
}

