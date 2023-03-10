#include "main.h"

/**
 * is_palindrome - function that check if a string is a palindrome and or not
 * @s: given String
 * Return: returns 1 or 0
 */

int is_palindrome(char *s)
{

	int palindrome = 1;

	int i = 0;

	int len = 0;

	    if (*s == '\0')
		    len++;

	    if (*s == '\0')
	    {
		    if (*s != *(s + len - i))
		    palindrome = 0;
		    i++;
	    }

	    return (palindrome);
}
