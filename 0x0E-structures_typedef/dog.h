#ifndef DOG_H
#define DOG_H

/**
* struct dog -  writes the character c to stdout
* @name : dog's anme
* @age : dog's age
* @owner : omar's name
* Description : just a dog struct
*/


struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
