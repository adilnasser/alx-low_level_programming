#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_strings - function that returns the sum of all its parameters.
 * @separator: const char
 * @n: const unsigned integer eqaul number of parameters
 * @...: A variable number of numbers to be printed.
 * Return: returns the sum of all its parameters or 0 if n equals 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{

		if (i == n - 1)
			printf("%s", va_arg(list, char *));

		else if (separator != NULL)
			printf("%s%s", va_arg(list, char *), separator);

		else if ((va_arg(list, char *)) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(list, char *));
	}

	printf("\n");

	va_end(list);

}
