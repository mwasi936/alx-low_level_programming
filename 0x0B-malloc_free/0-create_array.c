#include "main.h"
/**
 * create_array - creates an array of strings and initializes with char
 * @size: creates array
 * @c: character to store array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		t[i] = c;
	return (t);
}
