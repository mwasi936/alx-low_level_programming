#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in list
 * @head: head of node
 * Return: sum of all datam or zero if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;

	}
	return (sum);
}
