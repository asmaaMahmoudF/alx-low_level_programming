#include "dog.h"
/**
* init_dog - initialize a variable of type struct dog
* @name: input
* @age: input
* @owner: input
* @d : input
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
