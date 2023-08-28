#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: input
* @accept: input
* Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int str, jtr;
for (str = 0; s[str] != '\0'; str++)
{
for (jtr = 0; accept[jtr] != s[str]; jtr++)
{
if (accept[jtr] == '\0')
return (str);
}
}
return (str);
}
