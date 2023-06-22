#include "main.h"

/**
  * _isdigit - Checks for a digit
  * @c: Digit to be checked
  *
  * Return: 1 when found, otherwise 0
  */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
