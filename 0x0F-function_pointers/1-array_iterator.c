#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a new line
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function to print in regular or hexadecimal format
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

