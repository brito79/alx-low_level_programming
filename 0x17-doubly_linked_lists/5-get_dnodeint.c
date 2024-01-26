#include "lists.h"
/**
* get_dnodeint_at_index - Retrieving node at a given index
* @index: The position of a node
* @head: The had to list
* Return: Pointer to linked list at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = NULL;
unsigned int i = 0;

if (head == NULL)
{
return (NULL);
}
temp = head;

while (i < index)
{
temp = temp->next;

if (temp == NULL)
{
return (NULL);
}
i++;
}
return (temp);
}
