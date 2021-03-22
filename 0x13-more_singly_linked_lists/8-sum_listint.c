#include "lists.h"
/**
 * sum_listint - function that sum all the data of the linked list
 * @head: pointer to the struct
 * Return: the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
