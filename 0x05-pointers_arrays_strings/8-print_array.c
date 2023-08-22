#include "main.h"

/**
* print_array -Entry point
* Description: print_array prints n elements of
* an array of integers, followed by a new
*
* @a: input parameter
* @n: input
* Return: void
*/

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i != (n - 1))
{
printf("%d, ", a[i]);
_putchar('\n');
}
else
{
printf("%d", a[i]);
_putchar('\n');
}
i++;
if (n  == 0)
{
printf("\n");
printf("\n");
_putchar('\n');
}
}
}
