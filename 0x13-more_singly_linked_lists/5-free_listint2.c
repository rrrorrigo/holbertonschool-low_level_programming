#include "lists.h"
/**
 * free_listint2 - function that frees the list and set the head to null
 * @head: linked list to free.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if(!*head)
		return;
	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	*head = NULL;
}
