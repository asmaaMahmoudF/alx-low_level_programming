#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width : int
* @height : int
* Return: pointer to pointer of 2d array
*/

int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **tab;
tab = malloc(sizeof(*tab) * height);
if (width <= 0 || height <= 0 || tab == 0)
return (NULL);
else
{
while (i < height)
{
tab[i] = malloc(sizeof(**tab) * width);
if (tab[i] == 0)
{
while (i--)
free(tab[i]);
free(tab);
return (NULL);
}
for (j = 0; j < width; j++)
tab[i][j] = 0;
}
}
return (tab);
}
