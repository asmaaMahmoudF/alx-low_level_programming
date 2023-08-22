#include "main.h"

/**
* _puts -Entry point
* Description: _puts prints a string, followed by a new line
*
* @str: input parameter
*
* Return: void
*/

void _puts(char *str)
{
int i;
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
