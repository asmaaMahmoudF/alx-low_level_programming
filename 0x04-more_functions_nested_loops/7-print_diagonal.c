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
_putchar('\n');
else if (n > 0)
{
for (cal = 1; cal <= n; cal++)
{
for (row = 1; row <= cal; row++)
_putchar(32);/* is equal to ' ' char*/
_putchar(92);/* is equal to '/' char*/
_putchar('\n');
}
}
_putchar('\n');
}

