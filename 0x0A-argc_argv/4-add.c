#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _isalpha - check the code
 * @i: input number.
 * Return: Always 1 if aplha else return 0.
 */

int _isalpha(int i)
{
	if ((i >= 65 && i <= 95) || (i >= 97 && i <= 122))
		return (1);
	else
		return (0);
}


/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/**
 * has_alpha - check the code
 * @str: string passed.
 * Return: Always 1 if aplha else return 0.
 */

int has_alpha(const char* str)
{
	while (*str)
	{
		if (isalpha(*str))
		{
			return (1);
		}
		str++;
	}
	return (0);
}


/**
 * main - check the code
 * @argc : number of command arguments
 * @argv : array of pointers to the arguments typed from command line
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{


	int sum = 0;

	int i = 0;

	int chartoint;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	if (argc > 2)
	{
		for (i = 1; i < argc ; i++)
		{
			if (has_alpha(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

		for (i = 1; i < argc ; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				chartoint = atoi(argv[i]);
				if (_isalpha(chartoint) == 1)
				{
				printf("Error\n");
				return (1);
				}
				sum += chartoint;
			}
		}

	printf("%d\n", sum);

	return (0);

}
