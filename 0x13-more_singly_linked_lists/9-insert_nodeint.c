#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to head
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0
 * @n: Node value
 * Return: The address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *new;
unsigned int i;

if (*head == NULL && idx != 0)
return (NULL);

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
temp = *head;
for (i = 0; i < idx - 1 && temp != NULL; i++)
{
temp = temp->next;
}

if (temp == NULL)
return (NULL);

new->next = temp->next;
temp->next = new;
return (new);
}
