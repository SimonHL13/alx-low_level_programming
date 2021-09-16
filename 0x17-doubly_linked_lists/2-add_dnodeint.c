#include "lists.h"

/**
 * add_dnodeint - add node at beginning of doubly linked list
 * @head: double pointer to head
 * @n: data of new node
 * Return: pointer to new node else null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

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
new->next = *head;
new->prev = NULL;
(*head)->prev = new;
*head = new;
return (new);

}
