#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
* @s: pointer to the  string
* @b: char constant byte
* @n:unsigned  first number of bytes
* Return: a pointer to the memory area @s
*/


char *_memset(char *s, char b, unsigned int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = 0x01;
	}
	return (s);
}
