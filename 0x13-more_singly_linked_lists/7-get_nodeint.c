#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Finds the nth node of a listint_t linked list.
 * @head: Pointer to head
 * @index: Index of the node
 * Return: Nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
return (NULL);
i = 0;
while (i < index)
{
head = head->next;
if (head == NULL)
return (NULL);
i++;
}
return (head);

}
