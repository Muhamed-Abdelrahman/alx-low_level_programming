#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 8-print_base16.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int  i = 0, a = 'a';

	for (; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
