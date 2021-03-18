#include "lists.h"
/**
 * add_node - function that add a new node at the beginning
 * @head: pointer to the struct
 * @str: element to add on this new node
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode || !str)
		return (NULL);
	else
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = strlen(str);
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
}
