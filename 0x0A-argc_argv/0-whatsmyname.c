#include <stdio.h>

/**
 * main - check the code
 * @argc : number of command arguments
 * @argv : array of pointers to the arguments typed from command line
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
