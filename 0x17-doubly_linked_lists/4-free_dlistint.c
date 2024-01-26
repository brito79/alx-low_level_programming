#include "lists.h"
/**
* free_dlistint - Free a linked list
* @head: Pointer to a head struck
* Return: Void
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

if (!head)
{
return;
}
temp = head;

while (head->next != NULL)
{
head = head->next;
free(temp);
temp = head;
}
}
