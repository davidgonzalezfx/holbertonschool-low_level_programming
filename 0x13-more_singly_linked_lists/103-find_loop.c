#include "lists.h"

/**
 * find_listint_loop - detects infinite loop
 * @head: linked list *
 * Return: Addres where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *forwd = head, *back;

	if (forwd == NULL)
		return (0);

	if (forwd == forwd->next)
		return (forwd);

	for (; forwd != NULL; )
	{
		back = head;
		forwd = forwd->next;

		for (; back != forwd && forwd != NULL; back = back->next)
		{
			if (forwd->next == forwd)
				return (forwd);

			if (forwd->next == back)
				return (back);
		}
	}
	return (forwd);
}
