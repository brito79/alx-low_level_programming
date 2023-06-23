#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which the times table is printed.
 *
 * If n is greater than 15 or less than 0, the function does nothing.
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}

	for (int i = 0; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}
}

/**
 * main - Entry point of the program.
 *
 * Prompts the user to enter a number between 0 and 15 and
 * calls the print_times_table function with the user's input as the argument.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;

	printf("Enter a number between 0 and 15: ");
	scanf("%d", &number);

	print_times_table(number);

	return (0);
}

