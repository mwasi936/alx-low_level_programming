#include "lists.h"

/**
 *print_listint - prints all elements of a list
 *@h: head of node
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
