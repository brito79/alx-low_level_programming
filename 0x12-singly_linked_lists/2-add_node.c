#include "lists.h"
#include <string.h>
/**
  * add_node - Adding the node at the beginning of a linked list
  * list_t - the struct tpyedef
  * @head: The start address of linked list
  * @str: The pointer to const string in a linked list
  * Return: The address of the added node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}






