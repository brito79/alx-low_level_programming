#include <stdio.h>
/**
 * Generates the Fibonacci sequence up to the given number of terms and prints them.
   Parameters:
 *  - n: The number of Fibonacci terms to generate and print.
 */

void fibonacci_sequence(int n)
{
	int fib_seq[n];

	fib_seq[0] = 1;
	fib_seq[1] = 2;

	for (int i = 2; i < n; i++)
	{
		fib_seq[i] = fib_seq[i - 1] + fib_seq[i - 2];
	}

	printf("%d", fib_seq[0]);
	for (int i = 1; i < n; i++)
	{
		printf(", %d", fib_seq[i]);
	}
	printf("\n");
}

int main(void)
	/**
	  * main - Entry point
	  *
	  */
{
	int n = 50;

	fibonacci_sequence(n);

	return (0);
}

