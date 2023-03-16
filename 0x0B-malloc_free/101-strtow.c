#include "main.h"
#include <stdlib.h>


/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
 *         NULL if str == NULL or str == "" or if allocation fails
 */

char **strtow(char *str)
{
	char **words;

	int i, j, k, n_words, len;

	if (str == NULL || str == 0)
		return (NULL);

	n_words = count_words(str);
	if (n_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (n_words + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < n_words; i++)
	{
		while (str[j] == ' ')
			j++;

		len = 0;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));

for (k = 0; k < len; k++)
			words[i][k] = str[j + k];
		words[i][len] = '\0';
		j += len;
	}
	words[j] = "\0";
	return (words);
}
