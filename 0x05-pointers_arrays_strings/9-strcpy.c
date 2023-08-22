#include "main.h"

/**
* puts_half -Entry point
* Description: puts_half prints half of a string followed by a new line.
*
* @str: input parameter
*
* Return: void
*/

void puts_half(char *str)
{
int i = 0;
while (*(str + i) != '\0')
i++;
i++;

for (i = i / 2; *(str + i) != '\0' ; i++)
_putchar(*(str + i));
_putchar('\n');
}
#include "main.h"

/**
* puts_half -Entry point
* Description: puts_half prints half of a string followed by a new line.
*
* @str: input parameter
*
* Return: void
*/

void puts_half(char *str)
{
int i = 0;
while (*(str + i) != '\0')
i++;
i++;

for (i = i / 2; *(str + i) != '\0' ; i++)
_putchar(*(str + i));
_putchar('\n');
}
