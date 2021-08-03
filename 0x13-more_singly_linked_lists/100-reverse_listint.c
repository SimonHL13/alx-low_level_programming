#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to head
 * Return: Pointer to new head(old tail)
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;

next = NULL;
prev = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;

return (*head);
}
