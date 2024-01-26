#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - Prints the elements of a list
* @h: The pointer to node
* Return: Numbuer of terms
*/

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = NULL;
ssize_t count = 0;

if (h)
{
temp = h;

while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
count++;
}
}
return (count);
}

