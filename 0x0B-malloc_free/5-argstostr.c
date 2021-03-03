#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argtostr - concatenate and print all the arguments
 * @ac: number of arguments
 * @av: bidimensional string of arguments
 *
 * Return: arguments followed by a new line.
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, largoArg, largoAv, altoAv;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (largoAv = 0; largoAv < ac; largoAv++)
	{
		for (altoAv = 0; av[largoAv][altoAv]; altoAv++)
			i++;
		i++;
	}
	i++;

	arg = malloc(sizeof(char) * i);
	if (arg == NULL)
		return (NULL);
	for (largoAv = 0; largoAv < ac; largoAv++, largoArg++)
	{
		for (altoAv = 0; av[largoAv][altoAv]; altoAv++, largoArg++)
			arg[largoArg] = av[largoAv][altoAv];
		arg[largoArg] = '\n';
	}
	arg[largoArg] = '\0';
	return (arg);
}
