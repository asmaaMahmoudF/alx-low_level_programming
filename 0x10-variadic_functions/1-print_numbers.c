#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers -prints numbers, followed by a new line
* @separator: unsigned int
* @n: input
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ar;
char *sepra;
unsigned int i;
if (separator == NULL || *separator == 0)
sepra = "";
else
sepra = (char *)separator;

va_start(ar, n);

if (n > 0)
printf("%d", va_arg(ar, int));
for (i = 1; i < n; i++)
{
printf("%s%d", sepra, va_arg(ar, int));
}
printf("\n");
va_end(ar);
}

