#include "main.h"

/**
 * print_line -Entry point
* Description: print_line prints stright line
* @n: input
* Return: void
*/

void print_line(int n)
{
int i = 1;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (i <= n)
{
_putchar(95);
i++;
}
}
}
