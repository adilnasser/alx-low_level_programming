#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @str: the string to modify
 *
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 'a' - 'A';
		}
		ptr++;
	}
	return (str);
}
