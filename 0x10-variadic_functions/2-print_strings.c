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
char *sepra, *ptr;
unsigned int i;
if (separator == NULL || *separator == 0)
sepra = "";
else
sepra = (char *)separator;

va_start(ar, n);

if (n > 0)
printf("%s", va_arg(ar, char *));
for (i = 1; i < n; i++)
{
ptr = va_arg(ar, char *);
if (ptr == NULL)
ptr = "(nil)";
printf("%s%s", sepra, ptr);
}
printf("\n");
va_end(ar);
}

