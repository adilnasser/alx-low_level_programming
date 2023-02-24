#include "main.h"

/**
 * print_diagonal- Draws a diagonal line on the terminal.
 * @n :number
 * Return: no return.
 */

void print_diagonal(int n)
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
			if (i != n - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(92);
			}
		}
		_putchar('\n');
	}

}
