#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at position
 * @h: double pointer to head
 * @idx: index
 * @n: data
 * Return: pointer to new node else null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp, *new;
unsigned int i = 0;

if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
tmp = *h;
while (i < idx - 1)
{
if (tmp == NULL)
return (NULL);
i++;
tmp = tmp->next;
}
if (tmp->next == NULL)
return (add_dnodeint_end(h, n));
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;
new->prev = tmp;
return (new);
}
