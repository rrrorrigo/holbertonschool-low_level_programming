#include "lists.h"
/**
 * sum_dlistint - function that return the sum of all the list data
 * @head: pointer to the linked list
 * Return: the sum of all list data
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
