#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: (0) success
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
