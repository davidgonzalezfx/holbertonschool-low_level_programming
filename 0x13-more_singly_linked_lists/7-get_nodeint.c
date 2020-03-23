#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: listint_t
 * @index: unsigned int
 * Return: adress of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *indexNode = head;
	unsigned int actualPos = 0;

	for (actualPos = 0; actualPos < index; actualPos++)
		indexNode = indexNode->next;

	return (indexNode);
}
