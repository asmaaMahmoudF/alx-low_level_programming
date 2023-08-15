#include "main.h"
/**
 * print_alphabet_x10 - function that will print the alphapet 10 times
*/
void print_alphabet_x10(void)
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
