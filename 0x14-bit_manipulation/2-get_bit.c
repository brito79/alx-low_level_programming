#include "main.h"
/**
  * get_bit - Printing the bit at a certain given index
  * @n: The number
  * @index: The index where we need to take the integer
  * Return: The value at a certain index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits_total = sizeof(unsigned long int) * 8;
	unsigned long int _mask;
	int bit_value;

	if (index >= bits_total)
	{
		return (-1);
	}
	_mask = 1UL << index;
	bit_value = ((n & _mask) ? 1 : 0);
	return (bit_value);
}


