#include "main.h"

/**
 * is_prime_number - function that check if the input integer is a prime number
 * @n: given number
 * Return: returns 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);

	else if (n < 0)
	{
		return (0);
	}

	else if (n != 0)
	{
		if (n % 2 == 0)
		return (0);
		else
			return (1);
	}

	return (1);
}
