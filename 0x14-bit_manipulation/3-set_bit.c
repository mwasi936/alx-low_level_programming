#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter 1
 * @index: parameter 2
 * Return: 1 if worked, -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	*n = *n | copy;

	return (1);


}
