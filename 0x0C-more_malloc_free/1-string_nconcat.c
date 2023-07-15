#include "main.h"
/**
  * string_nconcat - Concatenates two strings
  * @s1: First string
  * @s2: Secong string
  * @n: Number of characters
  * Return: The array of concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int i = 0;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (array);
	}

	while (*s2 != '\0')
	{
		len1++;
		s2++;
	}
	return (len1);

	while (*s1 != '\0')
	{
		len2++;
		s1++;
	}
	return (len2);

	int total_len = len1 + len2 + 1;

	array = malloc(sizeof(char) * total_len);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		array[i] = *s1;
	}
	for (i = 0; i < n; i++)
	{
		array[i] = *s2;
		if (n >= len2)
		{
			array[i] = *s2;
		}
	}
	array[i] = '\0';
	return (array);
}

}







