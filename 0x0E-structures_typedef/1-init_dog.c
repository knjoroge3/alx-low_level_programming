#include "dog.h"


/**
 * init_dog - variable
 *
 * @d: pointer to the variable
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: long defination
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
