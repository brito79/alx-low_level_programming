#include "lists.h"

/**
  * listint_len - Print length of list
  * @h: The head pointer
  * Return: The number of terms in a singly linked list
  */
size_t listint_len(const listint_t *h)
{
	unsigned int num_of_terms = 0;
	struct listint_s const *temp = NULL;

	temp = h;

	while (temp != NULL)
	{
		num_of_terms++;
		temp = temp->next;
	}
	return (num_of_terms);
}
