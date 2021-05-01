#include "lists.h"
/**
 * free_dlistint - function that frees the linked lists
 * @head: pointer to the linked lists
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (!head)
		return;
	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
