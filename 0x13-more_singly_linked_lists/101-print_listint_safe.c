#include "lists.h"

/**
 * print_listint_safe - detects infinite loop
 * @head: linked list
 * Return: length of list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *forward, *back;
	unsigned int cnt = 0;

	forward = head;
	if (forward == NULL)
		return (0);

	while (forward != NULL)
	{
		back = forward;
		forward = forward->next;

		printf("[%p] %i\n", (void *)back, back->n);
		cnt++;
		if (forward >= back)
		{
			printf("-> [%p] %i\n", (void *)forward, forward->n);
			break;
		}
	}

	return (cnt);
}
