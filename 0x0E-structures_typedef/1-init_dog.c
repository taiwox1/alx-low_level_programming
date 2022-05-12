#include "dog.h"
#include <stdlib.h>

/**
 * int_dog - initialize a variable of type struct dog
 * @d: struct dog age
 * @name: name
 * @age: integer
 * @owner: character string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
