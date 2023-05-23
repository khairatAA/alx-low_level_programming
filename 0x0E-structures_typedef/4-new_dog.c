#include "dog.h"
#include <stdlib.h>

/**
 * str_len - finds length of a string
 * @str: string given
 * Return: the length
 */
unsigned int str_len(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies src to dest
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *destPtr = dest;
	char *srcPtr = src;

	while (*srcPtr != '\0')
	{
		*destPtr = *srcPtr;
		destPtr++;
		srcPtr++;
	}
	*destPtr = '\0';

	return (dest);
}

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

	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = (dog_t *)malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = (char *)malloc(str_len(name) + 1);
	newDog->owner = (char *)malloc(str_len(owner) + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);

		return (NULL);
	}
	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
