#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strdup - duplicate a string
 * @str: string a copiar
 *
 * Return: pointer of the duplicated string.
 */
char *_strdup(char *str)
{
	char *strdup;
	int i, ii;

	if (str == NULL)
		return (NULL);
	for (ii = 0; str[ii] != '\0'; ii++)
	{
	}
	strdup = malloc(ii + 1);
	if (strdup == NULL)
		return (NULL);
	for (i = 0; i < ii; i++)
		strdup[i] = str[i];
	return (strdup);
}

/**
 *new_dog - create a new dog.
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: structure newDog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (!name || !owner)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);
	newDog->age = age;
	newDog->name = _strdup(name);
	newDog->owner = _strdup(owner);

	if (!newDog->name || !newDog->owner)
	{
		if (!newDog->name)
			free(newDog->owner);
		else
			free(newDog->name);
		free(newDog);
		return (NULL);
	}
	return (newDog);
}
