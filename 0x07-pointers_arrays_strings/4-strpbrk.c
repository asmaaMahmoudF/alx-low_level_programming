#include "main.h"

/**
* _strpbrk -  searches a string for any of a set of bytes
* @s: input
* @accept: input
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int str, jtr;
char *p;
for (str = 0; s[str] != '\0'; str++)
{
for (jtr = 0; accept[jtr] != '\0'; jtr++)
{
if (accept[jtr] == s[str])
{
p = &s[str];
return (p);
}
}
}
return (0);
}
