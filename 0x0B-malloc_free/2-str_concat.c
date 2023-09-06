#include "main.h"

/**
* _strlen - returns the length of string
* @str : string
* Return: int
*/
int _strlen(char *str)
{
int size = 0;
while (str[size] != '\0')
size++;
return (size);
}



/**
* str_concat - concatenates two strings
* @s1 : string 1
* @s2 : string 2
* Return: pointer to the array
*/

char *str_concat(char *s1, char *s2)
{
int i = 0, size1 = 0, size2 = 0;
char *p;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);

p = malloc((size1 + size2) *sizeof(*s1) + 1);
if (p == 0)
return (NULL);

while (i < size1 + size2)
{
if (i < size1)
p[i] = s1[i];
else
p[i] = s2[i - size1];
i++;
}
p[i] = '\0';
return (p);
}

