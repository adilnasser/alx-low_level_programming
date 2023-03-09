#include "main.h"

/**
* _puts_recursion- function that prints a string, followed by a new line.
* @s: string to be
*/

void _puts_recursion(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] == '\0')
break;

_putchar(s[i]);

i++;

_puts_recursion(*s);
}

_putchar('\n');
}
