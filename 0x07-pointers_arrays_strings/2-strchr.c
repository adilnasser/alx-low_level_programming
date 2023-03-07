#include "main.h"

/**
 * *_strchr -  function that locates a character in a string.
 * @s: pointer to the  string
 * @c: character c in the string
 * Return: a pointer to the first occurrence of the characte or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	char *Corrunced_char = '\0';


	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
		return (Corrunced_char + i);
	}
		return (0);
}
