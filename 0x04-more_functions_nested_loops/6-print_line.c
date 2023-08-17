#include "main.h"

/**
 * print_line -Entry point
* Description: print_line prints stright line
* @n: input
* Return: void
*/

void print_line(int n)
{
if (n > 0)
{
while (n > 0)
{
_putchar(95);
n--;
}
else
_putchar('\n');
_putchar('\n');
}
