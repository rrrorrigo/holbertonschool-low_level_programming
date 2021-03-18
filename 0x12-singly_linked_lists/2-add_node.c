#include "lists.h"
/**
 * add_node - function that add a new node at the beginning
 * @head: pointer to the struct
 * @str: element to add on this new node
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
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
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
	return (NULL);
}
