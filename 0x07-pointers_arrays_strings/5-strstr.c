#include "holberton.h"
#define NULL ((void *)0)
/**
 * _strstr - function that copies memory area
 * @haystack: destiny string
 * @needle: source string
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while ((needle[i] != '\0') && (haystack[j] != '\0'))
	{
		if (needle[i] != haystack[j])
		{
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}
	if (*(needle + i) == '\0')
	{
		return (needle);
	}
	else
	{
		return NULL;
	}
}
