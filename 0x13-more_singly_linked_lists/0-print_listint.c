#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to head
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *current;
size_t count;

count = 0;
current = h;
if (h == NULL)
return (count);
while (current != NULL)
{
printf("%d\n", current->n);
count++;
current = current->next;
}
return (count);
}
