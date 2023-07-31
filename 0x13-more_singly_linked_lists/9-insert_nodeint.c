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
	listint_t *newnode, *temp;

	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;

	for (i = 0; i < idx && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
