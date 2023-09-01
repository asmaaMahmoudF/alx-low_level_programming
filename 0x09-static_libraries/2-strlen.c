#include "main.h"
/**
* _strlen -Entry point
* Description: _strlen returns the length of a string
*
* @s: input
*
* Return: int
*/
int _strlen(char *s)
{
int counter;
for (counter = 0; *s != '\0'; s++)
counter++;
return (counter);
}
