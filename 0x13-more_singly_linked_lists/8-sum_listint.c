#include "lists.h"

/**
 * sum_listint - Add all the data (n) of a listint_t linked list
 * @head: listint_t
 * Return: int sum of all nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *actual = head;
	int sum = 0;

	for (; actual; actual = actual->next)
		sum += actual->n;

	return (sum);
}
