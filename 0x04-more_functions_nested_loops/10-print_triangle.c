#include "main.h"

/**
 * print_triangle -Entry point
* Description: print_triangle prints square
* @size: input
* Return: void
*/

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((i + j) <= size)
_putchar(32);
else
_putchar('#');
}
_putchar('\n');
}
}
}
