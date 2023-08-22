#include "main.h"

/**
* swap_int -Entry point
* Description: swap_int swaps the values of two integers
*
* @a: input parameter
* @b: input parameter
*
* Return: void
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
