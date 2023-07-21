#include "main.h"

/**
 * print_line - multiplies two integers
 *              only using _putchar twice
 *@n: is var
 * Return: Always 0 (Success)
*/

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
