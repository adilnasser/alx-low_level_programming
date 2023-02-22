#include "main.h"

/**
* print_alphabet a function that prints the alphabet, in lowercase, followed by a new line.
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet(void)
{
char i = 'a';
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
