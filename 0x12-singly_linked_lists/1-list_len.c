#include "lists.h"
/**
  * list_len - Calculates the length of a linked list
  * @h: The pointer toa linked list
  * Return: Thenumber of character in a list
  */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}


