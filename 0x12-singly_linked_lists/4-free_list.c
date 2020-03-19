#include "lists.h"

/**
 * free_list - free memory allocated for list
 * @head: start of the list;
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *actual;

	for (actual = head; actual; actual = head)
	{
		head = head->next;
		free(actual->str);
		free(actual);
	}
}
