#include <stdio.h>

/**
 * print_triangle -Entry point
* Description: print_triangle prints square
* @size: input
* Return: void
*/

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((i + j) <= size)
_putchar(32);
else
_putchar('#');
}
_putchar('\n');
}
}
}
void largest_prime_factor(long int num)
{
int Prnum, largest;
while (num % 2 == 0)

}
/**
 * main -Entry point
 *
* Return: 0 success
*/
int main ()
{
largest_prime_factor(612852475143);
return (0);
}
