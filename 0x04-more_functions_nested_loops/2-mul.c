#include "main.h"

/**
 * mul - Multiply two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Product of a and b
 */
int mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 2;
	int b = 3;
	int product = mul(a, b);

	return (product);
}
