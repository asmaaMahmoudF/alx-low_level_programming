#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: input
* @size: input
* Return: void
*/
void print_diagsums(int *a, int size)
{
int str, s1 = 0, s2 = 0;
for (str = 0; str < size ; str++)
{
s1 += a[str];
s2 += a[size - str - 1];
a += size;
}
printf("%d, ", s1);
printf("%d\n", s2);
}
