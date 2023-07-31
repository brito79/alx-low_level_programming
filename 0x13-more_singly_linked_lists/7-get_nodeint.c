#include "lists.h"

/**
  * get_nodeint_at_index - To return a pointer to a node at that index in a list
  * @head: The head pointer that points to a starting node
  * @index: The position where the node we want is
  * Return: The pointer to a node at index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		return (NULL);
	}
	return (temp);
}




