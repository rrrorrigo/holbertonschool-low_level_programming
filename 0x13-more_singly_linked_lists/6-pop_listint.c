#include "lists.h"
/**
 * pop_listint - function that delete the head node
 * @head: pointer to the pointer to the linked list
 *
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *node;

	if (!*head)
		return (0);
	i = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);
	return (i);
}
