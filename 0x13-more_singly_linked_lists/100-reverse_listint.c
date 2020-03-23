#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: list
 * Return: list reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *actual = NULL, *nxt;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = actual;
		actual = *head;
		*head = nxt;
	}
	*head = actual;
	return (*head);
}
