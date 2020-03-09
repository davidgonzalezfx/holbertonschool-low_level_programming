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
	dog_t *newDog;
	char *cpname = NULL, *cpowner = NULL;
	int i = 0, j = 0;

	for (; *(name + i) != '\0'; i++)
	{};
	for (; *(owner + j) != '\0'; j++)
	{};

	cpname = malloc(sizeof(char) * (i + 1));
	if (!cpname)
	{
		free(cpname);
		return (NULL);
	}
	for (i = 0; *(name + i) != '\0'; i++)
		*(cpname + i) = *(name + i);
	*(cpname + i) = '\0';
	cpowner = malloc(sizeof(char) * (j + 1));
	if (!cpowner)
	{
		free(cpname);
		free(cpowner);
		return (NULL);
	}
	for (j = 0; *(owner + j) != '\0'; j++)
		*(cpowner + j) = *(owner + j);
	*(cpowner + j) = '\0';
	newDog = malloc(sizeof(struct dog));
	if (!newDog)
	{
		free(cpname);
		free(cpowner);
		free(newDog);
		return (NULL);
	}
	newDog->name = cpname;
	newDog->age = age;
	newDog->owner = cpowner;
	return (newDog);
}
