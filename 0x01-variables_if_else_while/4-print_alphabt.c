#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 4-print_alphabt.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');

	return (0);
}
