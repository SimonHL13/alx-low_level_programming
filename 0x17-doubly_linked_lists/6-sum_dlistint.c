#include "lists.h"

/**
 * sum_dlistint - sum all data of doubly linked list
 * @head: Pointer to head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int count = 0;

if (!head)
return (count);
while (head)
{
count += head->n;
head = head->next;
}

return (count);
}
