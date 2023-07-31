#include "lists.h"

/**
  * reverse_listint - Reverses the linked list
  * @head: The pointer to the first node in linked list
  * Return: The pointer to the head of linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentnode = *head, *prevnode = NULL;

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
