#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Double pointer to head
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
return;
while (*head)
{
current = (*head)->next;
free(*head);
*head = current;
}
*head = NULL;
}
