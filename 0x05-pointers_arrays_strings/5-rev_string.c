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

	char temp;

	while (s[length_Of_String] != '\0')
	{
		length_Of_String++;
	}



	for (i = 0; i < length_Of_String / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + length_Of_String - i - 1);
		*(s + length_Of_String - i - 1) = temp;
	}


	_putchar('\n');
}
