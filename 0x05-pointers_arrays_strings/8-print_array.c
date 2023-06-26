#include "main.h"

/**
 * print_array - Prints the n number of elements in an array
 * @a: An array
 * @n: The number of terms
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}

