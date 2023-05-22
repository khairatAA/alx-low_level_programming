#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (dog_t *new_dog == NULL)
		return (NULL);
	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	
