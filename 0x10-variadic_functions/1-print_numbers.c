#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_numbers - function that returns the sum of all its parameters.
 * @separator: const char
 * @n: const unsigned integer eqaul number of parameters
 * Return: returns the sum of all its parameters
 *          or 0 if n equals 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(list, int));
		else if (separator != NULL)
			printf("%d%s", va_arg(list, int), separator);
		else
			printf("%d", va_arg(list, int));
	}

	va_end(list);

}
