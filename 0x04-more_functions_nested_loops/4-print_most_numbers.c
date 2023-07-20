#include "main.h"

/**
 * print_most_numbers - multiplies two integers
 *              only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i = 0;

	for (i ; i <= 9 ; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
