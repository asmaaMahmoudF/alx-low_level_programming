#include "main.h"
/**
 * main - Entry point
 *
 * Description : prints _putchar using puchar prototype
 *
 * Return: (0) success
*/
int main(void)
{
char ch[] = "_putchar";
for (int i = 0; i < 8; i++)
{
_putchar(ch[i]);
}
_putchar('\n');
return (0);
}
