#include "lists.h"

/**
  * reverse_listint - Reverses the linked list
  * @head: The pointer to the first node in linked list
  * Return: The pointer to the head of linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curnode, *prevnode, *nextnode;

	prevnode = NULL;

	curnode = nextnode = *head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		curnode->next = prevnode;
		prevnode = curnode;
		curnode = nextnode;
		curnode = nextnode;
	}
	*head = prevnode;
	return (*head);
}
