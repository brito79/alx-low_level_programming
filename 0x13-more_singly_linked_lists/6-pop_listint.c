#include "lists.h"

/**
  * pop_listint - The function to delete head node
  * @head: The pointer to the head node
  * Return: The value in deleted head node
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int node_term;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	node_term = temp->n;
	free(temp);
	return (node_term);
}



