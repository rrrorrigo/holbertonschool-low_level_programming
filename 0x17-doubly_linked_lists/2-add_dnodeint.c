#include "lists.h"
/**
 * add_dnodeint - function adds a node at the beginning
 * @head: double pointer to the linked list
 * @n: value to add into the variable of linked list
 * Return: the address of the new linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
