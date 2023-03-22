#include <stdio.h>
#include <stdlib.h>

/*the function prototype*/
int coin_count(int cents);

/**
* main - Prints the minimum number of coins to make change for a given amount
* of money.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
* Return: Always 0.
*/



int main(int argc, char **argv)
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

coins = coin_count(cents);

printf("%d\n", coins);

return (0);
}


/**
* coin_count - Returns the minimum number of coins to make change for a given
* amount of money.
*
* @cents: The amount of money to make change for.
*
* Return: The minimum number of coins.
*/

int coin_count(int cents)
{
int coins = 0;

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
