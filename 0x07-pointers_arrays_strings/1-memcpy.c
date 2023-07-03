#include "main.h"
/**
  * _memcpy - Copies text in dest to src
  * @dest: Destination pointer
  * @src: Source file
  * @n: Memory size
  * Return: Dest copied text
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
