#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Double pointer to head
 * @n: Node value
 * Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

if (!head)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;

return (*head);
}
