#include "main.h"
/**
* _atoi -Entry point
* Description:_atoi prints half of a string followed by a new line.
*
* @s: input
*
* Return: int
*/

int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;

do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (sign * num);
}
