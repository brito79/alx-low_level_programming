#include "search_algos.h"

/**
 * linear_search - The function to search the value
 * @array: Pointer to the first element in the arrary
 * @size: The size of an array
 * @value: The value to search
 *
 * Return: -1 when array is empty
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (array[index]);
		}
	}
	return (-1);
}
