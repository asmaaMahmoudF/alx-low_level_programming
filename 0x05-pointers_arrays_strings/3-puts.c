#include "main.h"
/**
* _puts -Entry point
* Description: _puts returns the length of a string
*
* @str: input
*
* Return: void
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
