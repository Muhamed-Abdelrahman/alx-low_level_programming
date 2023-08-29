#include "lists.h"

/**
 * add_node_end - count the char
 *
 * @head: is var
 * @str: is var
 *
 * Return: number
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !newhead)
		return (NULL);
	if (str)
	{
		newhead->str = strdup(str);
		if (!newhead->str)
		{
			free(newhead);
			return (NULL);
		}
		newhead->len = _strln(newhead->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = newhead;
	}
	else
		*head = newhead;
	return (newhead);
}
