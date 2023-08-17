#include "main.h"

/**
 * print_number -Entry point
* Description: print_number prints square
* @n: input
* Return: void
*/

void print_number(int n)
{
unsigned int num = n;
/* first check if its negative */
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
/* print the first few digit */
print_number(num / 10);
/* print the last digit */
_putchar((num % 10) + '0');
}
