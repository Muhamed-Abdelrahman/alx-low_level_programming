#include "main.h"

/**
 * print—alphabet - utilizes on the —putchar function to print
 *		the alphabet a c- z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(\n);

	return (0);
}
