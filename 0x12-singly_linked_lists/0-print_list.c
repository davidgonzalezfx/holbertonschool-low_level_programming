#include "lists.h"

/**
 * print_list - count node of linked list
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int el = 0;

	for (; h; el++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (el);
}
