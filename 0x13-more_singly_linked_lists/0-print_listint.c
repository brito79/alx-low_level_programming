#include "lists.h"

/**
  * print_listint - Printint the list
  * @h: The head pointer
  * Return: The number of terms in a singly linked list
  */
size_t print_listint(const listint_t *h)
{
	unsigned int num_of_terms = 0;
	listint_t const *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		num_of_terms++;
		temp = temp->next;
	}
	return (num_of_terms);
}
