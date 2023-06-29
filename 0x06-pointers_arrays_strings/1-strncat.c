#include "main.h"

/**
 * _strncat - Concatenates strings
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: Pointer to the resulting concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int size = 0;
	int dest_len = 0;
	int i = 0;

	while (dest[size] != '\0')
	{
		size++;
		dest++;
	}

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (i < n && src[i] != '\0' && dest_len < (size - 1))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}

