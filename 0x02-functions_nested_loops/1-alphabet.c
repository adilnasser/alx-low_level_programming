#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
char i= 'a';
for ( i ='a'; i <='z'; i++)
putchar(i);
putchar('\n');
}
