#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: input
* Return: void
*/
void print_chessboard(char (*a)[8])
{
unsigned int str, jtr;

for (str = 0; str < 8; str++)
{
for (jtr = 0; jtr < 8; jtr++)
{
_putchar(a[str][jtr]);
}
_putchar('\n');
}
}
