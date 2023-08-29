#include "lists.h"

/**
 * add_nodeint_end - count the char
 *
 * @head: is var
 * @n: is var
 *
 * Return: number
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!head || !newhead)
		return (NULL);
	newhead->n = n;
	if (!newhead->n)
	{
		free(newhead);
		return (NULL);
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
