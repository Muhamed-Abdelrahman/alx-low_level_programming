#include "main.h"

/**
 * print_square - multiplies two integers
 *              only using _putchar twice
 * @size: is var
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
