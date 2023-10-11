#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @name: name to be printed
 * @f: pointr to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
