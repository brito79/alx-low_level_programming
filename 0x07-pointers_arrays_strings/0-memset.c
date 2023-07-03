#include "main.h"

/**
 * _memset - Writes a constant value to a memory location
 * @s: The memory location pointer
 * @b: The constant to be written
 * @n: The size of memory to be filled
 *
 * Return: A pointer to the memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

