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
 * add_node - Adds new node at the beginning of a list_t list
 * @head: Double pointer to head
 * @str: String to store in node
 * Return: Pointer to node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (!head && !str)
return (NULL);

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
new_node->len = s_len(str);

new_node->next = *head;
*head = new_node;
return (*head);
}
