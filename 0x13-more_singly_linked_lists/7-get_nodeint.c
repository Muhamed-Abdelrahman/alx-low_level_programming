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
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
