#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_strings - function that returns the sum of all its parameters.
 * @separator: const char
 * @n: const unsigned integer eqaul number of parameters
 * @...: A variable number of numbers to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);

}
