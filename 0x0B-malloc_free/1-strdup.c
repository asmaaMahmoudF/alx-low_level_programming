#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str : size of malloc
* Return: pointer to the array intialized or null
*/

char *_strdup(char *str)
{
int i = 0, size = 0;
char *p;
if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
*p = mallco(size *sizeof(*str) + 1);
if (p == 0)
return (NULL);
else
{
while (i < size)
{
p[i] = str[i];
i++;
}
}
return (p);
}
