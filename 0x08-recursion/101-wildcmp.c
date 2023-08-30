#include "main.h"
/**
* checker - returns the natural square root of a number
* @n : input
* @rm : input
* Return: int
*/
int checker(int n, int rm)
{
if (rm == n)
	return (1);
if (!(n % rm))
return (0);

return (checker(n, rm + 1));
}
/**
* is_prime_number - returns 1 if the input integer
* is a prime number, otherwise return 0
* @n : input
* Return: int
*/
int wildcmp(char *s1, char *s2)
{
if (n < 2)
	return (0);
return (checker(n, 2));
}
