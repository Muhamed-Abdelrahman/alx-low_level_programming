#include "lists.h"

/**
 * _strln - count the char
 *
 * @str: is var
 *
 * Return: number
*/
int _strln(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

/**
 * print_list - print all elelment
 *
 * @h: is var
 *
 * Return: 0
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strln(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

