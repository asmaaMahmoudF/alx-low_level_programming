#include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously
* created by your alloc_grid function.
* @grid : int
* @height : int
* Return: void
*/

void free_grid(int **grid, int height)
{
int i = 0, size = 0;
char *p;
if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
p = malloc(size *sizeof(*str) + 1);
if (p == 0)
return (NULL);
else
{
while (i < size)
{
p[i] = str[i];
i++;
}
}
return (p);
}
