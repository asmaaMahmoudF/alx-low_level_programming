#include "main.h"

/**
 * print_diagonal -Entry point
* Description: print_diagonal draws a diagonal line
* @n: input
* Return: void
*/

void print_diagonal(int n)
{
int cal, row;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (cal = 1; cal <= n; cal++)
{
for (row = 1; row <= cal; row++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}

