#include "main.h"
/**
  * _strlen - Calculating length of a string
  * @str - Variable to loop in string containers
  * @s: The characters to be counted
  *
  * Return: Always (success)
  */
int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}
