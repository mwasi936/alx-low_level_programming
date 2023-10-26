#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: head of node
 * @n: parameter
 * Return: address of new node or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else if (*head != NULL)
	{
		current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = newnode;
	}
	return (newnode);
}
