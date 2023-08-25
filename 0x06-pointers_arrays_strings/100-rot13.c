#include "main.h"
/**
* rot13 - encodes a string into 1337.
* @s: input
* Return: char
*/
char *rot13(char *s)
{
char *cp = s;
char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;
char *ptr = s;
while (*s)
{
for (i = 0; i <= 52; i++)
{
if (*s == rot13[i])
{
*s = ROT13[i];
break;
}
}
s++;
}
return (ptr);
}
