#include <stdio.h>

/**
 * main - check the code
 * @argc : number of command arguments
 * @argv : array of pointers to the arguments typed from command line
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	int count = 0;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
