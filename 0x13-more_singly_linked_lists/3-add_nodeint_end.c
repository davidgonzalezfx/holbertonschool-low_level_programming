#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 *@head: init of the list
 *@n: num to be added
 * Return: List with new element at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newInt = malloc(sizeof(listint_t));
	listint_t *prevNode = *head;

	if (!newInt)
		return (NULL);

	newInt->n = n;
	newInt->next = NULL;

	if (!prevNode)
		*head = newInt;
	else
	{
		while (prevNode->next)
			prevNode = prevNode->next;
		prevNode->next = newInt;
	}
	return (*head);
}
