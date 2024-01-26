#include "lists.h"
/**
* add_dnodeint_end - Add node at the end
* @head: Pointer to head
* @n: Vlue to put in node
* Return: The pointer to the inserted node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = NULL;
dlistint_t *new_node;

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
temp = (*head);

while (temp->next != NULL)
{
temp = temp->next;
}
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

if (new_node == NULL)
{
return (NULL);

}
new_node->n = n;
new_node->next = NULL;
new_node->prev = temp;
temp->next = new_node;
return (new_node);

}
