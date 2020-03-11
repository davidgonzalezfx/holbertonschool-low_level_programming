#include "function_pointers.h"

/**
 * array_iterator - execute param function
 * @array: int *
 * @size: size of functions array
 * @action: pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
