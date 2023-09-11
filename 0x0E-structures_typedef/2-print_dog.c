#include <stdio.h>
#include "dog.h"

/**
* print_dog -  function that prints a struct dog
* @d : dog to initiate
* Return: void
*/
void print_dog(struct dog *d)
{
if (d->name == 0 || d->age == 0 || d->owner == 0)
{
printf("nil");
}
printf("%s", d->name);
printf("%d", d->age);
printf("%s", d->owner);
}
