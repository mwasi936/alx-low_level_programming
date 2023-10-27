#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
	 * head: head of node
	 * @index: index of node to be deleted
	 * Return: 1 if success , -1 if fail
	 */

	int delete_nodeint_at_index(listint_t **head, unsigned int index)
	{
		listint_t *newnode, *temp;

		unsigned int i;

		if (*head == NULL)
			return (-1);

		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (-1);

		newnode = *head;

		if (index == 0)
		{
			*head = newnode->next;

			free(newnode);

			return (-1);
		}

		for (i = 0; i < index - 1; i++)
		{
			if (newnode == NULL)
				return (-1);
			newnode = newnode->next;
		}

		if (newnode == NULL || newnode->next == NULL)
			return (-1);

		temp = newnode->next;
	free(newnode->next);
		newnode->next = temp;
		free(temp);

	return (1);
}
