#include <unistd.h>
#include <stdlib.h>
#include<stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_file_name - prints the name of the file it was compiled from
 *
 * Return: 1 on success, -1 on error
 */
int print_file_name(void)
{
	char *file_name = __FILE__;
	int i = 0;

	while (file_name[i] != '\0')
	{
		if (_putchar(file_name[i]) == EOF)
			return (-1);
		i++;
	}

	if (_putchar('\n') == EOF)
		return (-1);

	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_file_name();
	return (0);
}
