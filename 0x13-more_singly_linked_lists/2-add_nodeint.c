#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head: head of node
 *
 * @n: parameter
 * Return: address of new element or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
