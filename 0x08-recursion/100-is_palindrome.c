#include "main.h"
/**
* _strlen_recursion - returns the length of a string
* @s : input
* Return: int
*/

int _strlen_recursion(char *s)
{
int ntr = 0;
if (*s != '\0')
{
ntr += _strlen_recursion(s + 1) + 1;
}
return (ntr);
}


/**
* checker - returns the natural square root of a number
* @len : input
* @count : input
* @s : input
* Return: int
*/
int checker(char *s, int len, int count)
{
if (count >= len)
return (1);
if (s[len] == s[count])
return (checker(s, len - 1, count + 1));
return (0);

return (checker(n, rm + 1));
}
/**
* is_palindrome -returns 1 if a string is a palindrome and 0 if not
* @s : input
* Return: int
*/
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
int count = 0;

return (checker(s, len - 1, count));
}
