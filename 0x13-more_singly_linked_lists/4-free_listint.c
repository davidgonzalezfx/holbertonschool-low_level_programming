#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: list to be free
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *actual;

	for (actual = head; actual; actual = head)
	{
		head = head->next;
		free(actual);
	}
}
