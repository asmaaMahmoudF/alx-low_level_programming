#include "main.h"
/**
* print_rev -Entry point
* Description: print_rev returns the length of a string
*
* @s: input
*
* Return: void
*/
void _puts(char *s)
{
int i;
while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n');
}
