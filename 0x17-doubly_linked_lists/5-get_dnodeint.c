
#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node
 * @head: doubly linkedlist
 * @index: nth node to be access
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual = head;
	int nth = 0;

	if (!head)
		return (NULL);

	while (nth++ != (int)index)
		actual = actual->next;

	return (actual);
}
