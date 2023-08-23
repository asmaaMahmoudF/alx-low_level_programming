#include "main.h"
/**
* swap_int -Entry point
* Description: swap_int takes a pointer to an int as parameter
* and updates the value it points to to 98
*
* @a: input
* @b: input
*
* Return: void
*/
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
