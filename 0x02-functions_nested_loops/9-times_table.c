#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
int row, column, result;

for (row = 0; row <= 9; row++)
{
_putchar('0'); /* print the first column */

for (column = 1; column <= 9; column++)
{
_putchar(','); /* print the column separator */

/* calculate the result and print it */
result = row * column;
if (result <= 9)
_putchar(' '); /* pad single-digit numbers with a space */
else
_putchar((result / 10) + '0'); /* print the tens digit */
_putchar((result % 10) + '0'); /* print the ones digit */
}

_putchar('\n'); /* move to the next row */
}
}
