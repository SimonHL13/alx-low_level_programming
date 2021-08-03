#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to head
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head)
{
current = head->next;
free(head);
head = current;
}
}
