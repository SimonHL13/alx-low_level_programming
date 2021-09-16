#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node
 * @head: pointer to head
 * @index: nth index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

if (!head)
return (NULL);

while (i < index)
{
head = head->next;
if (head == NULL)
return (NULL);
i++;
}
return (head);
}
