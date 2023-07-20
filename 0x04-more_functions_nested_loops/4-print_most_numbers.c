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

	do {
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
