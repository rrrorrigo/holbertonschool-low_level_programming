#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - structure of dog information
 * @name: name of dog
 * @age: age of dof
 * @owner: name of the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
