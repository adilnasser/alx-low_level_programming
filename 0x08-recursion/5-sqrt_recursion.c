#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of @n, or -1 if @n does not have a natural
 *         square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Recursive helper function to calculate the natural square
 *                root of a number.
 *
 * @n: The number to calculate the square root of.
 * @i: The current value to check.
 *
 * Return: The natural square root of @n, or -1 if @n does not have a natural
 *         square root.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_helper(n, i + 1));
}
