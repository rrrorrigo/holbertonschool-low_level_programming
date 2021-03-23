#include "lists.h"
/**
 * listint_len - function that return the number of elements
 * @h: pointer to it struct
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodo = 0;

	while (h)
	{
		nodo++;
		h = h->next;
	}
	return (nodo);
}
