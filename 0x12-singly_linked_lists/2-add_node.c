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

	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
