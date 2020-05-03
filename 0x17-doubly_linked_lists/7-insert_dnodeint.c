#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: doubly linkedlist
 * @idx: index to insert new_node
 * @n: value for new_node
 * Return: address of new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *actual = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int cnt;

	if (!h || !new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!(*h))
	{
		*h = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	for (cnt = 0; cnt != idx; cnt++)
		actual = actual->next;

	new_node->next = actual->next;
	new_node->prev = actual;
	actual->next = new_node;

	return (new_node);
}
