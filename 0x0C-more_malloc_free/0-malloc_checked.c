#include "main.h"
/**
  * malloc_checked - A function that allocates memory
  * @b: The memory to be allocated
  * Return: Pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}

