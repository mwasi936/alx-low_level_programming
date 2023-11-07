#include "main.h"
/**
 * get_bit  - returns value of a bit ata a given position
 * @n: parameter 1
 * @index: parameter 2
 * Return: value of bit at index, -1 if error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int copy = 1UL << index;

	if (index >= sizeof(unsigned long int) *8)
	{
		return (-1);
	}

	if ((n & copy) != 0)
	{
		return (1);
	}

	else
		return (0);
}
