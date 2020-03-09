#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initializa dog struct
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: dog strct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;

	newDog = malloc(sizeof(struct dog));
	if (!newDog)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
