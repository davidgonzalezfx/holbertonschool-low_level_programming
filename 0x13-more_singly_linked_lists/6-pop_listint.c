#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: listint_t list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *actual = *head;
	int num = actual->n;

	*head = actual->next;
	free(actual);

	return (num);
}
