#include "main.h"

/**
* _strncat -  concatenates two strings
* @dest: input
* @src: input
* @n: input
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
int c, c2;
c = 0;
while (dest[c] != '\0')
c++;
for (c2 = 0; c2 < n &&  src[c2] != '\0' ; c2++)
{
dest[c] = src[c2];
c++;
}
c2++;
dest[c + c2] = '\0';
return (dest);
}
