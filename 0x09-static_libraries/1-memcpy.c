#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area to be copied to
 * @src: pointer to memory area to be copied from
 * @n: bytes
 * Return: to dest on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned  int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
