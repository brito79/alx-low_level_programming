#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: The pointer to the first node in the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 on success, -1 if the node couldn't be deleted.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;

	while (i < index - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	return (1);
}

