#include "function_pointers.h"
/**
* print_name - that prints a name.
* @name: input
* @f: the printing function pointer
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && (*f))
	(*f)(name);
}
