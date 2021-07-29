#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
unsigned int no_of_nodes;
const list_t *current =  h;

no_of_nodes = 0;

if (h == NULL)
return (no_of_nodes);
while (current != NULL)
{
if (current->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", current->len, current->str);
}
no_of_nodes++;
current = current->next;
}
return (no_of_nodes);
}
