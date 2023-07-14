#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 9-print_comb.c
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int  i = 0;

	for (; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			continue;
		}
		putchar(44);
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
