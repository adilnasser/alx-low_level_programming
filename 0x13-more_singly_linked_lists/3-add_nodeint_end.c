#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a listint_t list..
 * @head: pointer to the head of the list.
 * @n: integer
 * Return: pointer to the new node, or NULL on failure.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node = *head;

	if (n == 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}
