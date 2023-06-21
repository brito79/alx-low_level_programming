#include "main.h"
/**
  * _isalpha - Checks for alphabet character
  * @c: The character to be checked
  *
  *Return: 1 when c is lower or uppercase, otherwise 0
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
