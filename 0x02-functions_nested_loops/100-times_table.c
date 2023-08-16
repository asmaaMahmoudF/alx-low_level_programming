#include "main.h"
/**
* Description: print_times_table - function prints the n times table
*
* @n: takes input number
*
* Return: void
*/
void print_times_table(int n)
{
int mult, num, prod;
if (n <= 15 && n >= 0)
{
for (num = 0; num <= n; num++)
{
_putchar(48);
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prod = mult * num;
/*
 * put space if product is a single number
 * place the first digit if its two numbers
*/
if (prod <= 9)
_putchar(' ');
if (prod <= 99)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + 48);/*get the first digit */
_putchar((prod / 100) % 10 + 48);
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + 48);/*get the second digit */
}
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
}
