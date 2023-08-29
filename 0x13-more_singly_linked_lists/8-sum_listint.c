#include "lists.h"

/**
 * sum_listint - git index
 *
 * @head: is var
 *
 * Return: index
*/
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
