#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to it struct
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodo = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodo++;
		h = h->next;
	}
	return (nodo);
}
