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
_putchar('\n');
}
}
#include "main.h"
/**
 *_islower - function to check if character is lowercase
 *@c : check input of function
 *return : returns 1 if `c` is lowercase otherwise always 0 (Success)
*/
int _islower(int c)
{
if (c >= 97 &&  c <= 122)
{
return (1);
}
return (0);
}
