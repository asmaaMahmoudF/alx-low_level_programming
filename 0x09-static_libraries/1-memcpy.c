#include "main.h"

/**
* _memcpy - copies memory area
* @dest: input
* @src: input
* @n: input
* Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int str;
for (str = 0; str < n; str++)
{
dest[str] = src[str];
}
return (dest);
}
