#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Adds a new node at the end of a linked list
* @head: Pointer to the pointer of the head node
* @str: The string to store in the new node
* Return: The address of the new node, or NULL on failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *temp;
unsigned int i = 0;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);

newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
newnode->len = 0;

while (str[i] != '\0')
{
i++;
newnode->len++;
}

newnode->next = NULL;

if (*head == NULL)
{
*head = newnode;
return (newnode);
}

temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = newnode;
return (newnode);
}

