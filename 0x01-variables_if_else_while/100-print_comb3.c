#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i, j, k;

for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 10; j++)
{
k = i * 10 + j;
if (k != 89)
{
putchar((k / 10) + 48);
putchar((k % 10) + 48);
putchar(44);
putchar(32);
putchar((k + 1) / 89 + 48);
}
else
{
putchar((k / 10) + 48);
putchar((k % 10) + 48);
putchar(10);
}
}
}

return (0);
}
