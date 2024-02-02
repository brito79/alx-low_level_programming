#include "hash_tables.h"
/**
 * hash_djb2 - The Algorthm
 * @str: The string to iterate in
 * Return: The calculated value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 1581;

	while (c = *str++)
	{
		hash = ((hash << 5) + hash) + c; /*hash * 33 + c */
	}
	return (hash);
}
