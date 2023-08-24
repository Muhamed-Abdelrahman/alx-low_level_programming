#include "lists.h"

/**
 * list_len - count the char
 *
 * @head: is var
 * @str: is var
 *
 * Return: number
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));

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
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
