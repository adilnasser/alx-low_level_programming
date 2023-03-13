#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc : number of command arguments
 * @argv : array of pointers to the arguments typed from command line
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
