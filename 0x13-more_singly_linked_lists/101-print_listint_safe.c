#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - The function to print a linked list
 * @head: The pointer to the first node in a linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *temp = head;
    size_t len = 0;

    while (temp != NULL)
    {
        printf("[%p] %d\n", (void *)temp, temp->n);
        len++;

        temp = temp->next;

        if (temp != NULL && temp <= head)
        {
            printf("-> [%p] %d\n", (void *)temp, temp->n);
            exit(98);
        }
    }

    return (len);
}

