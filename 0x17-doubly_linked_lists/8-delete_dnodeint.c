#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a positon
 * @head: double pointer to head
 * @index: index
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *rm = NULL;

if (head == NULL || *head == NULL)
return (-1);

rm = *head;

if (index == 0)
{
*head = (*head)->next;
free(rm);
if (*head != NULL)
(*head)->prev = NULL;
return (1);
}
while ((index != 0) && (rm->next != NULL))
{
index -= 1;
rm = rm->next;
}
if (index == 0)
{
rm->prev->next = rm->next;
if (rm->next != NULL)
rm->next->prev = rm->prev;
free(rm);
return (1);
}
return (-1);
}
