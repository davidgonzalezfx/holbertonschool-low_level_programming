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

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
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
