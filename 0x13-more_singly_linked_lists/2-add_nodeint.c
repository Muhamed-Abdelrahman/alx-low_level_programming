#include "lists.h"

/**
 * add_nodeint - count the char
 *
 * @head: is var
 * @n: is var
 *
 * Return: number
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t));

	if (!head || !newhead)
		return (NULL);
	newhead->n = n;
	if (!newhead->n)
	{
		free(newhead);
		return (NULL);
	}
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
