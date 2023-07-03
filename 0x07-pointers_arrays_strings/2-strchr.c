#include "main.h"

/**
 * _strchr - Checks occurrence of the first character c
 * @s: The string to check for c
 * @c: The character to be checked
 *
 * Return: Pointer to the first occurrence of character c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}

