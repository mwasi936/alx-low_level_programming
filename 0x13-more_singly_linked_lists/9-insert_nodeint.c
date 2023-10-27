#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: head of node
 * @idx: index of list where node is added
 * @n: parameter
 * Return: newnode address or NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	temp = *head;
	while (temp != NULL && i < idx - 1)
	{
	temp = temp->next;
	i++;
	}

	if (temp == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
