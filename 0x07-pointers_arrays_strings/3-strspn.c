#include "main.h"

/**
* _memset -  fills memory with a constant byte
* @s: input
* @b: input
* @n: input
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int str;
for (str = 0; n > 0; n--)
{
s[str] = b;
}
return (s);
}
