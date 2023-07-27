#include "lists.h"
#include <stdio.h>

/**
  * print_list - calculate the length of linked list
  * @h: The pointer to a struct(head pointer)
  * Return: The count(number of characters in linked list)
  */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}

			temp =  temp->next;
			count++;
	}
	return (count);
}
