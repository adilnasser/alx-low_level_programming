#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string.
 *
 * Return: string pointer.
 */

char *cap_string(char *str)
{
	int i;

	i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		switch (str[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '\"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
