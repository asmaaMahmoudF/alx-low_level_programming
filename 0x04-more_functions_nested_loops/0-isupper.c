#include "main.h"

/**
* _isupper Entry - point
*
* Description: check if c is upper
*
* @c: input
*
* Return: returns 0 or 1
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
