#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode = NULL;
	listint_t *prevnode = NULL;

	while (*head)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}

	*head = prevnode;
	return (*head);
}
