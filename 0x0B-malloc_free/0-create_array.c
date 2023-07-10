#include "main.h"
#include <stdlib.h>

/**
  * create_array - Creates an array of characters
  * @size: size of characters
  * @c: the constant character to be inserted
  * Return: pointer to array of  characters
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char* s = malloc(size * sizeof(unsigned int));

	while (i < size)
	{
		if (s == NULL)
		{
			return (NULL);
		}
		if (size == 0)
		{
			return (0);
		}
		i++;
		s[i] = c;
	}
	return (s);
}


