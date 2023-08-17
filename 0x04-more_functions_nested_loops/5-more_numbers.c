#include "main.h"

/**
 * more_numbers -Entry point
* Description: more_numbers prints numbers
* from 0 to 14
*
* Return: void
*/

void more_numbers(void)
{
int i, j, num;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
num = j;
if (j > 9)
{
_putchar(49);
num = j % 10;
}
_putchar(num + 48);
}
_putchar('\n');
}
}
