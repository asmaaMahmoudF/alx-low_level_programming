#include <stdio.h>
/**
* _sqrt -Entry point
* Description: finds the squre root
* @size: input
* Return: the squre of size
*/

void _sqrt(double size)
{
float sqr, tmp;
sqr = size / 2;
tmp = 0;
while (sqr != tmp)
{
tmp = sqr;
sqr = (size / tmp + tmp) / 2;
}
return (sqr);
}
/**
* largest_prime_factor -Entry point
* Description: finds and print the largest prime
* factor of number (num)
* @num: input
* Return: void
*/
void largest_prime_factor(long int num)
{
int Prnum, largest;
while (num % 2 == 0)
num = num / 2;
for (Prnum = 3; Prnum <= _sqrt(num); Prnum += 2)
{
while (num % Prnum == 0)
{
num = num / Prnum;
largest = Prnum;
}
}
if (num > 2)
largest = num;
printf("%d\n", largest);
}

/**
 * main -Entry point
 *
* Return: 0 success
*/
int main(void)
{
largest_prime_factor(612852475143);
return (0);
}
