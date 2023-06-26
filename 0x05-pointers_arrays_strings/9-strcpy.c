#include "main.h"

/**
 * _strcpy - Copies a string from source to destination
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

