#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds new node at the end
 * @head: start point of linked list
 * @str: string to be added
 * Return: linked list + new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *prevNodes;
	unsigned int length = 0;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	for (; *(str + length); length++)
	{};
	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = NULL;

	prevNodes = *head;
	if (!prevNodes)
		*head = newNode;
	else
	{
		for (; prevNodes->next; prevNodes = prevNodes->next)
		{};
		prevNodes->next = newNode;
	}

	return (*head);
}
