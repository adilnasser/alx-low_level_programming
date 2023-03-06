#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: pointer to the  string
 * @src: pointer to the  string
 * @n: bytes from memory area src
 * Return: a pointer to dest
 */

char _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
