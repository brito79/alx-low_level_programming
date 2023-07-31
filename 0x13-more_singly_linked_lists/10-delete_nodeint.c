#include "lists.h"

/**
  * delete_nodeint_at_index - Delete the node at position
  * @head: The pointer to the first node in a linked list
  * @index: The position at which node is to be deleted
  * Return: 1 when successful, 0 failed to deleted
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *nextnode;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		nextnode = (*head)->next;
		free(*head);
		*head = nextnode;
		return (1);
	}

	while (i < index - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL && temp->next == NULL)
	{
		return (-1);
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	return (1);
}
