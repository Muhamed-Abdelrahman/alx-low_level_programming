#include "main.h"

/**
 * print_numbers - multiplies two integers
 *		only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i = 0

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
