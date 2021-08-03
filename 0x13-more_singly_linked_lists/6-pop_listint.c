#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Double pointer to head
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *saved_head;
listint_t *next_node;
int data;

if (*head == NULL)
return (0);

saved_head = *head;
data = (*head)->n;
next_node = (*head)->next;
*head = next_node;
free(saved_head);

return (data);
}
