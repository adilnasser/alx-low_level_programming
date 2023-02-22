#include "main.h"

void print_alphabet(void)
{
char i= 'a';
for ( i ='a'; i <='z'; i++)
putchar(i);
putchar('\n');
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
print_alphabet();
return (0);
}
