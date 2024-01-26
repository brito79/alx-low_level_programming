#include "lists.h"
/**
* add_dnodeint - Adds new node at the beginning
* @head: The point to head node
* @n: The elements to add
* Return: Pointer to inserted head node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = NULL;

if (!*head)
{
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);

}
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
(*head) = new_node;
return (*head);
}
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);

}
new_node->n = n;
new_node->next = NULL;
new_node->next = (*head);
(*head)->prev = new_node;
(*head) = new_node;

return (*head);
}
