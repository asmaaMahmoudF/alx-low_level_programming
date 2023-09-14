#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all -  writes the character c to stdout
* @n: unsigned int
* Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ar;
unsigned int i, sum = 0;
if (n == 0)
	return (0);
va_start(ar, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ar, (const unsigned int);
}
va_end(ar);
return (sum);
}

