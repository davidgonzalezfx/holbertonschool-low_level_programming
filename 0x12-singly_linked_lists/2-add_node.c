#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at the begining
 * @head: start point of linked list
 * @str: string to be added
 * Return: linked list + new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int length = 0;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	for (; *(str + length); length++)
	{};
	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
