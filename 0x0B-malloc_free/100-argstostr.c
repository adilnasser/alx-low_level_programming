#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *argstostr - concatenates all arguments of the program.
 *@ac: argument count.
 *@av: pointer to array of size ac.
 *Return: NULL if ac == 0 or av == null, Pointer to new string.
 *NULL on fail.
 */

char *argstostr(int ac, char **av)
{
	char *stringofargs;

	int i, j, k;

	int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate the total length of all the argument strings */
	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]);

	/* allocate memory for the concatenated string plus a null byte */
	stringofargs = malloc(sizeof(char) * (total_length + ac + 1));
	if (stringofargs == NULL)
		return (NULL);

	/* copy the argument strings into the concatenated string */
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			stringofargs[k++] = av[i][j];
		stringofargs[k++] = '\n'; /* add a newline after each argument */
	}

	/* add a terminating null byte */
	stringofargs[k] = '\0';

	return (stringofargs);
}
