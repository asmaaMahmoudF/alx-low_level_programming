#include "main.h"
/**
* puts_half -Entry point
* Description: puts_half returns the length of a string
*
* @str: input
*
* Return: void
*/
void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
	;
i++;
for (i /= 2; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
