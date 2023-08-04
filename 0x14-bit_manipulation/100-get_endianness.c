#include "main.h"
/**
  * get_endianness - Checks the endianness of a number
  * Return: The value Endianness
  */
int get_endianness(void)
{
	unsigned int val = 1;

	char *ch = (char *) &val;

	return (*ch);
}
