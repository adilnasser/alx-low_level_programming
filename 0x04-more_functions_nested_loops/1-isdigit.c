#include "main.h"

/**
 * 1-isdigit -function that checks for upperecase  character
 *@c: the character
 *Return: 1 if the upperecase  is found
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
