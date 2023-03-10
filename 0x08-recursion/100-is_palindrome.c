#include "main.h"
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that check if a string is a palindrome and or not
 * @s: given String
 * Return: returns 1 or 0
 */

int is_palindrome(char *s)
{

	int i = 0;

	int len = _strlen_recursion(s);

	if (*s == '\0')
	{
	if (*s != *(s + len - i))
		return (0);
	i++;
	}

	return (1);
}

/**
 *  _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: lenght of string
 */


int _strlen_recursion(char *s)
{
	int len =  0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
