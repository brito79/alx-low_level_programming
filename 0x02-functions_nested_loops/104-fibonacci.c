#include <stdio.h>

/**
 * print_fibonacci_sequence - Prints the Fibonacci to a given number.
 * @n: The number of Fibonacci numbers to print.
 *
 * The function calculates and prints sequence up to the given number.
 * The numbers are separated by commas and a space.
 * It does not use long long, malloc, pointers, arrays/tables, or structures.
 */
void print_fibonacci_sequence(int n)
{
	unsigned long current = 1, previous = 0, temp;
	int count = 0;

	while (count < n)
	{
		if (count > 0)
		{
			printf(", ");
		}
		printf("%lu", current);

		temp = current;
		current += previous;
		previous = temp;

		count++;
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Calls the print_fibonacci_sequence function with the value 98
 * to print the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fibonacci_sequence(98);

	return (0);
}

