#include "main.h"
#include <stdio.h>

/**
* isPrintTableASCII - prints a buffer
* @n: input
*
* Return: 1 if true of 0 false
*/

int isPrintTableASCII(int n)
{
return (n >= 32 && n <= 126);
}

/**
* print_Hexes - prints a buffer
* @b: input
* @start: input
* @end: input
*
* Return: void
*/
void print_Hexes(char *b, int start, int end)
{
int i = 0;
while (i < 10)
{
if (i < end)
printf("%02x", *(b + start + end));
else
printf("  ");
if (i % 2)
printf(" ");
i++;
}
}

/**
* print_ASCII - prints a buffer
* @b: input
* @start: input
* @end: input
*
* Return: void
*/

void print_ASCII(char *b, int start, int end)
{
int ch, i = 0;
while (i < end)
{
ch = *(b + i + start)
if (!isPrintTableASCII(ch))
ch = 46;
printf("%c", ch);
i++;
}
}

/**
* print_buffer - prints a buffer
* @b: input
* @size: input
*
* Return: void
*/
void print_buffer(char *b, int size)
{
int start, end;
if (size > 0)
{
for (start = 0; start < size ; start++)
{
end = (size - start < 10) ? size - start : 10;
printf("%08x: ", start);
print_Hexes(b, start, end);
print_ASCII(b, start, end);
printf("\n");
}
}
else
printf("\n");
}
