#include "main.h"
/**
* checker - returns the natural square root of a number
* @n : input
* @rm : input
* Return: int
*/
int checker(int n, int rm)
{
if (rm >= n && n >= 2)
return (1);
else if (n % rm == 0 || n < 0)
return (0);

return (checker(n, rm + 1));
}
/**
* is_prime_number - returns 1 if the input integer
* is a prime number, otherwise return 0
* @n : input
* Return: int
*/
int is_prime_number(int n)
{
return (checker(n, 2));
}
