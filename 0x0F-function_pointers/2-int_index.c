#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - that searches for an integer
* @array: input
* @size: input
* @cmp: is a pointer to the function to be used to compare values
* Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (cmp && array)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
