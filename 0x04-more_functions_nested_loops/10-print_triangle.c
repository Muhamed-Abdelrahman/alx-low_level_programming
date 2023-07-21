#include "main.h"

/**
 * print_triangle - multiplies two integers
 *		only using _putchar twice
 * @size: is var
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
