#include "main.h"

/**
 * _strncat - appends the src string to the dest string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes from @src
 * Return: pointer to the resulting string dest, which is the concatenation of
 *         dest and src strings.
 */

char *_strncat(char *dest, char *src, int n)
{

	int lenghtdest = 0;

	int j = 0;

	while (dest[lenghtdest] != '\0')
		lenghtdest++;


	while (*(src + j) != '\0' && j < n)
	{
		*(dest + lenghtdest) = *(src + j);
		lenghtdest++;
		j++;
	}

	*(dest + lenghtdest) = '\0';

	return (dest);
}
