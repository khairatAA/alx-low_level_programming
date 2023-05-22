#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains details of a dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
