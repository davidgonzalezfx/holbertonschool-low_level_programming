#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of list
 * @head: listint_t
 * @index: position to be removed
 * Return: 1 if success, -1 if error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *actual = *head;
	listint_t *nxt = *head;
	unsigned int cnt;

	if (index > 0)
	{
		for (cnt = 0, prev = *head; cnt < index - 1; cnt++)
			prev = prev->next;

		for (cnt = 0, actual = *head; cnt < index; cnt++)
			actual = actual->next;

		for (cnt = 0, nxt = *head; cnt < index + 1; cnt++)
			nxt = nxt->next;

		prev->next = nxt;
		free(actual);

		return (1);
	}
	else if (index == 0 && *head)
	{
		nxt = nxt->next;
		free(*head);
		*head = nxt;
		return (1);
	}
	return (-1);
}
