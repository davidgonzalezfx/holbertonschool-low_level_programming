#include "lists.h"

/**
 * free_listint_safe - free memory (save mode)
 *	@h: list
 * Return: length of list h
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *forward, *back;
	unsigned int cnt = 0;

	forward = *h;
	if (forward == NULL || h == NULL)
		return (0);

	while (forward != NULL)
	{
		back = forward;
		forward = forward->next;

		free(back);
		cnt++;
		if (forward >= back)
			break;
	}
	*h = 0;
	return (cnt);
}
