#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums of all the data (n) of a listint_t linked list.
 * @head: Pointer to head
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
int sum;

sum = 0;
if (!head)
return (sum);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
