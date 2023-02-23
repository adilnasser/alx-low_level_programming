#include "main.h"

/**
 * print_last_digit - check the code
 * @n: declared character
 * Return: last Digit 
 */

int print_last_digit(int n)
{
int last_digit = (n >= 0 ? n : -n);
last_digit = last_digit % 10 ;
return (last_digit);
}
