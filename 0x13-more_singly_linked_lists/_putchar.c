#include <stdio.h>
#include <unistd.h>
#include "lists.h"

/**
* _putchar -  writes the character c to stdout
* @ch : the character to print
* Return: (1) success
*         (-1) error
*/

int _putchar(char ch)
{
return (write(1, &ch, 1));
}
