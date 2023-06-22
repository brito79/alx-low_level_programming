#include "main.h"

/**
  * _isupper - The function to check c uppercase
  * @c: The character to be checked
  *
  *Return: 1 when uppercase,otherwise 0
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
