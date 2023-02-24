#include "main.h"

/**
 * print_line- draws a straight line in the terminal.
 * @n :number
 * Return: no return.
 */

void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = n;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
