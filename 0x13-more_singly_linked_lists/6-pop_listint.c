#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: pointer to the pointer to the head node
 *
 * Return: the head node's data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	temp = NULL;
	return (n);
}
