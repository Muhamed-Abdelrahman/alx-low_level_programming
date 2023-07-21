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
	int row, has, spas;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spas = size - row; spas >= 1; spas--)
			{
				_putchar(' ');
			}
			for (has = 1 ; has <= row ; has++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
