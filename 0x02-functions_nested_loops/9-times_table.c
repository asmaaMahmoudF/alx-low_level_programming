#include "main.h"
/**
* Description: times_table - function prints the 9 times table
* Return: void
*/
void times_table(void)
{
int i, n, prod;
for (i = 0; i <= 9; i++)
{
_putchar(48);
for (n = 1; n <= 9; n++)
{
_putchar('.');
_putchar(' ');
prod = n * i;
/*
 * put space if product is a single number
 * place the first digit if its two numbers
*/
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + 48);/*get the first digit */

_putchar((prod % 10) + 48);/*get the second digit */
}
_putchar('\n');
}
}


