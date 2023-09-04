#include "main.h"
/**
* create_array - creates an array of chars,
*  and initializes it with a specific char.
* @c : the character
* @size : size of malloc
* Return: pointer to the array intialized or null
*/

char *create_array(unsigned int size, char c)
{
char *p = malloc(size);
if (size == 0 || p == 0)
return (0);
while (size--)
p[size] = c;
return (p);
}
