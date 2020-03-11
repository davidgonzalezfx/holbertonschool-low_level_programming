#include "function_pointers.h"

/**
 * int_index - check if true in cpm
 * @array: elements
 * @size: size of array
 * @cmp: pointer functions
 * Return: index of array | -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
		for (; index < size; index++)
			if ((*cmp)(array[index]) != 0)
				return (index);
	return (-1);

}
