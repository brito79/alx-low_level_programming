#include "main.h"
/**
  * _strncpy - Copy string
  * @dest: Destination file
  * @n: The number of bytes is src
  * @src: Source file
  * Return: Dest as output
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	i = 0;
	while (dest[i] != '\0' && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

