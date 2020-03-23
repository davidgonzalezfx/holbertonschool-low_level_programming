#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: listint_t
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	for (; h; h = h->next, cnt++)
	;

	return (cnt);
}
