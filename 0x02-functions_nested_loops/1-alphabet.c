#include "main.h"

/**
 * print—alphabet - utilizes on the —putchar function to print
 *		the alphabet a c- z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar(\n);

	return (0);
}