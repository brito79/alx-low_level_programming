#include "lists.h"

/**
  * insert_nodeint_at_index - Insert node at a certain position
  * @head: The starting node address container
  * @idx: The position to insert the node
  * @n: The data to be inserted in data section
  * Return: The address of the added node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	temp = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	while (i < idx && temp != NULL)
	{
		temp = temp->next;
		i++;

		if (temp == NULL)
		{
			return (NULL);
		}
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}



