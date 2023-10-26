#include  "lists.h"

/**
 * pop_listint - deletes head node returns headnode data n
 * @head:head of node
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int a = 0;

	if (head != NULL && *head != NULL)
	{
		listint_t *temp = *head;

		temp->n = a;

		*head = (*head)->next;

		free(temp);
	}
	return (a);
}
