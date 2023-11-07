#include "main.h"

/**
 * flip_bits - returns number of bits to flip from one number to another
 * @n: parameter 1
 * @m: parameter 2
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int cnt = 0;

	while (dif > 0)
	{
		cnt += dif & 1;
		dif >>= 1;
	}

	return cnt;
}
