#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete a node at the given index
 * @head: double pointer to the head of the list
 * @index: the node that should be delete
 * Return: 1if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;

	if (!(*head))
		return (-1);
	while (index > 0)
	{
		if (!aux)
			return (-1);
		aux = aux->next;
		index--;
	}
	if (aux == *head)
	{
		*head = aux->next;
		(*head)->prev = NULL;
	}
	else
	{
		aux->prev->next = aux->next;
		if (aux->next)
			aux->next->prev = aux->prev;
	}
	free(aux);
	return (1);
}
