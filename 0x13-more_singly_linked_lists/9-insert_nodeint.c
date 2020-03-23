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
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *actual = *head;
	unsigned int pos = 0;

	newNode->n = n;

	for (; pos < idx; pos++, actual = actual->next)
	;
	newNode->next = actual;

	actual = *head;
	for (pos = 0; pos < idx - 1; pos++, actual = actual->next)
	;
	actual->next = newNode;

	return (*head);
}
