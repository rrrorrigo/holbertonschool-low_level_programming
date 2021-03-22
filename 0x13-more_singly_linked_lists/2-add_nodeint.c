#include "lists.h"
/**
 * add_nodeint - function that add a new node at the beginning
 * @head: pointer to the struct
 * @n: element to add on this new node
 * Return: the number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
