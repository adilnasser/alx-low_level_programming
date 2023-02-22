#include "main.h"

/**
 * print_sign - check the code
 * @n: declared integer
 * Return: 1 or -1 or 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0'); 
return (0);
}
}
