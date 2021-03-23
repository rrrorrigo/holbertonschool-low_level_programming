#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: linked list
 * @idx: index position
 * @n: new node to insert
 * Return: adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *auxNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode)
	{
		newNode->n = n;

		if (idx == 0)
		{
			newNode->next = *head;
			*head = newNode;
			return (newNode);
		}

		auxNode = *head;
		while (auxNode != NULL && i < idx - 1)
		{
			i++;
			auxNode = auxNode->next;
		}
		if (i == idx - 1 && auxNode != NULL)
		{
			newNode->next = auxNode->next;
			auxNode->next = newNode;
			return (newNode);
		}
	}
	free(newNode);
	return (NULL);
}
