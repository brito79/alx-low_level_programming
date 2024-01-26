#include "lists.h"
/**
* free_dlistint - Free a linked list
* @head: Pointer to a head struck
* Return: Void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

if (head == NULL)
{
return;
}

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
