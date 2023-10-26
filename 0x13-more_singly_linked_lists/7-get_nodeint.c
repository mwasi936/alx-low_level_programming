#include "lists.h"

/**
 * get_nodeint_at_index - returns a particular node of a list
 * @head: head of node
 * @index: index of node
 * Return: NULL if node not existing
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
