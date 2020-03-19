#include "lists.h"

/**
 * list_len - return num of element
 * @h: linked list
 * Return: num of elemets
 */
size_t list_len(const list_t *h)
{
	int el = 0;

	for (; h; el++)
		h = h->next;

	return (el);
}
