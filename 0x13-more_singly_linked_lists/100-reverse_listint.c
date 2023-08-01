#include "lists.h"

/**
 * reverse_listint - Reverses the linked list.
 * @head: A pointer to the pointer to the first node in the linked list.
 *
 * Return: A pointer to the head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
