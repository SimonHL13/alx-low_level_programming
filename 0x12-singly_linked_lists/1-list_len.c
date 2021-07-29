#include <stdio.h>
#include "lists.h"

/**
 * list_len - Calcs the number of elements of a list_t list
 * @h: Pointer to list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
unsigned long int no_of_nodes;
const list_t *current =  h;

no_of_nodes = 0;

if (h == NULL)
return (no_of_nodes);
while (current != NULL)
{
no_of_nodes++;
current = current->next;
}
return (no_of_nodes);
}
