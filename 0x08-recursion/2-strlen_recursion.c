#include "main.h"

/**
 *  _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: lenght of string
 */


int _strlen_recursion(char *s)
{
	int len =  0;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	len++;
	_puts_recursion(s + 1);

	return (len);
}
