#include "main.h"
/**
* Description: print_last_digit - function prints the last digit number
* @n: check input of function
* Return: lastdigit
*/
int print_last_digit(int n)
{
int last;
if (n < 0)
{
last = (-1) * (n % 10);
}
else
{
last = n % 10;
}
_putchar(last + '0');
return (last);
}

