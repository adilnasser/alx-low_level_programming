#include "main.h"

/**
 * rev_string- Write a function that reverses a string.
 * @s :string
 * Return: No Return;
 */

void rev_string(char *s)
{
	int length_Of_String = 0;

	int i = 0;

	int j = 0;

	while (s[length_Of_String] != '\0')
	{
		length_Of_String++;
	}

	char swap[length_Of_String] = {};

	for (i = 0 ; i < length_Of_String ; i++)
	{
		swap[i] = s[i];
	}

	for (i = 0 ; i < length_Of_String ; i++)
	{
		for (j = length_Of_String - 1 ; j >= 0  ; i--)
		{
			s[i] = swap[j];
		}
	}


	_putchar('\n');
}
