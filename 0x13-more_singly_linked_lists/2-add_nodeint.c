#include "lists.h"

/**
  * add_nodeint - Adding the node at the beginning
  * @head: The pointer to the starting node of a linked list
  * @n: The number or data in a linked list
  * Return: The pointer to a newly created node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}

