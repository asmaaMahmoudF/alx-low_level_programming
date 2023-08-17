#include "main.h"

/**
 * more_numbers -Entry point
* Description: more_numbers prints numbers
* except 2 & 4
*
* Return: void
*/

void more_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
printf("%d", j);
}
_putchar('\n');
}
_putchar('\n');
}
