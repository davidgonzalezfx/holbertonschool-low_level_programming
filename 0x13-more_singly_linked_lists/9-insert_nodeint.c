#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: listint_t
 * @idx: Index where add the new node
 * @n: data of new node
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *actual = *head;
	unsigned int pos = 0;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(newNode);
		return (NULL);
	}

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (; pos < idx - 1; pos++)
	{
		actual = actual->next;
		if (actual == NULL && idx - pos > 0)
		{
			free(newNode);
			return (NULL);
		}
	}

	newNode->next = actual->next;
	actual->next = newNode;

	return (newNode);
}
