#include "lists.h"
/**
* insert_dnodeint_at_index - Insert node at a given index
* @h: Head pointer
* @idx: Position to put
* @n: Value to be inserted
* Return: Pointer to new inserted node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = NULL;
unsigned int i = 0;
dlistint_t *new_node;

if (*h == NULL)
{
return (NULL);
}
temp = *h;

while (i < idx - 1)
{
temp = temp->next;
i++;
}
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
temp->next->prev = new_node;
new_node->next = temp->next;
temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
