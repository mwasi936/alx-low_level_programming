#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: head of node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
