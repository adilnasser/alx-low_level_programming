#include "main.h"

/**
 *  factorial - function that returns the length of a string.
 * @n: given number
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
