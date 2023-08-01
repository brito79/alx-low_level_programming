#include "lists.h"

/**
  * print_listint - Printint the list
  * @h: The head pointer
  * Return: The number of terms in a singly linked list
  */
size_t print_listint(const listint_t *h)
{
	size_t num_of_terms = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_of_terms++;
		h = h->next;
	}
	return (num_of_terms);
}
