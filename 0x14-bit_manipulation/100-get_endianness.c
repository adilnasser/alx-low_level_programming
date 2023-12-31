#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *check_endianness = (char *)&num;

	if (*check_endianness)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
