#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest, which is the concatenation of
 *         dest and src strings.
 */

char *_strcat(char *dest, char *src)
{

	int lenghtdest = 0, lenghtsrc = 0;

	int i = 0, j = 0;

	while (dest[lenghtdest] != '\0')
	{
		lenghtdest++;
	}

	while (src[lenghtsrc] != '\0')
	{
			    lenghtsrc++;
	}

	for (i = lenghtdest; i < lenghtdest + lenghtsrc; i++)
	{
		while (j < lenghtsrc)
		{
			*(dest + i) = *(src + j);
			j++;
		}
	}


	*(dest + lenghtdest + lenghtsrc) = '\0';

	return (dest);
}
