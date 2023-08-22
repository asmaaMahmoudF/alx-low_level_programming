#include "main.h"

/**
* _puts -Entry point
* Description: _puts swaps the values of two integers
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
