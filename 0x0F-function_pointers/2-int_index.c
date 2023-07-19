#include "function_pointers.h"
/**
  * int_index - Finding the element match
  * @array: The arrary containing elements
  * @size: The size of an array
  * @cmp: The fuction pointer to fuctions that use args given here.
  * Return: 0 no match, -1 when size <= 0,index when successful
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}






