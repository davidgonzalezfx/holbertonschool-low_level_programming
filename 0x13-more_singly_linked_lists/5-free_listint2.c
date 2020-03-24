#include "lists.h"

/**
 * free_listint2 - frees a listint_t list ans set head to NULL
 * @head: listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *actual = *head;

	if (head == NULL)
		return;

	while ((actual = *head) != NULL)
	{
		*head = actual->next;
		free(actual);
	}

	*head = NULL;
}
