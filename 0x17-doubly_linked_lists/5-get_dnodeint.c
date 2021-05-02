#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns node at the index
 * @head: pointer to the linked list
 * @index: index of the node to return, starting at 0
 * Return: node at the index given.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (i < index && head->next)
		{
			head = head->next;
			i++;
		}
		return (head);
	}
	return (NULL);
}
