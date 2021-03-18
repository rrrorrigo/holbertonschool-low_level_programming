#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that return the number of elements
 * @h: pointer to it struct
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodo = 0;

	while (h)
	{
		nodo++;
		h = h->next;
	}
	return (nodo);
}
