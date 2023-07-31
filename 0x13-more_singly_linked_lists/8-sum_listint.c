#include "lists.h"

/**
  * sum_listint - Sum of the nodes
  * @head: The head pointer to the starting node.
  * Return: The sum of all node data.
  */
int sum_listint(listint_t *head)
{
	listint_t *temp;

	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
