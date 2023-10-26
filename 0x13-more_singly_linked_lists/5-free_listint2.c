#include "lists.h"

/**
 * free_listint2 - frees list and sets head to NULL
 * @head: head of node
 * Return: null
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;

		*head = (*head)->next;

		free(temp);
	}

	*head = NULL;
	return;
}
