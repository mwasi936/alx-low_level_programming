#include "main.h"

/**
 * _strdup - returns a pointer to a new allo cated space
 * @str: string to copy to new memory
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int i;
	char *cpy;
	int count;

	if (str == 0)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	cpy = malloc(sizeof(char) * count + 1);

	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0';i++)
		cpy[i] = str[i];

	return (cpy);

}
