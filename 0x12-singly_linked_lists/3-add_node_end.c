#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * s_len - Get length of string
 * @s: Pointer to string
 * Return: Length of s
 */
unsigned int s_len(const char *s)
{
unsigned int i;

for (i = 0; s[i] != '\0'; i++)
;
return (i);
}

/**
 * add_node_end - Adds new node at the end of a list_t list
 * @head: Double pointer to head
 * @str: String to store in node
 * Return: Pointer to node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *current;

if (str == NULL)
return (NULL);

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = s_len(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
return (new);

}
