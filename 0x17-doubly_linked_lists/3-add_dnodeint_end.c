#include "lists.h"

/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: double pointer to head
 * @n: data of new node
 * Return: pointer to new node else null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;

if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
{
free(new);
return (NULL);
}
new->n = n;
if (*head == NULL)
{
new->next = NULL;
new->prev = NULL;
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;
new->next = NULL;
return (new);

}
