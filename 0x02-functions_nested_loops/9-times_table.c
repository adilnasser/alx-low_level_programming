#include "main.h"

/**
 * times_table - Prints the 9 times table
 */

void times_table(void)
{
int i, j, r;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = i * j;
/* Print first column without leading space */
if (j == 0)
{
_putchar('0' + r);
}
else
{
/* Print leading space */
_putchar(' ');
/* Print two-digit result */
if (r >= 10)
{
_putchar('0' + (r / 10));
_putchar('0' + (r % 10));
}
/* Print single-digit result with leading zero */
else
{
_putchar(' ');
_putchar('0' + r);
}
}
/* Print comma and space after every result */
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
/* Print newline after every row */
_putchar('\n');
}
}
