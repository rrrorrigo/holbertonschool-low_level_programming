#include "lists.h"
/**
 * delete_nodeint_at_index - delete a selected node
 * @head: linked list
 * @index: index position to delete
 * Return: 1 if success, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *auxNode;

	while (i < index)
	{
		head = &(*head)->next;
		if (!head)
			return (-1);
		i++;
	}
	if (*head && head)
	{
		auxNode = *head;
		*head = (*head)->next;
		free(auxNode);
		return (1);
	}
	return (-1);
}
