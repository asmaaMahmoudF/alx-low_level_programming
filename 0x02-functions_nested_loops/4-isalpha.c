#include "main.h"
/**
* Description: _isalpha - function to check
* if character is lowercase or uppercase
* @c: check input of function
* Return: returns 1 if c true otherwise always 0 (Success)
*/
int _isalpha(int c)
{
if (c >= 97 &&  c <= 122)
{
return (1);
}
if (c >= 65 &&  c <= 90)
{
return (1);
}
return (0);
}
