#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: pointer to the destination string
 * @s2: pointer to the source string
 * Return: he difference between the ASCII values of
 * the first unmatched character between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
