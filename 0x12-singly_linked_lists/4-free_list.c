#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of node
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *newnode;

	if (head == NULL)
		return ;

	while (head->next != NULL)
	{
		newnode = head->next;
		free(head->str);
		free(head);
		head = newnode;
	}
	free(head->str);
	free(head);
}
