#include "main.h"

/**
 * coin_count - Calculates the minimum number of coins needed
 * to make change for an amount of money.
 *
 * @cents: The amount of money in cents.
 *
 * Return: The minimum number of coins needed.
 */

int coin_count(int cents)
{
	int coins = 0;

	if (cents < 0)
		return (0);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;

		coins++;
	}

	return (coins);
}
