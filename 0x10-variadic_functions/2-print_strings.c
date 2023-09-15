#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings -prints strings, followed by a new line
* @n: unsigned int
* @separator: string to be printed between the strings
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
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

