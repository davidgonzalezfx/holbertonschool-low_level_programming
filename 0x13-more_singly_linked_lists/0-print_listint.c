#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: listint_t
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	for (; h; h = h->next, cnt++)
	{
		printf("%d\n", h->n);
	}

	return (cnt);
}
