#include "main.h"
/**
* _strncpy -  concatenates two strings
* @dest: input
* @src: input
* @n: input
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int c, c2;
c = 0;
for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
{
dest[c2] = src[c2];
}
while (c2 < n)
{
dest[c2] = '\0';
c2++;
}
return (dest);
}
