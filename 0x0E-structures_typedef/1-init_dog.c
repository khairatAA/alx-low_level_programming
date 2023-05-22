#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the structure
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
