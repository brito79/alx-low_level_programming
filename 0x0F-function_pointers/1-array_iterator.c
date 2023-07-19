#include "function_pointers.h"

/**
  * array_iterator - executes a fuction given as a parameter
  * @array: Array containing elements
  * @size: Size of an array
  * @action: The fuctions that redirects args to other functions
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)(size); i++)
	{
		action(array[i]);
	}
}


