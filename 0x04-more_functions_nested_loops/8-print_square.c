#include "main.h"

/**
 * print_square -Entry point
* Description: print_square prints square
* @size: input
* Return: void
*/

void print_square(int size)
{
int i, j;

for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
putchar('#');
putchar('\n');
}

putchar('\n');
}
