#include "lists.h"
/**
 * add_node_end - function that add a new node at the end
 * @head: structure with the linked list
 * @str: string to copy on the new node
 * Return: address of the new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode;
	int i = 0;

	if (!str)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		while (newNode->str[i])
			i++;
		newNode->len = i;
		newNode->next = NULL;
		if (*head == NULL)
		{
			*head = newNode;
			return (newNode);
		}
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
		return (newNode);
	}
	return (NULL);
}
