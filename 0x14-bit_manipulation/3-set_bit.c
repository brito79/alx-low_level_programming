#include "main.h"

/**
  * set_bit - To set a bit to 1 at a certain index
  * @n: The pointer to binary representation on a number
  * @index: The position toset the bit 1
  * Return: 1 when successful , 0 on fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int total_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= total_bits)
	{
		return (-1);
	}
	mask = 1UL << index;
	if ((*n & mask) != 0)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}

