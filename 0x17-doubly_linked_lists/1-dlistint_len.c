#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - count elements in doubly linked list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
