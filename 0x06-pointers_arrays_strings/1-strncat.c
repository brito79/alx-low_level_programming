#include "main.h"
/**
  * *_strncat - Copies a string to dest
  * @dest: The destination pointers
  * @src: The source file
  * @n: The number of terms in src
  * Return: The copied characters
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	i = 0;
	while (i < n && src[i] != '\0')
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



