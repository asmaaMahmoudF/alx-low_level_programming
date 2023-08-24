#include "main.h"
/**
* _strcpy -Entry point
* Description: _strcpy returns the length of a string
*
* @dest: input
* @src: input
*
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
