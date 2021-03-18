#include "lists.h"
/**
 * free_list - free the memory spaces of head list
 * @head: liked list
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
