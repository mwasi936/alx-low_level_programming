#include"lists.h"

/**
 * free_listint - frees a list
 * @head: head of node
 * Return: null
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
