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
int *end = &array + size - 1;
	if (array && size && action)
		while (array <= end)
			(*action)(*(array++));
}
