#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str : size of malloc
* Return: pointer to the array intialized or null
*/

char *_strdup(char *str)
{
char *p = malloc(strlen(str) + 1);

if (str == NULL)
return (NULL);

if (p == NULL)
return (NULL);

else if (p != 0)
{
for (; str != '\0' ; str++)
p[i] = str[i];
return (p);
free(p);
}
