#include "main.h"
/**
 * print_alphabet - utilizes on the _putchar function to print
 * the alphapet a - z
*/
void print_alphabet(void)
{
int i, ch;
for (ch = 0 ; ch <= 9 ; ch++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
}
_putchar('\n');
}
