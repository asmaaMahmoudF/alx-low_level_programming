#include "main.h"
/**
* Description: print_sign - function to print +
*  if n greater than zero 0, if n is zero ,and if n is less than zero
* @n: check input of function
* Return: returns 1 if +, 0 if 0 and -1 if -
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43)
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
_putchar(45);
return (-1);
}
