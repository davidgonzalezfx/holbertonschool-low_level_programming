#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of list
 * @head: listint_t
 * @index: position to be removed
 * Return: 1 if success, -1 if error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt;
	listint_t *actual = *head, *idxNode;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	else
	{
		for (cnt = 0; actual != NULL; cnt++)
		{
			if (cnt == index - 1)
			{
				idxNode = actual->next;
				actual->next = idxNode->next;
				free(idxNode);
				return (1);
			}
			actual = actual->next;
		}
	}

	return (-1);
}
