#include "lists.h"

/**
 * free_listint2 - frees a listint_t list ans set head to NULL
 * @head: listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *actual;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		actual = *head;
		*head = actual->next;
		free(actual);
	}

	*head = NULL;
}
