#include "main.h"
/**
* checker - returns the natural square root of a number
* @n : input
* @base : input
* Return: int
*/
int checker(int n, int base)
{
if (n < 0)
return (-1);
else if (base * base == n)
return (base);
else if ((base * base < n)
return (checker(n, base + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n : input
* Return: int
*/
int _sqrt_recursion(int n)
{
return (checker(n, 1));
}
