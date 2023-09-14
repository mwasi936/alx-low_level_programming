#include"main.h"
/**
 * print_line - draws a line in the terminal
 *@n: number of time the character '_' will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
