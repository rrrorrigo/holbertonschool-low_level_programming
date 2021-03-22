#include "lists.h"
/**
 * free_listint - free the memory spaces of head list
 * @head: liked list
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
