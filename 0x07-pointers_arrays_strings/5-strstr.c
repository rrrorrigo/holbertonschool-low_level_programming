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

	while (*(haystack + j) != '\0')
	{
	        while (*(needle + i) != '\0' && *(haystack + j) == needle[0])
			if (*(haystack + i + j) == *(needle + i))
				i++;
			else
				break;
		if (*(needle + i))
		{
			j++;
			i = 0;
		}
		else
			return (haystack + j);
	}
		return (NULL);
}
