#include "lists.h"
/**
 * print_dlistint - function that print the content on the linked list
 * @h: pointer to the linked list
 * Return: the number of values printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t con = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		con++;
	}
	return (con);
}
