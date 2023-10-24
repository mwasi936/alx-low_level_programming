#include "lists.h"
/**
 * list_len - pirnts number of nodes
 * @h: pointer to struct
 * Return: nodes
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
