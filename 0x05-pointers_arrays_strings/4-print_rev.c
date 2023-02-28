#include "main.h"

/**
 * print_rev- function that prints a string, in reverse.
 * @s :string
 * Return: No Return;
 */

void print_rev(char *s)
{
	int i = 0;

	int length_Of_String = _strlen(s);

	for (i = length_Of_String - 1 ; i <= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
