#include "main.h"
/**
 * main - Entry point
 *
 * Description : prints _putchar using puchar prototype
 *
 * Return : always (0) success
*/
int main(void)
{
char ch[] = "_putchar";
for (int i; i <= 8; i++)
{
_putchar(ch[i]);
}
_putchar('\n');
}
