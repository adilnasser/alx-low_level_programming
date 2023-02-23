#include "main.h"

/**
 * _isupper -function that checks for upperecase  character
 *@c: the character
 *Return: 1 if the upperecase  is found
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
