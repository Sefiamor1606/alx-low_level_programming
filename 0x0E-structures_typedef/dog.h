#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - variable of of type dog struct
 * @d: pointer
 * @name: name to initialise
 * @age: age to initialise
 * @owner: to be initialised
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d == NULL)
                d = malloc(sizeof(struct dog));
        d->name = name;
        d->age = age;
        d->owner = owner;
}
