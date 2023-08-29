#include "lists.h"

/**
 * get_nodeint_at_index - git index
 *
 * @head: is var
 * @index: is var
 *
 * Return: index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;
	while (i <= index && node)
	{
		node = node->next;
		i++;
	}
	return (node);
}
