#ifndef DOG_H
#define DOG_H

/** 
 * struct dog - dog
 * @name: char*
 * @age: int
 * @owner: char*
 *
 * Description: define dog datatype
 */
typedef struct dog {
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
