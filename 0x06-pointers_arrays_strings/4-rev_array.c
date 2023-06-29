#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: The first array
 * @n: Number of elements
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

