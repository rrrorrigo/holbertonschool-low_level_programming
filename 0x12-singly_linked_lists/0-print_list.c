#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to it struct
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodo = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		nodo++;
		h = h->next;
	}
	return (nodo);
}
