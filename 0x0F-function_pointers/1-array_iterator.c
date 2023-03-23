#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an integer array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @action: pointer to the function to be executed on each element of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
