#include "main.h"

/**
 * print_most_numbers -Entry point
* Description: print_most_numbersprints numbers
* except 2 & 4
*
* Return: void
*/

void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i == 2 || i == 4)
continue;
_putchar(i);
}
_putchar('\n');
}
