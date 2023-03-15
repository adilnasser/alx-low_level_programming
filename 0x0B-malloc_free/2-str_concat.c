#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 */

char *str_concat(char *s1, char *s2)
{
	char *string;

	int len = 0, lens1 = 0, lens2 = 0;


	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL && s2 == NULL)
		return ("");

	lens1 = strlen(s1);

	lens2 = strlen(s2);

	len = lens1 + lens2;

	string = malloc(sizeof(char) * len + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		string[i] = s1[i];

	for (j = 0 ; j < lens2 ; j++)
		string[i + j] = s2[j];

	string[i + j] = '\0';
	return (string);
}
