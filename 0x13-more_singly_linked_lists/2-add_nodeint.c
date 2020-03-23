#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Init of list
 * @n: num to be added
 * Return: List
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newInt = malloc(sizeof(listint_t));

	if (!newInt)
		return (NULL);

	newInt->n = n;
	newInt->next = *head;

	*head = newInt;
	return (*head);
}
