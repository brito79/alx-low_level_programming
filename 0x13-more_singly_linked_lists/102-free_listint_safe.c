#include "lists.h"

/**
  * free_listint_safe - Free the linked list
  * @h: The pointer to the starting node
  * Return: The num of node
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *currentnode;
	size_t num = 0;

	while (*h)
	{
		currentnode = *h;
		*(h) = (*h)->next;
		printf("[%p]%d\n", (void *)currentnode, (*h)->n);
		num++;
		free(currentnode);
	}
	*h = NULL;
	return (num);
}
