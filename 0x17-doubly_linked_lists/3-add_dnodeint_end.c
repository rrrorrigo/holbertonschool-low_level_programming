#include "lists.h"
/**
 * add_dnodeint_end - function that adds a node at the end
 * @head: double pointer to the linked list
 * @n: value to add into the variable of the linked list
 * Return: the address of the new linekd list or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	new->prev = aux;
	return (new);
}
