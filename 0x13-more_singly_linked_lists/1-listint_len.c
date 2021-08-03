#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to head
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
const listint_t *current;
size_t count;

count = 0;
current = h;
if (h == NULL)
return (count);
while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
