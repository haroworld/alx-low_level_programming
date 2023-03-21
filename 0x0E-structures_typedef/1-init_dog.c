#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog struct
 * @d: A dog structure
 * @name: The name of dog
 * @age: The age
 * @owner: The owner
 *
 * Return: 0
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
