#include "main.h"

/**
 * _isdigit -Entry point
* Description: _isupper check if c is upper
*
* @c: input
*
* Return: returns 0 or 1
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
