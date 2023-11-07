#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: parameter 1
 * @index: parameter 2
 * Return: 1 if it worked, -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	*n = *n & copy;

	return (1);
}
