#include "main.h"

/**
 * puts2- nction that prints every other character of a string
 * @str :string
 * Return: No Return;
 */


void puts2(char *str)
{
	int length_Of_String = 0;

	int i = 0;

	while (str[length_Of_String] != '\0')
	{
		for (i = 0 ; i < length_Of_String ; i += 2)
		{
				_putchar(str[i]);
		}
	}
	_putchar('\n');

}
