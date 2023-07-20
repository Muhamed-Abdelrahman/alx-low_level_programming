#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *		followed by a new line
 * Return Always 0 (Success)
 */

void more_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		int x;

		for (x = 0 ; x <= 14 ; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar(x % 10 + 48);
		}
		_putchar('\n');
	}
}
