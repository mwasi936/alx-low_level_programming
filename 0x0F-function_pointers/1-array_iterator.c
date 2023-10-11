#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function
 * @array: array
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)

		action(array[i]);
}
