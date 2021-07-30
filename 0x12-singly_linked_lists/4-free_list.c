#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Freess a list_t list
 * @head: Pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current;

while (head)
{
current = head->next;
free(head->str);
free(head);
head = current;
}
}
