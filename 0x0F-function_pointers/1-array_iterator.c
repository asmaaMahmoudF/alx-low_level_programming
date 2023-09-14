#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - that prints a name.
* @array: input
* @size: input
* @action: that executes a function given
* as a parameter on each element of an array.
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
			action(*array++);
	}

}
