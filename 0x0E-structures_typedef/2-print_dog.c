#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog.
 * @d: name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(*d).name)
			(*d).name = "(nil)";
		printf("Name: %s\n", (*d).name);
		if (!(*d).age)
			(*d).age = 0;
		printf("Age: %f\n", (*d).age);
		if (!(*d).owner)
			(*d).owner = "(nil)";
		printf("Owner: %s\n", (*d).owner);
	}
}
