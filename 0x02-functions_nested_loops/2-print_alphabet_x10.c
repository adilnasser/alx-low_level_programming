#include "main.h"

/**
* 2-print_alphabet_x10 - 10 times
*/

void print_alphabet(void)
{
int a=0;
char i = 'a';
while (i < 10)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
a++;
}
}
