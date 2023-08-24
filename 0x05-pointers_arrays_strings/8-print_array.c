#include "main.h"
/**
* print_array -Entry point
* Description: print_array prints n elements of an array of integers
*
* @a: input
* @n: input
*
* Return: void
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
if (i < (n - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
i++;
}
if (n == 0)
{
_putchar('\n');
_putchar('\n');
}
}
