#include "lists.h"
/**
 * add_nodeint_end - function that add a new node at the end
 * @head: structure with the linked list
 * @n: int to copy on the new node
 * Return: address of the new element, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		newNode->n = n;
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
	free(newNode);
	return (NULL);
}
