#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integer
 * @size: size of array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: return index where match is found or -1 if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}
