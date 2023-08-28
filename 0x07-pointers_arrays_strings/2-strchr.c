#include "main.h"

/**
* _strchr -  fills memory with a constant byte
* @s: input
* @c: input
* Return: char
*/
char *_strchr(char *s, char c)
{
unsigned int str;
for (str = 0; s[str] >= '\0' ; str++)
{
if (s[str] == c)
{
return (s + str);
}
}
return ('\0');
}
