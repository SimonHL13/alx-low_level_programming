#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Double pointer to head
 * @n: Node value
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *current;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (*head);
}

current = *head;
while (current->next != NULL)
current = current->next;
current->next = new_node;

return (new_node);

}
