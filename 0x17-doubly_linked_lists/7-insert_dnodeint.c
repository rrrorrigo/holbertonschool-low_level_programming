#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert a new node at the given position
 * @h: double pointer to the linked list
 * @idx: index to the position to insert the new node
 * @n: the value to insert into a variable of the new node
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *aux;

	if (idx == 0)
		return (add_dnodeint(h, n));
	aux = *h;
	while (idx > 1)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
		idx--;
	}
	if (!aux->next)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = aux;
	new->next = aux->next;
	aux->next->prev = new;
	aux->next = new;
	return (new);
}
