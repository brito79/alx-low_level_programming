#include "lists.h"

/**
 * reverse_listint - Reverses the linked list.
 * @head: A pointer to the pointer to the first node in the linked list.
 *
 * Return: A pointer to the head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL;
	listint_t *currentnode = *head;

	while (currentnode != NULL)
	{
		*head = currentnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = *head;
	}

	*head = prevnode;
	return (*head);
}

