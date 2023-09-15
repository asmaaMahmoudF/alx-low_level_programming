#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all -  prints anything
* @format: list of types of arguments passed to the function
* Return: int
*/

void print_all(const char * const format, ...)
{
va_list ar;
unsigned int i, sum = 0;
if (n == 0)
	return (0);
va_start(ar, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ar, const unsigned int);
}
va_end(ar);
return (sum);
}

