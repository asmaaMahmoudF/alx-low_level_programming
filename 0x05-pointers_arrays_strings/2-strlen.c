#include "main.h"

/**
* _strlen -Entry point
* Description: _strlen swaps the values of two integers
*
* @s: input parameter
*
* Return: int
*/

int _strlen(char *s)
{
int temp;
for (temp = 0; *s != '\0'; temp++)
++temp;
return (temp);
}
