#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
{
return;
}

while (head && head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}
