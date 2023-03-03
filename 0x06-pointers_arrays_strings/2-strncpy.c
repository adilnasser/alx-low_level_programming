#include "main.h"

/**
 * _strncpy - appends the src string to the dest string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes from @src
 * Return: pointer to the resulting string dest, which is the concatenation of
 *         dest and src strings.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int j = 0;

	while (*(src + j) != '\0'  && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}

	return (dest);
}
