#include "main.h"

/**
 * flip_bits - To flip the bits of a number
  * @n: The number to be flipped
  * @m: The number that has been flipped
  * Return: Flipped integer
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_flipped_result = n ^ m;
	unsigned int num_of_1s = 0;

	while (xor_flipped_result)
	{
		num_of_1s += xor_flipped_result & 1;
		xor_flipped_result >>= 1;
	}
	return (num_of_1s);
}

