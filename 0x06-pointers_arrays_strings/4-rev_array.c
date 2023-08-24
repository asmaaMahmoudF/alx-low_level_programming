#include "main.h"
/**
* reverse_array -  compares two strings
* @a: input
* @n: input
* Return: void
*/
void reverse_array(int *a, int n)
{
int tmp = 0, i, j;
for (i = 0, j = (n - 1); i < j; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
