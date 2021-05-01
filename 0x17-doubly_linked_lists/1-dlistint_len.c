#include "lists.h"
/**
 * dlistint_len - function that count the content on the linked list
 * @h: pointer to the linked list
 * Return: the number of values counted
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t con = 0;

	while (h)
	{
		h = h->next;
		con++;
	}
	return (con);
}
