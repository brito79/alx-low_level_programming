#include "main.h"
#include <math.h>

/**
  * _pow_recursion - Power x to y
  * @x: Number tocarry power
  * @y: The power
  * Return: the int of x pow y.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
