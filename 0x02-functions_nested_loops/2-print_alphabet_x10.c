#include "main.h"

/**
* 2-print_alphabet_x10 - 10 times
*/

void print_alphabet_x10(void)
{
int a = 0;
char i = 'a';
while (a < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
a++;
}
}
