#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free dogs.
 * @d: structure to free.
 */
void free_dog(dog_t *d)
{
	free(d);
}
