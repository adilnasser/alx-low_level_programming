#include <stdio.h>
#include <stdlib.h>

/**
 * make_change - prints the minimum number of coine for an amount
 *               of money.
 * @cents: The amount of money in cents.
 *
 * Return: The minimum number of coins.
 */
int make_change(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents % 25 != 0)
		{
			cents -= 25;
			coins = coins + (cents / 25);
		}

		else if (cents % 10 != 0)
		{
		cents -= 10;
		coins = coins + (cents / 10);
		}

		else if (cents % 5 != 0)
		{
		cents -= 5;
		coins = coins + (cents / 5);
		}

		else if (cents % 2 != 0)
		{
		cents -= 2;
		coins = coins + (cents / 2);
		}

		else
		{
		cents -= 1;
		coins++;
		}
}

return (coins);
}


/**
 * main - prints the minimum number of coins to make change for an amount of
 *        money.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 (Always).
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = make_change(cents);

	printf("%d\n", coins);

	return (0);
}
