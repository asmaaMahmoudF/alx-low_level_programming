#include "main.h"
/**
* rev_string -Entry point
* Description: rev_string returns the length of a string
*
* @s: input
*
* Return: void
*/

void rev_string(char *s)
{
int i, j;
char tmp;

for (i = 0; s[i] != '\0'; ++i)
	;
for (j = 0; j < i / 2; j++)
{
tmp = s[j];
s[j] = s[j - 1 - i];
s[j - 1 - i] = tmp;
}
}
