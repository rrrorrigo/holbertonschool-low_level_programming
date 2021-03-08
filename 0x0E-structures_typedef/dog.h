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
/**
 * init_dog - initalize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - print struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
