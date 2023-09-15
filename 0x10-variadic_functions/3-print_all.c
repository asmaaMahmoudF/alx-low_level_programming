#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all -  prints anything
* @format: list of types of arguments passed to the function
* Return: void
*/

void print_all(const char * const format, ...)
{
va_list ar;
int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(ar, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(ar, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(ar, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(ar, double), sep);
			break;
		case 's':
			str = va_arg(ar, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
printf("\n");
va_end(ar);
}

