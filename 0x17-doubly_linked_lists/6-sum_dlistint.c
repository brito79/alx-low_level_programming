#include "lists.h"
/**
* sum_dlistint - Sum of n in list
* @head: The poiner to the node
* Return: Sum
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int sum = 0;

if (head == NULL)
{
return (0);
}

temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
