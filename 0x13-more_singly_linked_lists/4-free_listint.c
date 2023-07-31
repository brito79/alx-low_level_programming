#include "lists.h"

/**
  * free_listint - Freeing the list
  * @head: The pointer to a first node
  * Return: nil
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
