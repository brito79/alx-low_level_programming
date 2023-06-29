#include "main.h"
/**
  *_strcat - Concatenates two strings
  * @dest: The string to be concatenated
  * @src: The concatenated string
  *
  * Return: A string which is dest
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		j++;
		i++;
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

