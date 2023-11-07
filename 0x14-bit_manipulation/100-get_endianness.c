#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: o if bid endian , 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	unsigned char *ptr = (unsigned char *)&x;

	if (*ptr == 1)
		return (1);

	else
		return (0);
}
