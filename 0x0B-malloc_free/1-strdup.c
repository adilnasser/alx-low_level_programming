#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *string;

	int len = 0;

	int i = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	string = malloc(sizeof(char) * len + 1);

	if (string == NULL)
		return (NULL);

for (i = 0; i < len; i++)
string[i] = str[i];

return (string);

}
