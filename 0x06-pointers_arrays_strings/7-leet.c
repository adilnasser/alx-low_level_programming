#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to resulting string
 */
char *leet(char *s)
{
	char *ptr = s;
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (*ptr)
	{
		i = 0;
		while (letters[i])
		{
			if (*ptr == letters[i])
			{
				*ptr = numbers[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return s;
}
