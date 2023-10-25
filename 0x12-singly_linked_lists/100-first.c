#include "lists.h"

void leefirst(void)__attribute__ ((constructor));
/**
 * leefirst - runs before main function
 */

void leefirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
