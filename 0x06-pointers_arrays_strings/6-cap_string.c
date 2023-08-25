#include "main.h"

/**
* islower - changes alli
* lowercase letters  to uppercase
* @c: input
* Return: int
*/
int islower(char c)
{
return (c >= 97 && c <= 122);
}

/**
* isDelimiter - changes all
* lowercase letters  to uppercase
* @c: input
* Return: int
*/

int isDelimiter(char c)
{
int i;
char delimiter[] = " \t\n,.!?\"()()";
for (i = 0; i < 12; i++)
{
if (c == delimiter[i])
return (1);
}
return (0);
}



/**
* cap_string - changes all
* lowercase letters of a string to uppercase
* @str: input
* Return: char
*/
char *cap_string(char *str)
{
char *ptr = str;
int founfdelimiter = 1;
while (*str)
{
if (isDelimiter(*s))
founfdelimiter = 1;
else if (islower(*s) && founfdelimiter)
{
*s -= 32;
founfdelimiter = 0;
}
else
founfdelimiter = 0;
s++;
}
return (str);
}
