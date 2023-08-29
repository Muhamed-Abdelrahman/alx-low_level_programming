#include "lists.h"

/**
 * listint_len - count the char
 *
 * @h: is var
 *
 * Return: number
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
